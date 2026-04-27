#include "DeadBody.h"
#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

bool DeadBody::Update(VMMDLL_SCATTER_HANDLE& hScatter)
{
    bool bIsOpening = false;

    auto CacheItems = GameData.Global.Data.Entitys.CacheDeadBodys.All();

    for (auto& pItem : CacheItems)
    {
        auto& Item = pItem.second;
        mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Item.RootComponent);
        // mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Item.RootComponentKeyIndex);
        mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("bLooted")), &Item.bIsOpened);
        mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("PlayerName_Buffer")), &Item.PlayerName_BufferPtr);
        // mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("OpeningPlayerId")), &Item.OpeningPlayerId);
        mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("RepItemArrayItems")), &Item.ItemArrayItems);
        // mem.AddScatterRead(hScatter, Item.Address + 0x9c, &Item.ReplicatedMovement);
    }
    mem.ExecuteReadScatter(hScatter);

    for (auto& pItem : CacheItems)
    {
        auto& Item = pItem.second;

        Item.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Item.RootComponent);

        mem.AddScatterRead(hScatter, Item.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")), &Item.Location);
        mem.AddScatterRead(hScatter, Item.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")) + 0x20, &Item.EncHandler);

        mem.AddScatterRead(hScatter, Item.PlayerName_BufferPtr, &Item.FPlayerName_Buffer);
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
                Utils::Log(3, XorStr("DeadBody Location: %d (0x%llX) | X=%f, Y=%f, Z=%f"), Item.EncHandler.Index, Item.EncHandler.Index & 0x3FF, Item.Location.X, Item.Location.Y, Item.Location.Z);
            }
            // Utils::Log(1, "%d(%llx) %d | %f %f %f", Item.EncHandler.Index, (Item.EncHandler.Index ^ 0x1B) & 0x3FF, Item.EncHandler.bEncrypted, Item.Location.X, Item.Location.Y, Item.Location.Z);
        }

        const float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
        // Utils::Log(1, "%p %f %f %f %f", Item.RootComponent, Distance, Item.Location.X, Item.Location.Y, Item.Location.Z);
        Item.PlayerName = Utils::UnicodeToAnsi(Item.FPlayerName_Buffer.Buffer);
        if (Item.PlayerName.find(XorStr("Game/StringTables/STF")) != std::string::npos)
        {
            Item.bIsAI = true;
        }
    }
    mem.ExecuteReadScatter(hScatter);

    std::unordered_map<uint64_t, ItemInfo> SaveItems;
    bIsOpening = Item::ReadItems(hScatter, CacheItems, SaveItems);

    GameData.Global.Data.Entitys.DeadBodys = CacheItems;
    GameData.Global.Data.Entitys.DeadBodyItems = SaveItems;

    return bIsOpening;
}