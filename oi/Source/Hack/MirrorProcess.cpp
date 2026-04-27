#include "MirrorProcess.h"
#include "FuckEnc.h"
#include "Utils/Utils.h"
#include <Hack/ENC/ENC.h>
#include <chrono>

// 静态成员初始化
PVOID MirrorProcess::VEHHandle = nullptr;
DWORD MirrorProcess::ModuleSize = 0;
bool MirrorProcess::IsVEHEnabled = false;
CRITICAL_SECTION MirrorProcess::DecryptLock;

void MirrorProcess::Reset()
{
    std::unique_lock<std::shared_mutex> Lock(GameData.MirrorProcess.Mutex);

    UninstallVEH();

    if (GameData.MirrorProcess.Memory)
    {
        DWORD Temp;
        VirtualProtect(GameData.MirrorProcess.Memory, ModuleSize, PAGE_READWRITE, &Temp);

        GameData.MirrorProcess.bVirtualProtect = false;

        delete[] GameData.MirrorProcess.Memory;
        GameData.MirrorProcess.Memory = nullptr;
    }
}

bool MirrorProcess::Init()
{
    std::unique_lock<std::shared_mutex> Lock(GameData.MirrorProcess.Mutex);

    if (GameData.MirrorProcess.bVirtualProtect)
    {
        return true;
    }

    if (GameData.Process.GameState == FGameState::Finding || !GameData.UPTRDecrypt.bVEH)
    {
        return false;
    }

    IMAGE_DOS_HEADER DosHeader = mem.Read<IMAGE_DOS_HEADER>(GameData.Process.Base);
    IMAGE_NT_HEADERS NtHeader = mem.Read<IMAGE_NT_HEADERS>(GameData.Process.Base + DosHeader.e_lfanew);
    ModuleSize = NtHeader.OptionalHeader.SizeOfImage;

    if (ModuleSize == 0)
    {
        return false;
    }

    Utils::Log(0, XorStr("Reading module memory (%.2fMB) ..."), ModuleSize / (1024.0 * 1024.0));

    GameData.MirrorProcess.Memory = new uint8_t[ModuleSize];
    GameData.MirrorProcess.MemorySize = ModuleSize;

    auto StartTime = std::chrono::high_resolution_clock::now();
    mem.Read(GameData.Process.Base, (void*)(GameData.MirrorProcess.Memory), ModuleSize);
    auto EndTime = std::chrono::high_resolution_clock::now();

    DWORD OldProtect;
    VirtualProtect(GameData.MirrorProcess.Memory, ModuleSize, PAGE_EXECUTE_READWRITE, &OldProtect);

    auto Duration = std::chrono::duration_cast<std::chrono::milliseconds>(EndTime - StartTime).count();
    double SizeMB = ModuleSize / (1024.0 * 1024.0);
    double Speed = (Duration > 0) ? (SizeMB / (Duration / 1000.0)) : 0.0;

    Utils::Log(1, XorStr("Reading of module memory has been completed (%.2fMB, %.2fs, %.2fMB/s)"), SizeMB, Duration / 1000.0, Speed);

    // 安装 VEH
    InstallVEH();

    // 验证 VEH 安装
    if (!VEHHandle)
    {
        Utils::Log(2, XorStr("Failed to install VEH handler!"));
        return false;
    }

    Sleep(100);

    GameData.MirrorProcess.bVirtualProtect = true;

    return true;
}

void MirrorProcess::InstallVEH()
{
    if (!VEHHandle)
    {
        InitializeCriticalSection(&DecryptLock);
        VEHHandle = AddVectoredExceptionHandler(1, VEHHandler);
        IsVEHEnabled = true;
        Utils::Log(1, XorStr("Mirror Process Handler Installed Success."));
    }
}

void MirrorProcess::UninstallVEH()
{
    if (VEHHandle)
    {
        RemoveVectoredExceptionHandler(VEHHandle);
        VEHHandle = nullptr;
        IsVEHEnabled = false;
        DeleteCriticalSection(&DecryptLock);
        Utils::Log(1, XorStr("Mirror Process Handler Uninstalled Success."));
    }
}

LONG WINAPI MirrorProcess::VEHHandler(EXCEPTION_POINTERS* ExceptionInfo)
{
    // 只处理访问违规异常
    if (ExceptionInfo->ExceptionRecord->ExceptionCode != EXCEPTION_ACCESS_VIOLATION)
    {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    if (!IsVEHEnabled)
    {
        return EXCEPTION_CONTINUE_SEARCH;
    }

    ULONG_PTR FaultAddress = ExceptionInfo->ExceptionRecord->ExceptionInformation[1];

    // Utils::Log(0, XorStr("!!! VEH: Access violation at 0x%llX, RIP=0x%llX, has_tag=%d"),
    //                FaultAddress,
    //                ExceptionInfo->ContextRecord->Rip,
    //                ((uint64_t)FaultAddress & MAGIC_MASK) == MAGIC_TAG);

    // 检查是否有 MAGIC 标记
    if (((uint64_t)FaultAddress & MAGIC_MASK) != MAGIC_TAG)
    {
        //// 没有tag，解码当前指令看看在干什么
        // ZydisDecoder decoder;
        // ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);
        //
        // ZydisDecodedInstruction instruction;
        // ZydisDecodedOperand operands[ZYDIS_MAX_OPERAND_COUNT];
        //
        // CONTEXT* ctx = ExceptionInfo->ContextRecord;
        //
        // if (ZYAN_SUCCESS(ZydisDecoderDecodeFull(&decoder, (void*)ctx->Rip, 15, &instruction, operands)))
        //{
        //     // 创建 formatter
        //     ZydisFormatter formatter;
        //     ZydisFormatterInit(&formatter, ZYDIS_FORMATTER_STYLE_INTEL);
        //
        //     char buffer[256];
        //     ZydisFormatterFormatInstruction(&formatter, &instruction, operands,
        //                                    instruction.operand_count_visible,
        //                                    buffer, sizeof(buffer), ctx->Rip, NULL);
        //
        //     Utils::Log(2, XorStr("CRASH: %s | Fault=0x%llX | RAX=0x%llX RBX=0x%llX RCX=0x%llX RDX=0x%llX"),
        //                buffer, FaultAddress, ctx->Rax, ctx->Rbx, ctx->Rcx, ctx->Rdx);
        // }
        // else
        //{
        //     Utils::Log(2, XorStr("CRASH: decode failed | Fault=0x%llX RIP=0x%llX"), FaultAddress, ctx->Rip);
        // }

        return EXCEPTION_CONTINUE_SEARCH;
    }

    try
    {
        if (HandleMemoryAccess(ExceptionInfo, FaultAddress))
        {
            return EXCEPTION_CONTINUE_EXECUTION;
        }
    }
    catch (...)
    {
        Utils::Log(2, XorStr("VEH: Exception in handler"));
    }

    return EXCEPTION_CONTINUE_SEARCH;
}

bool MirrorProcess::HandleMemoryAccess(EXCEPTION_POINTERS* ExceptionInfo, ULONG_PTR FaultAddress)
{
    CONTEXT* ctx = ExceptionInfo->ContextRecord;

    // 移除 MAGIC 标记，获取真实地址
    uint64_t RealAddress = (uint64_t)FaultAddress ^ MAGIC_TAG;

    // Utils::Log(0, XorStr(">>> VEH: Fault=0x%llX, Real=0x%llX, RIP=0x%llX"), FaultAddress, RealAddress, ctx->Rip);

    // 使用 Zydis 解码指令（先解码，再根据指令读取正确大小）
    ZydisDecoder decoder;
    ZydisDecoderInit(&decoder, ZYDIS_MACHINE_MODE_LONG_64, ZYDIS_STACK_WIDTH_64);

    ZydisDecodedInstruction instruction;
    ZydisDecodedOperand operands[ZYDIS_MAX_OPERAND_COUNT];

    if (!ZYAN_SUCCESS(ZydisDecoderDecodeFull(&decoder, (void*)ctx->Rip, 15, &instruction, operands)))
    {
        Utils::Log(4, "ZydisDecodedInstruction error");
        return false;
    }

    // 根据内存操作数的实际大小读取数据
    size_t ReadSize = 8; // 默认 8 字节
    for (int i = 0; i < instruction.operand_count_visible; i++)
    {
        if (operands[i].type == ZYDIS_OPERAND_TYPE_MEMORY)
        {
            ReadSize = operands[i].size / 8; // 将位转换为字节
            break;
        }
    }

    // 根据大小读取远程内存
    uint64_t RemoteValue = 0;
    switch (ReadSize)
    {
    case 1:
        RemoteValue = FuckEnc::CacheRead<uint8_t>(RealAddress);
        break;
    case 2:
        RemoteValue = FuckEnc::CacheRead<uint16_t>(RealAddress);
        break;
    case 4:
        RemoteValue = FuckEnc::CacheRead<uint32_t>(RealAddress);
        break;
    case 8:
        RemoteValue = FuckEnc::CacheRead<uint64_t>(RealAddress);
        break;
    default:
        RemoteValue = FuckEnc::CacheRead<uint64_t>(RealAddress);
        break;
    }

    // Utils::Log(1, XorStr("Addr=0x%llX -> Value=0x%llX (Size=%d), Instr=%s"), RealAddress, RemoteValue, ReadSize, ZydisMnemonicGetString(instruction.mnemonic));

    // 处理 MOV 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_MOV && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t value = RemoteValue;

        // 如果目标是 64 位寄存器，考虑添加 MAGIC 标记以支持多级指针
        if (operands[0].size == 64)
        {
            //// 检查读取的值是否是无效指针（类似 CALL 指令的处理）
            // uint64_t CheckValue = value & 0xFFFFFFFFF;
            //// if (Utils::ValidPtr2(CheckValue) || !IsPointerInRemoteModule(CheckValue + GameData.Process.Base))
            // if (Utils::ValidPtr2(CheckValue))
            //{
            //     // 无效指针，清除缓存
            //     {
            //         std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
            //         GameData.FuckEnc.Cache.clear();
            //     }
            //     Utils::Log(3, XorStr("Invalid MOV pointer value: Addr=0x%llx -> Value=0x%llX"), RealAddress, value);

            //    // 关键：写入一个"安全"的假地址（远程模块基址），并加上 MAGIC_TAG
            //    // 这样后续访问时会再次进入 VEH，从远程读取数据而不会崩溃
            //    uint64_t SafeAddress = GameData.Process.Base;
            //    value = SafeAddress | MAGIC_TAG;

            //    SetRegisterValue(ctx, destReg, value);
            //    ctx->Rip += instruction.length;
            //    return true;
            //}

            value |= MAGIC_TAG;
            // Utils::Log(1, XorStr("VEH MOV: Addr=0x%llX -> Value=0x%llX (tagged=0x%llX)"), RealAddress, RemoteValue, value);
        }

        SetRegisterValue(ctx, destReg, value);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 MOVZX 指令（零扩展）
    if (instruction.mnemonic == ZYDIS_MNEMONIC_MOVZX && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t value = RemoteValue;

        // 根据源操作数大小进行零扩展
        switch (operands[1].size)
        {
        case 8:
            value &= 0xFF;
            break; // BYTE
        case 16:
            value &= 0xFFFF;
            break; // WORD
        case 32:
            value &= 0xFFFFFFFF;
            break; // DWORD
        }

        // Utils::Log(4, "MOVZX %p %p", destReg, value);

        SetRegisterValue(ctx, destReg, value);

        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 XOR 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_XOR && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t currentValue = GetRegisterValue(ctx, destReg);
        uint64_t newValue = currentValue ^ RemoteValue;

        SetRegisterValue(ctx, destReg, newValue);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 ADD 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_ADD && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t currentValue = GetRegisterValue(ctx, destReg);
        uint64_t newValue = currentValue + RemoteValue;

        SetRegisterValue(ctx, destReg, newValue);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 SUB 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_SUB && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t currentValue = GetRegisterValue(ctx, destReg);
        uint64_t newValue = currentValue - RemoteValue;

        SetRegisterValue(ctx, destReg, newValue);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 AND 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_AND && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t currentValue = GetRegisterValue(ctx, destReg);
        uint64_t newValue = currentValue & RemoteValue;

        SetRegisterValue(ctx, destReg, newValue);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 OR 指令
    if (instruction.mnemonic == ZYDIS_MNEMONIC_OR && instruction.operand_count_visible >= 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER)
    {
        ZydisRegister destReg = operands[0].reg.value;
        uint64_t currentValue = GetRegisterValue(ctx, destReg);
        uint64_t newValue = currentValue | RemoteValue;

        SetRegisterValue(ctx, destReg, newValue);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 IMUL 指令（三操作数）
    if (instruction.mnemonic == ZYDIS_MNEMONIC_IMUL && instruction.operand_count_visible == 3 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER && operands[1].type == ZYDIS_OPERAND_TYPE_MEMORY && operands[2].type == ZYDIS_OPERAND_TYPE_IMMEDIATE)
    {
        ZydisRegister destReg = operands[0].reg.value;
        int64_t immediate = operands[2].imm.value.s;
        int64_t result = (int64_t)RemoteValue * immediate;

        SetRegisterValue(ctx, destReg, (uint64_t)result);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 IMUL 指令（两操作数）
    if (instruction.mnemonic == ZYDIS_MNEMONIC_IMUL && instruction.operand_count_visible == 2 && operands[0].type == ZYDIS_OPERAND_TYPE_REGISTER && operands[1].type == ZYDIS_OPERAND_TYPE_MEMORY)
    {
        ZydisRegister destReg = operands[0].reg.value;
        int64_t currentValue = (int64_t)GetRegisterValue(ctx, destReg);
        int64_t result = currentValue * (int64_t)RemoteValue;

        SetRegisterValue(ctx, destReg, (uint64_t)result);
        ctx->Rip += instruction.length;
        return true;
    }

    // 处理 CALL 指令（间接调用）
    if (instruction.mnemonic == ZYDIS_MNEMONIC_CALL && instruction.operand_count_visible == 1 && operands[0].type == ZYDIS_OPERAND_TYPE_MEMORY)
    {
        // 从内存中读取的是函数指针（远程地址）
        uint64_t RemoteFunctionPtr = RemoteValue;
        RemoteFunctionPtr = RemoteFunctionPtr & 0xFFFFFFFFF;
        // Utils::Log(4, "RemoteFunctionPtr: %p", RemoteFunctionPtr);
        if (RemoteFunctionPtr == 0 || !IsPointerInRemoteModule(RemoteFunctionPtr))
        {
            // // 使用 std::format 格式化消息
            // std::string message = std::format("Unknown Enc Call Pointer:\n"
            //                                   "Address: 0x{:X}\n"
            //                                   "RIP: 0x{:X}\n"
            //                                   "This may cause undefined behavior.",
            //                                   RemoteFunctionPtr,
            //                                   ctx->Rip
            // );

            // MessageBoxA(NULL, message.c_str(), "VEH Error", MB_OK | MB_ICONERROR);
            //{
            //    std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
            //    GameData.FuckEnc.Cache.clear();
            //}
            Utils::Log(3, XorStr("Unknown Enc Call Pointer: 0x%llx -> 0x%llX"), RealAddress, RemoteFunctionPtr);
            ctx->Rip += instruction.length;
            return true;
            // RemoteFunctionPtr = 0x1427DB400;
        }

        // 检查是否在目标进程的模块范围内
        uint64_t ModuleBase = GameData.Process.Base;
        uint64_t MirrorFunctionPtr = RemoteFunctionPtr;

        if (RemoteFunctionPtr >= ModuleBase && RemoteFunctionPtr < ModuleBase + ModuleSize)
        {
            // 转换为镜像地址
            uint64_t Offset = RemoteFunctionPtr - ModuleBase;
            MirrorFunctionPtr = (uint64_t)GameData.MirrorProcess.Memory + Offset;

            // Utils::Log(1, XorStr("VEH CALL: Remote=0x%llX -> Mirror=0x%llX (Offset=0x%llX)"), RemoteFunctionPtr, MirrorFunctionPtr, Offset);
        }
        else
        {
            Utils::Log(3, XorStr("Unknown Enc Call Pointer In External Module: 0x%llx -> 0x%llX"), RealAddress, RemoteFunctionPtr);
            ctx->Rip += instruction.length;
            return true;
            // MirrorFunctionPtr = (uint64_t)GameData.MirrorProcess.Memory + 0x27DB400;
            // Utils::Log(2, XorStr("VEH CALL: External=0x%llX (not in module)"), RemoteFunctionPtr);
        }

        // 获取返回地址（下一条指令）
        uint64_t returnAddress = ctx->Rip + instruction.length;

        // 将返回地址压入栈中
        ctx->Rsp -= 8;
        *(uint64_t*)ctx->Rsp = returnAddress;

        // 设置指令指针为镜像函数地址
        ctx->Rip = MirrorFunctionPtr;

        return true;
    }

    Utils::Log(3, XorStr("Unsupported commands: %s"), ZydisMnemonicGetString(instruction.mnemonic));

    return false;
}

uint64_t MirrorProcess::ReadMemoryValue(ULONG_PTR Address, size_t Size)
{
    uint64_t Value = 0;

    // 直接从远程进程读取
    switch (Size)
    {
    case 1:
        Value = mem.Read<uint8_t>(Address);
        break;
    case 2:
        Value = mem.Read<uint16_t>(Address);
        break;
    case 4:
        Value = mem.Read<uint32_t>(Address);
        break;
    case 8:
        Value = mem.Read<uint64_t>(Address);
        break;
    default:
        break;
    }

    return Value;
}

void MirrorProcess::SetRegisterValue(CONTEXT* ctx, ZydisRegister Reg, uint64_t Value)
{
    switch (Reg)
    {
    // 64位寄存器
    case ZYDIS_REGISTER_RAX:
        ctx->Rax = Value;
        break;
    case ZYDIS_REGISTER_RBX:
        ctx->Rbx = Value;
        break;
    case ZYDIS_REGISTER_RCX:
        ctx->Rcx = Value;
        break;
    case ZYDIS_REGISTER_RDX:
        ctx->Rdx = Value;
        break;
    case ZYDIS_REGISTER_RSI:
        ctx->Rsi = Value;
        break;
    case ZYDIS_REGISTER_RDI:
        ctx->Rdi = Value;
        break;
    case ZYDIS_REGISTER_RBP:
        ctx->Rbp = Value;
        break;
    case ZYDIS_REGISTER_RSP:
        ctx->Rsp = Value;
        break;
    case ZYDIS_REGISTER_R8:
        ctx->R8 = Value;
        break;
    case ZYDIS_REGISTER_R9:
        ctx->R9 = Value;
        break;
    case ZYDIS_REGISTER_R10:
        ctx->R10 = Value;
        break;
    case ZYDIS_REGISTER_R11:
        ctx->R11 = Value;
        break;
    case ZYDIS_REGISTER_R12:
        ctx->R12 = Value;
        break;
    case ZYDIS_REGISTER_R13:
        ctx->R13 = Value;
        break;
    case ZYDIS_REGISTER_R14:
        ctx->R14 = Value;
        break;
    case ZYDIS_REGISTER_R15:
        ctx->R15 = Value;
        break;

    // 32位寄存器（x64规则：写入32位寄存器自动清零高32位）
    case ZYDIS_REGISTER_EAX:
        ctx->Rax = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_EBX:
        ctx->Rbx = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_ECX:
        ctx->Rcx = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_EDX:
        ctx->Rdx = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_ESI:
        ctx->Rsi = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_EDI:
        ctx->Rdi = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_EBP:
        ctx->Rbp = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_ESP:
        ctx->Rsp = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R8D:
        ctx->R8 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R9D:
        ctx->R9 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R10D:
        ctx->R10 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R11D:
        ctx->R11 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R12D:
        ctx->R12 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R13D:
        ctx->R13 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R14D:
        ctx->R14 = Value & 0xFFFFFFFF;
        break;
    case ZYDIS_REGISTER_R15D:
        ctx->R15 = Value & 0xFFFFFFFF;
        break;

    default:
        break;
    }
}

uint64_t MirrorProcess::GetRegisterValue(CONTEXT* ctx, ZydisRegister Reg)
{
    switch (Reg)
    {
    // 64位寄存器
    case ZYDIS_REGISTER_RAX:
        return ctx->Rax;
    case ZYDIS_REGISTER_RBX:
        return ctx->Rbx;
    case ZYDIS_REGISTER_RCX:
        return ctx->Rcx;
    case ZYDIS_REGISTER_RDX:
        return ctx->Rdx;
    case ZYDIS_REGISTER_RSI:
        return ctx->Rsi;
    case ZYDIS_REGISTER_RDI:
        return ctx->Rdi;
    case ZYDIS_REGISTER_RBP:
        return ctx->Rbp;
    case ZYDIS_REGISTER_RSP:
        return ctx->Rsp;
    case ZYDIS_REGISTER_R8:
        return ctx->R8;
    case ZYDIS_REGISTER_R9:
        return ctx->R9;
    case ZYDIS_REGISTER_R10:
        return ctx->R10;
    case ZYDIS_REGISTER_R11:
        return ctx->R11;
    case ZYDIS_REGISTER_R12:
        return ctx->R12;
    case ZYDIS_REGISTER_R13:
        return ctx->R13;
    case ZYDIS_REGISTER_R14:
        return ctx->R14;
    case ZYDIS_REGISTER_R15:
        return ctx->R15;

    // 32位寄存器
    case ZYDIS_REGISTER_EAX:
        return ctx->Rax & 0xFFFFFFFF;
    case ZYDIS_REGISTER_EBX:
        return ctx->Rbx & 0xFFFFFFFF;
    case ZYDIS_REGISTER_ECX:
        return ctx->Rcx & 0xFFFFFFFF;
    case ZYDIS_REGISTER_EDX:
        return ctx->Rdx & 0xFFFFFFFF;
    case ZYDIS_REGISTER_ESI:
        return ctx->Rsi & 0xFFFFFFFF;
    case ZYDIS_REGISTER_EDI:
        return ctx->Rdi & 0xFFFFFFFF;
    case ZYDIS_REGISTER_EBP:
        return ctx->Rbp & 0xFFFFFFFF;
    case ZYDIS_REGISTER_ESP:
        return ctx->Rsp & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R8D:
        return ctx->R8 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R9D:
        return ctx->R9 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R10D:
        return ctx->R10 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R11D:
        return ctx->R11 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R12D:
        return ctx->R12 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R13D:
        return ctx->R13 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R14D:
        return ctx->R14 & 0xFFFFFFFF;
    case ZYDIS_REGISTER_R15D:
        return ctx->R15 & 0xFFFFFFFF;

    default:
        return 0;
    }
}

void MirrorProcess::VEHDecrypt(uint64_t EncBase, void* Data, unsigned int Size, int16_t Handle)
{
    if (!Init())
    {
        return;
    }

    uint64_t FuncOffset = 0x0;
    uint64_t BaseOffset = 0x0;

    if (GameData.UPTRDecrypt.SwitchEncryptor > 4 || GameData.UPTRDecrypt.SwitchEncryptor == 0 || EncBase == 1)
    {
        bool UnkFunc = false;
        static uint64_t LastDoubleFuncOffset = 0;
        uint64_t DoubleFuncOffset = FuckEnc::CacheRead<uint64_t>(GameData.Process.Base + 0x1432F5A8);

        // uint64_t Func = FuckEnc::CacheRead<int>(DoubleFuncOffset + 13) + (DoubleFuncOffset + 17);
        // uint64_t Base = FuckEnc::CacheRead<int>(DoubleFuncOffset + 18) + (DoubleFuncOffset + 22);
        // Utils::Log(4, "%p %p", Func - GameData.Process.Base, Base - GameData.Process.Base);

        if (DoubleFuncOffset != 0)
        {
            switch (DoubleFuncOffset)
            {
            case 0x142843E80:
                FuncOffset = 0x27DEC50;
                BaseOffset = 0x13FBF8B0;
                break;
            case 0x142843EA0:
                FuncOffset = 0x27ECBC0;
                BaseOffset = 0x13FBF838;
                break;
            case 0x142843EC0:
                FuncOffset = 0x27FAD40;
                BaseOffset = 0x13FBF7C8;
                break;
            case 0x142843EE0:
                FuncOffset = 0x28097D0;
                BaseOffset = 0x13FBF710;
                break;
            case 0x142843F00:
                FuncOffset = 0x28177F0;
                BaseOffset = 0x13FBF990;
                break;
            case 0x142843F20:
                FuncOffset = 0x28261A0;
                BaseOffset = 0x13FBF4F0;
                break;
            case 0x142843F40:
                FuncOffset = 0x2834A10;
                BaseOffset = 0x13FBF4F8;
                break;
            case 0x142843F60:
                FuncOffset = 0x99D820;
                BaseOffset = 0x13FBFA00;
                break;
            default:
                UnkFunc = true;
                FuncOffset = 0x0;
                BaseOffset = 0x0;
                break;
            }

            if (UnkFunc)
            {
                // {
                //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                //     GameData.FuckEnc.Cache.clear();
                // }
                Utils::Log(3, XorStr("Error unk double encryption func: 0x%llX, 0x%llX, 0x%llX"), DoubleFuncOffset, FuncOffset, BaseOffset);
                return;
            }
            else
            {
                if (LastDoubleFuncOffset != DoubleFuncOffset)
                {
                    LastDoubleFuncOffset = DoubleFuncOffset;
                    Utils::Log(1, XorStr("Successfully updated the double encryption func: 0x%llX, 0x%llX, 0x%llX"), LastDoubleFuncOffset, FuncOffset, BaseOffset);
                }
            }
        }
    }
    else
    {
        static uint64_t LastPTRFuncOffset = 0;
        switch (GameData.UPTRDecrypt.SwitchEncryptor)
        {
        case 1:
            FuncOffset = 0x99D820;
            BaseOffset = 0x1435AB98;
            break;
        case 2:
            FuncOffset = 0x973130;
            BaseOffset = 0x1435ABA8;
            break;
        case 3:
            FuncOffset = 0x9813D0;
            BaseOffset = 0x1435ABB8;
            break;
        case 4:
            FuncOffset = 0x98F3A0;
            BaseOffset = 0x1435ABC8;
            break;
        default:
        {
            break;
        }
        }

        if (LastPTRFuncOffset != FuncOffset)
        {
            LastPTRFuncOffset = FuncOffset;
            Utils::Log(1, XorStr("Successfully updated the ptr encryption func: 0x%llX, 0x%llX, 0x%llX"), GameData.UPTRDecrypt.SwitchEncryptor, FuncOffset, BaseOffset);
        }
    }

    auto CacheBaseOffset = BaseOffset;

    // BaseOffset = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<uint64_t>(GameData.Process.Base + BaseOffset));
    BaseOffset = FuckEnc::CacheRead<uint64_t>(FuckEnc::CacheRead<uint64_t>(GameData.Process.Base + BaseOffset));

    if (BaseOffset == 0 || FuncOffset == 0)
    {
        // {
        //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
        //     GameData.FuckEnc.Cache.clear();
        // }
        Utils::Log(3, XorStr("Error read base offset: (%d) 0x%llX -> 0x%llX"), EncBase, CacheBaseOffset, BaseOffset);
        return;
    }

    std::shared_lock<std::shared_mutex> Lock(GameData.MirrorProcess.Mutex);
    BaseOffset = TagRemoteAddress(BaseOffset);

    EnterCriticalSection(&DecryptLock);
    {
        // static int Count = 0;
        typedef void(__fastcall * DecryptFunc)(uint64_t*, void*, unsigned int, uint16_t);
        DecryptFunc Func = (DecryptFunc)((uint64_t)GameData.MirrorProcess.Memory + FuncOffset);
        Func(&BaseOffset, Data, Size, Handle);
        // Count++;
        // Utils::Log(4, "Count %d", Count);
    }
    LeaveCriticalSection(&DecryptLock);
}

void MirrorProcess::TestMirrorCall()
{
    // 定义坐标结构
    struct Vec3
    {
        float x, y, z;
    };

    struct FEncTable
    {
        uint64_t Func;
        uint64_t Base;
        uint16_t XorValue;
    };

    std::vector<FEncTable> EncTables = {
        // {0x27DEC50, 0x13FBF8B0, 0x132}, // 2843E80
        // {0x27ECBC0, 0x13FBF838, 0x192}, // 2843EA0
        // {0x27FAD40, 0x13FBF7C8, 0xFFD4}, // 2843EC0

        // {0x28097D0, 0x13FBF710, 0xFF93}, // 2843EE0
        {0x28177F0, 0x13FBF990, 0xBA}, // 2843F00

        // {0x28261A0, 0x13FBF4F0, 0xFFBF}, // 2843F20
        // {0x2834A10, 0x13FBF4F8, 0xFE14}, // 2843F40

        // {0x99D820, 0x13FBFA00, 0x0}, // 2843F60

        // {0x99D820, 0x1435AB98, 0x0}, // UTRP Decrypt 1
        // {0x973130, 0x1435ABA8, 0xF8}, // UTRP Decrypt 2
        // {0x9813D0, 0x1435ABB8, 0x136}, // UTRP Decrypt 3
        // {0x98F3A0, 0x1435ABC8, 0xD8}, // UTRP Decrypt 4
    };

    // auto Index = mem.Read<uint64_t>(GameData.Process.Base + 0x13FBF500); // 0x28261A0

    // int result = (((unsigned __int64)(int)Index >> 21) & 1) + 2 * ((((unsigned __int64)(int)Index >> 22) & 1) + 2 * ((unsigned int)((unsigned __int64)(int)Index >> 23) & 1));
    // Utils::Log(4, XorStr("Index: %p %d"), Index, result);

    for (const auto& table : EncTables)
    {
        Utils::Log(1, XorStr("Func: 0x%llX, Base: 0x%llX"), table.Func, table.Base);

        // 调用镜像解密函数
        typedef void(__fastcall * DecryptFunc)(uint64_t*, void*, unsigned int, uint16_t);
        DecryptFunc func = (DecryptFunc)((uint64_t)GameData.MirrorProcess.Memory + table.Func);

        // 准备参数
        uint64_t Base = mem.Read<uint64_t>(GameData.Process.Base + table.Base);
        if (Base == 0)
        {
            Utils::Log(2, XorStr("The current encryption table is not initialized Base: 0x%llX (0x%llX)"), table.Base, Base);
            continue;
        }

        uint64_t TaggedEncBase = TagRemoteAddress(Base);
        unsigned int size = 0xC;

        Utils::Log(1, XorStr("=== Testing all cases (0x000 - 0x3FF) ==="));
        Utils::Log(1, XorStr("EncBase: 0x%llX, Size: 0x%X"), Base, size);

        // 遍历所有可能的 case：0x000 到 0x3FF (0-1023)
        // for (int16_t handle = 0; handle <= 0x3FF; handle++)
        // for (uint16_t handle = 0; handle <= 0x3FF; handle++)
        {
            uint16_t handle = 382;
            /*if (818 != handle)
                continue;*/

            // // 0x1435082C
            // uint32_t EncValue = 0x5435082C;
            // uint32_t EncTranslation = EncValue;
            // func(&TaggedEncBase, &EncTranslation, 4, handle);

            // uint32_t EncTranslation1 = EncValue;
            // //ENC::Decrypt(1, &EncTranslation1, 4, handle, true, table.Func, Base);

            // if (EncTranslation != EncTranslation1)
            // {
            //     Utils::Log(0, XorStr("CASE %d (0x%0X) 0x%0X 0x%0X 0x%0X"), handle, handle, ((handle + 0) ^ table.XorValue) & 0x3FF, ((handle + 4) ^ table.XorValue) & 0x3FF, ((handle + 8) ^ table.XorValue) & 0x3FF);
            //     Utils::Log(4, XorStr("0 RETS 0x%0X"), EncTranslation);
            //     Utils::Log(4, XorStr("1 RETS 0x%0X"), EncTranslation1);
            //     //exit(1);
            // }
            // Player Location: 39878 (0x9BC6) | X=-19708.195312, Y=0.483330, Z=185735310959706112.000000 | X=0x98FA696B, Y=0x72B4888F, Z=0x283B3FF9
            // Player Location: 13692 (0x357C) | X=-214102504797896704.000000, Y=-5137.101562, Z=-1757.221802 | X=0xC31D2FB9, Y=0x2D569C24, Z=0x6F4EF3E1
            // -20768.13671875000000000000000 -5137.10156250000000000000000 -1757.22180175781250000000000
            // [00:48:54.249]  ▲ WARNING  Player Location: 382 (0x17E) | X=1568.101562, Y=-444.203125, Z=2864.712402 | X=0xB048CC58, Y=0x4D91296C, Z=0xBE1DA4E8
            FVector EncValue = {Utils::HexToFloat(0xB048CC58), Utils::HexToFloat(0x4D91296C), Utils::HexToFloat(0xBE1DA4E8)};
            FVector EncTranslation = EncValue;
            func(&TaggedEncBase, &EncTranslation, 12, handle);
            FVector EncTranslation1 = EncValue;
            unsigned int* PTREncLocation = (unsigned int*)&EncTranslation1;
            ENC::Decrypt(1, PTREncLocation, 12, handle);

            // if (EncTranslation.X != EncTranslation1.X || EncTranslation.Y != EncTranslation1.Y || EncTranslation.Z != EncTranslation1.Z)
            {
                // 1 RETS -19708.19531250000000000000000 -14035.50000000000000000000000 -1545.01000976562500000000000
                Utils::Log(0, XorStr("CASE %d (0x%0X) 0x%0X 0x%0X 0x%0X"), handle, handle, ((handle + 0) ^ table.XorValue) & 0x3FF, ((handle + 4) ^ table.XorValue) & 0x3FF, ((handle + 8) ^ table.XorValue) & 0x3FF);
                Utils::Log(1, XorStr("0 RETS %.23f %.23f %.23f"), EncTranslation.X, EncTranslation.Y, EncTranslation.Z);
                Utils::Log(1, XorStr("1 RETS %.23f %.23f %.23f"), EncTranslation1.X, EncTranslation1.Y, EncTranslation1.Z);
            }
        }

        Utils::Log(1, XorStr("=== Test completed: 1024 cases ===\n"));
    }
}