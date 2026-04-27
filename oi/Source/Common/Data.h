#pragma once

#include <windows.h>
#include <iostream>
#include <unordered_map>
#include <shared_mutex>
#include <array>
#include <cmath>
#include <variant>
#include <DMALibrary/Memory/Memory.h>
#include <nlohmann/json.hpp>
#include <imgui/imgui.h>
#include <deque>
#include <Common/Constant.h>
#include <Common/Entity.h>
#include <Utils/Engine.h>
#include <Common/SDK.h>
#include <Utils/SafeMap.h>
#include <Utils/PhysX.h>
#include <atomic>

struct FDynamicDecrypt
{
    uint64_t FuncAddress{};
};

enum class Language
{
    English,
    Chinese,
    ChineseTraditional
};

struct FGameData
{
    Language CurrentLanguage = Language::ChineseTraditional;

    c_keys Keyboard;
    std::string MapName{};
    INT32 ThreadSleep = 2000;

    // sf::Font Font;

    struct
    {
        std::shared_mutex Mutex;
        uint8_t* Memory = nullptr;
        size_t MemorySize = 0;
        bool bVirtualProtect = false;
    } MirrorProcess;

    struct
    {
        UINT32 PID{};
        uint64_t Base{};
        uint64_t Size{};
        uint64_t PhysXBase{};
        FGameState GameState = FGameState::Finding;
        FGameState PreviousGameState = FGameState::Finding;
        bool bFPGA = false;
        bool ReInit = false;
    } Process;

    struct
    {
        bool Loading{};
        uint64_t Key{};
        int ErrorCount{};
        uint64_t Start{};
    } Decrypt;

    struct
    {
        int FuncIndex{};
        long KeyMask{};
        int Key{};
        std::unordered_map<std::string, FDynamicDecrypt> Funs{};
    } DynamicDecrypt;

    struct
    {
        std::shared_mutex CacheMutex;

        uint32_t LastUPTREnable = -1;
        uint64_t LasDoubleFuncOffset = -1;
        int LastPID = 0;

        bool bVEH{};
        uint32_t UPTRIndex{};
        uint32_t UPTREnable{};
        uint32_t UPTRKey{};
        uint32_t SwitchEncryptor{};

        uint64_t EncBase0{};
        uint64_t EncBase1{};

        struct
        {
            uint32_t Key0{};
        } GameState;

        struct
        {
            uint32_t Key0{};
        } PlayerCameraManager;

        struct
        {
            uint32_t Key0{};
            uint32_t Key1{};
        } RootComponent;

        struct
        {
            uint32_t Key0{};
            uint32_t Key1{};
        } CharacterEquipComponentCache;
    } UPTRDecrypt;

    struct
    {
        std::shared_mutex CacheMutex;
        std::unordered_map<uint64_t, std::variant<uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t, float, double>> Cache{};
    } FuckEnc;

    struct
    {
        bool Init = false;
        bool InitError = false;
        bool bLogin = false;
        std::string Version = "1.0.0.0";
        std::string Ex = "2025-05-22 15:51:23";
        std::string Announcement{};
        std::string OffsetData{};
        std::string Token{};
        char Username[256]{};
        char Password[256]{};
        char UnPassword[256]{};
        char ReUsername[256]{};
        char RePassword[256]{};
        char ReKey[256]{};
        char RePWDUsername[256]{};
        char RePWDPassword[256]{};
        char RePWDKey[256]{};
        char Key[256]{};
        std::string Mac{};
    } Auth;

    struct
    {
        bool bEncrypt = false;
        uint64_t Engine{};
        uint64_t GameViewport{};
        uint64_t UWorld{};
        uint64_t GameState{};
        uint64_t OwningGameInstance{};
        uint64_t LocalPlayers{};
        int LocalPlayersCount{};
        uint64_t GLocalPlayer{};
        uint64_t PlayerController{};
        uint64_t AcknowledgedPawn{};
        uint64_t PersistentLevel{};
        uint64_t PlayerCameraManager{};
        uint64_t Actor{};
        uint64_t MatixBase{};
        uint64_t MyHUD{};
        TArray<uint64_t> Controllers{};
        float DefaultFOV{};

        struct
        {
            SafeMap<uint64_t, std::string> GNames{};

            FMinimalViewInfo Camera{};
            EDFMGamePlayMode DFMGamePlayerMode{};
            std::string DisplayName{};
            std::string LevelName{};
            INT32 MapID{};
            FWorldOriginLocation WorldOriginLocation{};
            bool bShowMouseCursor = false;
            float MartixData[4][4];
            PlayerInfo LocalPlayerInfo{};
            bool bIsOpening{};
            int AlivePlayer{};
            int EarlyWarningPlayer{};
            int EarlyWarningPlayerDistance{};

            int NewAlivePlayers{};
            int NewExitPlayers{};

            ThrowInfo ThrowPerviewDynamicActor{};

            struct
            {
                bool bEnableCameraEncrypt{};
                uint8_t CameraEncryptIndex{};
                uint64_t CameraKey1{};
                uint64_t CameraKey2{};
                uint32_t Offset{};
            } CameraEncrypt;

            struct
            {
                FVector WorldCenter{};

                uint64_t MiniMapAddress{};
                uint64_t MainMapAddress{};

                MapData Mini{};
                MapData Main{};

                float Debug1 = 1.45f;
                float Debug2 = 0.f;
                float Debug3 = 0.f;
            } Radar;

            struct
            {
                SafeMap<UINT8, ContainerBoxInfo> CurrentOpeningContainerBoxInfo{};

                SafeMap<std::string, EntityInfo> Infos{};
                SafeMap<uint64_t, EntityInfo> InfosById{};

                SafeMap<uint64_t, ActorInfo> CacheActors{};

                SafeMap<uint64_t, PlayerInfo> CachePlayers{};
                SafeMap<uint64_t, PlayerInfo> Players{};

                SafeMap<uint64_t, ContainerInfo> CacheContainers{};
                SafeMap<uint64_t, ContainerInfo> Containers{};

                SafeMap<uint64_t, DebugActorInfo> CacheDebugActors{};
                SafeMap<uint64_t, DebugActorInfo> DebugActors{};

                SafeMap<uint64_t, ItemInfo> CacheItems{};
                SafeMap<uint64_t, ItemInfo> Items{};

                SafeMap<uint64_t, ItemInfo> DeadBodyItems{};
                SafeMap<uint64_t, ItemInfo> ContainerItems{};

                SafeMap<uint64_t, DeadBodyInfo> CacheDeadBodys{};
                SafeMap<uint64_t, DeadBodyInfo> DeadBodys{};

                SafeMap<uint64_t, CodedLockInfo> CacheCodedLocks{};
                SafeMap<uint64_t, CodedLockInfo> CodedLocks{};

                SafeMap<uint64_t, ThrowInfo> CacheThrows{};
                SafeMap<uint64_t, ThrowInfo> Throws{};

                SafeMap<uint64_t, PlayerStateInfo> PlayerStates{};

                SafeMap<uint64_t, DoorDataInfo> DoorDatas{};

            } Entitys;

            struct
            {
                uint64_t Main{};
                uint64_t Process{};
                uint64_t KeyState{};
                uint64_t Actor{};
                uint64_t Player{};
                uint64_t AimBot{};
                uint64_t Radar{};
                uint64_t PhysX{};
                uint64_t CodedLock{};
                uint64_t Throw{};
                uint64_t Container{};
                uint64_t Item{};
                uint64_t Debug{};
            } ThreadCount;

            struct
            {
                mutable std::shared_mutex ItemTranslate;
                mutable std::shared_mutex ItemDataTableInfo;
                mutable std::shared_mutex ItemName;
            } Mutex;
        } Data;
    } Global;

    mutable std::shared_mutex EnemyInfoMapMutex;
    std::unordered_map<uint64_t, tMapInfo> EnemyInfoMap;

    struct
    {
        std::atomic<bool> Loading{false};

        bool bCanLoadLocalModel = true;
        bool SaveLocalModelUpdate = false;
        float GridSize = 100.f;

        float EditYaw = 0.f;
        float EditPitch = 0.f;
        float EditRoll = 0.f;

        float EditAddYaw = 0.f;
        float EditAddPitch = 0.f;
        float EditAddRoll = 0.f;

        CPhysX PhysX;

        uint64_t PxScene;
        uint32_t UpdateTime = 0;
        uint32_t DynamicUpdateTime = 0;
        uint32_t StaticUpdateTimestamp = 0;
        uint32_t DynamicUpdateTimestamp = 0;
        uint32_t LastStaticUpdateTimestamp = 0;
        uint32_t LastDynamicUpdateTimestamp = 0;
        FVector FWorldOriginLocation{};
        physx::PxVec3 WorldOriginLocation{};
        FVector LastCameraLocation{};

        bool Index;
        bool bUpdateDynamic = false;

        mutable std::shared_mutex Mutex;

        mutable std::shared_mutex PxActorsMutex;
        std::unordered_map<uint64_t, CPxActor> PxActors;

        mutable std::shared_mutex DynamicPxActorsMutex;
        std::unordered_map<uint64_t, CPxActor> DynamicPxActors;

        mutable std::shared_mutex TestPxActorsMutex;
        std::unordered_map<uint64_t, FVector> TestPxActors;

        mutable std::shared_mutex PxTriangleMeshsMutex;
        std::unordered_map<uint64_t, CPxTriangleMesh> PxTriangleMeshs;

        mutable std::shared_mutex PxHeightFieldsMutex;
        std::unordered_map<uint64_t, CPxHeightField> PxHeightFields;

        mutable std::shared_mutex PxConvexMeshsMutex;
        std::unordered_map<uint64_t, CPxConvexMesh> PxConvexMeshs;
    } Physics;

    struct
    {
        nlohmann::json VerifyData;
        std::unordered_map<std::string, uint64_t> Offset;
        std::unordered_map<std::string, std::string> EncryptedKeys;

        UINT16 EncryptClassXor = 0x28;
        uint64_t EncryptClassMask = 0xB387AAFB064FC548;
        UINT32 EncryptKeyAdd = 0x6D0;
        UINT16 ObfuscateKey = 0x7B;
        UINT16 ObfuscateKeyAdd = 0x20;

        uint64_t AESKey = 0xA486CDC;
        uint64_t AESIV = 0x5B9CADF;

        std::shared_mutex KeyMutex;
    } Remote;

    struct
    {
        bool MapIsLoaded = false;
    } Radar;

    struct
    {
        std::shared_mutex LockMutex;
        bool Lock = false;
        EntityType Type = EntityType::Player;
        uint64_t Target{};
        int Bone = -1;
        int FirstBone = -1;
        float ScreenDistance = 1000.f;
        PlayerInfo TargetPlayerInfo;
    } AimBot;

    struct
    {
        struct
        {
            float THROW_SPEED = 2700.f;      // 第二次测试的投掷速度
            float GRAVITY = 980.0f;          // 确认的重力值
            float BOUNCE_ENERGY_LOSS = 0.5f; // 第二次测试的弹跳损失
            float SIMULATION_STEP = 0.016f;  // 保持原有步长
            int MAX_BOUNCES = 3;
            float MAX_SIMULATION_TIME = 8.0f; // 保持长模拟时间
            float MIN_VELOCITY = 10.0f;
            float GRENADE_RADIUS = 5.0f;
            float correctionFactorX = 0.f; // X分量校正系数
            float correctionFactorY = 0.f; // Y分量校正系数
            float correctionFactor = 0.f;  // Z分量校正系数
        } SimulateGrenade;

        struct
        {
            bool Enable = false;
            bool Init = false;
            int FusionMode = 1;
            bool sRgbCapable = false;
            int MonitorCurrentIdx = 0;
            int ScreenWidth = 0;
            int ScreenHeight = 0;
            int ScreenX = 0;
            int ScreenY = 0;
            bool ShowFPS = true;
            bool ShowAimBotConfig = true;
            bool ShowPlayerAlive = true;
            bool ShowAccount = true;
            bool VSync = false;
            int FontIndex = 0;
            HWND hWnd = NULL;
            std::unordered_map<int, std::string> Fonts = {
                {0, "Default.ttc"}, {1, "1.ttf"}, {2, "2.ttf"}, {3, "3.ttf"}, {4, "4.ttf"}, {5, "5.ttf"}, {6, "6.ttf"},

                {7, "7.ttf"},       {8, "8.ttf"}, {9, "9.ttf"},
            };
            bool FontBold = false;
            // FVector2D SettingSize = {};
            // FVector2D SettingPos = {};
            // FVector2D AuthSize = {};
            // FVector2D AuthPos = {};
        } Overlay;

        struct
        {
            std::unordered_map<std::string, PlayerConfig> Configs = {
                {"Player", PlayerConfig{}},
                {"AI", PlayerConfig{}},
                {"BOSS", PlayerConfig{}},
            };
            bool Debug = false;
            int DebugKey = VK_F12;
            bool Stroke = true;
            float OutlineColor[4] = {45.f / 255.0f, 45.f / 255.0f, 45.f / 255.0f, 230.0f / 255.0f};

            int OtherSleep = 4;
            int SkeletonWidth = 1;
            int LimitFPS = 240;
            int TargetFPS = 120;
            int AntiAliasing = 8;
            int DepthBits = 24;
            bool LimitFPSStatus = false;
            bool VisibleCheck = true;
            int VisCheckStyle = 1;
            float InfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            float InfoHeaderColor[4] = {38.f / 255.0f, 187.f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            float InfoBgColor[4] = {28.f / 255.0f, 28.f / 255.0f, 28.f / 255.0f, 255.0f / 255.0f};
            int InfoType = 1;
            int InfoFontSize = 14;
            float InfoX = 5;
            float InfoY = 21;

            bool BattleMode = false;
            int BattleModeKey = 192;
            bool HideContainer = true;
            bool HideBox = true;
            bool HideItem = true;
            bool HideCodedLock = true;
            bool HideThrow = false;
            bool HideAI = false;
            bool HideBOSS = false;
            bool HideItemList = true;
            bool HideOffscreenItem = true;
            bool HideExitTrigger = false;
            bool HidePlayerExit = false;

            bool HidePlayerArmor = false;
            bool HidePlayerTeam = false;
            bool HidePlayerHealth = false;
            bool HidePlayerName = false;
            bool HidePlayerWeapon = false;
            bool HideKeyDoor = true;

            bool EarlyWarning = true;
            int EarlyWarningMaxDistance = 200;
            float EarlyWarningColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            bool EarlyWarningStageColor = true;
            int EarlyWarningPosY = 89;
            int EarlyWarningFontSize = 14;
            int ValueModel = 0;
            int DebugMaxDistance = 100;
            bool EarlyWarningHideAlive = false;

            int KeyDoorKey = 0;
            bool ShowKeyDoor = false;
            int KeyDoorMaxDistance = 400;
            int KeyDoorFontSize = 12;

            int IndicatorSize = 1;
            int IndicatorMax = 100;
            bool Indicator = false;

            std::unordered_map<int, float[4]> TeamColor = {

            };

            std::unordered_map<int, float[4]> InnerTeamColor = {

            };
        } ESP;

        struct
        {
            bool Enable = true;
            int EnableKey = VK_F7;
            bool EnableExitTrigger = true;
            bool EnablePlayerExit = true;
            float InfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            float ExitTriggerInfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            float PlayerExitInfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            int InfoFontSize = 10;
            int InfoIconSize = 14;
            bool PWD = true;
            int MaxDistance = 100;
            int OtherMaxDistance = 800;
            bool Distance = true;
            bool Name = true;
            bool Icon = true;
        } CodedLock;

        struct
        {
            bool Enable = true;
            float InfoColor[4] = {255.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 255.0f / 255.0f};
            float OffInfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            int InfoFontSize = 12;
            int MaxDistance = 80;

            std::unordered_map<std::string, bool> Throws{};
        } Throw;

        struct
        {
            bool Enable = true;
            int ZoomUpKey = VK_UP;
            int ZoomDownKey = VK_DOWN;
        } Radar2D;

        struct
        {
            bool Enable = true;
            bool HideBone = false;
            bool FOV = true;

            bool Connected = false;
            int ConfigIndex = 0;
            int Controller = 0;
            int COM = 0;
            int COMNumber = 0;

            char BaudRate[256] = "115200";
            int Freq = 500;

            HANDLE hKmBoxSerial;
            char IP[256] = "192.168.2.188";
            char Port[256] = "";
            char UUID[256] = "";

            char DHZIP[256] = "192.168.8.88";
            char DHZPort[256] = "8888";
            char DHZRANDOM[256] = "88";

            char CATBOXIP[256] = "192.168.7.1";
            char CATBOXPort[256] = "";
            char CATBOXUUID[256] = "";

            int Mode = 0;

            int FPSLimit[7] = {8, 8, 2, 2, 2, 2, 0};

            float FOVColor[4] = {1.f, 1.f, 1.f, 1.f};

            std::unordered_map<int, AimBotWeaponConfig> Configs = {{0,
                                                                    {VK_F2,
                                                                     {
                                                                         {EWeaponItemType::Rifle, AimBotConfig()},
                                                                         {EWeaponItemType::Submachine, AimBotConfig()},
                                                                         {EWeaponItemType::Shotgun, AimBotConfig()},
                                                                         {EWeaponItemType::LightMachine, AimBotConfig()},
                                                                         {EWeaponItemType::PrecisionShootingRifle, AimBotConfig()},
                                                                         {EWeaponItemType::Sniper, AimBotConfig()},
                                                                         {EWeaponItemType::Pistol, AimBotConfig()},
                                                                     }}},
                                                                   {1, {VK_F3, {{EWeaponItemType::Rifle, AimBotConfig()}, {EWeaponItemType::Submachine, AimBotConfig()}, {EWeaponItemType::Shotgun, AimBotConfig()}, {EWeaponItemType::LightMachine, AimBotConfig()}, {EWeaponItemType::PrecisionShootingRifle, AimBotConfig()}, {EWeaponItemType::Sniper, AimBotConfig()}, {EWeaponItemType::Pistol, AimBotConfig()}}}}};
        } AimBot;

        struct
        {
            bool Setting = true;
            int SettingKey = VK_HOME;
            bool Players = false;
            int PlayersKey = VK_INSERT;
            int CloseESPKey = VK_DELETE;
            int ClearKey = VK_F9;
            int ESPSleep = 4;
            int CameraSleep = 0;
            int CacheSleep = 400;
            bool FreqMem = false;
            bool MemMap = true;
            bool NoEncCache = false;
            bool FreqAll = false;
            bool IsHeino = false;
            bool IsGarena = false;
            int Server = 0;
            bool AutoCollectDecrypt = false;
            bool Auto = true;
            bool NoRefresh = true;
            bool SettingHovered = false;
            bool PlayersHovered = false;
            bool Compass = false;
            bool PhysX = false;
            bool Main = true;
            bool IsLogin = false;
            struct
            {
                char LoginUsername[128];
                char LoginPassword[128];
                char RegUsername[128];
                char RegPassword[128];
                char UnBindLoginUsername[128];
                char UnBindLoginPassword[128];
                char Key[128];
            } LoginForm;
            std::string ExTime = "";
            bool UseSubWindow = false;
            int RenderModel = 0;
            float Color[4] = {38.f / 255.f, 187.f / 255.f, 255.f / 255.f, 255.f / 255.f};
            float InfoWidth = 100.f;
            float InfoHeight = 100.f;
        } Window;

        struct
        {
            bool Enable = true;
            int EnableKey = VK_F6;
            bool Distance = true;
            bool Name = true;
            bool List = true;
            bool AutoShow = true;
            bool OnLeft = false;
            int IndicatorSize = 1;
            int ListSize = 1;
            bool Price = true;
            bool Indicator = true;
            bool ShowBoxItems = true;
            bool ShowConItems = true;
            bool bSortByPrice = false;
            int ItemMaxCount = 10;
            bool EnableQualityFilter = true;
            bool EnablePriceFilter = true;
            bool ShowLine = false;
            float LineWidth = 1.5f;
            float LinePosY = 92.f;
            int QualityGreaterThan = 2;
            int PriceGreaterThan = 10;
            int ItemRender = 2;
            int MaxDistance = 100;
            int FontSize = 11;
            int IconSize = 14;
            std::atomic<bool> Items[2977]{};
            std::atomic<bool> ItemsForce[2977]{};
            std::unordered_map<uint64_t, size_t> IDToIndex{};
            std::unordered_map<int, float[4]> QualityColor = {

            };
        } Item;

        struct
        {
            float Active[4] = {38.f / 255.f, 187.f / 255.f, 255.f / 255.f, 1.0f};
        } Theme;

        struct
        {
            bool Enable = true;
            bool Distance = true;
            bool Name = true;
            bool BoxDistance = true;
            bool BoxName = true;
            bool BoxEnable = true;
            bool AI = true;
            bool Player = true;
            bool BoxItem = true;
            bool ContainerItem = true;
            bool Price = true;
            int PriceGreaterThan = 10;
            int QualityGreaterThan = 2;
            int BoxItemRender = 0;
            int BoxFontSize = 11;
            int BoxIconSize = 14;
            int BoxItemMaxDistance = 30;
            int BoxMaxDistance = 50;
            int EnableKey = VK_F4;
            int BoxEnableKey = VK_F5;
            bool ContainerPrice = true;
            bool FastItems = true;
            int FastItemsSize = 1;
            bool HideOpened = false;
            bool BoxHideOpened = false;
            int ContainerIconRender = 0;
            int MaxDistance = 100;
            int FontSize = 11;
            int IconSize = 14;
            float ItemListX = 35;
            float ItemListY = 95;
            float InfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};
            float AIDeadBoxInfoColor[4] = {199.0f / 255.0f, 167.0f / 255.0f, 78.0f / 255.0f, 255.0f / 255.0f};
            float PlayerDeadBoxInfoColor[4] = {255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f, 255.0f / 255.0f};

            bool RandColor = false;

            std::atomic<bool> Boxs[31] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true, true};

            std::unordered_map<int, float[4]> BoxsColor = {

            };

            const std::unordered_map<std::string, size_t> BoxNameToIndex = {
                {"Safe Box", 0}, {"Small Safe Box", 1}, {"Server", 2}, {"Computer", 3}, {"Computer Case", 4}, {"Weapon Box", 5}, {"Large Weapon Box", 6}, {"Ammo Box", 7}, {"Tool Cabinet", 8}, {"Large Tool Box", 9}, {"Lab Coat", 10}, {"Clothing", 11}, {"Medical Kit", 12}, {"Medical Supply Pile", 13}, {"Travel Bag", 14}, {"Briefcase", 15}, {"Storage Cabinet", 16}, {"Premium Storage Box", 17}, {"Drawer Cabinet", 18}, {"Hiking Backpack", 19}, {"Delivery Box", 20}, {"Air Cargo Container", 21}, {"Garbage Bin", 22}, {"Cement Mixer", 23}, {"Outdoor Military Crate", 24}, {"Bird Nest", 25}, {"Sewer", 26}, {"Premium Travel Case", 27}, {"Airdrop", 28}, {"Delta Shell", 29}, {"Toilet", 30},
            };
        } Container;

        struct
        {
            int RankMode = 2;
            int MarkKey = 0x50;
            bool bMarkKey = true;
        } PlayerList;

        struct
        {
            bool Enable = false;
            bool ShowEnableType = false;
            bool ContinueOne = false;
            int Key = 0;
            float X = 0.03f;
            float Speed = 100.f;
        } Recoil;

        struct
        {
            bool UseGetAsyncKeyState = false;
            bool SetNoAuto = true;
            int SetNoAutoKey = VK_HOME;
        } Common;

        struct
        {
            int Pwd = 1000;
            bool Connected = false;
            char IP[256] = "";
            char Port[256] = "9001";
            char Password[256] = "";
            int Mode = 0;
            int Delay = 30;
            bool EncryptedNickname = false;
            bool SendPlayers = true;
            bool SendBOSS = true;
            bool SendAI = false;
            bool SendKeyRoom = false;
            bool SendItems = false;
            bool SendContainers = false;
            bool SendAIDeadBoxs = false;
            bool SendPlayersDeadBoxs = false;
            bool SendPlayerExit = false;
            bool SendExitTrigger = true;
            bool SendCodedLock = false;
        } WebRadar;

        RadarConfig MainRadar;

        RadarConfig MiniRadar;

        struct
        {
            bool Enable = true;
            bool NoCache = true;
            bool UpdateModelMaxDistanceEnable = false;
            bool bNewDynamic = false;
            bool DeBug = false;
            bool DeBugAll = false;
            int ClearKey = VK_F10;
            int DeBugKey = 0;
            int ReDistance = 150;
            int UpdateModelMaxDistance = 1000;
            int NewDynamicSleep = 1000;
            int NewDynamicMaxDistance = 100;
        } PhysX;

    } Config;
};

extern FGameData GameData;

namespace Data
{
    inline void SetPxActors(const std::unordered_map<uint64_t, CPxActor>& value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxActorsMutex);
        GameData.Physics.PxActors = value;
    }

    inline void SetPxTriangleMeshs(const std::unordered_map<uint64_t, CPxTriangleMesh>& value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxTriangleMeshsMutex);
        GameData.Physics.PxTriangleMeshs = value;
    }

    inline void SetPxHeightFieldsItem(uint64_t key, CPxHeightField value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxHeightFieldsMutex);
        GameData.Physics.PxHeightFields[key] = value;
    }

    inline void SetPxTriangleMeshsItem(uint64_t key, CPxTriangleMesh value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxTriangleMeshsMutex);
        GameData.Physics.PxTriangleMeshs[key] = value;
    }

    inline CPxTriangleMesh GetPxTriangleMeshsItem(uint64_t key)
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxTriangleMeshsMutex);

        auto it = GameData.Physics.PxTriangleMeshs.find(key);
        if (it != GameData.Physics.PxTriangleMeshs.end())
        {
            return it->second;
        }

        return {};
    }

    inline const std::unordered_map<uint64_t, CPxTriangleMesh> GetPxTriangleMeshs()
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxTriangleMeshsMutex);
        return GameData.Physics.PxTriangleMeshs;
    }

    inline const CPxHeightField GetPxHeightFieldsItem(uint64_t key)
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxHeightFieldsMutex);
        if (GameData.Physics.PxHeightFields.count(key) > 0)
        {
            return GameData.Physics.PxHeightFields[key];
        }
        else
        {
            return CPxHeightField();
        }
    }

    inline const std::unordered_map<uint64_t, CPxHeightField> GetPxHeightFields()
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxHeightFieldsMutex);
        return GameData.Physics.PxHeightFields;
    }

    inline void SetPxHeightFields(const std::unordered_map<uint64_t, CPxHeightField>& value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxHeightFieldsMutex);
        GameData.Physics.PxHeightFields = value;
    }

    inline const CPxConvexMesh GetPxConvexMeshsItem(uint64_t key)
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxConvexMeshsMutex);
        if (GameData.Physics.PxConvexMeshs.count(key) > 0)
        {
            return GameData.Physics.PxConvexMeshs[key];
        }
        else
        {
            return CPxConvexMesh();
        }
    }

    inline const std::unordered_map<uint64_t, CPxConvexMesh> GetPxConvexMeshs()
    {
        std::shared_lock<std::shared_mutex> lock(GameData.Physics.PxConvexMeshsMutex);
        return GameData.Physics.PxConvexMeshs;
    }

    inline void SetPxConvexMeshs(const std::unordered_map<uint64_t, CPxConvexMesh>& value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxConvexMeshsMutex);
        GameData.Physics.PxConvexMeshs = value;
    }

    inline void SetPxConvexMeshsItem(uint64_t key, CPxConvexMesh value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.Physics.PxConvexMeshsMutex);
        GameData.Physics.PxConvexMeshs[key] = value;
    }

    inline std::unordered_map<uint64_t, tMapInfo> GetEnemyInfoMap()
    {
        std::shared_lock<std::shared_mutex> lock(GameData.EnemyInfoMapMutex);
        return GameData.EnemyInfoMap;
    }

    inline void SetEnemyInfoMap(const std::unordered_map<uint64_t, tMapInfo>& value)
    {
        std::unique_lock<std::shared_mutex> lock(GameData.EnemyInfoMapMutex);
        GameData.EnemyInfoMap = value;
    }
} // namespace Data