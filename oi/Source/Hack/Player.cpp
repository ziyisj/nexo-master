#include "Player.h"
#include "Decrypt.h"
#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

void Player::Loop()
{
    Throttler Throttlered;
    Throttler ThrottleredSleep;
    std::unordered_map<uint64_t, PlayerInfo> LocalPlayers{};
    std::unordered_map<uint64_t, PlayerStateInfo> PlayerStates{};

    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Player++;

        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Global.Data.AlivePlayer = 0;
            GameData.Global.Data.EarlyWarningPlayer = 0;
            GameData.Global.Data.EarlyWarningPlayerDistance = 0;
            GameData.Global.Data.Entitys.Players.Clear();
            GameData.Global.Data.Entitys.PlayerStates.Clear();
            GameData.Global.Data.LocalPlayerInfo = {};
            LocalPlayers.clear();
            PlayerStates.clear();
            GameData.EnemyInfoMap.clear();
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        // Timer timer("UpdateLocalPlayers");

        /*for (size_t i = 0; i < 0x100; i++)
        {
            auto Addr = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.Address + i);
            auto Name = GName::GetNameByAddr(Addr);
            if (Name != "" && Name != "FAIL" && Name == "SOLCharacter") {
                Utils::Log(1, "0x%llx %s", i, Name.c_str());
            }
        }*/

        ThrottleredSleep.executeTaskWithSleep(XorStr("UpdateLocalPlayersSleep"), std::chrono::milliseconds(GameData.Config.Window.ESPSleep), [] {});

        auto hScatter = mem.CreateScatterHandle();

        std::unordered_map<uint64_t, PlayerInfo> Players;
        std::unordered_map<uint64_t, PlayerInfo> CachePlayers = GameData.Global.Data.Entitys.CachePlayers.All();
        // std::unordered_map<uint64_t, PlayerStateInfo> PlayerStates = GameData.Global.Data.Entitys.PlayerStates.All();

        Throttlered.executeTask(XorStr("UpdatePlayersData"), std::chrono::milliseconds(100), [&hScatter, &CachePlayers, &LocalPlayers, &PlayerStates] {
            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("Mesh")), &Player.Mesh);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")), &Player.RootComponent);
                // mem.AddScatterRead(hScatter, Player.Address + 0x3d8, &Player.CharacterMovement);
                // mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("RootComponent")) + 8, &Player.RootComponentKeyIndex);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("PlayerState")), &Player.PlayerState.Address);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("HealthComp")), &Player.HealthComp);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("CacheCurWeapon")), &Player.CacheCurWeapon.Address);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("CharacterEquipComponentCache")), &Player.CharacterEquipComponentCache);
                // mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("CharacterEquipComponentCache")) + 8, &Player.CharacterEquipComponentCache);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("LastIsDead")), &Player.LastIsDead);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("bFighting")), &Player.bFighting);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("DeadInfo")) + Offset::GetEncryptedOffset(XorStr("KillerUin")), &Player.KillerUin);
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("GPCameraModeComponent")), &Player.GPCameraModeComponent);

                if (Player.Entity.Type == EntityType::Player)
                {
                    mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("WeaponManagerComponent")), &Player.WeaponManagerComponent);
                }
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;

                // 6, 7
                // Utils::Log(4, "RootComponent=%d, CharacterEquipComponentCache=%d", Player.RootComponent & 0xF, Player.CharacterEquipComponentCache & 0xF);
                Player.RootComponent = UPTRDecrypt::Indicator(FUPTRDecryptType::RootComponent, Player.RootComponent);
                // std::cout << GName::GetNameByAddr(Player.RootComponent) << std::endl;

                Player.CharacterEquipComponentCache = UPTRDecrypt::Indicator(FUPTRDecryptType::CharacterEquipComponentCache, Player.CharacterEquipComponentCache);

                // std::cout << GName::GetNameByAddr(Player.CharacterEquipComponentCache) << std::endl;

                // Utils::Log(4, "Player.RootComponent: %p %p %p", Player.Address, Offset::GetEncryptedOffset(XorStr("RootComponent")), Player.RootComponent);
                // std::cout << GName::GetNameByAddr(Player.RootComponent) << std::endl;

                /*Player.CharacterEquipComponentCache = DynamicDecrypt::Indicator(
                    FDynamicDecryptType::RootComponent,
                    Player.CharacterEquipComponentCache,
                    Player.CharacterEquipComponentCacheKeyIndex
                );*/

                //Utils::Log(4, "Player.PlayerState: %p", Player.PlayerState.Address);

                auto& PlayerState = Player.PlayerState;
                auto CachePlayerStateAddress = PlayerState.Address;
                PlayerState = PlayerStates[Player.Address];
                PlayerState.Address = CachePlayerStateAddress;

                if (PlayerState.PlayerNamePrivate == "")
                    mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("PlayerNamePrivate")), &PlayerState.PlayerNamePrivatePtr);
                if (PlayerState.Uin <= 0)
                    mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("Uin")), &PlayerState.Uin);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("bDead")), &PlayerState.bDead);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("bFinishGame")), &PlayerState.bFinishGame);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("TeamId")), &PlayerState.TeamId);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("InnerTeamIndex")), &PlayerState.InnerTeamIndex);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("Camp")), &PlayerState.Camp);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("HeroID")), &PlayerState.HeroID);
                // 绿 蓝 黄

                // mem.AddScatterRead(hScatter, Player.Mesh + Offset::GetEncryptedOffset(XorStr("bAlwaysCreatePhysicsState")), &Player.bAlwaysCreatePhysicsState);

                if (Player.Entity.Type == EntityType::Player)
                {
                    mem.AddScatterRead(hScatter, Player.WeaponManagerComponent + Offset::GetEncryptedOffset(XorStr("WeaponIDList")), &Player.WeaponListArray);
                }
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;
                auto& PlayerState = Player.PlayerState;

                const auto GetKillCount = [&](uint64_t KillerUin) {
                    return std::count_if(CachePlayers.begin(), CachePlayers.end(), [KillerUin](const auto& item) {
                        if (item.second.Entity.Type == EntityType::AI || item.second.Entity.Type == EntityType::BOSS)
                            return false;
                        return item.second.KillerUin == KillerUin;
                    });
                };

                if ((GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_SOL))
                {
                    Player.KillCount = PlayerState.Uin > 0 ? GetKillCount(PlayerState.Uin) : 0;
                }

                PlayerState.HeroName = GetItemName(PlayerState.HeroID, ItemType::Hero);

                if (PlayerState.PlayerNamePrivate == "")
                {
                    mem.AddScatterRead(hScatter, PlayerState.PlayerNamePrivatePtr, &PlayerState.FPlayerNamePrivate);
                }

                if (Player.Entity.Type == EntityType::Player)
                {
                    if (!Utils::ValidPtr((uint64_t)Player.WeaponListArray.GetData()) && Player.WeaponListArray.Size() > 0 && Player.WeaponListArray.Size() < 10)
                    {
                        Player.WeaponList.resize(Player.WeaponListArray.Size(), PlayerWeaponInfo{});
                        for (size_t i = 0; i < Player.WeaponListArray.Size(); i++)
                        {
                            mem.AddScatterRead(hScatter, (uint64_t)Player.WeaponListArray.GetData() + sizeof(uint64_t) * i, &Player.WeaponList[i].WeaponID);
                        }
                    }
                }
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;
                auto& PlayerState = Player.PlayerState;

                PlayerState.PlayerNamePrivate = Utils::UnicodeToAnsi(PlayerState.FPlayerNamePrivate.Buffer);

                PlayerStates[Player.Address] = PlayerState;

                // if (Player.Entity.Type == EntityType::Player)
                //{
                //	for (auto& Weapon : Player.WeaponList)
                //	{
                //		//mem.AddScatterRead(hScatter, Weapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponID")), &Weapon.WeaponID);
                //		mem.AddScatterRead(hScatter, Weapon.Address + Offset::GetEncryptedOffset(XorStr("AssetFallBackPartNodes")), &Weapon.AssetFallBackPartNodesArray);
                //	}
                // }
            }
            // mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;

                if (Player.PlayerState.bDead || Player.PlayerState.bFinishGame)
                {
                    Player.AliveState = EPlayerAliveState::Dead;
                }
                /*if (Player.bAlwaysCreatePhysicsState == 2)
                {
                    Player.AliveState = EPlayerAliveState::Dead;
                }*/

                if (Player.AliveState == EPlayerAliveState::Dead)
                    continue;

                mem.AddScatterRead(hScatter, Player.CharacterEquipComponentCache + Offset::GetEncryptedOffset(XorStr("EquipmentInfoArray")), &Player.EquipmentInfoArray);
                mem.AddScatterRead(hScatter, Player.CharacterEquipComponentCache + Offset::GetEncryptedOffset(XorStr("EquipmentInfoArray")) + 8, &Player.EquipmentInfoCount);
                // mem.AddScatterRead(hScatter, Player.Mesh + Offset::GetEncryptedOffset(XorStr("ComponentLocation")), &Player.Location);
                mem.AddScatterRead(hScatter, Player.Mesh + Offset::GetEncryptedOffset(XorStr("AnimScriptInstance")), &Player.AnimScriptInstance);
                mem.AddScatterRead(hScatter, Player.HealthComp + Offset::GetEncryptedOffset(XorStr("HealthSet")), &Player.HealthSet);
                mem.AddScatterRead(hScatter, Player.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponID")), &Player.CacheCurWeapon.WeaponID);
                mem.AddScatterRead(hScatter, Player.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("CachedAttributeSetWeaponAmmo")), &Player.CacheCurWeapon.CachedAttributeSetWeaponAmmo);

                /*if (Player.Entity.Type == EntityType::Player)
                {
                    for (auto& Weapon : Player.WeaponList)
                    {
                        if (!Utils::ValidPtr((uint64_t)Weapon.AssetFallBackPartNodesArray.GetData()) && Weapon.AssetFallBackPartNodesArray.Size() > 0 && Weapon.AssetFallBackPartNodesArray.Size() < 1000)
                        {
                            Weapon.AssetFallBackPartNodesItemID.resize(Weapon.AssetFallBackPartNodesArray.Size(), 0);
                            for (size_t i = 0; i < Weapon.AssetFallBackPartNodesArray.Size(); i++)
                            {
                                mem.AddScatterRead(hScatter, (uint64_t)Weapon.AssetFallBackPartNodesArray.GetData() + sizeof(FGPModularWeaponPartNode) * i + 0, &Weapon.AssetFallBackPartNodesItemID[i]);
                            }
                        }
                    }
                }*/
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;

                Player.CacheCurWeapon.WeaponType = GetWeaponItemType(Player.CacheCurWeapon.WeaponID);
                Player.CacheCurWeapon.WeaponInstanceID = GetWeaponInstanceID(Player.CacheCurWeapon.WeaponID);
                Player.CacheCurWeapon.WeaponName = GetItemName(Player.CacheCurWeapon.WeaponID, ItemType::Weapon);

                /*if (Player.Address == GameData.Global.Data.LocalPlayerInfo.Address && Player.CacheCurWeapon.WeaponID == 21010000001)
                {
                    mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponMesh")), &Player.CacheCurWeapon.WeaponMesh);
                }*/

                if (Player.Address == GameData.Global.Data.LocalPlayerInfo.Address)
                {
                    mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("CachedAttributeSetFireMode")), &Player.CacheCurWeapon.CachedAttributeSetFireMode);
                }

                // Player.InScreen = VectorHelper::IsInScreen(VectorHelper::WorldToScreen(Player.Location));

                if (Player.AliveState == EPlayerAliveState::Dead)
                    continue;

                if (Player.Entity.Type == EntityType::Player)
                {
                    if (Player.EquipmentInfoCount > 0 && Player.EquipmentInfoCount < 100)
                    {
                        Player.EquipmentInfoItemID.resize(Player.EquipmentInfoCount, 0);

                        for (size_t i = 0; i < Player.EquipmentInfoCount; i++)
                        {
                            mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * i + offsetof(FEquipmentInfo, FEquipmentInfo::ItemID), &Player.EquipmentInfoItemID[i]);
                        }
                    }
                }

                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 1 + offsetof(FEquipmentInfo, FEquipmentInfo::ItemID), &Player.HelmetItemId);
                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 1 + offsetof(FEquipmentInfo, FEquipmentInfo::Durability), &Player.HelmetArmorHealth);
                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 1 + offsetof(FEquipmentInfo, FEquipmentInfo::MaxDurability), &Player.MaxHelmetArmorHealth);
                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 5 + offsetof(FEquipmentInfo, FEquipmentInfo::ItemID), &Player.ArmorItemId);
                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 5 + offsetof(FEquipmentInfo, FEquipmentInfo::Durability), &Player.ArmorHealth);
                mem.AddScatterRead(hScatter, Player.EquipmentInfoArray + sizeof(FEquipmentInfo) * 5 + offsetof(FEquipmentInfo, FEquipmentInfo::MaxDurability), &Player.MaxArmorHealth);

                mem.AddScatterRead(hScatter, Player.CacheCurWeapon.CachedAttributeSetWeaponAmmo + Offset::GetEncryptedOffset(XorStr("WeaponAmmoCount")), &Player.CacheCurWeapon.WeaponAmmoCount);
                // mem.AddScatterRead(hScatter, Player.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponMesh")), &Player.CacheCurWeapon.WeaponMesh);

                mem.AddScatterRead(hScatter, Player.HealthSet + Offset::GetEncryptedOffset(XorStr("Health")), &Player.Health);
                mem.AddScatterRead(hScatter, Player.HealthSet + Offset::GetEncryptedOffset(XorStr("MaxHealth")), &Player.MaxHealth);
                mem.AddScatterRead(hScatter, Player.HealthSet + Offset::GetEncryptedOffset(XorStr("ImpendingDeathHealth")), &Player.ImpendingDeathHealth);

                if (Player.Entity.Name == XorStr("BP_RangeTargetCharacter_C"))
                {
                    mem.AddScatterRead(hScatter, Player.HealthSet + Offset::GetEncryptedOffset(XorStr("ArmorHealth")), &Player.ArmorHealth);
                    mem.AddScatterRead(hScatter, Player.HealthSet + Offset::GetEncryptedOffset(XorStr("HelmetArmorHealth")), &Player.HelmetArmorHealth);
                }
            }

            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : CachePlayers)
            {
                auto& Player = Item.second;

                /*if (Player.Address == GameData.Global.Data.LocalPlayerInfo.Address && Player.CacheCurWeapon.WeaponID == 21010000001)
                {
                    mem.AddScatterRead(hScatter, Player.CacheCurWeapon.WeaponMesh + Offset::GetEncryptedOffset(XorStr("ComponentToWorld")), &Player.CacheCurWeapon.ComponentToWorld);
                }*/

                if (Player.Address == GameData.Global.Data.LocalPlayerInfo.Address)
                {
                    mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.CachedAttributeSetFireMode + Offset::GetEncryptedOffset(XorStr("FiringMode")) + 8, &Player.CacheCurWeapon.FiringMode);
                }

                if (Player.Entity.Type == EntityType::Player)
                {
                    for (auto& ItemID : Player.EquipmentInfoItemID)
                    {
                        if (ItemID == 0)
                            continue;
                        auto Info = GetItemDataTableInfo(ItemID);
                        Player.EquipmentPrice += Info.InitialGuidePrice;
                    }
                    /*auto WeaponReplicateComponent = mem.Read<uint64_t>(Player.Address + 0x2d58);
                    auto LocalWeaponMap = mem.Read<TArray<uint64_t>>(WeaponReplicateComponent + 0x830 + 0x10);
                    auto DefaultWeapon1Classes = mem.Read<uint64_t>(LocalWeaponMap.GetData());*/
                    // Utils::Log(4, "[%s] WeaponManagerComponent: %p, WeaponListArray: %p, %p, %d", Player.PlayerState.PlayerNamePrivate.c_str(), WeaponReplicateComponent, DefaultWeapon1Classes, LocalWeaponMap.GetData(), LocalWeaponMap.Size());
                    for (auto& Weapon : Player.WeaponList)
                    {
                        if (Weapon.WeaponID == 0)
                            continue;
                        auto Info = GetItemDataTableInfo(Weapon.WeaponID);
                        // Utils::Log(4, "AssetFallBackPartNodesItemID: %lld, %d", Weapon.WeaponID, Info.InitialGuidePrice);
                        Player.EquipmentPrice += Info.InitialGuidePrice;
                    }
                    /*
                    //Utils::Log(4, "[%s] WeaponManagerComponent: %p, WeaponListArray: %p, %d", Player.PlayerState.PlayerNamePrivate, Player.WeaponManagerComponent, Player.WeaponListArray.GetData(), Player.WeaponListArray.Size());
                    for (auto& Weapon : Player.WeaponList)
                    {
                        //Utils::Log(4, "Weapon.Address: %p %lld, %p %d", Weapon.Address, Weapon.WeaponID, Weapon.AssetFallBackPartNodesArray.GetData(), Weapon.AssetFallBackPartNodesItemID.size());
                        for (auto& ItemID : Weapon.AssetFallBackPartNodesItemID)
                        {
                            if (ItemID == 0) continue;
                            auto Info = GetItemDataTableInfo(ItemID);
                            //Utils::Log(4, "AssetFallBackPartNodesItemID: %lld, %d", ItemID, Info.InitialGuidePrice);
                            Player.EquipmentPrice += Info.InitialGuidePrice;
                        }
                    }*/

                    // Utils::Log(4, "Player.EquipmentPrice: %d", Player.EquipmentPrice);
                }
            }

            LocalPlayers = CachePlayers;
        });

        for (auto& Item : CachePlayers)
        {
            auto& Player = Item.second;

            // Utils::Log(4, "0x%llx %d %f", GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponAmmoCount);

            if (LocalPlayers.count(Player.Address) > 0)
            {
                Player = LocalPlayers[Player.Address];
                Player.InScreen = true;
            }
        }

        for (auto& Item : CachePlayers)
        {
            auto& Player = Item.second;
            mem.AddScatterRead(hScatter, Player.Mesh + Offset::GetEncryptedOffset(XorStr("ComponentToWorld")), &Player.ComponentToWorld);
            mem.AddScatterRead(hScatter, Player.GPCameraModeComponent + Offset::GetEncryptedOffset(XorStr("PlayerViewPitch")), &Player.PlayerViewPitch);
            mem.AddScatterRead(hScatter, Player.GPCameraModeComponent + Offset::GetEncryptedOffset(XorStr("PlayerViewYaw")), &Player.PlayerViewYaw);
            // mem.AddScatterRead(hScatter, Player.CharacterMovement + 0x2a0, &Player.LastUpdateLocation);
        }
        mem.ExecuteReadScatter(hScatter);

        bool NeedClearCache = false;

        for (auto& Item : CachePlayers)
        {
            auto& Player = Item.second;

            if (Player.ComponentToWorld.EncHandler.Index != 65535)
            {
                auto CacheLocation = Player.ComponentToWorld.Translation;
                
                if (!GameData.UPTRDecrypt.bVEH)
                {
                    unsigned int* ENCData = (unsigned int*)&Player.ComponentToWorld.Translation;
                    ENC::Decrypt(1, ENCData, 12, Player.ComponentToWorld.EncHandler.Index);
                }
                else
                {
                    MirrorProcess::VEHDecrypt(1, &Player.ComponentToWorld.Translation, 12, Player.ComponentToWorld.EncHandler.Index);
                }

                if (Player.ComponentToWorld.EncHandler.bEncrypted == 1 && (abs(Player.ComponentToWorld.Translation.X) > 1000000 || abs(Player.ComponentToWorld.Translation.Y) > 1000000 || abs(Player.ComponentToWorld.Translation.Z) > 1000000))
                {
                    if (abs(CacheLocation.X) > 1000000 || abs(CacheLocation.Y) > 1000000 || abs(CacheLocation.Z) > 1000000)
                    {
                        NeedClearCache = true;
                        Utils::Log(3, XorStr("Player Location: %d (0x%llX) | X=%f, Y=%f, Z=%f | X=0x%llX, Y=0x%llX, Z=0x%llX"), Player.ComponentToWorld.EncHandler.Index, Player.ComponentToWorld.EncHandler.Index, Player.ComponentToWorld.Translation.X, Player.ComponentToWorld.Translation.Y, Player.ComponentToWorld.Translation.Z, Utils::FloatToHex(CacheLocation.X), Utils::FloatToHex(CacheLocation.Y), Utils::FloatToHex(CacheLocation.Z));
                    }
                }
                // FuckEnc
                // std::cout << Player.PlayerState.PlayerNamePrivate << std::endl;
                // Utils::Log(4, "%d(0x%llx) %d", Player.ComponentToWorld.EncHandler.Index, Player.ComponentToWorld.EncHandler.Index % 0x3FF, Player.ComponentToWorld.EncHandler.bEncrypted);
                // Utils::Log(4, "Location: %f %f %f", Player.ComponentToWorld.Translation.X, Player.ComponentToWorld.Translation.Y, Player.ComponentToWorld.Translation.Z);
            }

            Player.Location = Player.ComponentToWorld.Translation;
            Player.InScreen = VectorHelper::IsInScreen(VectorHelper::WorldToScreen(Player.Location));

            // if (Player.AliveState == EPlayerAliveState::Dead || !Player.InScreen) continue;
            if (Utils::ValidPtr(Player.BoneArray))
                mem.AddScatterRead(hScatter, Player.Mesh + Offset::GetEncryptedOffset(XorStr("BoneArray")), &Player.BoneArray);
        }
        mem.ExecuteReadScatter(hScatter);

         if (NeedClearCache)
         {
             GameData.UPTRDecrypt.LastUPTREnable = -1;
             GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
             GameData.UPTRDecrypt.LastPID = 0;
         }

        int i = 0;
        for (auto& Item : CachePlayers)
        {
            auto& Player = Item.second;

            Player.HelmetLevel = (INT32)(Player.HelmetItemId / 1000) % 10;
            Player.ArmorLevel = (INT32)(Player.ArmorItemId / 1000) % 10;

            if (GameData.Global.AcknowledgedPawn == Player.Address)
            {
                Player.IsSelf = true;
                Player.IsMyTeam = true;
                GameData.Global.Data.LocalPlayerInfo = Player;
            }

            if (Player.Entity.Type == EntityType::AI)
            {
                Player.IsAI = true;
                Player.PlayerState.PlayerNamePrivate = I18N::T(Player.Entity.DisplayName, true);
            }
            else if (Player.Entity.Type == EntityType::BOSS)
            {
                Player.IsBOSS = true;
                Player.PlayerState.PlayerNamePrivate = I18N::T(Player.Entity.DisplayName, true);
            }
            else
            {
                if (Player.PlayerState.TeamId == GameData.Global.Data.LocalPlayerInfo.PlayerState.TeamId || ((GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Breakthrough || GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Conquest) && Player.PlayerState.Camp == GameData.Global.Data.LocalPlayerInfo.PlayerState.Camp))
                {
                    Player.IsMyTeam = true;
                }
            }

            if (Player.Health <= 0)
            {
                Player.AliveState = EPlayerAliveState::ImpendingDeath;

                if (Player.ImpendingDeathHealth <= 0 || Player.Entity.Type == EntityType::AI || (GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Breakthrough || GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Conquest))
                {
                    Player.AliveState = EPlayerAliveState::Dead;
                }
            }

            if (Player.LastIsDead && Player.Entity.Type != EntityType::Player && Player.Entity.Name != XorStr("BP_RangeTargetCharacter_C") && (GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_SOL))
            {
                Player.AliveState = EPlayerAliveState::Dead;
            }

            if (Player.PlayerState.Uin <= 10000 && (!Player.IsAI && !Player.IsBOSS))
            {
                Player.IsAIPlayer = true;
            }

            if (!Player.IsSelf)
            {
                // FRotator LookingRotation = Player.ComponentToWorld.Rotation;
                FRotator LookingRotation = {Player.PlayerViewPitch, Player.PlayerViewYaw, 0.f};
                // LookingRotation.ToCamera();
                Player.LookingRotation = LookingRotation;
            }
            else
            {
                mem.AddScatterRead(hScatter, Player.Address + Offset::GetEncryptedOffset(XorStr("LookingRotation")), &Player.LookingRotation);
            }

            if (Player.AliveState == EPlayerAliveState::Dead || Player.IsMyTeam)
                continue;

            for (const auto& Bone : SkeletonLists::Bones)
            {
                mem.AddScatterRead(hScatter, Player.BoneArray + Bone * 0x30 + 0x10, &Player.Bones[Bone]);
            }
            /*if (i == 0)
            {
                uint64_t SkeletalMesh = mem.Read<uint64_t>(Player.Mesh + Offset::GetEncryptedOffset(XorStr("SkeletalMesh")));
                auto FinalRefBoneInfo = mem.Read<TArray<FMeshBoneInfo>>(SkeletalMesh + Offset::GetEncryptedOffset(XorStr("FinalRefBoneInfo")));


                for (auto Item : FinalRefBoneInfo.GetVector())
                {
                    std::cout << GName::GetNameById(Item.Name.GetComparisonIndex()) << " = " << Item.ParentIndex << "," << std::endl;
                    Utils::Log(1, "FinalRefBoneInfo[%d] %d", Item.ParentIndex, Item.Name.GetComparisonIndex());
                }
                Utils::Log(4, "---------------");
                Sleep(10000);
            }
            i++;*/
        }
        mem.ExecuteReadScatter(hScatter);

        for (auto& Item : CachePlayers)
        {
            auto& Player = Item.second;

            if (Player.IsSelf && Player.LookingRotation == FRotator(0.f, 0.f, 0.f))
            {
                Player.LookingRotation = Player.ComponentToWorld.Rotation;
                Player.LookingRotation.Yaw += 90.f;
            }

            if (Player.AliveState != EPlayerAliveState::Dead && !Player.IsMyTeam)
            {
                FVector AimFov = VectorHelper::CalculateAngles(Player.Location, GameData.Global.Data.LocalPlayerInfo.Location);
                FRotator AmiMz = Player.LookingRotation;
                AmiMz.Clamp();
                int32_t AimX = int32_t(abs(AimFov.X - AmiMz.Yaw));
                int32_t AimY = int32_t(abs(AimFov.Y - AmiMz.Pitch));

                if (AimX <= 3 && AimY <= 3)
                {
                    Player.IsAimMe = true;
                }
            }

            if (Player.AliveState == EPlayerAliveState::Dead || Player.IsMyTeam)
                continue;

            for (const auto& Bone : Player.Bones)
            {
                Player.LocationBones[Bone.first] = Player.ComponentToWorld.GetWorldLocation(Bone.second);
                Player.ScreenBones[Bone.first] = VectorHelper::WorldToScreen(Player.LocationBones[Bone.first]);
                Player.VisCheckBones[Bone.first] = !Player.IsVisible ? false : !PhysXMirror::RayCast(Player.LocationBones[Bone.first], Player);
            }

            for (EBoneIndex Bone : SkeletonLists::Bones)
            {
                if (Bone == EBoneIndex::Root)
                {
                    continue;
                }

                if (Player.VisCheckBones[Bone])
                {
                    Player.IsVisible = true;
                    break;
                }
                Player.IsVisible = false;
            }

            {
                float NowTime = std::chrono::time_point_cast<std::chrono::microseconds>(std::chrono::steady_clock::now()).time_since_epoch().count() * 0.000001f;
                float TimeStampDelta = NowTime - GameData.EnemyInfoMap[Player.Address].TimeStamp;
                GameData.EnemyInfoMap[Player.Address].TimeStamp = NowTime;
                auto& PosInfo = GameData.EnemyInfoMap[Player.Address].PosInfo.Info;

                if (TimeStampDelta)
                    PosInfo.push_front({NowTime, Player.Location});

                if (PosInfo.size() > 200)
                    PosInfo.pop_back();

                float SumTimeDelta = 0.0f;
                FVector SumPosDif;

                for (size_t i = 1; i < PosInfo.size(); i++)
                {
                    const float DeltaTime = PosInfo[i - 1].Time - PosInfo[i].Time;
                    const FVector DeltaPos = PosInfo[i - 1].Pos - PosInfo[i].Pos;
                    const FVector DeltaVelocity = DeltaPos * (1.0f / DeltaTime);
                    const float DeltaSpeedPerHour = DeltaVelocity.Length() / 100.0f * 3.6f;

                    if (DeltaTime > 0.05f || DeltaSpeedPerHour > 500.0f)
                    {
                        PosInfo.clear();
                    }
                    else
                    {
                        SumTimeDelta = SumTimeDelta + DeltaTime;
                        SumPosDif = SumPosDif + DeltaPos;

                        if (SumTimeDelta > 0.15f)
                            break;
                    }
                }
                if (SumTimeDelta > 0.1f)
                {
                    Player.Velocity = SumPosDif * (1.0f / SumTimeDelta);
                }
            }
        }
        mem.ExecuteReadScatter(hScatter);

        GameData.Global.Data.Entitys.Players = CachePlayers;
        GameData.Global.Data.Entitys.PlayerStates = PlayerStates;

        LocalPlayers = CachePlayers;

        {
            float ScreenCenterX = GameData.Config.Overlay.ScreenWidth / 2.0f;
            float ScreenCenterY = GameData.Config.Overlay.ScreenHeight / 2.0f;

            if (!GameData.AimBot.Lock)
            {
                GameData.AimBot.Type = EntityType::Player;
                GameData.AimBot.Target = -1;
                GameData.AimBot.Bone = -1;
                GameData.AimBot.ScreenDistance = 1000.0f;
            }

            EWeaponItemType WeaponType = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType;
            if ((UINT8)WeaponType > 0 && (UINT8)WeaponType < (UINT8)EWeaponItemType::Max && GameData.Config.AimBot.ConfigIndex >= 0 && GameData.Config.AimBot.ConfigIndex < 3)
            {
                if ((UINT8)WeaponType > (UINT8)EWeaponItemType::Pistol)
                    WeaponType = EWeaponItemType::Rifle;
                const AimBotConfig Config = GameData.Config.AimBot.Configs.at(GameData.Config.AimBot.ConfigIndex).Weapon.at(WeaponType);
                float FOV = GameData.Global.Data.Camera.FOV > 0 ? Config.FOV * (83.974457f / GameData.Global.Data.Camera.FOV) : Config.FOV;
                // if (GameData.Global.Data.EarlyWarningPlayerDistance > 0 && GameData.Global.Data.EarlyWarningPlayerDistance <= 15) FOV *= 3;

                uint64_t OldTarget = GameData.AimBot.Target;
                uint64_t NewTarget = 0;

                if (Config.AutoSwitchPlayer)
                {
                    GameData.AimBot.ScreenDistance = 1000.f;
                }

                bool throwKeyCondition = GameData.Keyboard.IsKeyDown(Config.Throw.Key);

                if (Config.Throw.Enable && throwKeyCondition)
                {
                    GameData.Global.Data.Entitys.Throws.GetReadLock();
                    const auto& Items = GameData.Global.Data.Entitys.Throws.Map();
                    {
                        for (const auto& Item : *Items)
                        {
                            const auto& Throw = Item.second;

                            if (!Throw.Entity.bAimBot || !Throw.bVisible)
                                continue;

                            if (!Config.Throw.Enables.at(Throw.Entity.DisplayName))
                                continue;

                            float Distance = GameData.Global.Data.Camera.Location.Distance(Throw.Location) / 100.0f;

                            if (Distance > Config.Throw.MaxDistance)
                                continue;

                            if ((!GameData.AimBot.Lock || Utils::ValidPtr(GameData.AimBot.Target) || Config.AutoSwitchPlayer))
                            {
                                FVector2D ScreenLocation = VectorHelper::WorldToScreen(Throw.Location);
                                float ScreenDistance = Utils::CalculateDistance(ScreenCenterX, ScreenCenterY, ScreenLocation.X, ScreenLocation.Y);

                                if (Config.AutoSwitchPlayer && GameData.AimBot.Lock)
                                {
                                    FOV = Config.AutoSwitchPlayerFOV;
                                }

                                if (ScreenDistance <= FOV)
                                {
                                    if (ScreenDistance < GameData.AimBot.ScreenDistance)
                                    {
                                        GameData.AimBot.ScreenDistance = ScreenDistance;
                                        GameData.AimBot.Target = Throw.Address;
                                        GameData.AimBot.Type = EntityType::Throw;
                                        GameData.AimBot.Bone = 1;
                                    }
                                }
                            }
                        }
                    }
                    GameData.Global.Data.Entitys.Throws.ReleaseReadLock();
                }
                else
                {
                    bool firstKeyCondition = GameData.Keyboard.IsKeyDown(Config.First.Key);
                    bool secondKeyCondition = GameData.Keyboard.IsKeyDown(Config.Second.Key);
                    bool groggyKeyCondition = GameData.Keyboard.IsKeyDown(Config.Groggy.Key);
                    bool triggerKeyCondition = GameData.Keyboard.IsKeyDown(Config.Trigger.Key) || GameData.Keyboard.IsKeyDown(Config.Trigger.Key1);
                    if (Config.UseClosest == 1)
                    {
                        // 新逻辑：按3D距离排序玩家，然后依次检查每个玩家的部位
                        std::vector<std::pair<float, const PlayerInfo*>> sortedPlayers;

                        // 收集所有符合条件的玩家并按距离排序
                        for (const auto& Item : CachePlayers)
                        {
                            const PlayerInfo& Player = Item.second;
                            float Distance = GameData.Global.Data.Camera.Location.Distance(Player.Location) / 100.0f;

                            if (Config.DontAimAI && Player.IsAI)
                                continue;

                            bool AllowAim = Player.AliveState != EPlayerAliveState::Dead;

                            if (groggyKeyCondition)
                            {
                                AllowAim = Player.AliveState == EPlayerAliveState::ImpendingDeath;
                            }

                            if (AllowAim && !Player.IsMyTeam && !Player.IsSelf)
                            {
                                sortedPlayers.push_back({Distance, &Player});
                            }
                        }

                        // 按3D距离排序
                        std::sort(sortedPlayers.begin(), sortedPlayers.end(), [](const auto& a, const auto& b) { return a.first < b.first; });

                        // 依次检查每个玩家，直到找到有效目标
                        for (const auto& playerPair : sortedPlayers)
                        {
                            const PlayerInfo& Player = *playerPair.second;
                            // Utils::Log(4, "%s", Player.PlayerState.PlayerNamePrivate);

                            if ((!GameData.AimBot.Lock || Utils::ValidPtr(GameData.AimBot.Target)))
                            {
                                auto Bones = Config.First.Bones;

                                if (firstKeyCondition && Config.HotkeyMerge && secondKeyCondition)
                                {
                                    Bones = Config.Second.Bones;
                                }
                                else if (!Config.HotkeyMerge && secondKeyCondition)
                                {
                                    Bones = Config.Second.Bones;
                                }

                                if (Config.Trigger.Independent && triggerKeyCondition)
                                {
                                    Bones = Config.Trigger.Bones;
                                }

                                if (groggyKeyCondition)
                                {
                                    Bones = Config.Groggy.Bones;
                                }

                                float bestBoneDistance = 1000.0f;
                                int bestBone = -1;

                                // 在当前玩家身上找最近的部位
                                for (int i = 0; i < 17; i++)
                                {
                                    if (Bones[i])
                                    {
                                        const auto BoneToIndex = BoneIndex.at(i);
                                        FVector2D ScreenLocation = Player.ScreenBones.at(BoneToIndex);
                                        float ScreenDistance = Utils::CalculateDistance(ScreenCenterX, ScreenCenterY, ScreenLocation.X, ScreenLocation.Y);

                                        float currentFOV = FOV;
                                        if (Config.AutoSwitchPlayer && GameData.AimBot.Lock)
                                        {
                                            currentFOV = Config.AutoSwitchPlayerFOV;
                                        }

                                        if (ScreenDistance <= currentFOV && ScreenDistance < bestBoneDistance)
                                        {
                                            bestBoneDistance = ScreenDistance;
                                            bestBone = BoneToIndex;
                                        }
                                    }
                                }

                                // 如果找到了有效部位，设置为目标并跳出循环
                                if (bestBone != -1)
                                {
                                    GameData.AimBot.ScreenDistance = bestBoneDistance;
                                    GameData.AimBot.Target = Player.Address;
                                    GameData.AimBot.Type = EntityType::Player;
                                    GameData.AimBot.Bone = bestBone;
                                    break;
                                }
                            }
                        }

                        for (const auto& Item : CachePlayers)
                        {
                            const PlayerInfo& Player = Item.second;

                            if (GameData.AimBot.Target == Player.Address)
                            {
                                NewTarget = Player.Address;
                            }

                            if (GameData.AimBot.Target == Player.Address)
                            {
                                GameData.AimBot.TargetPlayerInfo = Player;
                            }
                        }
                    }
                    else
                    {
                        // 原始逻辑：按屏幕距离选择最近部位
                        for (const auto& Item : CachePlayers)
                        {
                            const PlayerInfo& Player = Item.second;
                            float Distance = GameData.Global.Data.Camera.Location.Distance(Player.Location) / 100.0f;

                            if (Config.DontAimAI && Player.IsAI)
                                continue;

                            if ((!GameData.AimBot.Lock || Utils::ValidPtr(GameData.AimBot.Target) || Config.AutoSwitchPlayer))
                            {
                                bool AllowAim = Player.AliveState != EPlayerAliveState::Dead;
                                auto Bones = Config.First.Bones;

                                if (firstKeyCondition && Config.HotkeyMerge && secondKeyCondition)
                                {
                                    Bones = Config.Second.Bones;
                                }
                                else if (!Config.HotkeyMerge && secondKeyCondition)
                                {
                                    Bones = Config.Second.Bones;
                                }

                                if (Config.Trigger.Independent && triggerKeyCondition)
                                {
                                    Bones = Config.Trigger.Bones;
                                }

                                if (groggyKeyCondition)
                                {
                                    Bones = Config.Groggy.Bones;
                                    AllowAim = Player.AliveState == EPlayerAliveState::ImpendingDeath;
                                }

                                if (AllowAim && !Player.IsMyTeam && !Player.IsSelf)
                                {
                                    for (int i = 0; i < 17; i++)
                                    {
                                        if (Bones[i])
                                        {
                                            const auto BoneToIndex = BoneIndex.at(i);
                                            FVector2D ScreenLocation = Player.ScreenBones.at(BoneToIndex);
                                            float ScreenDistance = Utils::CalculateDistance(ScreenCenterX, ScreenCenterY, ScreenLocation.X, ScreenLocation.Y);

                                            if (Config.AutoSwitchPlayer && GameData.AimBot.Lock)
                                            {
                                                FOV = Config.AutoSwitchPlayerFOV;
                                            }

                                            if (ScreenDistance <= FOV)
                                            {
                                                if (ScreenDistance < GameData.AimBot.ScreenDistance)
                                                {
                                                    GameData.AimBot.ScreenDistance = ScreenDistance;
                                                    GameData.AimBot.Target = Player.Address;
                                                    GameData.AimBot.Type = EntityType::Player;
                                                    GameData.AimBot.Bone = BoneToIndex;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            if (GameData.AimBot.Target == Player.Address)
                            {
                                NewTarget = Player.Address;

                                if (Config.AutoSwitchPlayer)
                                {
                                    if (GameData.AimBot.FirstBone == -1)
                                    {
                                        GameData.AimBot.FirstBone = GameData.AimBot.Bone;
                                    }
                                    GameData.AimBot.Bone = GameData.AimBot.FirstBone;
                                }
                            }

                            if (Config.AutoSwitchPlayer && OldTarget != GameData.AimBot.Target)
                            {
                                GameData.AimBot.Target = NewTarget;
                                GameData.AimBot.Bone = GameData.AimBot.FirstBone;
                            }

                            if (GameData.AimBot.Target == Player.Address)
                            {
                                GameData.AimBot.TargetPlayerInfo = Player;
                            }
                        }
                    }
                }
            }
        }

        mem.CloseScatterHandle(hScatter);

        // if (GameData.Config.Window.ESPSleep > 0) std::this_thread::sleep_for(std::chrono::milliseconds(GameData.Config.Window.ESPSleep));

        // Utils::Log(4, "Update Players: %dms", timer.get());

        // 个人收益 Player->InventoryManager->RepData.CurrentValue
    }
}

void Player::Info()
{
    struct TArrayData
    {
        uint64_t Data;
        int32_t Count;
    };

    while (true)
    {
        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Global.Data.NewAlivePlayers = 0;
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        int AlivePlayers = 0;

        TArray<uint64_t> PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
        if (GameData.Global.bEncrypt)
        {
            *(TArrayData*)&PlayerArray = {Decrypt::Indicator((uint64_t)PlayerArray.GetData(), GameData.Decrypt.Key), (int32_t)PlayerArray.Size()};
        }

        std::unordered_map<uint64_t, PlayerStateInfo> PlayerStates;

        if (!Utils::ValidPtr((uint64_t)PlayerArray.GetData()) && PlayerArray.Size() > 0 && PlayerArray.Size() < 1000)
        {
            std::vector<PlayerStateInfo> TempStates(PlayerArray.Size());

            auto hScatter = mem.CreateScatterHandle();

            for (size_t i = 0; i < PlayerArray.Size(); i++)
            {
                mem.AddScatterRead(hScatter, (uint64_t)PlayerArray.GetData() + i * 8, &TempStates[i].Address);
            }
            mem.ExecuteReadScatter(hScatter);

            for (const auto& State : TempStates)
            {
                if (State.Address)
                {
                    PlayerStates[State.Address] = State;
                }
            }

            for (auto& Item : PlayerStates)
            {
                auto& PlayerState = Item.second;
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("bDead")), &PlayerState.bDead);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("bFinishGame")), &PlayerState.bFinishGame);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("TeamId")), &PlayerState.TeamId);
                mem.AddScatterRead(hScatter, PlayerState.Address + Offset::GetEncryptedOffset(XorStr("Camp")), &PlayerState.Camp);
            }
            mem.ExecuteReadScatter(hScatter);

            for (auto& Item : PlayerStates)
            {
                auto& PlayerState = Item.second;

                if (PlayerState.TeamId == GameData.Global.Data.LocalPlayerInfo.PlayerState.TeamId || ((GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Breakthrough || GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Conquest) && PlayerState.Camp == GameData.Global.Data.LocalPlayerInfo.PlayerState.Camp))
                {
                    continue;
                }

                if (!PlayerState.bDead && !PlayerState.bFinishGame)
                {
                    AlivePlayers++;
                }
            }

            mem.CloseScatterHandle(hScatter);

            // GameData.Global.Data.Entitys.Players.GetReadLock();
            // const auto& Players = GameData.Global.Data.Entitys.Players.Map();
            // for (const auto& [Key, Player] : *Players)
            //{
            //	if (Player.Entity.Type != EntityType::Player)
            //	{
            //		continue;
            //	}

            //	if (!Utils::ValidPtr(Player.PlayerState.Address) && PlayerStates.count(Player.PlayerState.Address) > 0)
            //	{
            //		PlayerStates[Player.PlayerState.Address].PawnAddress = Player.Address;
            //	}
            //}

            // for (const auto& [Key, Item] : PlayerStates)
            //{
            //	if (!Utils::ValidPtr(Item.PawnAddress) && Players->count(Item.PawnAddress) > 0)
            //	{
            //		std::cout << Players->at(Item.PawnAddress).PlayerState.PlayerNamePrivate << std::endl;
            //	}
            // }

            // GameData.Global.Data.Entitys.Players.ReleaseReadLock();
        }

        GameData.Global.Data.NewAlivePlayers = AlivePlayers > 0 ? AlivePlayers : GameData.Global.Data.AlivePlayer;

        GameData.Global.Data.Entitys.PlayerStates = PlayerStates;

        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
}
