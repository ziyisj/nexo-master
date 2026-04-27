#pragma once

#include <winsock2.h>
#include <windows.h>
#include <Common/Data.h>
#include "DMARender.h"
#include "Texture.h"
#include "RenderHelper.h"
#include <d3d11.h>
#include <Utils/Download.h>
#include <future>
#include <filesystem>

inline static std::unordered_map<int, ImColor> SquadMemberIndexColors = {
    {0, ImColor(162, 166, 15)},
    {1, ImColor(161, 84, 53)},
    {2, ImColor(66, 110, 135)},
    {3, ImColor(33, 136, 67)},
    {4, ImColor(115, 18, 37)},
    {5, ImColor(160, 72, 108)},
    {6, ImColor(32, 41, 96)},
    {7, ImColor(1104, 158, 182)},
};

inline std::future<std::tuple<bool, std::string>> MapTextureFuture;
inline bool MapIsLoadedFaild = false;

class Map
{
public:
    static ImVec2 WorldToRadar(const RECT& Rect, const DMARender::MapTransform& mTransform, FVector WorldLocation, bool NeedWorldOrigin = true, bool UseTruncf = true)
    {
        auto WorldCenter = RadarMaps[GameData.Global.Data.LevelName].WorldCenter;
        auto MapSize = RadarMaps[GameData.Global.Data.LevelName].MapSize;
        auto WorldExtent = RadarMaps[GameData.Global.Data.LevelName].WorldExtent;

        //Utils::Log(4, "Center %f %f", WorldCenter.X, WorldCenter.Y);
        //Utils::Log(4, "MapSize %f %f", MapSize.X, MapSize.Y);
        //Utils::Log(4, "Extent %f %f", WorldExtent.X, WorldExtent.Y);

        float HorizontalOffset = (4096.0f - MapSize.X) / 2.0f;
        float VerticalOffset = 0.0f;

        float OriginalX = 0.5f - 0.5f * ((WorldCenter.X -
            (GameData.Global.Data.Radar.WorldCenter.X + WorldLocation.X)) / WorldExtent.X);
        float OriginalY = 0.5f - 0.5f * ((WorldCenter.Y -
            (GameData.Global.Data.Radar.WorldCenter.Y + WorldLocation.Y)) / WorldExtent.Y);

        /*float X = HorizontalOffset + OriginalX * MapSize.X;
        float Y = VerticalOffset + OriginalY * 4096.f;*/
        //float X = (OriginalX * MapSize.X + 128.0f - 44.f + GameData.Global.Data.Radar.Debug2);
        float X = (OriginalX * 4096.f);
        float Y = (OriginalY * 4096.f + GameData.Global.Data.Radar.Debug3);

        //Utils::Log(4, "%f %f", OriginalX, OriginalY);

        //X = 4096.f * X;
       // Y = 4096.f * Y;

        //Utils::Log(4, "%f %f", X, Y);

        ImVec2 MapLocation = { X, Y };

        MapLocation.x *= mTransform.mapZoom;
        MapLocation.y *= mTransform.mapZoom;

        MapLocation.x += mTransform.dragOffsetX;
        MapLocation.y += mTransform.dragOffsetY;

        MapLocation.x += (float)Rect.left;
        MapLocation.y += (float)Rect.top;

        return MapLocation;
    }

    static ImVec2 WorldToRadarCentered(const RECT& Rect, DMARender::MapTransform& mTransform, const FVector WorldLocation)
    {
        if (ImGui::IsMouseDown(ImGuiMouseButton_Left) && !ImGui::GetIO().WantCaptureMouse)
        {
            return {};
        }

        // 调用原始函数计算原始的MapLocation
        ImVec2 MapLocation = WorldToRadar(Rect, mTransform, WorldLocation);

        // 计算窗口的中心坐标
        float centerX = (Rect.right + Rect.left) / 2.0f;
        float centerY = (Rect.bottom + Rect.top) / 2.0f;

        // 计算图片在窗口中心的偏移量
        float offsetX = centerX - MapLocation.x;
        float offsetY = centerY - MapLocation.y;

        // 调整拖拽偏移，使图像在窗口内上下左右居中
        mTransform.dragOffsetX += offsetX;
        mTransform.dragOffsetY += offsetY;

        // 返回调整后的MapLocation
        return ImVec2(MapLocation.x + offsetX, MapLocation.y + offsetY);
    }

    static void DrawFPS(const RECT& Rect)
    {
        ImDrawList* DrawList = ImGui::GetBackgroundDrawList();

        auto TextPosition = ImVec2(Rect.left + 20, Rect.top + 20);
        std::string matrixStr;
        for (int i = 0; i < 4; ++i) {
            matrixStr += std::format("    [{: .4f}, {: .4f}, {: .4f}, {: .4f}]\n",
                GameData.Global.Data.MartixData[i][0],
                GameData.Global.Data.MartixData[i][1],
                GameData.Global.Data.MartixData[i][2],
                GameData.Global.Data.MartixData[i][3]);
        }
        RenderHelper::Text(Utils::StringToUTF8(
            std::format(R"(
UWorld: 0x{:0X}
GameState: 0x{:0X}
DFMGamePlayerMode: {}
PersistentLevel: 0x{:0X}
GLocalPlayer: 0x{:0X}
PlayerController: 0x{:0X}
AcknowledgedPawn: 0x{:0X}
PlayerCameraManager: 0x{:0X}
FOV: {}
Location: X={}, Y={}, Z={}
Rotation: Pitch={}, Yaw={}, Roll={}
LoaclPlayerInfo: Name={}, TeamId={}, Camp={}, Health={}
LoaclPlayerWeaponInfo: WeaponID={}, WeaponType={}, WeaponInstanceID={}, ClipAmmoCount={}
MatixBase: 0x{:0X}
MartixData:
{}
                )",
                GameData.Global.UWorld,
                GameData.Global.GameState,
				(INT32)GameData.Global.Data.DFMGamePlayerMode,
                GameData.Global.PersistentLevel,
                GameData.Global.GLocalPlayer,
                GameData.Global.PlayerController,
                GameData.Global.AcknowledgedPawn, 
                GameData.Global.PlayerCameraManager,
                GameData.Global.Data.Camera.FOV,
                GameData.Global.Data.Camera.Location.X,
                GameData.Global.Data.Camera.Location.Y,
                GameData.Global.Data.Camera.Location.Z,
                GameData.Global.Data.Camera.Rotation.Pitch,
                GameData.Global.Data.Camera.Rotation.Yaw,
                GameData.Global.Data.Camera.Rotation.Roll,
                GameData.Global.Data.LocalPlayerInfo.PlayerState.PlayerNamePrivate,
                GameData.Global.Data.LocalPlayerInfo.PlayerState.TeamId,
                GameData.Global.Data.LocalPlayerInfo.PlayerState.Camp,
                GameData.Global.Data.LocalPlayerInfo.Health,
                GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID,
                (INT32)GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType,
                GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponInstanceID,
                GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponAmmoCount,
				GameData.Global.MatixBase,
                matrixStr
            )
        ).c_str(), TextPosition, IM_COL32(255, 255, 255, 200), 18, false, false, false);
    }

    static void DrawOverlay(const RECT& Rect, DMARender::MapTransform& mTransform)
    {
        
        ImDrawList* DrawList = ImGui::GetBackgroundDrawList();
        //GameData.Global.Data.Radar.WorldCenter.X = 358155.687500f;
        //GameData.Global.Data.Radar.WorldCenter.Y = 750191.750000f;
        //GameData.Global.Data.Radar.WorldCenter.X = 357385.f;
        //GameData.Global.Data.Radar.WorldCenter.Y = -769888.f;

        //auto MapLocation = WorldToRadar(Rect, mTransform, { 357385.f + 24870.533203f, -769888.f + 19630.914062f ,0 });
        //auto MapLocation = WorldToRadar(Rect, mTransform, { 24870.533203f, 19630.914062f ,0 });
        //auto MapLocation = WorldToRadar(Rect, mTransform, { 364598.812500f, -787795.000000f ,0 });
        //DrawList->AddCircleFilled(MapLocation, 10, ImColor(255, 255, 255, 180), 30);
        //Utils::Log(1, "%f %f", MapLocation.x, MapLocation.y);

        /*
            [02:54:55.935]  ▲ SUCCESS  WorldExtent 357385.000000 -769888.000000
            [02:54:55.935]  ▲ SUCCESS  RadarWorldExtent 358155.687500 -750191.750000
            [02:54:55.935]  ▲ SUCCESS  RadarMapSize 3840.000000 2400.000000
            [02:54:55.935]  ▲ SUCCESS  RadarWorldExtent 81086.304688 80988.500000
            [02:54:55.943]  ▲ SUCCESS  WorldExtent 357385.000000 -769888.000000
        */
        //GameData.Global.Data.Radar.WorldCenter.X = 357385.000000f;
        //GameData.Global.Data.Radar.WorldCenter.Y = -769888.000000f;

        //RadarMaps
        //Utils::Log(1, "WorldExtent %f %f", GameData.Global.Data.Radar.WorldCenter.X, GameData.Global.Data.Radar.WorldCenter.Y);
        //Utils::Log(1, "RadarWorldExtent %f %f", GameData.Global.Data.Radar.Main.WorldCenter.X, GameData.Global.Data.Radar.Main.WorldCenter.Y);
        //Utils::Log(1, "RadarMapSize %f %f", GameData.Global.Data.Radar.Main.MapSize.X, GameData.Global.Data.Radar.Main.MapSize.Y);
        //Utils::Log(1, "RadarWorldExtent %f %f", GameData.Global.Data.Radar.Main.WorldExtent.X, GameData.Global.Data.Radar.Main.WorldExtent.Y);

        if (false) {
            std::unordered_map<uint64_t, FVector> Items = {
                {0x295c76670, {12187.718750f, -7296.687500f, 0.f}},
                {0x2878a99a0, {1076.312500f, -11484.000000f, 0.f}},
                {0x5028de6670, {1038.593750f, -11540.687500f, 0.f}},
                {0x50ad930010, {-39883.593750f, 4845.562500f, 0.f}},
                {0x2dce60010, {-39601.593750f, 4843.000000f, 0.f}},
                {0x50bf836670, {-39992.187500f, 4659.375000f, 0.f}},
                {0x21ae6ccd0, {-36739.406250f, -15385.937500f, 0.f}},
                {0x10aa26670, {-36566.687500f, -15576.812500f, 0.f}},
                {0x2f3213340, {-36438.781250f, -15712.937500f, 0.f}},
                {0x2a5420010, {-34793.593750f, -22898.312500f, 0.f}}
            };

            for (auto Item : Items)
            {
                auto MapLocation = WorldToRadar(Rect, mTransform, Item.second);
                DrawList->AddCircleFilled(MapLocation, 10, ImColor(255, 255, 255, 100), 30);
            }
        }

        if (true) {
            GameData.Global.Data.Entitys.Players.GetReadLock();
            const auto& Players = GameData.Global.Data.Entitys.Players.Map();

            using NowType = std::remove_reference_t<decltype(Players->begin()->second)>;
            std::vector<std::pair<const NowType*, float>> SortedItems;
            SortedItems.reserve(Players->size());

            for (const auto& [key, player] : *Players) {
                float Distance = GameData.Global.Data.Camera.Location.Distance(player.Location) / 100.0f;
                SortedItems.emplace_back(&player, Distance);
            }

            std::sort(SortedItems.begin(), SortedItems.end(),
                [](const auto& a, const auto& b) {
                    return a.second > b.second;
                });

            for (const auto& SortedItem : SortedItems) {
                const auto& Player = *SortedItem.first;
                const float Distance = SortedItem.second;

                if (Player.AliveState == EPlayerAliveState::Dead || Player.IsAI) continue;

                auto MapLocation = WorldToRadar(Rect, mTransform, Player.Location);

                //Utils::Log(1, "{0x%llx, {%ff, %ff}}", Player.Address, Player.Location.X, Player.Location.Y);

                DrawList->AddCircleFilled(MapLocation, 10, ImColor(255, 255, 255, 255), 30);

               // RenderHelper::Text("Test", MapLocation, IM_COL32(255, 255, 255, 255), 14, true, true, false);
            }

            //Utils::Log(4, "------------------------"); 

            GameData.Global.Data.Entitys.Players.ReleaseReadLock();
        }
    }

    static std::tuple<bool, std::string> LoadMapAsync() {
        try {
            std::string file = "Engine/Resource/Maps/" + GameData.Global.Data.LevelName + ".png";
            if (std::filesystem::exists(file)) {
                return std::make_tuple(true, GameData.Global.Data.LevelName);
            }

            std::string url = GameData.Remote.VerifyData["Assets"]["Maps"][GameData.Global.Data.LevelName];

            if (url == "") {
                return std::make_tuple(false, GameData.Global.Data.LevelName);
            }

            Download Downloader(url, file);
            Downloader.Execute();

            return std::make_tuple(true, GameData.Global.Data.LevelName);
        }
        catch (std::exception& e) {
            return std::make_tuple(false, "Exception occurred");
        }
    }

    static void DrawStates(const RECT& Rect, const ImFontAtlas* FontAtlas)
    {
        ImVec2 CenterPosition = { float(Rect.left + Rect.right) / 2, float(Rect.top + Rect.bottom) / 2 };
        std::string Text;
        switch (GameData.Process.GameState)
        {
        case FGameState::InGame:
           // GameData.Global.Data.LevelName = "Dam_Iris";
            Text = Utils::StringToUTF8(std::format("Loading... [{}]", GameData.Global.Data.LevelName));

            if (MapIsLoadedFaild)
            {
                Text = Utils::StringToUTF8(std::format("Loading Map Error [{}]", GameData.Global.Data.LevelName));
            }
            else if (!GameData.Radar.MapIsLoaded) {
                if (!MapTextureFuture.valid()) {
                    MapTextureFuture = std::async(std::launch::async, LoadMapAsync);
                }

                if (MapTextureFuture.valid()) {
                    std::future_status status = MapTextureFuture.wait_for(std::chrono::seconds(0));
                    if (status == std::future_status::ready) {
                        std::tuple<bool, std::string> result = MapTextureFuture.get();
                        if (std::get<0>(result)) {
                            GameData.Radar.MapIsLoaded = true;
                        }
                        else {
                            MapIsLoadedFaild = true;
                        }
                    }
                }
            }
            break;
        default:
            Text = I18N::T("Wait Load Radar");
            GameData.Radar.MapIsLoaded = false;
            MapIsLoadedFaild = false;
            break;
        }

        ImColor TextColor = IM_COL32(161, 161, 170, 180);
        bool UseColorOverlay = false;
        static int Count = 0;

        //ImGui::PushFont(FontAtlas->Fonts[4]);
        //const std::string Title = "NEXO RADAR";
        //RenderHelper::Text(Title.c_str(), CenterPosition, IM_COL32(245, 245, 245, 255), 60, true, true, false);
        //RenderHelper::Text(Title.c_str(), CenterPosition, IM_COL32(245, 245, 245, 255), 60, true, true, false);
        //RenderHelper::Text(Title.c_str(), CenterPosition, IM_COL32(245, 245, 245, 255), 60, true, true, false);
        //ImGui::PopFont();

        //CenterPosition.y += 30;

        /*ImGui::PushFont(FontAtlas->Fonts[3]);
        RenderHelper::Text(Text.c_str(), CenterPosition, TextColor, 25, true, true, false);
        ImGui::PopFont();*/
    }

	static void Render(ID3D11Device* g_pd3dDevice, const ImFontAtlas* FontAtlas)
	{
        RECT Rect;
        GetWindowRect(GameData.Config.Overlay.hWnd, &Rect);

        ImGui::SetNextWindowViewport(ImGui::GetMainViewport()->ID);
        ImGui::SetNextWindowSize({ 0, 0 });
        ImGui::Begin("RadarMap", nullptr, ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoDocking | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoResize);

        DrawFPS(Rect);

        //if (!GameData.Radar.MapIsLoaded)
        //{
        //    DrawStates(Rect, FontAtlas);
        //}
        //else if (GameData.Radar.MapIsLoaded && !MapIsLoadedFaild)
        //{
        //    std::string MapFile = "Engine/Resource/Maps/" + GameData.Global.Data.LevelName + ".png";
        //    if (GetFileAttributesA(MapFile.c_str()) != INVALID_FILE_ATTRIBUTES) {
        //        auto Allocator = Texture::LoadTexture(g_pd3dDevice, "Engine/Resource/Maps/" + GameData.Global.Data.LevelName + ".png");
        //        //GameData.Radar.ImageMapHeight = Allocator.Height;
        //        static DMARender::MapTransform mTrans = DMARender::MapTransform();

        //        if (mTrans.mapZoom < 0) {
        //            float mapSize = fmaxf(Allocator.Width, Allocator.Height);
        //            float screenSize = fminf(Rect.right - Rect.left, Rect.bottom - Rect.top);
        //            mTrans.mapZoom = screenSize / mapSize * 5.f;
        //            mTrans.mapHeight = Allocator.Height;
        //            mTrans.mapWidth = Allocator.Width;

        //            {
        //                // 计算图片中心点在窗口中的位置
        //                float centerX = (Rect.right + Rect.left) / 2.0f;
        //                float centerY = (Rect.bottom + Rect.top) / 2.0f;

        //                // 计算缩放后的图片大小
        //                float scaledWidth = mTrans.mapWidth * mTrans.mapZoom;
        //                float scaledHeight = mTrans.mapHeight * mTrans.mapZoom;

        //                // 计算图片在窗口中的左上角位置
        //                float left = centerX - scaledWidth / 2.0f;
        //                float top = centerY - scaledHeight / 2.0f;

        //                // 更新拖拽偏移
        //                mTrans.dragOffsetX = 0;
        //                mTrans.dragOffsetY = 0;

        //                // 更新图片大小和缩放比例
        //                mTrans.mapWidth = scaledWidth;
        //                mTrans.mapHeight = scaledHeight;

        //                // 将图片左上角移动到窗口中心
        //                mTrans.dragOffsetX = centerX - scaledWidth / 2.0f;
        //                mTrans.dragOffsetY = centerY - scaledHeight / 2.0f;
        //            }

        //        }

        //        if (!GameData.Config.Window.SettingHovered && !GameData.Config.Window.PlayersHovered) {
        //            auto mousePos = ImGui::GetMousePos();
        //            static float lastMousePosX = mousePos.x;
        //            static float lastMousePosY = mousePos.y;

        //            if (/*(!GameData.Config.Window.Compass || Utils::ValidPtr(GameData.LocalPlayerInfo.Entity)) && */ImGui::IsMouseDown(ImGuiMouseButton_Left) && !ImGui::GetIO().WantCaptureMouse) {
        //                mTrans.dragOffsetX += mousePos.x - lastMousePosX;
        //                mTrans.dragOffsetY += mousePos.y - lastMousePosY;
        //            }

        //            float MouseWheel = ImGui::GetIO().MouseWheel;
        //            bool WasUpKeyPressed = GameData.Keyboard.IsKeyDown(GameData.Config.Radar2D.ZoomUpKey);
        //            bool WasDownKeyPressed = GameData.Keyboard.IsKeyDown(GameData.Config.Radar2D.ZoomDownKey);

        //            if (WasUpKeyPressed) MouseWheel = 0.1f;
        //            if (WasDownKeyPressed) MouseWheel = -0.1f;

        //            if (MouseWheel != 0.0f) {
        //                float oldZoom = mTrans.mapZoom;
        //                //Zoom in/out
        //                mTrans.mapZoom *= (1 + (MouseWheel * .06));
        //                if (mTrans.mapZoom < 0.01)
        //                    mTrans.mapZoom = 0.01;

        //                if ((!GameData.Config.Window.Compass || Utils::ValidPtr(GameData.Global.Data.LocalPlayerInfo.Address)))
        //                {
        //                    //Zoom toward cursor
        //                    float deltaX = (Allocator.Width * oldZoom) - (Allocator.Width * mTrans.mapZoom);
        //                    float deltaY = (Allocator.Height * oldZoom) - (Allocator.Height * mTrans.mapZoom);

        //                    float percX = (mousePos.x - Rect.left - mTrans.dragOffsetX) / ((Allocator.Width * mTrans.mapZoom));
        //                    float percY = (mousePos.y - Rect.top - mTrans.dragOffsetY) / ((Allocator.Width * mTrans.mapZoom));

        //                    mTrans.dragOffsetX += (deltaX * percX);
        //                    mTrans.dragOffsetY += (deltaY * percY);
        //                }
        //                else
        //                {
        //                    WorldToRadarCentered(Rect, mTrans, { 0, 0, 0.f });
        //                }
        //            }

        //            lastMousePosX = mousePos.x;
        //            lastMousePosY = mousePos.y;
        //        }

        //        ImDrawList* fgDrawList = ImGui::GetBackgroundDrawList();
        //        fgDrawList->AddImage(
        //            Allocator.Texture,
        //            ImVec2(
        //                Rect.left + mTrans.dragOffsetX,
        //                Rect.top + mTrans.dragOffsetY
        //            ),
        //            ImVec2(
        //                Rect.left + mTrans.dragOffsetX + (Allocator.Width * mTrans.mapZoom),
        //                Rect.top + mTrans.dragOffsetY + (Allocator.Height * mTrans.mapZoom)
        //            )
        //        );

        //        /*if (GameData.Config.Window.Compass)
        //        {
        //            WorldToRadarCentered(Rect, mTrans, { GameData.Radar.LastMinimapPos.X, GameData.Radar.LastMinimapPos.Y, 0.f });
        //        }*/
        //        DrawOverlay(Rect, mTrans);
        //    }
        //    else {
        //        DrawStates(Rect, FontAtlas);
        //    }
        //}

        ImGui::End();
    }
};