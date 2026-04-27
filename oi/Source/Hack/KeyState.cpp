#include "KeyState.h"
#include "MirrorProcess.h"
#include <Utils/Controller/MoBox.h>

void KeyState::Init()
{
    GameData.Keyboard = mem.GetKeyboard();

    if (!GameData.Keyboard.InitKeyboard())
    {
        Utils::Log(2, XorStr("Failed to initialize keyboard hotkeys through kernel."));
        /*MessageBox(
            NULL,
            "Failed to initialize keyboard hotkeys through kernel.\n主機熱鍵初始化失敗，請重新啟動主機後再試.",
            "Error",
            MB_ICONERROR | MB_OK
        );*/
        std::thread([]() { MessageBox(NULL, "Failed to initialize keyboard hotkeys through kernel.\n主機熱鍵初始化失敗，請重新啟動主機後再試.", "Error", MB_ICONERROR | MB_OK); }).detach();
    }
    else
    {
        Utils::Log(1, XorStr("Keyboard Initialize Success (熱鍵初始化成功)"));
    }
}

void KeyState::Update()
{
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.KeyState++;

        GameData.Keyboard.UpdateKeys();

        std::unordered_map<int, std::vector<std::string>> Keys;
        Keys[GameData.Config.PhysX.ClearKey].push_back("ClearPhysX");
        Keys[GameData.Config.PhysX.DeBugKey].push_back("DeBugKey");
        Keys[GameData.Config.Window.SettingKey].push_back("SettingKey");
        Keys[GameData.Config.ESP.DebugKey].push_back("EspDebugKey");
        Keys[GameData.Config.ESP.BattleModeKey].push_back("BattleModeKey");
        Keys[GameData.Config.Window.CloseESPKey].push_back("CloseESPKey");
        Keys[GameData.Config.Window.ClearKey].push_back("ClearKey");
        Keys[GameData.Config.Container.EnableKey].push_back("ContainerKey");
        Keys[GameData.Config.Container.BoxEnableKey].push_back("BoxEnableKey");
        Keys[GameData.Config.Item.EnableKey].push_back("ItemEnableKey");
        Keys[GameData.Config.CodedLock.EnableKey].push_back("CodedLockEnableKey");
        Keys[GameData.Config.AimBot.Configs[0].Key].push_back("AimBotKey0");
        Keys[GameData.Config.AimBot.Configs[1].Key].push_back("AimBotKey1");
        Keys[GameData.Config.ESP.KeyDoorKey].push_back("KeyDoorKey");
        Keys[GameData.Config.Recoil.Key].push_back("RecoilKey");

        // Keys[0x50].push_back("Move");

        for (auto Key : Keys)
        {
            if (Key.first == 0) continue;
            
            if (GameData.Keyboard.WasKeyPressed(Key.first))
            {
                for (auto KeyName : Key.second)
                {
                    // if (KeyName == "Move")
                    //{
                    //	//CameraDelta: FOV=89.999992 Yaw=0.029998, Pitch=-0.029998, Roll=0.000000
                    //	auto CacheCamera = GameData.Global.Data.Camera.Rotation;
                    //	MoBox::Move(1, 1);
                    //	Sleep(100);
                    //	auto DeltaCamera = GameData.Global.Data.Camera.Rotation - CacheCamera;
                    //	Utils::Log(4, "CameraDelta: FOV=%f Yaw=%f, Pitch=%f, Roll=%f", GameData.Global.Data.Camera.FOV, DeltaCamera.Yaw, DeltaCamera.Pitch, DeltaCamera.Roll);
                    // }

                    if (KeyName == "RecoilKey")
                    {
                        GameData.Config.Recoil.Enable = !GameData.Config.Recoil.Enable;
                    }

                    if (KeyName == "ClearKey")
                    {
                        VMMDLL_CloseAll();
                        if (!mem.Init(false, false, true))
                        {
                            Utils::Log(2, XorStr("FPGA Afresh Initilize Error"));
                        }
                        else
                        {
                            Utils::Log(1, XorStr("FPGA Afresh Initilize Success"));
                        }

                        // {
                        //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
                        //     GameData.FuckEnc.Cache.clear();
                        //     Utils::Log(1, XorStr("Clear Enc Read Cache Sucesss."));
                        // }

                        MirrorProcess::Reset();

                        mem.SetPID(0);
                        mem.RefreshAll();
                        GName::Init();
                        GameData.Process.PID = 0;
                        GameData.Process.Base = 0;
                        GameData.Global.UWorld = 0;
                        GameData.Process.GameState = FGameState::Finding;
                        GameData.UPTRDecrypt.LastUPTREnable = -1;
                        GameData.UPTRDecrypt.LasDoubleFuncOffset = -1;
                        GameData.UPTRDecrypt.LastPID = 0;
                    }

                    if (KeyName == "CloseESPKey")
                    {
                        GameData.Config.Overlay.Enable = !GameData.Config.Overlay.Enable;
                    }

                    if (KeyName == "KeyDoorKey")
                    {
                        GameData.Config.ESP.ShowKeyDoor = !GameData.Config.ESP.ShowKeyDoor;
                    }

                    if (KeyName == "AimBotKey0")
                    {
                        GameData.Config.AimBot.ConfigIndex = 0;
                    }

                    if (KeyName == "AimBotKey1")
                    {
                        GameData.Config.AimBot.ConfigIndex = 1;
                    }

                    if (KeyName == "CodedLockEnableKey")
                    {
                        GameData.Config.CodedLock.Enable = !GameData.Config.CodedLock.Enable;
                        GameData.Config.CodedLock.EnableExitTrigger = !GameData.Config.CodedLock.EnableExitTrigger;
                        GameData.Config.CodedLock.EnablePlayerExit = !GameData.Config.CodedLock.EnablePlayerExit;
                    }

                    if (KeyName == "ItemEnableKey")
                    {
                        GameData.Config.Item.Enable = !GameData.Config.Item.Enable;
                    }

                    if (KeyName == "BoxEnableKey")
                    {
                        GameData.Config.Container.BoxEnable = !GameData.Config.Container.BoxEnable;
                    }

                    if (KeyName == "ContainerKey")
                    {
                        GameData.Config.Container.Enable = !GameData.Config.Container.Enable;
                    }

                    if (KeyName == "BattleModeKey")
                    {
                        GameData.Config.ESP.BattleMode = !GameData.Config.ESP.BattleMode;
                    }

                    if (KeyName == "EspDebugKey")
                    {
                        GameData.Config.ESP.Debug = !GameData.Config.ESP.Debug;
                    }

                    if (KeyName == "SettingKey")
                    {
                        GameData.Config.Window.Setting = !GameData.Config.Window.Setting;
                    }

                    if (KeyName == "DeBugKey")
                    {
                        GameData.Config.PhysX.DeBug = !GameData.Config.PhysX.DeBug;
                    }

                    if (KeyName == "ClearPhysX")
                    {
                        if (GameData.Physics.PxScene)
                        {
                            std::unique_lock<std::shared_mutex> lock(GameData.Physics.Mutex);
                            GameData.Physics.Loading.store(true);
                            if (GameData.Physics.PhysX.mScene)
                                GameData.Physics.PhysX.mScene->lockWrite();
                            PhysXMirror::ReleaseScene();
                            if (GameData.Physics.PhysX.mScene)
                                GameData.Physics.PhysX.mScene->unlockWrite();
                            Data::SetPxActors({});
                            Data::SetPxTriangleMeshs({});
                            Data::SetPxHeightFields({});
                            GameData.Physics.WorldOriginLocation = {0.f, 0.f, 0.f};
                            GameData.Physics.LastCameraLocation = {0.f, 0.f, 0.f};
                            GameData.Physics.Index = true;
                            GameData.Physics.Loading.store(false);
                            lock.unlock();
                        }
                    }
                }
            }
        }

        std::this_thread::sleep_for(std::chrono::microseconds(6));
    }
}