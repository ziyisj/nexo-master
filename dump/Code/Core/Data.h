#pragma once

#include <windows.h>
#include <filesystem>
#include <iostream>
#include <unordered_map>
#include <FPGA/Memory/Memory.h>

struct FGameData
{
	std::string Name = "DeltaForceClient-Win64-Shipping";
	uint8_t* Memory;
	size_t MemorySize;
	std::filesystem::path Directory;

	struct
	{
		UINT64 Base = 0;
		UINT64 Size = 0;
	} Global;

	struct
	{
		uint16_t FNameXorKey = 0;
		std::unordered_map<int, std::string> FNameTables;
	} GName;

	struct
	{
		std::unordered_map<std::string, UINT64> NameToAddress;
		std::vector<UINT64> Array;
	} GObject;

	struct
	{
		std::unordered_map<std::string, UINT32> NameToOffset;
	} Offset;
};


extern FGameData GameData;