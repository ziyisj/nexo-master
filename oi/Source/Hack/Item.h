#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Utils/XorString.h>

#include <Hack/Process.h>
#include <Hack/GName.h>
#include <Utils/FLoop.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>

class Item
{
public:
	static void Loop();

	template<typename T>
	static bool ReadItems(
		VMMDLL_SCATTER_HANDLE& hScatter,
		std::unordered_map<uint64_t, T>& CacheItems,
		std::unordered_map<uint64_t, ItemInfo>& SaveItems
	)
	{
		bool bIsOpening = false;

		for (auto& pItem : CacheItems)
		{
			auto& Item = pItem.second;

			if (Item.Entity.DisplayName == XorStr("Computer")) continue;
			if (Item.Entity.DisplayName == XorStr("Storage Cabinet")) continue;
			if (Item.Entity.DisplayName == XorStr("Cement Mixer")) continue;
			if (Item.Entity.DisplayName == XorStr("Weapon Box")) continue;

			mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("CurrentLootingPlayers")), &Item.CurrentLootingPlayersTArray);

			if (!Utils::ValidPtr(Item.ItemArrayItems.GetData()) && Item.ItemArrayItems.Size() > 0 && Item.ItemArrayItems.Size() < 100)
			{
				for (size_t i = 0; i < Item.ItemArrayItems.Size(); i++)
				{
					auto ItemRow = (uint64_t)Item.ItemArrayItems.GetData() + (i * sizeof(FInventoryItemInfo));
					if (GameData.Config.Window.Server != 0)
					{
						ItemRow = (uint64_t)Item.ItemArrayItems.GetData() + (i * 0x5b0);
					}
					Item.ItemsID[ItemRow] = {};
					mem.AddScatterRead(hScatter, ItemRow + Offset::GetEncryptedOffset(XorStr("ItemID")), &Item.ItemsID[ItemRow]);
				}
			}
		}
		mem.ExecuteReadScatter(hScatter);

		for (auto& pItem : CacheItems)
		{
			auto& Item = pItem.second;

			if (!Utils::ValidPtr((uint64_t)Item.CurrentLootingPlayersTArray.GetData()) && Item.CurrentLootingPlayersTArray.Size() > 0 && Item.CurrentLootingPlayersTArray.Size() < 100)
			{
				Item.CurrentLootingPlayers.resize(Item.CurrentLootingPlayersTArray.Size());

				for (size_t i = 0; i < Item.CurrentLootingPlayersTArray.Size(); i++)
				{
					mem.AddScatterRead(hScatter, (uint64_t)Item.CurrentLootingPlayersTArray.GetData() + i * 8, &Item.CurrentLootingPlayers[i]);
				}
			}
			int Index = 1;
			if (Item.ItemsID.size() > 0)
			{
				for (auto& ItemID : Item.ItemsID)
				{
					if (ItemID.second.Category == 9999999) // 9999999 - 9999
					{
						ItemID.second.Sequence = Index;
						Index++;
					}

					auto ID = MakeItemID(ItemID.second);

					//std::cout << ID << std::endl; //99999999999
					if (ID == 28101250014 || ID == 18100000014 || ID == 13460030074 || ID == 18100000015 || ID == 18100000012) continue;
					if (ID > 0) {
						auto Info = GetItemDataTableInfo(ID);
						//Info.InitialGuidePrice = 0;
						if (Info.Quality > 6) Info.Quality = 0;
						if (Info.Quality < 0) Info.Quality = 0;
						if (Info.InitialGuidePrice <= 0 && ItemID.second.Category != 9999999)
						//if (Info.InitialGuidePrice <= 0)
						{
							Item.ItemsRow[ItemID.first] = 0;
							mem.AddScatterRead(hScatter, ItemID.first + Offset::GetEncryptedOffset(XorStr("ItemRow")), &Item.ItemsRow[ItemID.first]);
						}
						else {
							Item.Items[ID].push_back(Info);
						}
					}
				}
			}
		}
		mem.ExecuteReadScatter(hScatter);

		for (auto& pItem : CacheItems)
		{
			auto& Item = pItem.second;
			if (Item.ItemsID.size() > 0)
			{
				for (auto& ItemID : Item.ItemsID)
				{
					const auto ID = MakeItemID(ItemID.second);
					if (ID > 0) {
						auto Info = GetItemDataTableInfo(ID);
						//Info.InitialGuidePrice = 0;
						if (Info.InitialGuidePrice <= 0 && ItemID.second.Category != 9999999)
						//if (Info.InitialGuidePrice <= 0)
						{
							if (!Utils::ValidPtr(Item.ItemsRow[ItemID.first])) {
								ItemDataTableInfo* ItemInfo = &(Item.Items[ID].emplace_back(Info));

								mem.AddScatterRead(hScatter, Item.ItemsRow[ItemID.first] + Offset::GetEncryptedOffset(XorStr("Quality")), &ItemInfo->Quality);
								mem.AddScatterRead(hScatter, Item.ItemsRow[ItemID.first] + Offset::GetEncryptedOffset(XorStr("InitialGuidePrice")), &ItemInfo->InitialGuidePrice);
							}
						}
					}
				}
			}
		}
		mem.ExecuteReadScatter(hScatter);

		int Index = 0;

		for (auto& pItem : CacheItems)
		{
			auto& Item = pItem.second;
			for (auto& v : Item.Items)
			{
				auto Info = GetItemDataTableInfo(v.first);

				for (auto& d : v.second)
				{
					if (Info.Quality > 6) Info.Quality = 0;
					if (Info.Quality < 0) Info.Quality = 0;
					if (Info.InitialGuidePrice <= 0)
					{
						d.ItemID = v.first;
						SetItemDataTableInfo(v.first, d);
					}
					ItemInfo NewItemInfo{};
					NewItemInfo.Entity = Item.Entity;
					NewItemInfo.Name = GetItemTranslate(v.first);
					NewItemInfo.Location = Item.Location;
					NewItemInfo.Info = Info;
					NewItemInfo.ItemID = v.first;
					SaveItems[Index] = NewItemInfo;

					Item.InitialGuidePrice += d.InitialGuidePrice;
					Index++;
				}
			}
		}

		for (auto& pItem : CacheItems)
		{
			auto& Item = pItem.second;

			for (auto& Uin : Item.CurrentLootingPlayers)
			{
				if (GameData.Global.Data.LocalPlayerInfo.PlayerState.Uin > 0 && GameData.Global.Data.LocalPlayerInfo.PlayerState.Uin == Uin)
				{
					Item.bIsSelfOpening = true;
					bIsOpening = true;
					break;
				}
			}

			if (Item.bIsSelfOpening)
			{
				GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo = {
					{0, { Item.InitialGuidePrice, Item.Items }}
				};
			}
		}

		return bIsOpening;
	}
};