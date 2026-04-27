#include <windows.h>
#include <DMALibrary/pch.h>
#include "InputManager.h"
#include "Registry.h"
#include <DMALibrary/Memory/Memory.h>
#include <Utils/Utils.h>
#include <Common/Data.h>

QWORD c_keys::GetWin32ksgdModuleBase()
{
    return VMMDLL_ProcessGetModuleBaseU(mem.vHandle, 4, (LPSTR)"WIN32KSGD.SYS");
}

DWORD c_keys::FindCsrssPid()
{
    PVMMDLL_PROCESS_INFORMATION winlogonProcess = nullptr;
    std::vector< PVMMDLL_PROCESS_INFORMATION> csrssList;

    DWORD cProcessInformation;
    PVMMDLL_PROCESS_INFORMATION pProcessInformationEntry, pProcessInformationAll = NULL;
    bool result = VMMDLL_ProcessGetInformationAll(mem.vHandle, &pProcessInformationAll, &cProcessInformation);
    if (result)
    {
        // winlogon.exe
        for (int i = 0; i < cProcessInformation; i++) {
            pProcessInformationEntry = &pProcessInformationAll[i];
            if (strcmp(pProcessInformationEntry->szName, "winlogon.exe") == 0)
            {
                winlogonProcess = pProcessInformationEntry;
            }
            else if (strcmp(pProcessInformationEntry->szName, "csrss.exe") == 0)
            {
                csrssList.push_back(pProcessInformationEntry);
            }
        }

        if (winlogonProcess)
        {
            for (const PVMMDLL_PROCESS_INFORMATION& csrss : csrssList)
            {
                if (csrss->dwPPID == winlogonProcess->dwPPID)
                {
                    return csrss->dwPID;
                }
            }
        }
        VMMDLL_MemFree(pProcessInformationAll);
    }
    return 0;
}

DWORD c_keys::GetCsrssPID() {
    static BYTE keyStateBitmap[50];
    DWORD csrssPid = 0;
    DWORD cProcessInformation = 0;

    auto Win32ksgdBaseAddress = GetWin32ksgdModuleBase();
    QWORD** gSessionGlobalSlots = mem.Read<QWORD**>(Win32ksgdBaseAddress + 0x3110, 4);

    for (DWORD session_id = 1; session_id < 100; session_id++)
    {
        QWORD* SessionState = mem.Read<QWORD*>((QWORD)(gSessionGlobalSlots + session_id - 1), 4);
        gafAsyncKeyStateExport = mem.Read<QWORD>((QWORD)SessionState, 4) + 0x3690;
        if (gafAsyncKeyStateExport != 0x3690)
            return 4;
    }

    csrssPid = FindCsrssPid();

    if (csrssPid) {
        uint64_t Win32KBase = NULL;
        PVMMDLL_MAP_MODULEENTRY pModuleMapEntry = NULL;

        PVMMDLL_MAP_EAT pEatMap;
        if (VMMDLL_Map_GetEATU(mem.vHandle, csrssPid, (LPSTR)"win32kbase.sys", &pEatMap))
        {
            for (int i = 0; i < pEatMap->cMap; i++) {
                auto pEatMapEntry = pEatMap->pMap + i;
                std::string functionString(pEatMapEntry->uszFunction);
                size_t start = functionString.find_first_not_of(" ");
                size_t end = functionString.find_last_not_of(" ");
                if (functionString == "gafAsyncKeyState")
                {
                    VMMDLL_MemReadEx(mem.vHandle, csrssPid, pEatMapEntry->vaFunction, (PBYTE)&keyStateBitmap, sizeof(keyStateBitmap), NULL, VMMDLL_FLAG_NOCACHE | VMMDLL_FLAG_NOPAGING_IO);
                    if (!Utils::ValidPtr(keyStateBitmap))
                    {
                        gafAsyncKeyStateExport = pEatMapEntry->vaFunction;
                        return csrssPid;
                    }
                }
            }
            VMMDLL_MemFree(pEatMap);
        }

        std::vector<uint64_t> Offsets = {
            0x24F8A0,
            0x24B8A0,
            0x2498A0,
            0x214320
        };
        gafAsyncKeyStateExport = VMMDLL_ProcessGetProcAddressU(mem.vHandle, csrssPid, (LPSTR)"win32kbase.sys", (LPSTR)"gafAsyncKeyState");
        if (gafAsyncKeyStateExport == 0)
        {
            auto Win32KBase = VMMDLL_ProcessGetModuleBaseU(mem.vHandle, csrssPid, (LPSTR)"win32kbase.sys");
            for (auto Offset : Offsets)
            {
                VMMDLL_MemReadEx(mem.vHandle, csrssPid, Win32KBase + Offset, (PBYTE)&keyStateBitmap, sizeof(keyStateBitmap), NULL, VMMDLL_FLAG_NOCACHE | VMMDLL_FLAG_NOPAGING_IO);
                if (keyStateBitmap[0x24] == '\x2')
                {
                    gafAsyncKeyStateExport = Win32KBase + Offset;
                    break;
                }
            }
        }
        if (gafAsyncKeyStateExport)
        {
            VMMDLL_MemReadEx(mem.vHandle, csrssPid, gafAsyncKeyStateExport, (PBYTE)&keyStateBitmap, sizeof(keyStateBitmap), NULL, VMMDLL_FLAG_NOCACHE | VMMDLL_FLAG_NOPAGING_IO);
            if (keyStateBitmap[0x24] == '\x2')
            {
                return csrssPid;
            }
        }
    }

    return 0;
};

//bool c_keys::InitKeyboard()
//{
//	std::string win = registry.QueryValue("HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\CurrentBuild", e_registry_type::sz);
//	int Winver = 0;
//    if (!win.empty()) {
//        Winver = std::stoi(win);
//    }
//    else {
//        return false;
//    }
//
//    std::string ubr = registry.QueryValue("HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\UBR", e_registry_type::dword);
//    int Ubr = 0;
//    if (!ubr.empty())
//        Ubr = std::stoi(ubr);
//    else
//        return false;
//
//    //Utils::Log(0, "Game Host Windows Version %d.%d", Winver, Ubr);
//
//	this->win_logon_pid = mem.GetPidFromName("winlogon.exe");
//
//    if (Winver > 22000)
//    {
//        auto pids = mem.GetPidListFromName("csrss.exe");
//        for (size_t i = 0; i < pids.size(); i++)
//        {
//            auto pid = pids[i];
//
//            PVMMDLL_MAP_MODULEENTRY win32k_module_info;
//            if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32ksgd.sys"), &win32k_module_info, VMMDLL_MODULE_FLAG_NORMAL))
//            {
//                if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32k.sys"), &win32k_module_info, VMMDLL_MODULE_FLAG_NORMAL))
//                {
//                    LOG("failed to get module win32k info\n");
//                    return false;
//                }
//            }
//            uintptr_t win32k_base = win32k_module_info->vaBase;
//            size_t win32k_size = win32k_module_info->cbImageSize;
//            //win32ksgd
//            auto g_session_ptr = mem.FindSignature("48 8B 05 ? ? ? ? 48 8B 04 C8", win32k_base, win32k_base + win32k_size, pid);
//            if (!g_session_ptr)
//            {
//                //win32k
//                g_session_ptr = mem.FindSignature("48 8B 05 ? ? ? ? FF C9", win32k_base, win32k_base + win32k_size, pid);
//                if (!g_session_ptr)
//                {
//                    LOG("failed to find g_session_global_slots\n");
//                    return false;
//                }
//            }
//            int relative = mem.Read<int>(g_session_ptr + 3, pid);
//            uintptr_t g_session_global_slots = g_session_ptr + 7 + relative;
//            uintptr_t user_session_state = 0;
//            for (int i = 0; i < 4; i++)
//            {
//                user_session_state = mem.Read<uintptr_t>(mem.Read<uintptr_t>(mem.Read<uintptr_t>(g_session_global_slots, pid) + 8 * i, pid), pid);
//                if (user_session_state > 0x7FFFFFFFFFFF)
//                    break;
//            }
//
//            PVMMDLL_MAP_MODULEENTRY win32kbase_module_info;
//            if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32kbase.sys"), &win32kbase_module_info, VMMDLL_MODULE_FLAG_NORMAL))
//            {
//                LOG("failed to get module win32kbase info\n");
//                return false;
//            }
//            uintptr_t win32kbase_base = win32kbase_module_info->vaBase;
//            size_t win32kbase_size = win32kbase_module_info->cbImageSize;
//
//            //Unsure if this sig will work on all versions. (sig is from PostUpdateKeyStateEvent function. seems to exist in both older version and the new version of win32kbase that I have checked)
//            uintptr_t ptr = mem.FindSignature("48 8D 90 ? ? ? ? E8 ? ? ? ? 0F 57 C0", win32kbase_base, win32kbase_base + win32kbase_size, pid);
//            uint32_t session_offset = 0x0;
//            if (ptr)
//            {
//                session_offset = mem.Read<uint32_t>(ptr + 3, pid);
//                gafAsyncKeyStateExport = user_session_state + session_offset;
//
//            }
//            else
//            {
//                LOG("failed to find offset for gafAyncKeyStateExport\n");
//                return false;
//            }
//
//            if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF) break;
//        }
//        if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF)
//            return true;
//        return false;
//    }
//    else
//    {
//        PVMMDLL_MAP_EAT eat_map = NULL;
//        PVMMDLL_MAP_EATENTRY eat_map_entry;
//        bool result = VMMDLL_Map_GetEATU(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, const_cast<LPSTR>("win32kbase.sys"), &eat_map);
//        if (!result)
//            return false;
//
//        if (eat_map->dwVersion != VMMDLL_MAP_EAT_VERSION)
//        {
//            VMMDLL_MemFree(eat_map);
//            eat_map_entry = NULL;
//            return false;
//        }
//
//        for (int i = 0; i < eat_map->cMap; i++)
//        {
//            eat_map_entry = eat_map->pMap + i;
//            if (strcmp(eat_map_entry->uszFunction, "gafAsyncKeyState") == 0)
//            {
//                gafAsyncKeyStateExport = eat_map_entry->vaFunction;
//
//                break;
//            }
//        }
//
//        VMMDLL_MemFree(eat_map);
//        eat_map = NULL;
//        if (gafAsyncKeyStateExport < 0x7FFFFFFFFFFF)
//        {
//            PVMMDLL_MAP_MODULEENTRY module_info;
//            auto result = VMMDLL_Map_GetModuleFromNameW(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, static_cast<LPCWSTR>(L"win32kbase.sys"), &module_info, VMMDLL_MODULE_FLAG_NORMAL);
//            if (!result)
//            {
//                LOG("failed to get module info\n");
//                return false;
//            }
//
//            char str[32];
//            if (!VMMDLL_PdbLoad(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, module_info->vaBase, str))
//            {
//                LOG("failed to load pdb\n");
//                return false;
//            }
//
//            uintptr_t gafAsyncKeyState;
//            if (!VMMDLL_PdbSymbolAddress(mem.vHandle, str, const_cast<LPSTR>("gafAsyncKeyState"), &gafAsyncKeyState))
//            {
//                LOG("failed to find gafAsyncKeyState\n");
//                return false;
//            }
//            LOG("found gafAsyncKeyState at: 0x%p\n", gafAsyncKeyState);
//        }
//        if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF)
//            return true;
//        return false;
//    }
//
//    return false;
//}

bool c_keys::InitKeyboard()
{
	std::string win = registry.QueryValue("HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\CurrentBuild", e_registry_type::sz);
	int Winver = 0;
	if (!win.empty())
		Winver = std::stoi(win);
	else
		return false;
	std::string ubr = registry.QueryValue("HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\UBR", e_registry_type::dword);
	int Ubr = 0;
	if (!ubr.empty())
		Ubr = std::stoi(ubr);
	else
		return false;

	Utils::Log(0, XorStr("The host system is %d.%d"), Winver, Ubr);

	this->win_logon_pid = mem.GetPidFromName("winlogon.exe");
	//this->win_logon_pid = 4;
	if (Winver > 22000)
	{
		auto pids = mem.GetPidListFromName("csrss.exe");
		for (size_t i = 0; i < pids.size(); i++)
		{
			auto pid = pids[i];

			PVMMDLL_MAP_MODULEENTRY win32k_module_info;
			if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32ksgd.sys"), &win32k_module_info, VMMDLL_MODULE_FLAG_NORMAL))
			{
				if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32k.sys"), &win32k_module_info, VMMDLL_MODULE_FLAG_NORMAL))
				{
                    gafAsyncKeyStateExport = 0xFFFFBF8981CF9000; // 适配
					LOG("failed to get module win32k info\n");
					return false;
				}
			}
			uintptr_t win32k_base = win32k_module_info->vaBase;
			size_t win32k_size = win32k_module_info->cbImageSize;
			//win32ksgd
			auto g_session_ptr = mem.FindSignature("48 8B 05 ? ? ? ? 48 8B 04 C8", win32k_base, win32k_base + win32k_size, pid);
			//Utils::Log(4, "g_session_ptr: %p", g_session_ptr);
			if (!g_session_ptr)
			{
				//win32k
				g_session_ptr = mem.FindSignature("48 8B 05 ? ? ? ? FF C9", win32k_base, win32k_base + win32k_size, pid);
				//Utils::Log(4, "1 g_session_ptr: %p", g_session_ptr);
				if (!g_session_ptr)
				{
					LOG("failed to find g_session_global_slots\n");
					return false;
				}
			}
			int relative = mem.Read<int>(g_session_ptr + 3, pid);
			uintptr_t g_session_global_slots = g_session_ptr + 7 + relative;
			uintptr_t user_session_state = 0;
			for (int i = 0; i < 4; i++)
			{
				user_session_state = mem.Read<uintptr_t>(mem.Read<uintptr_t>(mem.Read<uintptr_t>(g_session_global_slots, pid) + 8 * i, pid), pid);
				if (user_session_state > 0x7FFFFFFFFFFF)
					break;
			}

			PVMMDLL_MAP_MODULEENTRY win32kbase_module_info;
			if (!VMMDLL_Map_GetModuleFromNameW(mem.vHandle, pid, const_cast<LPWSTR>(L"win32kbase.sys"), &win32kbase_module_info, VMMDLL_MODULE_FLAG_NORMAL))
			{
				LOG("failed to get module win32kbase info\n");
				return false;
			}
			uintptr_t win32kbase_base = win32kbase_module_info->vaBase;
			size_t win32kbase_size = win32kbase_module_info->cbImageSize;

			//Unsure if this sig will work on all versions. (sig is from PostUpdateKeyStateEvent function. seems to exist in both older version and the new version of win32kbase that I have checked)
			uintptr_t ptr = mem.FindSignature("48 8D 90 ? ? ? ? E8 ? ? ? ? 0F 57 C0", win32kbase_base, win32kbase_base + win32kbase_size, pid);
			if (ptr == 0)
			{
				ptr = mem.FindSignature("48 8D B8 ? ? ? ? 80 7D", win32kbase_base, win32kbase_base + win32kbase_size, pid);
			}
			//Utils::Log(4, "ptr: %p", ptr);
			uint32_t session_offset = 0x0;
			if (ptr)
			{
				session_offset = mem.Read<uint32_t>(ptr + 3, pid);
				gafAsyncKeyStateExport = user_session_state + session_offset;
			}
			else
			{
				/*if (Winver >= 27913)
				{
					gafAsyncKeyStateExport = user_session_state + 0x37F8;
					return true;
				}*/
				LOG("failed to find offset for gafAyncKeyStateExport\n");
				return false;
			}

			if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF) break;
		}
		if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF)
			return true;

		return false;
	}
	else
	{
		PVMMDLL_MAP_EAT eat_map = NULL;
		PVMMDLL_MAP_EATENTRY eat_map_entry;
		bool result = VMMDLL_Map_GetEATU(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, const_cast<LPSTR>("win32kbase.sys"), &eat_map);
		if (!result)
			return false;

		if (eat_map->dwVersion != VMMDLL_MAP_EAT_VERSION)
		{
			VMMDLL_MemFree(eat_map);
			eat_map_entry = NULL;
			return false;
		}

		for (int i = 0; i < eat_map->cMap; i++)
		{
			eat_map_entry = eat_map->pMap + i;
			if (strcmp(eat_map_entry->uszFunction, "gafAsyncKeyState") == 0)
			{
				gafAsyncKeyStateExport = eat_map_entry->vaFunction;
				//gafAsyncKeyStateExport = 0xFFFFBF8981CF9000;
				//Utils::Log(4, "gafAsyncKeyStateExport: %d %p", mem.GetPidFromName("winlogon.exe"), gafAsyncKeyStateExport);
				break;
			}
		}

		VMMDLL_MemFree(eat_map);
		eat_map = NULL;
		if (gafAsyncKeyStateExport < 0x7FFFFFFFFFFF)
		{
			PVMMDLL_MAP_MODULEENTRY module_info;
			auto result = VMMDLL_Map_GetModuleFromNameW(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, static_cast<LPCWSTR>(L"win32kbase.sys"), &module_info, VMMDLL_MODULE_FLAG_NORMAL);
			if (!result)
			{
				LOG("failed to get module info\n");
				return false;
			}

			char str[32];
			if (!VMMDLL_PdbLoad(mem.vHandle, mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, module_info->vaBase, str))
			{
				LOG("failed to load pdb\n");
				return false;
			}

			uintptr_t gafAsyncKeyState;
			if (!VMMDLL_PdbSymbolAddress(mem.vHandle, str, const_cast<LPSTR>("gafAsyncKeyState"), &gafAsyncKeyState))
			{
				LOG("failed to find gafAsyncKeyState\n");
				return false;
			}
			LOG("found gafAsyncKeyState at: 0x%p\n", gafAsyncKeyState);
		}
		if (gafAsyncKeyStateExport > 0x7FFFFFFFFFFF)
			return true;
		return false;
	}
}

bool c_keys::InitGptCursorAsync()
{
    PVMMDLL_MAP_EAT eat_map = NULL;
    PVMMDLL_MAP_EATENTRY eat_map_entry;

    this->win_logon_pid = mem.GetPidFromName("winlogon.exe") | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY;
    bool result = VMMDLL_Map_GetEATU(mem.vHandle, this->win_logon_pid, (LPSTR)"win32kbase.sys", &eat_map);
    if (!result)
        return false;

    if (eat_map->dwVersion != VMMDLL_MAP_EAT_VERSION)
    {
        VMMDLL_MemFree(eat_map);
        eat_map_entry = NULL;
        return false;
    }

    for (int i = 0; i < eat_map->cMap; i++)
    {
        eat_map_entry = eat_map->pMap + i;
        if (strcmp(eat_map_entry->uszFunction, "gptCursorAsync") == 0)
        {
            gptCursorAsyncExport = eat_map_entry->vaFunction;

            break;
        }
    }

    VMMDLL_MemFree(eat_map);
    eat_map = NULL; 

    if (gptCursorAsyncExport > 0x7FFFFFFFFFFF)
        return true;

    return false;
}

POINT c_keys::GetCursorPos()
{
    POINT cursorPos;
	if (gptCursorAsyncExport)
	{
		cursorPos = mem.Read<POINT>(gptCursorAsyncExport, this->win_logon_pid);
	}
	return cursorPos;
}

void c_keys::UpdateKeys()
{
	auto prev_key_state_bitmap = key_state_bitmap;
	VMMDLL_MemReadEx(mem.vHandle, this->win_logon_pid | VMMDLL_PID_PROCESS_WITH_KERNELMEMORY, gafAsyncKeyStateExport, (PBYTE)&key_state_bitmap, 64, NULL, VMMDLL_FLAG_NOCACHE);
	for (auto vk = 0u; vk < 256; ++vk) {
		if ((key_state_bitmap[(vk * 2 / 8)] & 1 << vk % 4 * 2) &&
			!(prev_key_state_bitmap[(vk * 2 / 8)] & 1 << vk % 4 * 2))
			key_state_recent_bitmap[vk / 8] |= 1 << vk % 8;
	}
}

bool c_keys::IsKeyDown(std::uint8_t const vk)
{
    bool const result = key_state_bitmap[(vk * 2 / 8)] & 1 << vk % 4 * 2;
	return result ? result : (GameData.Config.Common.UseGetAsyncKeyState ? (GetAsyncKeyState(vk) & 0x8000) != 0 : false);
}

bool c_keys::WasKeyPressed(std::uint8_t const vk) {
	bool const result = key_state_recent_bitmap[vk / 8] & 1 << vk % 8;
	key_state_recent_bitmap[vk / 8] &= ~(1 << vk % 8);
	return result ? result : (GameData.Config.Common.UseGetAsyncKeyState ? (GetAsyncKeyState(vk) & 1) != 0 : false);
}
