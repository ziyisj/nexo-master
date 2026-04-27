#pragma once

#include "Radar.h"

void Radar::Loop()
{
    static INT DefaultSleep = 10;
    static INT Sleep = DefaultSleep;

    while (true)
    {
        if (GameData.Config.ESP.Debug) GameData.Global.Data.ThreadCount.Radar++;

        if (GameData.Process.GameState != FGameState::InGame || GameData.Global.Data.DFMGamePlayerMode != EDFMGamePlayMode::GamePlayMode_SOL)
        {
            Sleep = DefaultSleep;
            GameData.Global.Data.Radar.MiniMapAddress = 0;
            GameData.Global.Data.Radar.MainMapAddress = 0;
            GameData.Global.Data.Radar.Mini = {};
            GameData.Global.Data.Radar.Main = {};
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        auto hScatter = mem.CreateScatterHandle();

        // Utils::Log(1, "GameData.Global.Data.LevelName: %s", GameData.Global.Data.LevelName.c_str());

        //static uint64_t CharacterStatusAddress{};

        if (Utils::ValidPtr(GameData.Global.Data.Radar.MiniMapAddress) || Utils::ValidPtr(GameData.Global.Data.Radar.MainMapAddress)) {
            if (!Utils::ValidPtr((uint64_t)GameData.Global.Controllers.GetData()) && GameData.Global.Controllers.Size() > 0 && GameData.Global.Controllers.Size() < 100)
            {
                for (auto& Item : GameData.Global.Controllers.GetVector())
                {
                    TArray<uint64_t> ChildControllers = mem.Read<TArray<uint64_t>>(Item + Offset::GetEncryptedOffset(XorStr("ChildControllers")));
                    if (!Utils::ValidPtr((uint64_t)ChildControllers.GetData()) && ChildControllers.Size() > 0 && ChildControllers.Size() < 100)
                    {
                        for (auto& Controller : ChildControllers.GetVector())
                        {
                            auto View = mem.Read<uint64_t>(Controller + Offset::GetEncryptedOffset(XorStr("View")));
                            auto ObjID = mem.Read<UINT32>(View + Offset::GetEncryptedOffset(XorStr("ObjID")));
                            auto Name = GName::GetNameById(ObjID);

                            //std::cout << Name << std::endl;

                            /*if (Name == XorStr("WBP_CharacterStatus_PC_C"))
                            {
                                CharacterStatusAddress = View;
                            }*/

                            //std::cout << Name << std::endl;

                            if (Name == XorStr("WBP_MiniMap_Mobile_C") || Name.find(XorStr("WBP_Mini")) != std::string::npos)
                            {
                                //std::cout << Name << std::endl;
                                GameData.Global.Data.Radar.MiniMapAddress = View;
                            }

                            if (Name == XorStr("WBP_Map_Main_PC_C"))
                            {
                                //std::cout << Name << std::endl;
                                GameData.Global.Data.Radar.MainMapAddress = View;
                            }
                        }
                    }

                }
                //std::cout << "-------" << std::endl;
            }
        }

        /*if (!Utils::ValidPtr(CharacterStatusAddress))
        {
            auto ArmorImg = mem.Read<uint64_t>(CharacterStatusAddress + 0x490);
            uint32_t Brush = 0x178;
            auto Size = mem.Read<FVector2D>(ArmorImg + Brush + 0x08);
            auto ResourceObject = mem.Read<uint64_t>(ArmorImg + Brush + 0x48);
            Utils::Log(4, "ArmorImg: %p %f %f", ArmorImg, Size.X, Size.Y);
            Utils::Log(4, "ResourceObject: %p", ResourceObject);
            std::cout << GName::GetNameByAddr(ResourceObject) << std::endl;
            Utils::Log(4, "CharacterStatusAddress: %p", CharacterStatusAddress);
            GName::DebugActorNames(ResourceObject, 0x0, 0x300);
        }*/

        int WorldCenterX{ 0 };
        int WorldCenterY{ 0 };
        int WorldCenterZ{ 0 };

        mem.AddScatterRead(hScatter, GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")), &WorldCenterX);
        mem.AddScatterRead(hScatter, GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")) + 0x4, &WorldCenterY);
        mem.AddScatterRead(hScatter, GameData.Global.UWorld + Offset::GetEncryptedOffset(XorStr("WorldToMap")) + 0x8, &WorldCenterZ);

        MapData Mini{};
        MapData Main{};

        mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("Visibility")), &Mini.Visibility);
        mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("Visibility")), &Main.Visibility);
        mem.ExecuteReadScatter(hScatter);

        if (GameData.Global.Data.Radar.Mini.Visibility == ESlateVisibility::SelfHitTestInvisible)
        {
            Mini.bVisibility = true;
        }
        else {
            Mini.bVisibility = false;
        }

        if (GameData.Global.Data.Radar.Main.Visibility == ESlateVisibility::SelfHitTestInvisible)
        {
            Main.bVisibility = true;
            Sleep = 1;
        }
        else {
            Main.bVisibility = false;
            Sleep = DefaultSleep;
        }

        if (Mini.bVisibility)
        {
            // 读取小地图数据
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("WorldCenter")), &Mini.WorldCenter);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("WorldExtent")), &Mini.WorldExtent);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("MapSize")), &Mini.MapSize);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("CurrentScale")), &Mini.CurrentScale);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MiniMapAddress + Offset::GetEncryptedOffset(XorStr("CurrentMapUVPos")), &Mini.CurrentMapUVPos);
        }

        if (Main.bVisibility)
        {
            // 读取大地图数据
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("WorldCenter")), &Main.WorldCenter);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("WorldExtent")), &Main.WorldExtent);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("MapSize")), &Main.MapSize);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("CurrentScale")), &Main.CurrentScale);
            mem.AddScatterRead(hScatter, GameData.Global.Data.Radar.MainMapAddress + Offset::GetEncryptedOffset(XorStr("CurrentMapUVPos")), &Main.CurrentMapUVPos);
        }

        mem.ExecuteReadScatter(hScatter);

        GameData.Global.Data.Radar.Mini = Mini;
        GameData.Global.Data.Radar.Main = Main;

        GameData.Global.Data.Radar.WorldCenter = FVector((float)WorldCenterX, (float)WorldCenterY, (float)WorldCenterZ);

        GameData.Global.Data.Radar.Mini.LeftTop = GameData.Global.Data.Radar.Mini.CurrentMapUVPos;
        GameData.Global.Data.Radar.Mini.RightBottom = GameData.Global.Data.Radar.Mini.LeftTop + 1.f / GameData.Global.Data.Radar.Mini.CurrentScale;

        if (Main.bVisibility)
        {
            GameData.Global.Data.Radar.Main.LeftTop = GameData.Global.Data.Radar.Main.CurrentMapUVPos;

            const auto ScreenWidth = GameData.Config.Overlay.ScreenWidth;
            const auto ScreenHeight = GameData.Config.Overlay.ScreenHeight;

            float BaseOffset = 0.21875f;
            float ScreenRatio = (float)ScreenWidth / 1920.0f;
            float HeightRatio = (float)ScreenHeight / 1080.0f;
            float Ratio = 1.f;

            if (ScreenWidth == 1728 && ScreenHeight == 1080)
            {
                Ratio = 0.95f;
            }

            if (ScreenWidth == 1680 && ScreenHeight == 1050)
            {
                Ratio = 1.008f;
            }

            if (ScreenWidth == 1600 && ScreenHeight == 1024)
            {
                Ratio = 1.04f;
            }

            if (ScreenWidth == 1600 && ScreenHeight == 900)
            {
                Ratio = 1.44f;
            }

            if (ScreenWidth == 1600 && ScreenHeight == 900)
            {
                Ratio = 1.44f;
            }

            if (ScreenWidth == 1440 && ScreenHeight == 1080)
            {
                Ratio = 0.763f;
            }

            if (ScreenWidth == 2304 && ScreenHeight == 1440)
            {
                Ratio = 0.715f;
            }

            if (ScreenWidth == 2560 && ScreenHeight == 1440)
            {
                Ratio = 0.5640f;
            }

            if (GameData.Config.MainRadar.RatioY > 0.f)
            {
                Ratio = GameData.Config.MainRadar.RatioY;
            }

            float AdjustedOffset = BaseOffset * ScreenRatio * (Ratio * HeightRatio);

            GameData.Global.Data.Radar.Main.LeftTop.Y += AdjustedOffset / GameData.Global.Data.Radar.Main.CurrentScale;
            GameData.Global.Data.Radar.Main.RightBottom = {
                GameData.Global.Data.Radar.Main.LeftTop.X + 1.0f / GameData.Global.Data.Radar.Main.CurrentScale,
                GameData.Global.Data.Radar.Main.LeftTop.Y + GameData.Global.Data.Radar.Main.MapSize.Y / GameData.Global.Data.Radar.Main.MapSize.X / GameData.Global.Data.Radar.Main.CurrentScale
            };
        }
        //Utils::Log(4, "Radar MiniMapAddress: %p, MainMapAddress: %p", GameData.Global.Data.Radar.MiniMapAddress, GameData.Global.Data.Radar.MainMapAddress);
        //Utils::Log(4, "Radar Mini.Visibility: %d, Main.Visibility: %d", (int)GameData.Global.Data.Radar.Mini.Visibility, (int)GameData.Global.Data.Radar.Main.Visibility);
        //Utils::Log(4, "%p WorldCenter %f %f", GameData.Global.UWorld, GameData.Global.Data.Radar.WorldCenter.X, GameData.Global.Data.Radar.WorldCenter.Y);

        mem.CloseScatterHandle(hScatter);

        std::this_thread::sleep_for(std::chrono::milliseconds(Sleep));
    }
}

FVector2D Radar::WorldToScreen(const FVector& Location)
{
    FVector2D ScreenLocation(-100.f, -100.f);

    auto& RadarData = GameData.Global.Data.Radar;

    if (Utils::ValidPtr(RadarData.MainMapAddress) || Utils::ValidPtr(RadarData.MiniMapAddress))
    {
        return ScreenLocation;
    }

    MapData MapData = RadarData.Main.bVisibility ? RadarData.Main : RadarData.Mini;
    bool Rotation = GameData.Global.Data.LevelName == XorStr("Forrest");

    float X = 0.5f - 0.5f * (((float)MapData.WorldCenter.X -
        (RadarData.WorldCenter.X + Location.X)) / MapData.WorldExtent.X);

    float Y = 0.5f - 0.5f * (((float)MapData.WorldCenter.Y -
        (RadarData.WorldCenter.Y + Location.Y)) / MapData.WorldExtent.Y);

    if (Rotation)
    {
        float Temp = X;
        X = 1 - Y;
        Y = Temp;
    }

    if (X > MapData.RightBottom.X || X < MapData.LeftTop.X || Y > MapData.RightBottom.Y || Y < MapData.LeftTop.Y)
    {
        return ScreenLocation;
    }

    float DeltaX = MapData.RightBottom.X - MapData.LeftTop.X;
    float DeltaY = MapData.RightBottom.Y - MapData.LeftTop.Y;

    const float Epsilon = std::numeric_limits<float>::epsilon();

    if (abs(DeltaX) < Epsilon || abs(DeltaY) < Epsilon)
    {
        return ScreenLocation;
    }

    ScreenLocation = FVector2D((X - MapData.LeftTop.X) / DeltaX, (Y - MapData.LeftTop.Y) / DeltaY);

    if (!RadarData.Main.bVisibility)
    {
        float Ratio = (float)GameData.Config.Overlay.ScreenWidth / 1920.f;
        return FVector2D(38 * Ratio + 255 * Ratio * ScreenLocation.X, 57 * Ratio + 255 * Ratio * ScreenLocation.Y);
    }
    else {
        ScreenLocation.X = GameData.Config.Overlay.ScreenWidth * ScreenLocation.X;
        ScreenLocation.Y = GameData.Config.Overlay.ScreenHeight * ScreenLocation.Y;
    }

    return ScreenLocation;
}