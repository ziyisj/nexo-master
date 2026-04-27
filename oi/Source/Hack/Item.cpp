#include "Item.h"
#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

void Item::Loop()
{
    Throttler Throttlered;
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Item++;

        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Global.Data.Entitys.Items.Clear();
            GameData.Global.Data.Entitys.DeadBodyItems.Clear();
            GameData.Global.Data.Entitys.ContainerItems.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, ItemInfo> Actors = GameData.Global.Data.Entitys.CacheItems.All();

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;
            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Actor.RootComponent);
            // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Actor.RootComponentKeyIndex);
            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("PickupItemInfo")) + Offset::GetEncryptedOffset(XorStr("ItemID")), &Actor.CacheItemID);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            Actor.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Actor.RootComponent);

            Actor.ItemID = MakeItemID(Actor.CacheItemID);
            // if (Actor.ItemID == 17010000017) continue;
            if (Actor.ItemID <= 0)
                continue;
            Actor.Info = GetItemDataTableInfo(Actor.ItemID);
            if (Actor.Info.Quality > 6)
                Actor.Info.Quality = 0;
            if (Actor.Info.Quality < 0)
                Actor.Info.Quality = 0;
            Actor.Name = GetItemTranslate(Actor.ItemID);

            if (Actor.Info.InitialGuidePrice <= 0)
            {
                mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("PickupItemInfo")) + Offset::GetEncryptedOffset(XorStr("ItemRow")), &Actor.ItemsRow);
            }

            mem.AddScatterRead(hScatter, Actor.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")), &Actor.Location);
            mem.AddScatterRead(hScatter, Actor.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")) + 0x20, &Actor.EncHandler);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            if (Actor.EncHandler.Index != 65535)
            {
                if (!GameData.UPTRDecrypt.bVEH)
                {
                    unsigned int* PTREncLocation = (unsigned int*)&Actor.Location;
                    ENC::Decrypt(1, PTREncLocation, 0xC, Actor.EncHandler.Index);
                }
                else
                {
                    MirrorProcess::VEHDecrypt(GameData.UPTRDecrypt.EncBase1, &Actor.Location, 0xC, Actor.EncHandler.Index);
                }

                if (Actor.EncHandler.bEncrypted == 1 && (abs(Actor.Location.X) > 1000000 || abs(Actor.Location.Y) > 1000000 || abs(Actor.Location.Z) > 1000000))
                {
                    // {
                    //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                    //     GameData.FuckEnc.Cache.clear();
                    //     Utils::Log(1, XorStr("Clear Enc Read Cache Sucesss."));
                    // }
                    Utils::Log(3, XorStr("Item Location: %d (0x%llX) | X=%f, Y=%f, Z=%f"), Actor.EncHandler.Index, Actor.EncHandler.Index & 0x3FF, Actor.Location.X, Actor.Location.Y, Actor.Location.Z);
                }
            }

            if (Actor.ItemID <= 0)
                continue;

            if (Utils::ValidPtr(Actor.ItemsRow))
                continue;

            if (Actor.Info.InitialGuidePrice <= 0)
            {
                mem.AddScatterRead(hScatter, Actor.ItemsRow + Offset::GetEncryptedOffset(XorStr("Quality")), &Actor.Info.Quality);
                mem.AddScatterRead(hScatter, Actor.ItemsRow + Offset::GetEncryptedOffset(XorStr("InitialGuidePrice")), &Actor.Info.InitialGuidePrice);
            }
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            if (Actor.ItemID <= 0)
                continue;

            if (Utils::ValidPtr(Actor.ItemsRow))
                continue;

            auto Info = GetItemDataTableInfo(Actor.ItemID);
            if (Info.InitialGuidePrice <= 0)
            {
                if (Actor.Info.Quality > 6)
                    Actor.Info.Quality = 0;
                if (Actor.Info.Quality < 0)
                    Actor.Info.Quality = 0;

                SetItemDataTableInfo(Actor.ItemID, Actor.Info);
            }
        }

        GameData.Global.Data.Entitys.Items = Actors;

        mem.CloseScatterHandle(hScatter);

        if (GameData.Global.Data.bShowMouseCursor)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        else
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
    }
}