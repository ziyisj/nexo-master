#include "Actor.h"
#include "UPTRDecrypt.h"
#include <Hack/PhysXMirror.h>
#include "FuckEnc.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

void Actor::Loop()
{
    Throttler Throttlered;

    struct LevelInfo
    {
        uint64_t Address{};
        TArray<uint64_t> ActorArray{};
    };

    struct ActorArrayItem
    {
        uint64_t Address{};
        uint64_t Actor{};
        bool bNet{};
    };

    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Actor++;

        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Global.Data.Entitys.CacheActors.Clear();
            GameData.Global.Data.Entitys.CachePlayers.Clear();
            GameData.Global.Data.Entitys.CacheContainers.Clear();
            GameData.Global.Data.Entitys.CacheItems.Clear();
            GameData.Global.Data.Entitys.CacheDeadBodys.Clear();
            GameData.Global.Data.Entitys.CacheCodedLocks.Clear();
            GameData.Global.Data.Entitys.CacheThrows.Clear();
            GameData.Global.Data.Entitys.CacheDebugActors.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        Throttlered.executeTask("UpdateCacheActors", std::chrono::milliseconds(8000), [] { GameData.Global.Data.Entitys.CacheActors.Clear(); });

        std::unordered_map<uint64_t, ActorInfo> Actors{};
        std::unordered_map<uint64_t, PlayerInfo> CachePlayers{};
        std::unordered_map<uint64_t, ContainerInfo> CacheContainers{};
        std::unordered_map<uint64_t, ItemInfo> CacheItems{};
        std::unordered_map<uint64_t, DeadBodyInfo> CacheDeadBodys{};
        std::unordered_map<uint64_t, CodedLockInfo> CacheCodedLocks{};
        std::unordered_map<uint64_t, ThrowInfo> CacheThrows{};

        std::unordered_map<uint64_t, DebugActorInfo> CacheDebugActors{};

        auto CacheActors = GameData.Global.Data.Entitys.CacheActors.All();

        if (true)
        {
            std::vector<LevelInfo> LevelInfos{};
            std::vector<ActorArrayItem> ActorArray{};

            auto Levels = mem.Read<TArray<uint64_t>>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("Levels")));

            if (!Utils::ValidPtr((uint64_t)Levels.GetData()) && Levels.Size() > 0 && Levels.Size() < 100000)
            {
                for (const auto& Level : Levels.GetVector())
                {
                    LevelInfo Info{};
                    Info.Address = Level;
                    LevelInfos.push_back(Info);
                }
            }

            for (auto& Level : LevelInfos)
            {
                mem.AddScatterRead(hScatter, Level.Address + Offset::GetEncryptedOffset(XorStr("Actor")), &Level.ActorArray);
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Level : LevelInfos)
            {
                if (!Utils::ValidPtr((uint64_t)Level.ActorArray.GetData()) && Level.ActorArray.Size() > 0 && Level.ActorArray.Size() < 100000)
                {
                    for (int i = 0; i < Level.ActorArray.Size(); ++i)
                    {
                        ActorArray.push_back({(uint64_t)Level.ActorArray.GetData() + i * 8});
                    }
                }

                if (GameData.Decrypt.Key != 0 && Utils::ValidPtr((uint64_t)Level.ActorArray.GetData()) && Level.ActorArray.Size() > 0 && Level.ActorArray.Size() < 100000)
                {
                    //Utils::Log(4, "Actors %p %p", (uint64_t)Level.ActorArray.GetData(), Level.Address);
                    uint64_t DecryptIndicator = Decrypt::Indicator((uint64_t)Level.ActorArray.GetData(), GameData.Decrypt.Key);
                    for (int i = 0; i < Level.ActorArray.Size(); ++i)
                    {
                        ActorArray.push_back({(uint64_t)DecryptIndicator + i * 8});
                    }
                }
            }

            for (auto& Item : ActorArray)
            {
                mem.AddScatterRead(hScatter, Item.Address, &Item.Actor);
            }
            mem.ExecuteReadScatter(hScatter);

            if (GameData.Global.bEncrypt)
            {
                if (GameData.Config.Window.Server == 0)
                {
                    std::vector<ActorArrayItem> UnencryptedActorArray{};

                    auto UnencryptedObjects = mem.Read<TArray<uint64_t>>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("UnencryptedObjects")));
                    if (!Utils::ValidPtr((uint64_t)UnencryptedObjects.GetData()) && UnencryptedObjects.Size() > 0 && UnencryptedObjects.Size() < 100000)
                    {
                        for (int i = 0; i < UnencryptedObjects.Size(); ++i)
                        {
                            UnencryptedActorArray.push_back({(uint64_t)UnencryptedObjects.GetData() + i * 24});
                        }
                    }

                    auto InteractorComponent = mem.Read<uint64_t>(GameData.Global.AcknowledgedPawn + Offset::GetEncryptedOffset(XorStr("InteractorComponent"))); 
                    auto InventoryActors = mem.Read<TArray<uint64_t>>(InteractorComponent + Offset::GetEncryptedOffset(XorStr("PickupActors")));
                    auto PickupActors = mem.Read<TArray<uint64_t>>(InteractorComponent + Offset::GetEncryptedOffset(XorStr("PickupActors")) + 0x10);

                    //Utils::Log(1, "%p %d %d", InteractorComponent, InventoryActors.Size(), PickupActors.Size());

                    if (!Utils::ValidPtr((uint64_t)InventoryActors.GetData()) && InventoryActors.Size() > 0 && InventoryActors.Size() < 100000)
                    {
                        for (int i = 0; i < InventoryActors.Size(); ++i)
                        {
                            UnencryptedActorArray.push_back({(uint64_t)InventoryActors.GetData() + i * 8});
                        }
                    }
                    if (!Utils::ValidPtr((uint64_t)PickupActors.GetData()) && PickupActors.Size() > 0 && PickupActors.Size() < 100000)
                    {
                        for (int i = 0; i < PickupActors.Size(); ++i)
                        {
                            UnencryptedActorArray.push_back({(uint64_t)PickupActors.GetData() + i * 8});
                        }
                    }

                    for (auto& Item : UnencryptedActorArray)
                    {
                        mem.AddScatterRead(hScatter, Item.Address, &Item.Actor);
                    }
                    mem.ExecuteReadScatter(hScatter);

                    for (auto& Item : UnencryptedActorArray)
                    {
                        if (Utils::ValidPtr2(Item.Actor))
                            continue;
                        // Utils::Log(4, "Item.Actor: %p", Item.Actor);
                        ActorArray.push_back({Item.Actor, Item.Actor});
                    }
                }
            }

            if (!Utils::ValidPtr(GameData.Global.AcknowledgedPawn))
            {
                ActorArray.push_back({GameData.Global.AcknowledgedPawn, GameData.Global.AcknowledgedPawn});
            }

            // Utils::Log(4, "GameData.Global.AcknowledgedPawn: %p %d", GameData.Global.AcknowledgedPawn, mem.Read<int>(GameData.Global.AcknowledgedPawn + Offset::GetEncryptedOffset(XorStr("ObjID"))));

            if (ActorArray.size() > 0)
            {
                for (const auto& Item : ActorArray)
                {
                    if (!Utils::ValidPtr(Item.Actor))
                    {
                        ActorInfo ActorInfo;
                        ActorInfo.Address = Item.Actor;

                        Actors[ActorInfo.Address] = ActorInfo;
                    }
                }

                for (auto& Item : Actors)
                {
                    auto& Actor = Item.second;

                    if (CacheActors.count(Actor.Address))
                    {
                        Actor = CacheActors[Actor.Address];
                        continue;
                    }

                    mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("ObjID")), &Actor.ObjID);
                    // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Actor.RootComponent);
                }
                mem.ExecuteReadScatter(hScatter);

                for (auto& Item : Actors)
                {
                    auto& Actor = Item.second;

                    if (Actor.ObjID <= 0)
                    {
                        continue;
                    }

                    Actor.Entity = GName::GetInfoById(Actor.ObjID);

                    if (Actor.Entity.IsWide)
                    {
                        {
                            auto Entity = GName::GetInfoByContains(Actor.Entity.Name, EntityType::Container);
                            if (Entity.Type == EntityType::Container)
                            {
                                Actor.Entity.Type = Entity.Type;
                                Actor.Entity.DisplayName = Entity.DisplayName;
                                Actor.Entity.ID = Entity.ID;
                            }
                        }
                    }

                    if (Actor.Entity.Name.find(XorStr("BP_InventoryPickup_")) != std::string::npos)
                    {
                        Actor.Entity.Type = EntityType::Item;
                    }

                    if (Actor.Entity.Name != XorStr("BP_PlayerExit_Trigger1") && Actor.Entity.Name != XorStr("BP_PlayerExit_Trigger2") && Actor.Entity.Name != XorStr("BP_PlayerExit_Trigger3") && (Actor.Entity.Name.find(XorStr("BP_ExitTrigger")) != std::string::npos || (Actor.Entity.Name.find(XorStr("BP_PlayerExit")) != std::string::npos && Actor.Entity.Name.find(XorStr("Trigger")) != std::string::npos))
                        //|| Actor.Entity.Name == XorStr("BP_Interact_Computer_Tide2")
                        /*|| Actor.Entity.Name == XorStr("BP_PlayerExit_HaavkTrigger")
                        || Actor.Entity.Name == XorStr("BP_PlayerExit_DriveTrigger")*/
                    )
                    {
                        Actor.Entity.Type = EntityType::ExitTrigger;
                    }

                    if (Actor.Entity.Name == XorStr("BP_PlayerExit_Trigger1") || Actor.Entity.Name == XorStr("BP_PlayerExit_Trigger2") || Actor.Entity.Name == XorStr("BP_PlayerExit_Trigger3") || (Actor.Entity.Name.find(XorStr("BP_PlayerExit")) != std::string::npos && Actor.Entity.Name.find(XorStr("Trigger")) == std::string::npos))
                    {
                        Actor.Entity.Type = EntityType::PlayerExit;
                    }

                    // BP_Interact_Door_AcquireCard
                    // if (Actor.Entity.Name.find(XorStr("BP_Interact_Door")) != std::string::npos) {
                    //	//Actor.Entity.Type = EntityType::KeyRoom;
                    // }

                    // if (Actor.Entity.Name.find(XorStr("BP_Interactor_RotateDoor")) != std::string::npos) {
                    //	//Actor.Entity.Type = EntityType::KeyRoom;
                    // }

                    switch (Actor.Entity.Type)
                    {
                    case EntityType::Player:
                    case EntityType::AI:
                    case EntityType::BOSS:
                    {
                        // std::cout << Actor.Entity.Name << std::endl;
                        PlayerInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;
                        CachePlayers[Item.Address] = Item;
                    }
                    break;
                    case EntityType::Container:
                    {
                        ContainerInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;
                        CacheContainers[Item.Address] = Item;
                    }
                    break;
                    case EntityType::Item:
                    {
                        ItemInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;
                        CacheItems[Item.Address] = Item;
                    }
                    break;
                    case EntityType::DeadBody:
                    {
                        // std::cout << Actor.Entity.Name << std::endl;
                        DeadBodyInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;
                        CacheDeadBodys[Item.Address] = Item;
                    }
                    break;
                    case EntityType::CodedLock:
                    case EntityType::KeyRoom:
                    case EntityType::Door:
                    case EntityType::ExitTrigger:
                    case EntityType::PlayerExit:
                    {
                        CodedLockInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;
                        CacheCodedLocks[Item.Address] = Item;
                    }
                    break;
                    case EntityType::Throw:
                    {
                        ThrowInfo Item{};
                        Item.Address = Actor.Address;
                        Item.Entity = Actor.Entity;

                        CacheThrows[Item.Address] = Item;
                    }
                    break;
                    default:
                    {
                        //&& Actor.Entity.Name != "BP_AirDropGenerator8"
                        if (GameData.Config.ESP.Debug)
                        {
                            // if (Actor.Entity.Name.find(XorStr("BP_Interact_Computer")) != std::string::npos)
                            //{
                            //	auto Pwd = mem.Read<int>(Actor.Address + Offset::GetEncryptedOffset(XorStr("Password")));
                            //	auto HackPcMiniGameType = mem.Read<uint8_t>(Actor.Address + 0xdc8);
                            //	Utils::Log(4, "%d %d", Pwd, HackPcMiniGameType);
                            //	/*auto D = mem.Read<uint64_t>(Actor.Address + 0x50);
                            //	std::cout << GName::GetNameByAddr(D) << std::endl;*/
                            // }
                            DebugActorInfo Item{};
                            Item.Address = Actor.Address;
                            Item.Entity = Actor.Entity;
                            CacheDebugActors[Item.Address] = Item;
                        }
                    }
                    break;
                    }
                }
            }
        }

        GameData.Global.Data.Entitys.CacheActors = Actors;
        GameData.Global.Data.Entitys.CachePlayers = CachePlayers;
        GameData.Global.Data.Entitys.CacheContainers = CacheContainers;
        GameData.Global.Data.Entitys.CacheItems = CacheItems;
        GameData.Global.Data.Entitys.CacheDeadBodys = CacheDeadBodys;
        GameData.Global.Data.Entitys.CacheCodedLocks = CacheCodedLocks;
        GameData.Global.Data.Entitys.CacheThrows = CacheThrows;

        GameData.Global.Data.Entitys.CacheDebugActors = CacheDebugActors;

        mem.CloseScatterHandle(hScatter);

        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
}

void Actor::LoopThrows()
{
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Throw++;

        if (GameData.Process.GameState != FGameState::InGame || !GameData.Config.Throw.Enable)
        {
            GameData.Global.Data.Entitys.Throws.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, ThrowInfo> Actors = GameData.Global.Data.Entitys.CacheThrows.All();

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;
            // if (Actor.Entity.DisplayName == XorStr("Sonic Drone"))
            //{
            //	/*GName::DebugActorNames(Actor.Address, 0x0, 0x100);*/
            //	std::cout << GName::GetNameByAddr(mem.Read<uint64_t>(Actor.Address + 0x50)) << std::endl;
            // }

            // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("Mesh")), &Actor.Mesh);
            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Actor.RootComponent);
            // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Actor.RootComponentKeyIndex);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            Actor.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Actor.RootComponent);

            mem.AddScatterRead(hScatter, Actor.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")), &Actor.Location);
            mem.AddScatterRead(hScatter, Actor.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentLocation")) + 0x20, &Actor.EncHandler);

            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("bActorIsBeingDestroyed")), &Actor.bActorIsBeingDestroyed);

            if (Actor.Entity.bAimBot)
            {
                // if (Actor.Entity.DisplayName == XorStr("Flash Drone")) {
                //	//bHidden == 65
                //	mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("bStopFly")), &Actor.bStopFly);
                // }
                // if (Actor.Entity.DisplayName == XorStr("Sonic Trap"))
                //{
                //	mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("bIsPreDestroyed")), &Actor.bIsPreDestroyed);
                // }
                ///*if (Actor.Entity.DisplayName == XorStr("Sonic Drone"))
                //{
                //	mem.AddScatterRead(hScatter, Actor.Address + 0x4d8, &Actor.bStopFly);
                //}*/

                mem.AddScatterRead(hScatter, Actor.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentVelocity")), &Actor.ComponentVelocity);
            }
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
            }

            if (Actor.bActorIsBeingDestroyed == 3)
            {
                Actor.Entity.bAimBot = false;
            }

            if (Actor.Entity.DisplayName == XorStr("ThrowPerviewDynamicActor"))
            {
                GameData.Global.Data.ThrowPerviewDynamicActor = Actor;
            }

            float Distance = GameData.Global.Data.Camera.Location.Distance(Actor.Location) / 100.0f;

            if (Distance <= GameData.Config.Throw.MaxDistance)
            {
                Actor.bVisible = !PhysXMirror::RayCast(Actor.Location, PlayerInfo{});
            }
        }

        GameData.Global.Data.Entitys.Throws = Actors;

        mem.CloseScatterHandle(hScatter);

        std::this_thread::sleep_for(std::chrono::milliseconds(6));
    }
}

void Actor::LoopCodedLocks()
{
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.CodedLock++;

        if (GameData.Process.GameState != FGameState::InGame || !GameData.Config.CodedLock.Enable)
        {
            GameData.Global.Data.Entitys.CodedLocks.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, CodedLockInfo> Actors = GameData.Global.Data.Entitys.CacheCodedLocks.All();

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;
            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Actor.RootComponent);
            // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Actor.RootComponentKeyIndex);

            if (Actor.Entity.Type == EntityType::CodedLock)
            {
                mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("PwdSum")), &Actor.PwdSum);
            }

            if (Actor.Entity.Type == EntityType::PlayerExit)
            {
                // mem.AddScatterRead(hScatter, Actor.Address + 0xb1c, &Actor.ExitStage);
                // auto name = GName::GetNameByAddr(mem.Read<uint64_t>(Actor.Address + 0x58)); //APlayerExitBase
                // std::cout << name << std::endl;
            }

            if (Actor.Entity.Type == EntityType::ExitTrigger)
            {
                // auto name = GName::GetNameByAddr(mem.Read<uint64_t>(Actor.Address + 0x50));
                // auto CountDownState = mem.Read<UINT32>(Actor.Address + 0xc28);
                // Utils::Log(1, "%p %s %s %d", Actor.Address, Actor.Entity.Name.c_str(), name.c_str(), CountDownState);
                // mem.AddScatterRead(hScatter, Actor.Address + 0x678, &Actor.DoorType);

                /*for (size_t i = 0; i < 0x100; i++)
                {
                    auto Add = mem.Read<uint64_t>(Actor.Address + i);
                    auto ObjID = mem.Read<UINT32>(Add + Offset::GetEncryptedOffset(XorStr("ObjID")));
                    auto Name = GName::GetNameById(ObjID);
                    std::cout << Name << std::endl;
                }*/
            }

            if (Actor.Entity.Type == EntityType::KeyRoom)
            {
                // mem.AddScatterRead(hScatter, Actor.Address + 0x6a8, &Actor.CodedLock);

                // auto name = GName::GetNameByAddr(mem.Read<uint64_t>(Actor.Address + 0x58)); //Interactor_DoorBase
                // std::cout << name << std::endl;
                /*auto CodedLock = mem.Read<uint64_t>(Actor.Address + 0xfc8);
                std::cout << DoorType << std::endl;*/
            }
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            Actor.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Actor.RootComponent);

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
            }
        }

        GameData.Global.Data.Entitys.CodedLocks = Actors;

        mem.CloseScatterHandle(hScatter);

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Actor::DebugLoop()
{
    Throttler Throttlered;
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Debug++;

        if (GameData.Process.GameState != FGameState::InGame || !GameData.Config.ESP.Debug)
        {
            GameData.Global.Data.Entitys.DebugActors.Clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, DebugActorInfo> Actors = GameData.Global.Data.Entitys.CacheDebugActors.All();

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;
            mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Actor.RootComponent);
            // mem.AddScatterRead(hScatter, Actor.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Actor.RootComponentKeyIndex);
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : Actors)
        {
            auto& Actor = Item.second;

            Actor.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Actor.RootComponent);

            // std::cout << GName::GetNameByAddr(Actor.RootComponent) << std::endl;
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
            }
        }

        GameData.Global.Data.Entitys.DebugActors = Actors;

        mem.CloseScatterHandle(hScatter);

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}