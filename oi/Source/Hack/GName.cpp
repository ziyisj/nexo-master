#include "GName.h"

void GName::Init()
{
	GameData.Global.Data.Entitys.InfosById.Clear();
	GameData.Global.Data.Entitys.Infos.Clear();

	EntityListsInit();
}

void GName::DecryptName(char* Name, const uint16_t& NameLength)
{
	uint64_t Index = 9 * (NameLength / 9);

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

void GName::DecryptWideName(wchar_t* Name, const uint16_t& NameLength)
{
	uint64_t Index = 9 * (NameLength / 9);
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

std::string GName::ResolveName(uint64_t ID)
{
	std::string FinalName = "FAIL";

	const unsigned int ChunkOffset = ID >> 18;
	const unsigned int NameOffset = 0x3FFFF & ID;

	uint64_t NamePoolChunk = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("GNames")) + 8 * (ChunkOffset + 1)) + 2 * NameOffset;

	uint16_t PoolChunkHeader = mem.Read<uint16_t>(NamePoolChunk);

	uint16_t NameLength = (PoolChunkHeader >> 6);

	char Name[NAME_SIZE + 1] = { 0 };
	wchar_t WideName[NAME_SIZE + 1] = { 0 };

	if (NameLength > 256 || NameLength <= 0 || NameLength > NAME_SIZE)
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

	if (FinalName.empty()) FinalName = "FAIL";

	if (FinalName == "FAIL") return FinalName;

	auto Info = GameData.Global.Data.Entitys.Infos.Get(FinalName);
	Info.ID = ID;
	Info.Name = FinalName;
	Info.IsWide = bIsWide;
	GameData.Global.Data.Entitys.Infos.Set(FinalName, Info);
	GameData.Global.Data.Entitys.InfosById.Set(ID, Info);

	return FinalName;
}

std::string GName::GetNameById(uint64_t ID)
{
	const auto Info = GameData.Global.Data.Entitys.InfosById.Get(ID);
	if (!Info.Name.empty())
	{
		return Info.Name;
	}

	return ResolveName(ID);
}

std::string GName::GetNameByAddr(uint64_t Addr)
{
	auto ObjID = mem.Read<UINT32>(Addr + Offset::GetEncryptedOffset(XorStr("ObjID")));

	return GetNameById(ObjID);
}

void GName::DebugActorNames(uint64_t Addr, uint32_t Start, uint32_t End, bool TwoRead)
{
	for (size_t i = Start; i < End; i++)
	{
		auto Cur = mem.Read<uint64_t>(Addr + i);
		if (Utils::ValidPtr(Cur)) continue;
		if (TwoRead)
		{
			Cur = mem.Read<uint64_t>(Cur);
			if (Utils::ValidPtr(Cur)) continue;
		}
		auto Name = GetNameByAddr(Cur);
		if (Name == "" || Name == "FAIL" || Name == "None") continue;
		Utils::Log(4, XorStr("[DebugActorNames][0x%llx + 0x%llx] ="), Addr, i);
		std::cout << Name << std::endl;

	}
}

EntityInfo GName::GetInfoById(uint64_t ID)
{
	const auto Info = GameData.Global.Data.Entitys.InfosById.Get(ID);
	if (Info.ID == 0)
	{
		ResolveName(ID);
	}
	else {
		return Info;
	}

	return GameData.Global.Data.Entitys.InfosById.Get(ID);
}

EntityInfo GName::GetInfoByContains(const std::string& Name, EntityType targetType)
{
	// 获取锁并访问Map
	GameData.Global.Data.Entitys.Infos.GetReadLock();
	auto Infos = GameData.Global.Data.Entitys.Infos.Map();

	// 默认信息（未找到时返回）
	EntityInfo defaultInfo{ "Unknown", EntityType::Unknown };

	// 模糊匹配逻辑 - 找出Infos中key包含在传入Name中的项
	for (const auto& pair : *Infos)
	{
		const std::string& key = pair.first;
		const EntityInfo& info = pair.second;

		// 检查类型是否匹配（如果指定了类型）
		if (targetType != EntityType::Unknown && info.Type != targetType)
			continue;

		// 检查传入的Name是否包含key
		if (Name.find(key) != std::string::npos)
		{
			// 找到匹配项，立即返回
			GameData.Global.Data.Entitys.Infos.ReleaseReadLock();
			return info;
		}
	}

	// 释放锁
	GameData.Global.Data.Entitys.Infos.ReleaseReadLock();

	// 未找到匹配项，返回默认信息
	return defaultInfo;
}

std::string GName::GetFText(uint64_t Addr)
{
	uint64_t NameEntry = mem.Read<uint64_t>(Addr + 0x18);
	NameEntry = mem.Read<uint64_t>(NameEntry + 0x30);
	NameEntry = mem.Read<uint64_t>(NameEntry + 0x10);
	char Name[64] = { 0 };
	mem.Read(NameEntry, Name, 64);
	return Utils::UnicodeToAnsi(Name);
}

std::string GName::GetFString(uint64_t Addr)
{
	char Name[64] = { 0 };
	mem.Read(Addr, Name, 64);
	return Utils::UnicodeToAnsi(Name);
}