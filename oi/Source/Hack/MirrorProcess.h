#pragma once

#include <winsock2.h>
#include <windows.h>
#include <string>
#include <unordered_map>
#include <shared_mutex>
#include <Common/Data.h>
#include <Utils/Utils.h>
#include <Common/Offset.h>
#include <Zydis/Zydis.h>

// MAGIC 标记机制：用于标识需要 VEH 处理的远程地址
constexpr uint64_t MAGIC_MASK = 0x0000FF0000000000;
constexpr uint64_t MAGIC_TAG = 0x00004A0000000000;

class MirrorProcess
{
public:
    static void Reset();
    static bool Init();
    static void InstallVEH();
    static void UninstallVEH();

    // 标记远程地址（用于参数传递）
    static inline uint64_t TagRemoteAddress(uint64_t Address)
    {
        return MAGIC_TAG | Address;
    }

    static inline bool IsPointerInRemoteModule(uint64_t Pointer)
    {
        if (!GameData.Process.Base || GameData.MirrorProcess.MemorySize == 0)
        {
            return false;
        }

        // Pointer += GameData.Process.Base;

        return (Pointer >= GameData.Process.Base && Pointer < GameData.Process.Base + GameData.MirrorProcess.MemorySize);
    }

    static void VEHDecrypt(uint64_t EncBase, void* Data, unsigned int Size, int16_t Handle);

    static void TestMirrorCall();

private:
    static LONG WINAPI VEHHandler(EXCEPTION_POINTERS* ExceptionInfo);
    static bool HandleMemoryAccess(EXCEPTION_POINTERS* ExceptionInfo, ULONG_PTR FaultAddress);
    static uint64_t ReadMemoryValue(ULONG_PTR Address, size_t Size);
    static void SetRegisterValue(CONTEXT* ctx, ZydisRegister Reg, uint64_t Value);
    static uint64_t GetRegisterValue(CONTEXT* ctx, ZydisRegister Reg);

    static PVOID VEHHandle;
    static DWORD ModuleSize;
    static bool IsVEHEnabled;
    static CRITICAL_SECTION DecryptLock; // 保护解密函数调用的锁
};