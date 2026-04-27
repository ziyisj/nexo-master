#include "WebRadar.h"
#include <Utils/Utils.h>
#include <Utils/Throttler.h>
#include <Utils/ProcessManager.h>
#include <Utils/MachineCodeGenerator.h>
#include "WebRadar.pb.h"
#include <Common/ItemTranslate.h>
#include <Utils/Sha.h>

static std::vector<uint8_t> lastSentData0;
static std::vector<uint8_t> lastSentData1;
static std::vector<uint8_t> lastSentData2;

FVector GetLocation(FVector Location)
{
    bool Rotation = GameData.Global.Data.LevelName == XorStr("Forrest");
    FVector2D WorldCenter = RadarMaps[GameData.Global.Data.LevelName].WorldCenter;
    FVector2D MapSize = RadarMaps[GameData.Global.Data.LevelName].MapSize;
    FVector2D WorldExtent = RadarMaps[GameData.Global.Data.LevelName].WorldExtent;
    FVector OriginalWorldCenter = RadarMaps[GameData.Global.Data.LevelName].OriginalWorldCenter;

    float OriginalX = 0.5f - 0.5f * ((WorldCenter.X -
        (OriginalWorldCenter.X + Location.X)) / WorldExtent.X);
    float OriginalY = 0.5f - 0.5f * ((WorldCenter.Y -
        (OriginalWorldCenter.Y + Location.Y)) / WorldExtent.Y);

    if (Rotation)
    {
        float Temp = OriginalX;
        OriginalX = 1 - OriginalY;
        OriginalY = Temp;
    }

    return { OriginalX, OriginalY, Location.Z };
}

bool WebRadar::SeedPlayers(WebSocketClient& client)
{
    //static std::vector<uint8_t> lastSentData;

    if (GameData.Process.GameState != FGameState::InGame)
    {
        //lastSentData0.clear();
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    }
    /*
        [19:51:14.402]  ▲ DEBUG    MapName: Brakkesh
        [19:51:14.403]  ▲ DEBUG    WorldCenter: 380000.000000f, -456000.000000f
        [19:51:14.403]  ▲ DEBUG    MapSize: 3840.000000f, 2160.000000f
        [19:51:14.403]  ▲ DEBUG    WorldExtent: 60000.000000f, 60000.000000f
        [19:51:14.403]  ▲ DEBUG    OriginalWorldCenter: 378673.000000f, -448841.000000f, -21556.000000f
    */
    bool Rotation = GameData.Global.Data.LevelName == XorStr("Forrest");

    auto Name = GameData.Global.Data.LevelName;
    if (Name == XorStr("SpaceCenter"))
    {
        Name = XorStr("Spacecenter");
    }

    if (Name.empty()) Name = XorStr("Empty Map");

    WebRadarMsg::RadarMessage radar_msg;
    radar_msg.set_msg_id(0);
    radar_msg.set_map_name(Name);
    radar_msg.set_game_status(GameData.Process.GameState == FGameState::InGame ? 1 : 0);

    GameData.Global.Data.Entitys.Players.GetReadLock();
    const auto& Players = GameData.Global.Data.Entitys.Players.Map();
    for (const auto& [Key, Player] : *Players) {
        if (Player.AliveState == EPlayerAliveState::Dead) continue;

        float Distance = GameData.Global.Data.Camera.Location.Distance(Player.Location) / 100.0f;
        if (Distance > 200 && Player.IsAI)
        {
            continue;
        }

        auto Color = (Player.PlayerState.TeamId < 0 || Player.PlayerState.TeamId > 16) ? GameData.Config.ESP.TeamColor[0] : GameData.Config.ESP.TeamColor[Player.PlayerState.TeamId];

        if (Player.IsMyTeam)
        {
            int InnerTeamIndex = Player.PlayerState.InnerTeamIndex;
            InnerTeamIndex += 1;
            if (InnerTeamIndex <= 0 || InnerTeamIndex > 4)
            {
                Color = GameData.Config.ESP.InnerTeamColor[0];
            }
            else
            {
                Color = GameData.Config.ESP.InnerTeamColor[InnerTeamIndex];
            }
        }

        if (Player.Entity.Type == EntityType::AI)
        {
            Color = GameData.Config.ESP.Configs["AI"].DefaultInfoColor;
            if (!GameData.Config.WebRadar.SendAI) continue;
        }

        if (Player.Entity.Type == EntityType::BOSS)
        {
            Color = GameData.Config.ESP.Configs["BOSS"].DefaultInfoColor;
            if (!GameData.Config.WebRadar.SendBOSS) continue;
        }

        auto Name = Utils::StringToUTF8(Player.PlayerState.PlayerNamePrivate);

        if (Player.Entity.Type == EntityType::Player)
        {
            if (GameData.Config.WebRadar.EncryptedNickname)
            {
                Name = Sha::sha256(std::to_string(Player.PlayerState.Uin ^ 0x88));
                Name = Name.substr(Name.length() - 6);
            }
            if (!GameData.Config.WebRadar.SendPlayers) continue;
        }

        FVector Original = GetLocation(Player.Location);

        float X = Original.X;
        float Y = Original.Y;

        FVector AimDirection = FRotator(0.0f, Player.LookingRotation.Yaw, 0.0f).GetUnitVector();
        FVector2D Direction = FVector2D{ AimDirection.X, AimDirection.Y };
        float AngleRadians = atan2(Direction.Y, Direction.X);
        float AngleDegrees = (AngleRadians + (Rotation ? (PI / 2.0f) : 0)) * 180.f / PI;

        WebRadarMsg::Player* player = radar_msg.add_players();
        player->set_name(Name);
        //player->set_health(Player.AliveState == EPlayerAliveState::Alive ? Player.Health : Player.ImpendingDeathHealth);
        player->set_player_type((int)Player.Entity.Type);
        player->set_hero_id(std::to_string(Player.PlayerState.HeroID));
        //player->set_weapon_id(std::to_string(Player.CacheCurWeapon.WeaponID));
        player->set_status((int)Player.AliveState);
        //player->set_direction(AngleDegrees);
        player->set_team_id(Player.IsAIPlayer ? XorStr("AI") : std::to_string(Player.PlayerState.TeamId));
        player->set_is_teammate(Player.IsMyTeam);
        player->set_is_self(Player.IsSelf);
        //player->set_position_x(X);
        //player->set_position_y(Y);
        //player->set_position_z(Player.Location.Z);
        player->set_id(Player.Address);

        WebRadarMsg::Color* color = player->mutable_color();
        color->set_r(Color[0] * 255);
        color->set_g(Color[1] * 255);
        color->set_b(Color[2] * 255);

        WebRadarMsg::Equipment* helmet = player->mutable_helmet();
        helmet->set_level(Player.HelmetLevel);
        helmet->set_durability(Player.HelmetArmorHealth);

        WebRadarMsg::Equipment* armor = player->mutable_armor();
        armor->set_level(Player.ArmorLevel);
        armor->set_durability(Player.ArmorHealth);
    }
    GameData.Global.Data.Entitys.Players.ReleaseReadLock();

    size_t size = radar_msg.ByteSizeLong();
    std::vector<uint8_t> buffer(size + 1);
    buffer[0] = 0x80;
    radar_msg.SerializeToArray(buffer.data() + 1, size);
    for (size_t i = 1; i < size + 1; i++)
    {
        buffer[i] ^= 0x18;
    }

    if (lastSentData0 == buffer) {
        return true;
    }

    auto res = client.send_binary(buffer.data(), buffer.size());

    if (res)
    {
        lastSentData0 = buffer;
    }

    return res;
}

bool WebRadar::SeedItems(WebSocketClient& client)
{
    

    //Utils::Log(4, "MapName: %s", GameData.Global.Data.LevelName);
    //Utils::Log(4, "WorldCenter: %ff, %ff", GameData.Global.Data.Radar.Main.WorldCenter.X, GameData.Global.Data.Radar.Main.WorldCenter.Y);
    //Utils::Log(4, "MapSize: %ff, %ff", GameData.Global.Data.Radar.Main.MapSize.X, GameData.Global.Data.Radar.Main.MapSize.Y);
    //Utils::Log(4, "WorldExtent: %ff, %ff", GameData.Global.Data.Radar.Main.WorldExtent.X, GameData.Global.Data.Radar.Main.WorldExtent.Y);
    //Utils::Log(4, "OriginalWorldCenter: %ff, %ff, %ff", GameData.Global.Data.Radar.WorldCenter.X, GameData.Global.Data.Radar.WorldCenter.Y, GameData.Global.Data.Radar.WorldCenter.Z);


    WebRadarMsg::RadarMessageSub radar_msg;
    radar_msg.set_msg_id(1);
    
    {
        GameData.Global.Data.Entitys.CodedLocks.GetReadLock();
        const auto& Items = GameData.Global.Data.Entitys.CodedLocks.Map();
        for (const auto& [Key, Item] : *Items)
        {
            int Type = 1;
            if (Item.Entity.Type == EntityType::PlayerExit) { 
                Type = 1;
                if (!GameData.Config.WebRadar.SendPlayerExit) continue;
            }
            if (Item.Entity.Type == EntityType::ExitTrigger) { 
                Type = 2;
                if (!GameData.Config.WebRadar.SendExitTrigger) continue;
            }
            if (Item.Entity.Type == EntityType::CodedLock) { 
                Type = 3;
                if (!GameData.Config.WebRadar.SendCodedLock) continue;
            }

            FVector Location = GetLocation(Item.Location);
            WebRadarMsg::Item* ItemMsg = radar_msg.add_items();
            ItemMsg->set_item_type(Type);
            if (Item.Entity.Type == EntityType::CodedLock) ItemMsg->set_item_name(std::to_string(Item.PwdSum));
            ItemMsg->set_position_x(Location.X);
            ItemMsg->set_position_y(Location.Y);
            ItemMsg->set_position_z(Location.Z);
        }
        GameData.Global.Data.Entitys.CodedLocks.ReleaseReadLock();
    }

    if (GameData.Config.WebRadar.SendKeyRoom) {
        GameData.Global.Data.Entitys.DoorDatas.GetReadLock();
        const auto& Items = GameData.Global.Data.Entitys.DoorDatas.Map();
        for (const auto& [Key, Item] : *Items)
        {
            int Type = 4;

            FVector Location = GetLocation(Item.Location);
            WebRadarMsg::Item* ItemMsg = radar_msg.add_items();
            ItemMsg->set_item_type(Type);
            ItemMsg->set_item_name(Utils::StringToUTF8(Item.Name));
            ItemMsg->set_item_value0(std::to_string(Item.Info.Quality));
            ItemMsg->set_position_x(Location.X);
            ItemMsg->set_position_y(Location.Y);
            ItemMsg->set_position_z(Location.Z);
        }
        GameData.Global.Data.Entitys.DoorDatas.ReleaseReadLock();
    }

    if (GameData.Config.WebRadar.SendContainers) {
        GameData.Global.Data.Entitys.Containers.GetReadLock();
        const auto& Items = GameData.Global.Data.Entitys.Containers.Map();
        for (const auto& [Key, Item] : *Items)
        {
            if (Item.bIsOpened) continue;

            /*float Distance = GameData.Global.Data.Camera.Location.Distance(Item.Location) / 100.0f;
            if (Distance > 100 && Item.Entity.DisplayName != XorStr("Computer"))
            {
                continue;
            }*/

            if (Item.Entity.DisplayName != XorStr("Computer"))
            {
                continue;
            }

            int Type = 5;

            FVector Location = GetLocation(Item.Location);
            WebRadarMsg::Item* ItemMsg = radar_msg.add_items();
            ItemMsg->set_item_type(Type);
            ItemMsg->set_item_name(Utils::StringToUTF8(I18N::T(Item.Entity.DisplayName, true)));
            ItemMsg->set_item_value0(Item.Entity.DisplayName);
            ItemMsg->set_item_value1(std::to_string(Item.PwdSum));
            ItemMsg->set_position_x(Location.X);
            ItemMsg->set_position_y(Location.Y);
            ItemMsg->set_position_z(Location.Z);
        }
        GameData.Global.Data.Entitys.Containers.ReleaseReadLock();
    }

    {
        GameData.Global.Data.Entitys.DeadBodys.GetReadLock();
        const auto& Items = GameData.Global.Data.Entitys.DeadBodys.Map();
        for (const auto& [Key, Item] : *Items)
        {
            if (!GameData.Config.WebRadar.SendAIDeadBoxs && Item.bIsAI)
            {
                continue;
            }

            if (!GameData.Config.WebRadar.SendPlayersDeadBoxs && !Item.bIsAI)
            {
                continue;
            }

            int Type = 6;

            std::string Color = Item.bIsAI
                ? std::format("{}, {}, {}", (int)(GameData.Config.Container.AIDeadBoxInfoColor[0] * 255), (int)(GameData.Config.Container.AIDeadBoxInfoColor[1] * 255), (int)(GameData.Config.Container.AIDeadBoxInfoColor[2] * 255))
                : std::format("{}, {}, {}", (int)(GameData.Config.Container.PlayerDeadBoxInfoColor[0] * 255), (int)(GameData.Config.Container.PlayerDeadBoxInfoColor[1] * 255), (int)(GameData.Config.Container.PlayerDeadBoxInfoColor[2] * 255));

            FVector Location = GetLocation(Item.Location);
            WebRadarMsg::Item* ItemMsg = radar_msg.add_items();
            ItemMsg->set_item_type(Type);
            ItemMsg->set_item_value0(Item.bIsAI ? "1": "0");
            ItemMsg->set_item_value1(Item.bIsOpened ? "1" : "0");
            ItemMsg->set_item_value2(Color);
            ItemMsg->set_position_x(Location.X);
            ItemMsg->set_position_y(Location.Y);
            ItemMsg->set_position_z(Location.Z);
        }
        GameData.Global.Data.Entitys.DeadBodys.ReleaseReadLock();
    }

    if (GameData.Config.WebRadar.SendItems) {
        GameData.Global.Data.Entitys.Items.GetReadLock();
        const auto& Items = GameData.Global.Data.Entitys.Items.Map();
        for (const auto& [Key, Item] : *Items)
        {
            int ItemIndex = -1;
            auto it = GameData.Config.Item.IDToIndex.find(Item.ItemID);
            if (it != GameData.Config.Item.IDToIndex.end()) {
                ItemIndex = it->second;
            }

            if (ItemIndex >= 0 && !GameData.Config.Item.Items[ItemIndex])
            {
                continue;
            }

            if (ItemIndex == -1 || (ItemIndex >= 0 && !GameData.Config.Item.ItemsForce[ItemIndex]))
            {
                if (GameData.Config.Item.EnablePriceFilter && (Item.Info.InitialGuidePrice < GameData.Config.Item.PriceGreaterThan * 1000)) continue;
                if (GameData.Config.Item.EnableQualityFilter && (Item.Info.Quality < GameData.Config.Item.QualityGreaterThan)) continue;
            }

            if (Item.Info.InitialGuidePrice <= 0) continue;

            FVector Location = GetLocation(Item.Location);
            WebRadarMsg::Item* ItemMsg = radar_msg.add_items();
            ItemMsg->set_item_type(0);
            ItemMsg->set_item_name(Utils::StringToUTF8(Item.Name));
            ItemMsg->set_item_value0(std::to_string(Item.Info.InitialGuidePrice));
            ItemMsg->set_item_value1(std::to_string(Item.Info.Quality));
            ItemMsg->set_position_x(Location.X);
            ItemMsg->set_position_y(Location.Y);
            ItemMsg->set_position_z(Location.Z);
        }
        GameData.Global.Data.Entitys.Items.ReleaseReadLock();
    }

    size_t size = radar_msg.ByteSizeLong();
    std::vector<uint8_t> buffer(size + 1);
    buffer[0] = 0x81;
    radar_msg.SerializeToArray(buffer.data() + 1, size);
    for (size_t i = 1; i < size + 1; i++)
    {
        buffer[i] ^= 0x18;
    }

    if (lastSentData1 == buffer) {
        return true;
    }

    auto res = client.send_binary(buffer.data(), buffer.size());

    if (res)
    {
        lastSentData1 = buffer;
    }

    return res;
}

bool WebRadar::SeedPlayersUpdate(WebSocketClient& client)
{
    if (GameData.Process.GameState != FGameState::InGame)
    {
        return false;
    }

    bool Rotation = GameData.Global.Data.LevelName == XorStr("Forrest");

    WebRadarMsg::RadarMessageUpdate radar_msg;
    radar_msg.set_msg_id(2);

    GameData.Global.Data.Entitys.Players.GetReadLock();
    const auto& Players = GameData.Global.Data.Entitys.Players.Map();
    for (const auto& [Key, Player] : *Players) {
        if (Player.AliveState == EPlayerAliveState::Dead) continue;

        float Distance = GameData.Global.Data.Camera.Location.Distance(Player.Location) / 100.0f;
        if (Distance > 200 && Player.IsAI)
        {
            continue;
        }

        if (Player.Entity.Type == EntityType::AI)
        {
            if (!GameData.Config.WebRadar.SendAI) continue;
        }

        if (Player.Entity.Type == EntityType::BOSS)
        {
            if (!GameData.Config.WebRadar.SendBOSS) continue;
        }

        if (Player.Entity.Type == EntityType::Player)
        {
            if (!GameData.Config.WebRadar.SendPlayers) continue;
        }

        FVector Original = GetLocation(Player.Location);

        float X = Original.X;
        float Y = Original.Y;

        FVector AimDirection = FRotator(0.0f, Player.LookingRotation.Yaw, 0.0f).GetUnitVector();
        FVector2D Direction = FVector2D{ AimDirection.X, AimDirection.Y };
        float AngleRadians = atan2(Direction.Y, Direction.X);
        float AngleDegrees = (AngleRadians + (Rotation ? (PI / 2.0f) : 0)) * 180.f / PI;

        WebRadarMsg::Player* player = radar_msg.add_players();
        player->set_health(Player.AliveState == EPlayerAliveState::Alive ? Player.Health : Player.ImpendingDeathHealth);
        player->set_weapon_id(std::to_string(Player.CacheCurWeapon.WeaponID));

        player->set_direction(AngleDegrees);
        player->set_position_x(X);
        player->set_position_y(Y);
        player->set_position_z(Player.Location.Z);
        player->set_id(Player.Address);
    }
    GameData.Global.Data.Entitys.Players.ReleaseReadLock();

    size_t size = radar_msg.ByteSizeLong();
    std::vector<uint8_t> buffer(size + 1);
    buffer[0] = 0x82;
    radar_msg.SerializeToArray(buffer.data() + 1, size);
    for (size_t i = 1; i < size + 1; i++)
    {
        buffer[i] ^= 0x18;
    }

    if (lastSentData2 == buffer) {
        return true;
    }

    auto res = client.send_binary(buffer.data(), buffer.size());

    if (res)
    {
        lastSentData2 = buffer;
    }

    return res;
}

void WebRadar::Loop()
{
    WebSocketClient client;
    Throttler Throttlered;
    Throttler ThrottleredItems;

    // 初始化protobuf库
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    while (true)
    {
        if (GameData.Config.WebRadar.Connected)
        {
            Utils::Log(0, XorStr("[Radar Server] Connecting to radar server (正在鏈接雷達服務器)"));

            std::string IP = std::format("ws://{}:{}/ws?pwd={}", GameData.Config.WebRadar.IP, GameData.Config.WebRadar.Port, GameData.Config.WebRadar.Password);

            if (GameData.Config.WebRadar.Mode == 0)
            {
                IP = "ws://127.0.0.1:9001/ws?pwd=1000";

                std::wstring exePath = L"Engine\\RadarServer\\RadarServer.exe";

                ProcessManager::WriteToFile(L"Pwd.txt", "1000");
                ProcessManager::WriteToFile(L"Port.txt", "9001");

                if (ProcessManager::CheckAndRunProcess(exePath)) 
                {
                  
                }
                else {
                    GameData.Config.WebRadar.Connected = false;
                    MessageBox(
                        NULL,
                        "RadarServer.exe failed to start\nRadarServer.exe 啓動失敗.",
                        "Radar Server Error",
                        MB_ICONERROR | MB_OK
                    );
                    continue;
                }
            }

            if (!client.connect(IP)) {
                Utils::Log(2, XorStr("[Radar Server] Failed to connect to WebRadar server (鏈接雷達服務器失敗)"));
                GameData.Config.WebRadar.Connected = false;
                MessageBox(
                    NULL,
                    "Failed to connect to WebRadar server\n鏈接雷達服務器失敗.",
                    "Radar Server Error",
                    MB_ICONERROR | MB_OK
                );
                continue;
            }

            Utils::Log(1, XorStr("[Radar Server] Connected to WebRadar server (雷達服務器已連接)"));
            if (GameData.Config.WebRadar.Mode == 0)
            {
                auto IPList = MachineCodeGenerator::GetAllIPv4();
                for (const auto& IP : IPList) {
                    Utils::Log(1, XorStr("[Radar Server] Radar Link (雷達鏈接): http://%s:9000/?pwd=1000"), IP);
                }
            }

            while (client.is_connected() && GameData.Config.WebRadar.Connected)
            {
                //if (!SeedPlayers(client))
                //{
                //    //Utils::Log(4, XorStr("Send Player Data Error"));
                //}
                Throttlered.executeTask(XorStr("WebRadarSeedPlayers"), std::chrono::milliseconds(1000), [&client] {
                    if (!SeedPlayers(client))
                    {
                        //Utils::Log(4, XorStr("Send Item Data Error"));
                    }
                });

                SeedPlayersUpdate(client);

                ThrottleredItems.executeTask(XorStr("WebRadarSeedItems"), std::chrono::milliseconds(3000), [&client] {
                    if (!SeedItems(client))
                    {
                        //Utils::Log(4, XorStr("Send Item Data Error"));
                    }
                });

                std::this_thread::sleep_for(std::chrono::milliseconds(GameData.Config.WebRadar.Delay));
            }

            if (client.is_connected())
            {
                client.close();
                Utils::Log(3, XorStr("[Radar Server] Disconnected (已斷開鏈接)"));
            }
            else {
                Utils::Log(2, XorStr("[Radar Server] Connection lost, attempting to reconnect (連線遺失，正在嘗試重新連線)"));
            }
        }
        else {
            lastSentData0.clear();
            lastSentData1.clear();
            lastSentData2.clear();
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }

    // 清理
    google::protobuf::ShutdownProtobufLibrary();
}