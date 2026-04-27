#include "Process.h"
#include <Hack/UPTRDecrypt.h>
#include <Hack/MirrorProcess.h>
#include <Hack/ENC/ENC.h>

UINT32 Process::GetGameProcess()
{
    static std::string ProcessName = XorStr("DeltaForceClient-Win64-Shipping.exe");
    static int LastPID = 0;
    // static std::string ProcessName = XorStr("ACE-Tray.exe");
    const auto PID = mem.GetPidFromName(ProcessName);
    // Utils::Log(4, "PID: %d", PID);
    if (PID > 0)
    {
        uint64_t Base = 0;
        if (LastPID != PID)
        {
            Base = mem.GetBaseDaddy(ProcessName, PID);
            Utils::Log(1, XorStr("The main module address of the process was successfully obtained. (0x%llX)"), Base);
        }
        if (Base == 0)
            Base = 0x140000000;

        //if (Utils::ValidPtr(Base) || Base == 0)
        //{
        //    VMMDLL_CloseAll();

        //    if (!mem.Init(false, false, true))
        //    {
        //        Utils::Log(2, XorStr("FPGA Afresh Initilize Error"));
        //    }
        //    else
        //    {
        //        Base = mem.GetBaseDaddy(ProcessName, PID);
        //        Utils::Log(1, XorStr("FPGA Afresh Initilize Success"));
        //    }
        //}

        // uint64_t UWorld = mem.Read<uint64_t>(Base + Offset::GetEncryptedOffset(XorStr("UWorld")), PID);

        // if (!Utils::ValidPtr(Base) && !Utils::ValidPtr(UWorld))
        if (!Utils::ValidPtr(Base))
        {
            GameData.Process.Base = Base;
            GameData.Process.PID = PID;
            LastPID = PID;
            mem.SetPID(PID);

            IMAGE_DOS_HEADER DosHeader = mem.Read<IMAGE_DOS_HEADER>(GameData.Process.Base);
            IMAGE_NT_HEADERS NtHeader = mem.Read<IMAGE_NT_HEADERS>(GameData.Process.Base + DosHeader.e_lfanew);
            GameData.Process.Size = NtHeader.OptionalHeader.SizeOfImage;
            return PID;
        }
    }

    GameData.Process.PID = 0;
    LastPID = 0;
    mem.SetPID(0);
    return 0;
}

void Process::Loop()
{
    Throttler Throttlered;

    bool GameProcessFound = false;
    bool PrevGameProcessFound = false;

    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Process++;

        if (!GameData.Auth.bLogin)
        {
            GameData.Process.GameState = FGameState::Finding;
            GameData.Process.PID = 0;
            GameData.Process.Base = 0;
            Sleep(1000);
            continue;
        }

        Throttlered.executeTask(XorStr("ProcessLoop"), std::chrono::milliseconds(1500), [&GameProcessFound, &PrevGameProcessFound] {
            const auto PID = GetGameProcess();
            if (PID == 0 || Utils::ValidPtr(GameData.Global.UWorld))
                mem.RefreshAll();
            if (PID == 0)
            {
                GameData.Process.GameState = FGameState::Finding;
                GameData.Process.PID = 0;
                GameData.Process.Base = 0;
                GameProcessFound = false;
                //GameData.UPTRDecrypt = {};

                if (GameProcessFound != PrevGameProcessFound)
                {
                    MirrorProcess::Reset();
                    Utils::Log(3, XorStr("Game process shutdown complete (遊戲進程已結束)"));
                }
            }
            else
            {
                GameProcessFound = true;
                if (GameProcessFound != PrevGameProcessFound)
                {
                    GName::Init();
                    Utils::Log(1, XorStr("Game progress discovered successfully (%d)"), GameData.Process.PID);

                    // auto Data = mem.GetShellcode().find_all_codecave(1000, "DeltaForceClient-Win64-Shipping.exe");
                    // for (auto Item : Data)
                    //{
                    //	Utils::Log(4, "%p", Item);
                    // }
                }
            }
            PrevGameProcessFound = GameProcessFound;
        });

        if (GameData.Process.PID != 0)
        {
            if (GameData.Config.Window.Server == 0)
            {
                //GameData.UPTRDecrypt.bVEH = true;

                GameData.UPTRDecrypt.UPTRIndex = mem.Read<uint32_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("UPTRIndex")));
                GameData.UPTRDecrypt.UPTREnable = mem.Read<uint32_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("UPTREnable")));
                GameData.UPTRDecrypt.UPTRKey = mem.Read<uint32_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("UPTRKey")));
                GameData.UPTRDecrypt.SwitchEncryptor = mem.Read<uint32_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("SwitchEncryptor")));
                uint64_t DoubleFuncOffset = mem.Read<uint64_t>(GameData.Process.Base + 0x1432F5A8);

                if ((GameData.UPTRDecrypt.UPTREnable != GameData.UPTRDecrypt.LastUPTREnable || DoubleFuncOffset != GameData.UPTRDecrypt.LasDoubleFuncOffset || GameData.UPTRDecrypt.LastPID != GameData.Process.PID))
                {
                    Utils::Log(1, XorStr("[GConfig] Base=0x%llx, UPTRIndex=0x%llX, UPTREnable=0x%llX, UPTRKey=0x%llX, SwitchEncryptor=0x%llX, DoubleEncryptor=0x%llX"), GameData.Process.Base, GameData.UPTRDecrypt.UPTRIndex, GameData.UPTRDecrypt.UPTREnable, GameData.UPTRDecrypt.UPTRKey, GameData.UPTRDecrypt.SwitchEncryptor, DoubleFuncOffset);
                    GameData.UPTRDecrypt.LastUPTREnable = GameData.UPTRDecrypt.UPTREnable;
                    GameData.UPTRDecrypt.LasDoubleFuncOffset = DoubleFuncOffset;
                    GameData.UPTRDecrypt.LastPID = GameData.Process.PID;

                    if (GameData.UPTRDecrypt.SwitchEncryptor == 0 || DoubleFuncOffset == 0)
                    {
                        GameData.UPTRDecrypt.LastUPTREnable = -1;
                        GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
                        GameData.UPTRDecrypt.LastPID = 0;
                    }
                    else
                    {
                        
                        Utils::Log(1, XorStr("Initializing coordinate decryption (正在初始化座標解密)"));

                        Sleep(1000);

                        Timer ENCTimered(XorStr("ENCTimered"));

                        std::unique_lock<std::shared_mutex> lock(GameData.UPTRDecrypt.CacheMutex);

                        {
                            std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                            GameData.FuckEnc.Cache.clear();
                            lock.unlock();
                        }

                        for (size_t i = 0; i < 0x3FF; i++)
                        {
                            uint16_t Index = i;
                            uint32_t Value = 0x188;
                            ENC::Decrypt(0, &Value, 4, Index, false);
                            ENC::Decrypt(1, &Value, 4, Index, false);
                        }

                        lock.unlock();

                        Utils::Log(1, XorStr("Initialization coordinate decryption complete %dms. (初始化座標解密完成)"), ENCTimered.get());
                    }
                }
            }

            auto CacheUWorld = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("UWorld")));

            // if (!Utils::ValidPtr(CacheUWorld))
            // {
            //     if (MirrorProcess::Init())
            //     {
            //         MirrorProcess::TestMirrorCall();
            //     }
            // }

            // 231D70 7C4970
            // AB11FF0() 这里储存了所有的解密初始化配置
            GameData.Global.UWorld = CacheUWorld;
            GameData.Global.GameState = UPTRDecrypt::Indicator(FUPTRDecryptType::GameState, mem.Read<uint64_t>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("GameState"))));
            //Utils::Log(4, "GameData.Global.GameState: %p %s", GameData.Global.GameState, GName::GetNameByAddr(mem.Read<uint64_t>(0x50732A3880)).c_str());
            //Utils::Log(4, "GameData.Global.GameState: %p %s", GameData.Global.GameState, GName::GetNameByAddr(mem.Read<uint64_t>(0x9B9A38F0)).c_str());
            /*Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x0000005010569250).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x0000005010569250)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x000000008FB212C0).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x000000008FB212C0)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x50156A0000).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x50156A0000)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x000000011B1F0000).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x000000011B1F0000)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x000000C0902740).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x000000C0902740)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x50CA0E6280).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x50CA0E6280)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x50AC8471D0).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x50AC8471D0)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x500C2A0000).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x500C2A0000)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x11B290000).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x11B290000)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x3F9EDAAC0).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x3F9EDAAC0)).c_str());
            Utils::Log(4, "GameData.Global.GameState: %p %s %s", GameData.Global.GameState, GName::GetNameByAddr(0x50FF25B140).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x50FF25B140)).c_str());
            */
            //Utils::Log(4, "GameData.Global.GameState: %llX %llX %s %s", GameData.Global.GameState, mem.Read<uint64_t>(0x11BF01120), GName::GetNameByAddr(0x11BF01120).c_str(), GName::GetNameByAddr(mem.Read<uint64_t>(0x11BF01120)).c_str());
            if (Utils::ValidPtr(GameData.Global.GameState))
            {
                //{
                //    std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                //    GameData.FuckEnc.Cache.clear();
                //    //Utils::Log(1, XorStr("Clear Enc Read Cache Sucesss."));
                //}
                GameData.Process.GameState = FGameState::InLobby;
            }
            else
            {
                GameData.Global.Data.DFMGamePlayerMode = mem.Read<EDFMGamePlayMode>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("DFMGamePlayerMode")));
                if (GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Conquest || GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_SOL || GameData.Global.Data.DFMGamePlayerMode == EDFMGamePlayMode::GamePlayMode_Breakthrough)
                {
                    GameData.Process.GameState = FGameState::InGame;
                    // GameData.Global.Data.DisplayName = GName::GetFText(mem.Read<uint64_t>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("DisplayName"))));
                    auto LevelName = GName::GetFString(mem.Read<uint64_t>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("LevelName"))));
                    GameData.Global.Data.LevelName = LevelName.substr(0, LevelName.find("_Level"));
                    // GameData.Global.Data.MapID = mem.Read<INT32>(GameData.Global.GameState + 0x10);
                    // GameData.MapName = GameData.Global.Data.LevelName;
                }
                else
                {
                    GameData.Process.GameState = FGameState::InLobby;
                }

                // 钥匙门
                if (GameData.Process.GameState == FGameState::InGame)
                {
                    auto hScatter = mem.CreateScatterHandle();

                    uint64_t InteractSystemComponent = mem.Read<uint64_t>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("InteractSystemComponent")));
                    uint64_t MapDoorInfoArray = mem.Read<uint64_t>(InteractSystemComponent + Offset::GetEncryptedOffset(XorStr("MapDoorInfoArray")));
                    int MapDoorInfoArrayCount = mem.Read<int>(InteractSystemComponent + Offset::GetEncryptedOffset(XorStr("MapDoorInfoArray")) + 8);

                    if (!Utils::ValidPtr(MapDoorInfoArray) && MapDoorInfoArrayCount > 0 && MapDoorInfoArrayCount < 1000)
                    {
                        std::unordered_map<uint64_t, DoorDataInfo> DoorDatas{};
                        for (size_t i = 0; i < MapDoorInfoArrayCount; i++)
                        {
                            DoorDatas[i].Address = MapDoorInfoArray + i * 0x40;
                        }
                        // mem.ExecuteReadScatter(hScatter);

                        for (auto& [Index, Item] : DoorDatas)
                        {
                            mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("KeyID")), &Item.KeyIDPtr);
                            mem.AddScatterRead(hScatter, Item.Address + Offset::GetEncryptedOffset(XorStr("KeyLocation")), &Item.Location);

                            // mem.AddScatterRead(hScatter, Item.KeyIDPtr, &Item.KeyID);
                        }
                        mem.ExecuteReadScatter(hScatter);

                        for (auto& [Index, Item] : DoorDatas)
                        {
                            auto WorldCenter = GameData.Global.Data.Radar.WorldCenter;
                            /*Item.Location.X = -(WorldCenter.X - (Item.Location.X));
                            Item.Location.Y = -(WorldCenter.Y + -(Item.Location.Y));*/
                            // Item.Location.Z = Item.Location.Z - WorldCenter.Z;
                            Item.Location = Item.Location - WorldCenter;
                            mem.AddScatterRead(hScatter, Item.KeyIDPtr, &Item.KeyID);
                            // Utils::Log(1, "%f %f", GameData.Global.Data.Radar.WorldCenter.X, GameData.Global.Data.Radar.WorldCenter.Y);
                        }
                        mem.ExecuteReadScatter(hScatter);

                        for (auto& [Index, Item] : DoorDatas)
                        {
                            // Utils::Log(4, "%s", GName::GetInfoById(Item.KeyID).Name.c_str());
                            try
                            {
                                Item.ItemID = std::stoull(GName::GetInfoById(Item.KeyID).Name);
                                Item.Name = GetItemTranslate(Item.ItemID);
                                Item.Name = std::regex_replace(Item.Name, std::regex(XorStr("钥匙")), "");
                                Item.Info = GetItemDataTableInfo(Item.ItemID);
                            }
                            catch (const std::invalid_argument& e)
                            {
                            }
                            catch (const std::out_of_range& e)
                            {
                            }
                        }

                        /*for (auto& [Index, Item] : DoorDatas)
                        {
                            if (Item.ItemID == 15050100001)
                            {
                                Utils::Log(4, "DoorData: %d %s | %f %f %f", Item.ItemID, GetItemTranslate(Item.ItemID), Item.Location.X, Item.Location.Y, Item.Location.Z );
                            }
                        }*/

                        GameData.Global.Data.Entitys.DoorDatas = DoorDatas;
                    }

                    mem.CloseScatterHandle(hScatter);

                    // Utils::Log(4, "InteractSystemComponent: %p %p %d", InteractSystemComponent, MapDoorInfoArray, MapDoorInfoArrayCount);
                }
                else
                {
                    GameData.Global.Data.Entitys.DoorDatas.Clear();
                }
            }
        }
        else
        {
            GameData.UPTRDecrypt.LastUPTREnable = -1;
            GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
            GameData.UPTRDecrypt.LastPID = 0;
        }

        if (GameData.Process.GameState != GameData.Process.PreviousGameState)
        {
            GameData.Process.PreviousGameState = GameData.Process.GameState;
            switch (GameData.Process.GameState)
            {
            case FGameState::InGame:
                Utils::Log(0, XorStr("Already entered the game, the map is (%s)"), GameData.Global.Data.LevelName != "" ? GameData.Global.Data.LevelName.c_str() : XorStr("Unknown"));
                MirrorProcess::Init();
                break;
            case FGameState::InLobby:
                // Utils::Log(0, XorStr("Entered the game scene, World name is [%s]"), GameData.MapName.c_str());
                GName::Init();
                break;
            default:
                GName::Init();
                break;
            }
        }

        Sleep(2000);
    }
}