#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Common/Data.h>
#include <Common/Entity.h>
#include <Common/Offset.h>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include <Utils/Throttler.h>
#include <DMALibrary/Memory/Memory.h>

class GName
{
public:
	enum { NAME_SIZE = 1024 };

	static void Init();

	static void DecryptName(char* Name, const uint16_t& NameLength);

	static void DecryptWideName(wchar_t* Name, const uint16_t& NameLength);

	static std::string ResolveName(uint64_t ID);

	static std::string GetNameById(uint64_t ID);

	static std::string GetNameByAddr(uint64_t Addr);

	static EntityInfo GetInfoById(uint64_t ID);

	static EntityInfo GetInfoByContains(const std::string& Name, EntityType targetType = EntityType::Unknown);

	static std::string GetFText(uint64_t Addr);

	static std::string GetFString(uint64_t Addr);

	static void DebugActorNames(uint64_t Addr, uint32_t Start = 0x0, uint32_t End = 0x300, bool TwoRead = false);
};