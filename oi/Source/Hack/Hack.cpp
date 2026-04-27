#include "Hack.h"
#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include <Hack/ENC/ENC.h>
#include "Recoil.h"
#include "PhysXCollect.h"
#include "MirrorProcess.h"
#include <Hack/ENC/ENC.h>

void Hack::Loop()
{
    static uint64_t CachePlayerCameraManager = 0;
    while (true)
    {
        if (GameData.Config.ESP.Debug)
            GameData.Global.Data.ThreadCount.Main++;

        if (GameData.Process.PID > 0)
            mem.RefreshTLB();

        //{
        //    auto Game = mem.Read<uint32_t>(GameData.Process.Base + 0x143508A0);
        //    auto Render = mem.Read<uint32_t>(GameData.Process.Base + 0x143508A0 + 4);

        //    Utils::Log(4, XorStr("ThreadID: Game: %d, Render: %d"), Game, Render);

        //    /*auto InSectorAnchor = mem.Read<uint32_t>(GameData.Global.Data.LocalPlayerInfo.Address + 0xcf4);
        //    Utils::Log(4, XorStr("InSectorAnchor: %d"), InSectorAnchor);*/

        //    /*for (size_t i = 0; i < 0x20000; i++)
        //    {
        //        auto Name = GName::GetNameByAddr(mem.Read<uint64_t>(GameData.Process.Base + 0x144B1380 + i));
        //        if (Name != "" && Name != "FAIL" && Name != "None")
        //        {
        //            Utils::Log(4, XorStr("0x%llX -> %s"), i, Name.c_str());
        //        }
        //    }*/
        //}

        if (GameData.Process.GameState != FGameState::InGame)
        {
            GameData.Process.PhysXBase = 0;
            CachePlayerCameraManager = 0;
            // GameData.Global.Data.Entitys.PlayerStates.Clear();
            // {
            //     std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
            //     GameData.FuckEnc.Cache.clear();
            // }
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        GameData.Global.GLocalPlayer = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("GLocalPlayer")));

        GameData.Global.PlayerController = mem.Read<uint64_t>(GameData.Global.GLocalPlayer + Offset::GetEncryptedOffset(XorStr("PlayerController")));

        // GameData.Global.PersistentLevel = mem.Read<uint64_t>(GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("PersistentLevel")));

        GameData.Global.MyHUD = mem.Read<uint64_t>(GameData.Global.PlayerController + Offset::GetEncryptedOffset(XorStr("MyHUD")));

        GameData.Global.Controllers = mem.Read<TArray<uint64_t>>(GameData.Global.MyHUD + Offset::GetEncryptedOffset(XorStr("Controllers")));

        GameData.Global.PlayerCameraManager = UPTRDecrypt::Indicator(FUPTRDecryptType::PlayerCameraManager, mem.Read<uint64_t>(GameData.Global.PlayerController + Offset::GetEncryptedOffset(XorStr("PlayerCameraManager"))));

        //{
        //    auto Name = GName::GetNameByAddr(GameData.Global.PlayerCameraManager);
        //    if (Name != XorStr("BP_TestPlayerCameraManager_C"))
        //    {
        //        {
        //            std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
        //            GameData.FuckEnc.Cache.clear();
        //        }
        //        Utils::Log(3, XorStr("PlayerCameraManager Name Mismatch: %s"), Name.c_str());
        //    }
        //}

        GameData.Global.AcknowledgedPawn = mem.Read<uint64_t>(GameData.Global.PlayerCameraManager + Offset::GetEncryptedOffset(XorStr("ViewTarget")));

        auto RealAcknowledgedPawn = UPTRDecrypt::Indicator(FUPTRDecryptType::AcknowledgedPawn, mem.Read<uint64_t>(GameData.Global.PlayerController + Offset::GetEncryptedOffset(XorStr("AcknowledgedPawn"))));

        if (RealAcknowledgedPawn == GameData.Global.AcknowledgedPawn)
        {
            GameData.Global.Data.bShowMouseCursor = mem.Read<UINT8>(GameData.Global.PlayerController + Offset::GetEncryptedOffset(XorStr("bShowMouseCursor"))) == 37;
        }
        else
        {
            GameData.Global.Data.bShowMouseCursor = false;
        }

        if (!Utils::ValidPtr(GameData.Process.PhysXBase))
        {
            GameData.Physics.PxScene = mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(GameData.Process.PhysXBase + Offset::GetEncryptedOffset(XorStr("PhysXSDK"))) + 0x8));

            if (Utils::ValidPtr(GameData.Physics.PxScene))
            {
                GameData.Process.PhysXBase = 0;
            }
        }
        else
        {
            GameData.Process.PhysXBase = mem.GetModuleBase(XorStr("PhysX3_x64.dll"));
            GameData.Physics.PxScene = 0;
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(GameData.Config.Window.CacheSleep));
    }
}

void Hack::DecryptLoop()
{
    while (true)
    {
        if (GameData.Process.GameState != FGameState::Finding)
        {
            Decrypt::Init();
        }

        Sleep(2000);
    }
}

uint32_t Hack::GetDecryptCameraOffset()
{
    if (!GameData.Global.Data.CameraEncrypt.bEnableCameraEncrypt)
    {
        return Offset::GetEncryptedOffset(XorStr("CameraOffset1"));
    }
    switch (GameData.Global.Data.CameraEncrypt.CameraEncryptIndex)
    {
    case 0:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 1:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 2:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 3:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 4:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 5:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 + (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 6:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 7:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 8:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey1 - 1)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 9:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * ((GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2) ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 10:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 11:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 12:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 13:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 14:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (2 * GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 15:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2 * (1 - GameData.Global.Data.CameraEncrypt.CameraKey1)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 16:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 17:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 18:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 19:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 20:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 21:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 + (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 22:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 - (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 23:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey2 + 1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 24:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 25:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 26:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 27:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 28:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + 2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 29:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 30:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey2 - GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 31:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 32:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 33:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1) * (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 34:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 35:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 ^ (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 36:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 + 1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 37:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey2 + 1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 38:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 39:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (2 * GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 40:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 - GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 41:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey2 - GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 42:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 43:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 44:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2)) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 45:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 + GameData.Global.Data.CameraEncrypt.CameraKey2) * (GameData.Global.Data.CameraEncrypt.CameraKey2 - GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 46:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 ^ GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 47:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey2 * (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey1 + 1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 48:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey1 - GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 * GameData.Global.Data.CameraEncrypt.CameraKey2) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    case 49:
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * (GameData.Global.Data.CameraEncrypt.CameraKey2 + GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 - GameData.Global.Data.CameraEncrypt.CameraKey1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    }
    if (GameData.Global.Data.CameraEncrypt.CameraEncryptIndex != 50)
        return Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
    else
        return Offset::GetEncryptedOffset(XorStr("CameraOffset2")) * GameData.Global.Data.CameraEncrypt.CameraKey1 * (GameData.Global.Data.CameraEncrypt.CameraKey1 * GameData.Global.Data.CameraEncrypt.CameraKey2 + 1) + Offset::GetEncryptedOffset(XorStr("CameraOffset3"));
}

void Hack::UpdateCamera()
{
    Throttler ThrottleredSleep;
    while (true)
    {
        if (GameData.Process.GameState != FGameState::InGame)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        if (GameData.Config.Window.CameraSleep > 0)
            ThrottleredSleep.executeTaskWithSleep(XorStr("UpdateLocalCameraSleep"), std::chrono::milliseconds(GameData.Config.Window.CameraSleep), [] {});

        // GameData.Global.Data.CameraEncrypt.Offset = (uint32_t)GetDecryptCameraOffset();

        // C7E3F20 A8A4D10 相机加密  9FE730
        FMinimalViewInfo Camera = mem.Read<FMinimalViewInfo>(GameData.Global.PlayerCameraManager + Offset::GetEncryptedOffset(XorStr("CameraOffset1")));
        // Utils::Log(4, "Camera %d (0x%llX) %d | %p %llx", Camera.EncHandler.Index, Camera.EncHandler.Index & 0x3FF, Camera.EncHandler.bEncrypted, GameData.Global.PlayerCameraManager, GameData.Global.Data.CameraEncrypt.Offset);

        if (Camera.EncHandler.Index != 65535)
        {
            if (!GameData.UPTRDecrypt.bVEH)
            {
                unsigned int* PTREncLocation = (unsigned int*)&Camera.Location;
                ENC::Decrypt(1, PTREncLocation, 0xC, Camera.EncHandler.Index);
            }
            else
            {
                MirrorProcess::VEHDecrypt(GameData.UPTRDecrypt.EncBase1, &Camera.Location, 0xC, Camera.EncHandler.Index);
            }

            // Utils::Log(1, "Dec Camera %f %f %f", Camera.Location.X, Camera.Location.Y, Camera.Location.Z);
        }
        GameData.Global.Data.Camera = Camera;
    }
}

void Hack::InitDMA()
{
    Utils::Log(0, XorStr("Start Initialization..."));

    bool bInitFPGAError = false;
    if (!mem.Init(GameData.Config.Window.MemMap, false, GameData.Config.Window.NoRefresh))
    {
        bInitFPGAError = true;
        if (mem.Init(false, false, GameData.Config.Window.NoRefresh))
        {
            GameData.Process.bFPGA = true;
            bInitFPGAError = false;
        }
    }
    else
    {
        GameData.Process.bFPGA = true;
        bInitFPGAError = false;
        Utils::Log(1, XorStr("FPGA Initilize Success"));
    }

    if (bInitFPGAError)
    {
        Utils::Log(2, XorStr("FPGA Initilize Error"));
        MessageBox(NULL, XorStr("FPGA Initilize Error.\nFPGA 設備初始化失敗"), XorStr("Error"), MB_ICONERROR | MB_OK);
        exit(1);
    }
}

void Hack::Init()
{
    while (!GameData.Auth.bLogin)
    {
        Sleep(100);
        continue;
    }

    // Offset::Init();
    // Offset::toJson();

    // Utils::Log(0, "%p", Offset::GetEncryptedOffset(XorStr("GLocalPlayer")));

    InitDMA();

    KeyState::Init();

    std::thread ProcessThread(Process::Loop);

    // GName::Init();

    std::thread LoopThread(Loop);
    std::thread DecryptLoopThread(DecryptLoop);
    std::thread UpdateCameraThread(UpdateCamera);
    std::thread KeyStateUpdateThread(KeyState::Update);
    std::thread ActorLoopThread(Actor::Loop);
    std::thread PlayerLoopThread(Player::Loop);
    std::thread PlayerInfoLoopThread(Player::Info);
    std::thread AimBotLoopThread(AimBot::Loop);

    std::thread RadarLoopThread(Radar::Loop);
    std::thread LoopCodedLocksThread(Actor::LoopCodedLocks);
    std::thread LoopThrowsThread(Actor::LoopThrows);
    std::thread ContainerLoopThread(Container::Loop);
    std::thread ItemLoopThread(Item::Loop);

    std::thread WebRadarLoopThread(WebRadar::Loop);

    std::thread DebugLoopThread(Actor::DebugLoop);

    std::thread PhysXMirrorLoopThread(PhysXMirror::Update);

    std::thread RecoilLoopThread(Recoil::Loop);

    std::thread PhysXCollectLoopThread(PhysXCollect::Update);

    try
    {
        if (GameData.Config.AimBot.Connected && GameData.Config.Window.Auto)
        {
            std::thread ConnectedBox([] {
                switch (GameData.Config.AimBot.Controller)
                {
                case 0:
                    GameData.Config.AimBot.Connected = NewKmBox::Init(GameData.Config.AimBot.COMNumber);
                    break;
                case 1:
                    GameData.Config.AimBot.Connected = KmBoxNet::Init(GameData.Config.AimBot.IP, GameData.Config.AimBot.Port, GameData.Config.AimBot.UUID);
                    break;
                case 2:
                    GameData.Config.AimBot.Connected = MoBox::Init(GameData.Config.AimBot.COMNumber);
                    break;
                case 3:
                    GameData.Config.AimBot.Connected = DHZBox::Init(GameData.Config.AimBot.DHZIP, std::stoi(GameData.Config.AimBot.DHZPort));
                    break;
                case 4:
                    GameData.Config.AimBot.Connected = CatBox::Init(GameData.Config.AimBot.CATBOXIP, GameData.Config.AimBot.CATBOXPort, GameData.Config.AimBot.CATBOXUUID);
                    break;
                case 5:
                    GameData.Config.AimBot.Connected = true;
                    break;
                default:
                    break;
                }
            });

            ConnectedBox.detach();
        }
    }
    catch (const std::system_error& e)
    {
    }

    ProcessThread.join();
}