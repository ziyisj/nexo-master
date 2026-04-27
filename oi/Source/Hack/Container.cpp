#include "Container.h"
#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

void Container::Loop()
{
    Throttler Throttlered;

    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Container++;

        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Global.Data.bIsOpening = false;
            GameData.Global.Data.Entitys.DeadBodys.Clear();
            GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.Clear();
            GameData.Global.Data.Entitys.Containers.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, ContainerInfo> CacheItems = GameData.Global.Data.Entitys.CacheContainers.All();

        for (auto& pItem : CacheItems)
        {
            auto& Item = pItem.second;
            mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Item.RootComponent);
            // mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Item.RootComponentKeyIndex);
            // mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("OpeningPlayerId")), &Item.OpeningPlayerId);
            mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RepItemArrayItems")), &Item.ItemArrayItems);

            if (Item.Entity.DisplayName == XorStr("Computer"))
            {
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("Password")), &Item.PwdSum);
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("MorseCodeSuccessInfo")), &Item.bIsOpened);
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("HackPcMiniGameType")), &Item.HackPcMiniGameType);

                // mem.AddScatterRead(hScatter, Item.Address + 0xd50, &Item.OwnDuration);
                continue;
            }
            if (Item.Entity.DisplayName == XorStr("Storage Cabinet") || Item.Entity.DisplayName == XorStr("Cement Mixer") || Item.Entity.DisplayName == XorStr("Delta Shell") || Item.Entity.DisplayName == XorStr("Toilet") || Item.Entity.DisplayName == XorStr("Weapon Box"))
            {
                // auto name = GName::GetNameByAddr(mem.Read<uint64_t>(Item.Address + 0x58)); //Interactor_SingleItemContainer
                // std::cout << name << std::endl;
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("bFirstOpened")), &Item.bIsOpened);
                continue;
            }
            mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("bIsOpened")), &Item.bIsOpened);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& pItem : CacheItems)
        {
            auto& Item = pItem.second;

            Item.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Item.RootComponent);

            if (Item.HackPcMiniGameType == 1)
            {
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("FingerprintInfo")), &Item.bIsOpened);
                mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("FingerprintInfo")) + 0x18, &Item.FingerprintPassWordPtr);
            }

            mem.AddScatterRead(hScatter, Item.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")), &Item.Location);
            mem.AddScatterRead(hScatter, Item.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")) + 0x20, &Item.EncHandler);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& pItem : CacheItems)
        {
            auto& Item = pItem.second;

            if (Item.EncHandler.Index != 65535)
            {
                if (!GameData.UPTRDecrypt.bVEH)
                {
                    unsigned int* PTREncLocation = (unsigned int*)&Item.Location;
                    ENC::Decrypt(1, PTREncLocation, 0xC, Item.EncHandler.Index);
                }
                else
                {
                    MirrorProcess::VEHDecrypt(GameData.UPTRDecrypt.EncBase1, &Item.Location, 0xC, Item.EncHandler.Index);
                }

                if (Item.EncHandler.bEncrypted == 1 && (abs(Item.Location.X) > 1000000 || abs(Item.Location.Y) > 1000000 || abs(Item.Location.Z) > 1000000))
                {
                    // {
                    //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                    //     GameData.FuckEnc.Cache.clear();
                    // }
                    Utils::Log(3, XorStr("Container Location: %d (0x%llX) | X=%f, Y=%f, Z=%f"), Item.EncHandler.Index, Item.EncHandler.Index & 0x3FF, Item.Location.X, Item.Location.Y, Item.Location.Z);
                }
            }

            if (Item.HackPcMiniGameType == 1)
            {
                mem.AddScatterRead(hScatter, Item.FingerprintPassWordPtr, &Item.FFingerprintPassWord);
            }
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& pItem : CacheItems)
        {
            auto& Item = pItem.second;

            if (Item.HackPcMiniGameType == 1)
            {
                Item.FingerprintPassWord = Utils::UnicodeToAnsi(Item.FFingerprintPassWord.Buffer);
                Item.PwdSum = Utils::ProcessString(Item.FingerprintPassWord);
                // std::cout << Item.PwdSum << std::endl;
            }
        }

        std::unordered_map<uint64_t, ItemInfo> SaveItems;

        bool bIsOpening = Item::ReadItems(hScatter, CacheItems, SaveItems);

        GameData.Global.Data.Entitys.Containers = CacheItems;
        GameData.Global.Data.Entitys.ContainerItems = SaveItems;

        bool bIsOpeningByDeadBody = DeadBody::Update(hScatter);

        if (!bIsOpening && !bIsOpeningByDeadBody)
        {
            GameData.Global.Data.bIsOpening = false;
            GameData.Global.Data.Entitys.CurrentOpeningContainerBoxInfo.Clear();
        }
        else
        {
            GameData.Global.Data.bIsOpening = true;
        }

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