#include "Process.h"
#include <FPGA/Memory/Memory.h>
#include <Core/Data.h>
#include <TlHelp32.h>
#include <Psapi.h>

bool Process::Init()
{
	auto startTime = std::chrono::high_resolution_clock::now();

	auto Base = GameData.Global.Base;

	IMAGE_DOS_HEADER DosHeader = mem.Read<IMAGE_DOS_HEADER>(Base);
	IMAGE_NT_HEADERS NtHeader = mem.Read<IMAGE_NT_HEADERS>((Base + DosHeader.e_lfanew));

	UINT64 ImageSize = NtHeader.OptionalHeader.SizeOfImage;

	GameData.Memory = new uint8_t[ImageSize];
	GameData.MemorySize = ImageSize;

	printf("GameData.Memory: 0x%llX - 0x%llX\n", (uint64_t)GameData.Memory, (uint64_t)GameData.Memory + ImageSize);

	mem.Read(Base, (void*)(GameData.Memory), ImageSize);

	auto endTime = std::chrono::high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

	double sizeInMB = ImageSize / (1024.0 * 1024.0);
	double speedMBps = (duration > 0) ? (sizeInMB * 1000.0 / duration) : 0;

	DWORD OldProtect;
	VirtualProtect(GameData.Memory, ImageSize, PAGE_EXECUTE_READWRITE, &OldProtect);

	printf("Dump Memory Succeed: %f MB %f MB/s\n", sizeInMB, speedMBps);

	return true;
}

static const char* hexdigits =
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\001\002\003\004\005\006\007\010\011\000\000\000\000\000\000"
"\000\012\013\014\015\016\017\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\012\013\014\015\016\017\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000"
"\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";

static uint8_t GetByte(const char* hex)
{
	return (uint8_t)((hexdigits[hex[0]] << 4) | (hexdigits[hex[1]]));
}

std::vector<uint64_t> Process::FindSignatureAll(const char* signature)
{
    const uint8_t* memory_start = GameData.Memory;
    const uint8_t* memory_end = GameData.Memory + GameData.MemorySize;
    std::vector<uint64_t> results;

    // 计算模式长度 - 修正版本
    size_t pattern_length = 0;
    const char* p = signature;
    while (*p)
    {
        if (*p != ' ')
        {
            pattern_length++;
            if (*p == '?')
            {
                p++; // 跳过 '?'
                if (*p) p++; // 跳过下一个字符
            }
            else
            {
                p++; // 跳过第一个十六进制字符
                if (*p) p++; // 跳过第二个十六进制字符
            }
        }
        else
        {
            p++; // 跳过空格
        }
    }

    // 直接在整个内存范围内搜索
    for (const uint8_t* current_ptr = memory_start;
        current_ptr < memory_end - pattern_length + 1;
        current_ptr++)
    {
        bool match = true;
        const char* pat = signature;

        for (size_t j = 0; j < pattern_length; j++)
        {
            // 跳过空格
            while (*pat == ' ') pat++;

            if (*pat == '?')
            {
                // 通配符，跳过当前字节
                pat += 2; // 跳过 '?' 和下一个字符
                continue;
            }

            uint8_t expected = GetByte(pat);
            if (current_ptr[j] != expected)
            {
                match = false;
                break;
            }

            pat += 2; // 跳过两个十六进制字符
        }

        if (match)
        {
            results.push_back((uint64_t)(current_ptr - memory_start) + (uint64_t)GameData.Memory);
        }
    }

    return results;
}