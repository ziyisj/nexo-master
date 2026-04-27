#pragma once

#include <windows.h>
#include <string>
#include <locale>
#include <codecvt>
#include <format>
#include <vector>

#include <FPGA/Memory/Memory.h>

#include <Core/Data.h>
#include <Core/Offset.h>
#include <Core/Process.h>
#include <Core/Wrappers.h>

//struct FNameTable
//{
//	UINT64 NumElements;
//	UINT64 NumChunks;
//	UINT64 Chunks;
//};
//
//struct FNameEntry
//{
//	uint16_t bIsWide : 1;
//	uint16_t LowercaseProbeHash : 5;
//	uint16_t Len : 10;
//	char AnsiName[1024];
//};
//
//FNameTable NameTable;
////929DA80 3-31
//NameTable.Chunks = mem.Read<UINT64>(GameData.Global.Base + 0x101DD200);
//NameTable.NumChunks = mem.Read<UINT64>(GameData.Global.Base + 0x101DD200 - 0x8);
//NameTable.NumElements = mem.Read<UINT64>(GameData.Global.Base + 0x101DD200 - 0xC);
//
//NameTable.Chunks = mem.Read<UINT64>(NameTable.Chunks);

namespace GName
{
	enum { NAME_SIZE = 1024 };

	struct FNameItem
	{
		int ID;
		bool IsError = false;
		std::string FinalName;

		int ChunkOffset;
		int NameOffset;
		UINT64 NamePoolChunk;
		UINT64 PoolChunkHeader;

		uint16_t NameLength;

		char Name[1024] = { 0 };
	};

	inline void DecryptName(char* Name, const uint16_t& NameLength)
	{
		UINT64 Index = 9 * (NameLength / 9);

		switch (NameLength % 9)
		{
		case 0u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength & 0x1F) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 1u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength ^ 0xDF) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 2u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength | 0xCF) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 3u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(33 * NameLength + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 4u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength >> 2) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 5u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(3 * (NameLength - 41)) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 6u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + ((4 * NameLength) | 5) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 7u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + ((NameLength >> 4) | 7) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 8u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength ^ 0xC) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		default:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int8)(NameLength + (NameLength ^ 0x40) + 0x80) | 0x7F;
					Index = (unsigned int)(Index + 1);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		}
	}

	inline void DecryptWideName(wchar_t* Name, const uint16_t& NameLength)
	{
		UINT64 Index = 9 * (NameLength / 9);
		switch (NameLength % 9)
		{
		case 0u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength & 0x1F) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 1u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength ^ 0xDF) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 2u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength | 0xCF) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 3u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(33 * NameLength + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 4u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength >> 2) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 5u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(3 * NameLength + 133) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 6u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + ((4 * NameLength) | 5) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 7u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + ((NameLength >> 4) | 7) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		case 8u:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength ^ 0xC) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		default:
			if (Name[0] != 0)
			{
				Index = 0i64;
				do
				{
					Name[Index] ^= (unsigned __int16)(NameLength + (NameLength ^ 0x40) + 128) | 0x7F;
					Index = (unsigned int)(Index + 2);
				} while ((unsigned int)Index < NameLength);
			}
			break;
		}
	}

	inline std::string ResolveName(UINT64 ID)
	{
		/*if (GameData.GName.FNameTables[ID] != "")
		{
			return GameData.GName.FNameTables[ID];
		}*/

		std::string FinalName = "FAIL";

		//FName::GetComparisonNameEntry()
		//https://www.cnblogs.com/revercc/p/17629584.html
		//https://github.com/Spuckwaffel/UEDumper/blob/master/UEDumper/Engine/Core/Core.cpp
		//FNameEntry& Resolve(FNameEntryHandle Handle) const
		//FnameToString
		//E8 ? ? ? ? 8B 57 08 41 8B C6
		// 1.101.37100.10.6 7CE9E40
		//https://www.unknowncheats.me/forum/other-fps-games/653290-delta-force-hawk-ops-reversal-structs-offsets-25.html

		const unsigned int ChunkOffset = ID >> Offset.ChunkMask;
		const unsigned int NameOffset = Offset.NameMask & ID;

		//UINT64 NamePoolChunk = *(UINT64*)(GameData.Memory + Offset.GNames + 8 * (ChunkOffset + 1)) + 2 * NameOffset;
		UINT64 NamePoolChunk = mem.ReadUseCache<UINT64>(GameData.Global.Base + Offset.GNames + 8 * (ChunkOffset + 1)) + 2 * NameOffset;

		uint16_t PoolChunkHeader = mem.ReadUseCache<uint16_t>(NamePoolChunk);

		uint16_t NameLength = (PoolChunkHeader >> 6);

		char Name[NAME_SIZE + 1] = { 0 };
		wchar_t WideName[NAME_SIZE + 1] = { 0 };

		if (NameLength > 256 || NameLength <= 0 /*|| NameLength == 2*/ || NameLength > NAME_SIZE)
		{
			return FinalName;
		}

		const bool bIsWide = (PoolChunkHeader & 1) != 0;

		if (bIsWide)
		{
			mem.Read(
				static_cast<uintptr_t>(NamePoolChunk + 2),
				WideName,
				NameLength < NAME_SIZE ? NameLength * 2 : NAME_SIZE
			);

			DecryptWideName(WideName, NameLength);

			int Utf8Length = WideCharToMultiByte(
				CP_ACP,
				0,
				WideName,
				NameLength,
				nullptr,
				0,
				nullptr,
				nullptr
			);
			WideCharToMultiByte(
				CP_ACP,
				0,
				WideName,
				NameLength,
				Name,
				Utf8Length,
				nullptr,
				nullptr
			);
			WideName[Utf8Length] = '\0';

			FinalName = std::string(Name);
		}
		else
		{
			mem.Read(
				static_cast<uintptr_t>(NamePoolChunk + 2),
				Name,
				NameLength < NAME_SIZE ? NameLength : NAME_SIZE
			);

			DecryptName(Name, NameLength);

			Name[NameLength] = '\0';
			FinalName = std::string(Name);
		}

		if (!IsValidUTF8(FinalName) || FinalName.empty()) FinalName = "FAIL";

		return FinalName;
	}

	inline void Init()
	{
		printf("\n[GName]\n");

		//GameData.GName.FNameXorKey = mem.ReadUseCache<UINT16>(GameData.Global.Base + Offset.FNameXorKey);
		//printf("FNameXorKey: 0x%llX\n", GameData.GName.FNameXorKey);

		File NamesDumpFile(GameData.Directory / "NamesDump.txt", "w");

		int NameCount = 0;
		int MaxCount = 100;

		for (size_t Index = 0; Index < MaxCount; Index++)
		{
			const auto Name = ResolveName(Index);
			if (Name != "FAIL")
			{
				NamesDumpFile.WriteFormat("[{:09d}] {}\n", Index, Name);
				NamesDumpFile.Flush();

				GameData.GName.FNameTables[Index] = Name;
				NameCount++;
				printf("\rNames: %d", NameCount);
			}
		}
		//printf("Names: %d\n", NameCount);
		printf("\n");

		/*const auto FNameItems = GetNameTables(5000000);

		for (const auto& Item : FNameItems)
		{
			if (!Item.IsError) {
				NamesDumpFile.WriteFormat("[{:09d}] {}\n", Item.ID, Item.FinalName);
				GameData.GName.FNameTables[Item.ID] = Item.FinalName;
				NameCount++;
				printf("\rNames: %d", NameCount);
			}
		}*/
	}
}