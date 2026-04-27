#pragma once
#include "../pch.h"
//#include "memory.h"

class c_shellcode
{
private:

public:
	c_shellcode() = default;

	~c_shellcode() = default;

	/**
	* @Brief Finds a code cave in the target process, that's atleast size of function_size & has Read, Write, Execute permission.
	* @param function_size - the size of the function we're gonna inject
	* @param process_name - the name of the process we're gonna inject to
	* @return the address of the code cave, if failed it returns 0
	**/
	UINT64 find_codecave(size_t function_size, const std::string& process_name, const std::string& module);

	/**
	* @brief finds all code caves in the target process, that's atleast size of function_size & has Read, Write, Execute permission.
	* @param function_size - the size of the function we're gonna inject 
	* @param process_name - the name of the process we're gonna inject to
	* @return all addresses that has a big enough codecave for us.
	**/
	std::vector<UINT64> find_all_codecave(size_t function_size, const std::string& process_name);

	/**
	* @param hook - the function we're gonna hook to call the function param
	* @param function - the function to call
	* @param process_name - the name of the process we're gonna inject to
	* @return true if successful, false if not.
	**/
	bool call_function(void* hook, void* function, const std::string& process_name);

	/*template <typename T, typename... Args>
	auto SysCall(UINT64 function, Args&&... args) -> std::enable_if_t<!std::is_void<std::invoke_result_t<T, Args...>>::value, std::invoke_result_t<T, Args...>>
	{
		uintptr_t ntos_shutdown = mem.GetExportTableAddress("NtShutdownSystem", "csrss.exe", "ntoskrnl.exe");
		UINT64 nt_shutdown = (UINT64)GetProcAddress(LoadLibraryA("ntdll.dll"), "NtShutdownSystem");

		T buffer { };

		BYTE jmp_bytes[14] = {
			0xff, 0x25, 0x00, 0x00, 0x00, 0x00, // jmp [RIP+0x00000000]
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // RIP value
		};
		*reinterpret_cast<UINT64*>(jmp_bytes + 6) = function;

		// Save original bytes
		BYTE orig_bytes[sizeof(jmp_bytes)];
		if (!mem.Read(ntos_shutdown, (PBYTE)orig_bytes, sizeof(orig_bytes), 4))
			return buffer;

	
		if (!mem.Write(ntos_shutdown, jmp_bytes, sizeof(jmp_bytes), 4))
		{
			LOG("[!] Failed to write memory at 0x%p\n", ntos_shutdown);
			return buffer;
		}

		// Call function
		buffer = std::invoke(reinterpret_cast<T>(nt_shutdown), std::forward<Args>(args)...);

		//Restore function
		if (!mem.Write(ntos_shutdown, orig_bytes, sizeof(orig_bytes), 4))
			LOG("[!] Failed to write memory at 0x%p\n", ntos_shutdown);

		return buffer;
	}

	template <typename T, typename... Args>
	void SysCall(UINT64 function, Args&&... args)
	{
		uintptr_t ntos_shutdown = mem.GetExportTableAddress("NtShutdownSystem", "csrss.exe", "ntoskrnl.exe");
		UINT64 nt_shutdown = (UINT64)GetProcAddress(LoadLibraryA("ntdll.dll"), "NtShutdownSystem");

		T buffer { };

		BYTE jmp_bytes[14] = {
			0xff, 0x25, 0x00, 0x00, 0x00, 0x00, // jmp [RIP+0x00000000]
			0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 // RIP value
		};
		*reinterpret_cast<UINT64*>(jmp_bytes + 6) = function;

		// Save original bytes
		BYTE orig_bytes[sizeof(jmp_bytes)];
		if (!mem.Read(ntos_shutdown, (PBYTE)orig_bytes, sizeof(orig_bytes), 4))
			return;
		if (!mem.Write(ntos_shutdown, jmp_bytes, sizeof(jmp_bytes), 4))
		{
			LOG("[!] Failed to write memory at 0x%p\n", ntos_shutdown);
			return;
		}

		std::invoke(reinterpret_cast<T>(nt_shutdown), std::forward<Args>(args)...);

		// Restore function
		if (!mem.Write(ntos_shutdown, orig_bytes, sizeof(orig_bytes), 4))
			LOG("[!] Failed to write memory at 0x%p\n", ntos_shutdown);
	}*/
};
