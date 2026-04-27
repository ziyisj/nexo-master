#pragma once

#include <windows.h>
#include <string>
#include <FPGA/Memory/Memory.h>
#include "Data.h"
//
//#pragma comment(lib, "ntdll.lib")
//#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
//
//extern "C"
//{
//	NTSTATUS NTAPI NtReadVirtualMemory(HANDLE, PVOID, PVOID, ULONG, PULONG);
//}

namespace Process
{
	bool Init();

	std::vector<uint64_t> FindSignatureAll(const char* signature);

	template<typename T>
	T SwapEndian(T value)
	{
		static_assert(std::is_integral_v<T>, "Type must be integral");

		if constexpr (sizeof(T) == 1) {
			return value;
		}
		else if constexpr (sizeof(T) == 2) {
			return ((value & 0xFF00) >> 8) | ((value & 0x00FF) << 8);
		}
		else if constexpr (sizeof(T) == 4) {
			return ((value & 0xFF000000) >> 24) |
				((value & 0x00FF0000) >> 8) |
				((value & 0x0000FF00) << 8) |
				((value & 0x000000FF) << 24);
		}
		else if constexpr (sizeof(T) == 8) {
			return ((value & 0xFF00000000000000ULL) >> 56) |
				((value & 0x00FF000000000000ULL) >> 40) |
				((value & 0x0000FF0000000000ULL) >> 24) |
				((value & 0x000000FF00000000ULL) >> 8) |
				((value & 0x00000000FF000000ULL) << 8) |
				((value & 0x0000000000FF0000ULL) << 24) |
				((value & 0x000000000000FF00ULL) << 40) |
				((value & 0x00000000000000FFULL) << 56);
		}
	}

	// 读取函数模板
	template<typename T>
	T Read(uint64_t address)
	{
		return *(T*)(address);
	}

	template<typename T>
	T ReadBE(uint64_t address)
	{
		return SwapEndian(*(T*)(address));
	}

	inline uint64_t CalcRelative(uint64_t current, int32_t relative = 4)
	{
		return (current + *(int32_t*)current + relative) - (uint64_t)GameData.Memory;
	}

	//template <typename T>
	//T Read(void* address)
	//{
	//	T buffer{};

	//	return buffer;
	//}

	/*template <typename T>
	T Read(void* address)
	{
		T buffer{};
		NT_SUCCESS(NtReadVirtualMemory(Handle, (void*)address, &buffer, sizeof(buffer), nullptr));
		return buffer;
	}

	template <typename T>
	T Read(UINT64 address)
	{
		T buffer{};
		NT_SUCCESS(NtReadVirtualMemory(Handle, (void*)address, &buffer, sizeof(buffer), nullptr));
		return buffer;
	}

	template <typename T>
	bool Read(void* address, T buffer, size_t size)
	{
		return NT_SUCCESS(NtReadVirtualMemory(Handle, address, buffer, size, nullptr));
	}*/
}