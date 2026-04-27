#include "Config.h"
#include "Entity.h"

static inline void SetConfigFirst()
{
    GameData.Config.MainRadar.Size = 8.f;

    for (auto& Item : GetItemDataTable())
    {
        Item.second.ItemID = Item.first;

        GameData.Config.Item.IDToIndex[Item.first] = Item.second.Index;
        GameData.Config.Item.Items[Item.second.Index] = true;
        GameData.Config.Item.ItemsForce[Item.second.Index] = false;
    }

    for (int i = 0; i < GameData.Config.Container.BoxNameToIndex.size(); i++)
    {
        GameData.Config.Container.BoxsColor[i][0] = 230.f / 255.f;
        GameData.Config.Container.BoxsColor[i][1] = 230.f / 255.f;
        GameData.Config.Container.BoxsColor[i][2] = 230.f / 255.f;
        GameData.Config.Container.BoxsColor[i][3] = 230.f / 255.f;
    }

    // 白色/灰色品质 (0和1是一样的)
    GameData.Config.Item.QualityColor[0][0] = 197.f / 255.f; // R
    GameData.Config.Item.QualityColor[0][1] = 197.f / 255.f; // G
    GameData.Config.Item.QualityColor[0][2] = 195.f / 255.f; // B
    GameData.Config.Item.QualityColor[0][3] = 230.f / 255.f; // A

    GameData.Config.Item.QualityColor[1][0] = 197.f / 255.f; // R
    GameData.Config.Item.QualityColor[1][1] = 197.f / 255.f; // G
    GameData.Config.Item.QualityColor[1][2] = 195.f / 255.f; // B
    GameData.Config.Item.QualityColor[1][3] = 230.f / 255.f; // A

    // 绿色品质
    GameData.Config.Item.QualityColor[2][0] = 42.f / 255.f;  // R
    GameData.Config.Item.QualityColor[2][1] = 202.f / 255.f; // G
    GameData.Config.Item.QualityColor[2][2] = 150.f / 255.f; // B
    GameData.Config.Item.QualityColor[2][3] = 230.f / 255.f; // A

    // 蓝色品质
    GameData.Config.Item.QualityColor[3][0] = 89.f / 255.f;  // R
    GameData.Config.Item.QualityColor[3][1] = 160.f / 255.f; // G
    GameData.Config.Item.QualityColor[3][2] = 221.f / 255.f; // B
    GameData.Config.Item.QualityColor[3][3] = 230.f / 255.f; // A

    // 紫色品质
    GameData.Config.Item.QualityColor[4][0] = 157.f / 255.f; // R
    GameData.Config.Item.QualityColor[4][1] = 115.f / 255.f; // G
    GameData.Config.Item.QualityColor[4][2] = 223.f / 255.f; // B
    GameData.Config.Item.QualityColor[4][3] = 230.f / 255.f; // A

    // 橙色品质
    GameData.Config.Item.QualityColor[5][0] = 211.f / 255.f; // R
    GameData.Config.Item.QualityColor[5][1] = 136.f / 255.f; // G
    GameData.Config.Item.QualityColor[5][2] = 87.f / 255.f;  // B
    GameData.Config.Item.QualityColor[5][3] = 230.f / 255.f; // A

    // 红色品质
    GameData.Config.Item.QualityColor[6][0] = 218.f / 255.f; // R
    GameData.Config.Item.QualityColor[6][1] = 87.f / 255.f;  // G
    GameData.Config.Item.QualityColor[6][2] = 88.f / 255.f;  // B
    GameData.Config.Item.QualityColor[6][3] = 230.f / 255.f; // A

    GameData.Config.ESP.Configs["AI"].FontSize = 11;
    GameData.Config.ESP.Configs["AI"].MaxDistance = 100;
    GameData.Config.ESP.Configs["AI"].TeamNumberRender = 1;

    GameData.Config.ESP.Configs["AI"].DefaultInfoColor[0] = 199.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].DefaultInfoColor[1] = 167.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].DefaultInfoColor[2] = 78.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].DefaultInfoColor[3] = 255.0f / 255.f;

    GameData.Config.ESP.Configs["AI"].VisibleInfoColor[0] = 199.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleInfoColor[1] = 167.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleInfoColor[2] = 78.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleInfoColor[3] = 255.0f / 255.f;

    GameData.Config.ESP.Configs["AI"].VisibleSkeletonColor[0] = 199.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleSkeletonColor[1] = 167.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleSkeletonColor[2] = 78.0f / 255.f;
    GameData.Config.ESP.Configs["AI"].VisibleSkeletonColor[3] = 255.0f / 255.f;

    GameData.Config.ESP.Configs["BOSS"].DefaultInfoColor[0] = 224.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].DefaultInfoColor[1] = 104.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].DefaultInfoColor[2] = 43.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].DefaultInfoColor[3] = 255.0f / 255.f;

    GameData.Config.ESP.Configs["BOSS"].VisibleInfoColor[0] = 224.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleInfoColor[1] = 104.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleInfoColor[2] = 43.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleInfoColor[3] = 255.0f / 255.f;

    GameData.Config.ESP.Configs["BOSS"].VisibleSkeletonColor[0] = 224.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleSkeletonColor[1] = 104.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleSkeletonColor[2] = 43.0f / 255.f;
    GameData.Config.ESP.Configs["BOSS"].VisibleSkeletonColor[3] = 255.0f / 255.f;

    Config::SetColor(GameData.Config.ESP.InnerTeamColor[0], 102.f, 102.f, 102.f, 255.f);
    Config::SetColor(GameData.Config.ESP.InnerTeamColor[1], 75.f, 237.f, 105.f, 255.f);
    Config::SetColor(GameData.Config.ESP.InnerTeamColor[2], 75.f, 98.f, 237.f, 255.f);
    Config::SetColor(GameData.Config.ESP.InnerTeamColor[3], 237.f, 204.f, 75.f, 255.f);

    Config::SetColor(GameData.Config.ESP.TeamColor[0], 102.f, 102.f, 102.f, 255.f);  // 默认灰色
    Config::SetColor(GameData.Config.ESP.TeamColor[1], 247.f, 248.f, 19.f, 255.f);   // 黄色
    Config::SetColor(GameData.Config.ESP.TeamColor[2], 250.f, 127.f, 73.f, 255.f);   // 橙色
    Config::SetColor(GameData.Config.ESP.TeamColor[3], 90.f, 198.f, 227.f, 255.f);   // 浅蓝
    Config::SetColor(GameData.Config.ESP.TeamColor[4], 90.f, 189.f, 77.f, 255.f);    // 绿色
    Config::SetColor(GameData.Config.ESP.TeamColor[5], 0.f, 150.f, 136.f, 255.f);    // 粉色
    Config::SetColor(GameData.Config.ESP.TeamColor[6], 115.f, 129.f, 168.f, 255.f);  // 紫色
    Config::SetColor(GameData.Config.ESP.TeamColor[7], 159.f, 126.f, 105.f, 255.f);  // 靛蓝
    Config::SetColor(GameData.Config.ESP.TeamColor[8], 255.f, 134.f, 200.f, 255.f);  // 浅青
    Config::SetColor(GameData.Config.ESP.TeamColor[9], 210.f, 224.f, 191.f, 255.f);  // 淡绿
    Config::SetColor(GameData.Config.ESP.TeamColor[10], 154.f, 52.f, 142.f, 255.f);  // 紫罗兰
    Config::SetColor(GameData.Config.ESP.TeamColor[11], 98.f, 146.f, 158.f, 255.f);  // 红色
    Config::SetColor(GameData.Config.ESP.TeamColor[12], 226.f, 214.f, 239.f, 255.f); // 绿色
    Config::SetColor(GameData.Config.ESP.TeamColor[13], 4.f, 167.f, 119.f, 255.f);   // 蓝色
    Config::SetColor(GameData.Config.ESP.TeamColor[14], 115.f, 113.f, 252.f, 255.f); // 黄色
    Config::SetColor(GameData.Config.ESP.TeamColor[15], 255.f, 0.f, 255.f, 255.f);   // 品红
    Config::SetColor(GameData.Config.ESP.TeamColor[16], 93.f, 46.f, 140.f, 255.f);   // 青色
};

void Config::SetColor(float (&Color)[4], float r, float g, float b, float a)
{
    Color[0] = r / 255.f; // R
    Color[1] = g / 255.f; // G
    Color[2] = b / 255.f; // B
    Color[3] = a / 255.f; // A
};

void Config::InitializeConfigs()
{
    SetConfigFirst();

    for (const auto& Item : EntityContainerLists)
    {
        if (Item.second.Type == EntityType::Throw)
        {
            GameData.Config.Throw.Throws[Item.second.DisplayName] = true;
        }
    }

    // Common 配置
    Config::RegisterConfig(XorStr("Common"), XorStr("UseGetAsyncKeyState"), GameData.Config.Common.UseGetAsyncKeyState, Config::ConfigType::Bool);

    Config::RegisterConfig(XorStr("Common"), XorStr("CurrentLanguage"), GameData.CurrentLanguage, Config::ConfigType::Int);

    for (auto& Throw : GameData.Config.Throw.Throws)
    {
        Config::RegisterConfig(XorStr("Throw"), "Throws" + Throw.first, Throw.second, Config::ConfigType::Bool);
    }

    // ESP
    for (auto& TeamColor : GameData.Config.ESP.TeamColor)
    {
        Config::RegisterConfig(XorStr("ESP"), "TeamColor" + std::to_string(TeamColor.first), TeamColor.second, 4, Config::ConfigType::FloatArray);
    }

    for (auto& InnerTeamColor : GameData.Config.ESP.InnerTeamColor)
    {
        Config::RegisterConfig(XorStr("ESP"), "InnerTeamColor" + std::to_string(InnerTeamColor.first), InnerTeamColor.second, 4, Config::ConfigType::FloatArray);
    }
    Config::RegisterConfig(XorStr("Theme"), XorStr("ActiveColor"), GameData.Config.Theme.Active, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoColor"), GameData.Config.ESP.InfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoFontSize"), GameData.Config.ESP.InfoFontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("BattleModeKey"), GameData.Config.ESP.BattleModeKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("TargetFPS"), GameData.Config.ESP.TargetFPS, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("LimitFPS"), GameData.Config.ESP.LimitFPS, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("AntiAliasing"), GameData.Config.ESP.AntiAliasing, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("DepthBits"), GameData.Config.ESP.DepthBits, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("LimitFPSStatus"), GameData.Config.ESP.LimitFPSStatus, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideContainer"), GameData.Config.ESP.HideContainer, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideBox"), GameData.Config.ESP.HideBox, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideItem"), GameData.Config.ESP.HideItem, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideCodedLock"), GameData.Config.ESP.HideCodedLock, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideThrow"), GameData.Config.ESP.HideThrow, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideExitTrigger"), GameData.Config.ESP.HideExitTrigger, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerExit"), GameData.Config.ESP.HidePlayerExit, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideAI"), GameData.Config.ESP.HideAI, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideBOSS"), GameData.Config.ESP.HideBOSS, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideItemList"), GameData.Config.ESP.HideItemList, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideOffscreenItem"), GameData.Config.ESP.HideOffscreenItem, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerArmor"), GameData.Config.ESP.HidePlayerArmor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerTeam"), GameData.Config.ESP.HidePlayerTeam, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerHealth"), GameData.Config.ESP.HidePlayerHealth, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerName"), GameData.Config.ESP.HidePlayerName, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HidePlayerWeapon"), GameData.Config.ESP.HidePlayerWeapon, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("HideKeyDoor"), GameData.Config.ESP.HideKeyDoor, Config::ConfigType::Bool);

    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarning"), GameData.Config.ESP.EarlyWarning, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningHideAlive"), GameData.Config.ESP.EarlyWarningHideAlive, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningStageColor"), GameData.Config.ESP.EarlyWarningStageColor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningMaxDistance"), GameData.Config.ESP.EarlyWarningMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningColor"), GameData.Config.ESP.EarlyWarningColor, 4, Config::ConfigType::FloatArray);

    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningPosY"), GameData.Config.ESP.EarlyWarningPosY, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("EarlyWarningFontSize"), GameData.Config.ESP.EarlyWarningFontSize, Config::ConfigType::Int);

    Config::RegisterConfig(XorStr("ESP"), XorStr("OutlineColor"), GameData.Config.ESP.OutlineColor, 4, Config::ConfigType::FloatArray);

    Config::RegisterConfig(XorStr("ESP"), XorStr("ValueModel"), GameData.Config.ESP.ValueModel, Config::ConfigType::Int);

    Config::RegisterConfig(XorStr("ESP"), XorStr("KeyDoorKey"), GameData.Config.ESP.KeyDoorKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("ShowKeyDoor"), GameData.Config.ESP.ShowKeyDoor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("ESP"), XorStr("KeyDoorMaxDistance"), GameData.Config.ESP.KeyDoorMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("KeyDoorFontSize"), GameData.Config.ESP.KeyDoorFontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("IndicatorSize"), GameData.Config.ESP.IndicatorSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("IndicatorMax"), GameData.Config.ESP.IndicatorMax, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("Indicator"), GameData.Config.ESP.Indicator, Config::ConfigType::Bool);

    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoHeaderColor"), GameData.Config.ESP.InfoHeaderColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoBgColor"), GameData.Config.ESP.InfoBgColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoType"), GameData.Config.ESP.InfoType, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoX"), GameData.Config.ESP.InfoX, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("ESP"), XorStr("InfoY"), GameData.Config.ESP.InfoY, Config::ConfigType::Float);

    for (auto& Item : GameData.Config.ESP.Configs)
    {
        const auto& ConfigNameA = std::format("ESP_{}", Item.first);
        auto& ConfigItem = Item.second;
        Config::RegisterConfig(ConfigNameA, XorStr("Enable"), ConfigItem.Enable, Config::ConfigType::Bool);

        Config::RegisterConfig(ConfigNameA, XorStr("KillCount"), ConfigItem.KillCount, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("EquipmentPrice"), ConfigItem.EquipmentPrice, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("BottomInfoColor"), ConfigItem.BottomInfoColor, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Skeleton"), ConfigItem.Skeleton, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("ShowHeroAvatar"), ConfigItem.ShowHeroAvatar, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Show Head"), ConfigItem.ShowHead, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Float Head"), ConfigItem.FloatHead, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Hide Body"), ConfigItem.HideBody, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Name"), ConfigItem.Name, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("TeamNumber"), ConfigItem.TeamNumber, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("HeroName"), ConfigItem.HeroName, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Health"), ConfigItem.Health, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("Weapon"), ConfigItem.Weapon, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("HelmetArmor"), ConfigItem.HelmetArmor, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("AimingRay"), ConfigItem.AimingRay, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("TeamNumberRender"), ConfigItem.TeamNumberRender, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("WeaponRender"), ConfigItem.WeaponRender, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("HealthRounded"), ConfigItem.HealthRounded, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("WeaponRenderPos"), ConfigItem.WeaponRenderPos, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("HelmetArmorRender"), ConfigItem.HelmetArmorRender, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("HealthRender"), ConfigItem.HealthRender, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("DistanceRender"), ConfigItem.DistanceRender, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("Distance"), ConfigItem.Distance, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("bFighting"), ConfigItem.bFighting, Config::ConfigType::Bool);
        Config::RegisterConfig(ConfigNameA, XorStr("MaxDistance"), ConfigItem.MaxDistance, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("InfoMaxDistance"), ConfigItem.InfoMaxDistance, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("FontSize"), ConfigItem.FontSize, Config::ConfigType::Int);
        Config::RegisterConfig(ConfigNameA, XorStr("SkeletonWidth"), ConfigItem.SkeletonWidth, Config::ConfigType::Float);
        Config::RegisterConfig(ConfigNameA, XorStr("HealthWidth"), ConfigItem.HealthWidth, Config::ConfigType::Float);
        Config::RegisterConfig(ConfigNameA, XorStr("AimingRayWidth"), ConfigItem.AimingRayWidth, Config::ConfigType::Float);
        Config::RegisterConfig(ConfigNameA, XorStr("AimingRayColor"), ConfigItem.AimingRayColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("WeaponInfoColor"), ConfigItem.WeaponInfoColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("DefaultInfoColor"), ConfigItem.DefaultInfoColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("DefaultSkeletonColor"), ConfigItem.DefaultSkeletonColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("VisibleInfoColor"), ConfigItem.VisibleInfoColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("VisibleSkeletonColor"), ConfigItem.VisibleSkeletonColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ImpendingDeathInfoColor"), ConfigItem.ImpendingDeathInfoColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ImpendingDeathSkeletonColor"), ConfigItem.ImpendingDeathSkeletonColor, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv1Color"), ConfigItem.ArmorLv1Color, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv2Color"), ConfigItem.ArmorLv2Color, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv3Color"), ConfigItem.ArmorLv3Color, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv4Color"), ConfigItem.ArmorLv4Color, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv5Color"), ConfigItem.ArmorLv5Color, 4, Config::ConfigType::FloatArray);
        Config::RegisterConfig(ConfigNameA, XorStr("ArmorLv6Color"), ConfigItem.ArmorLv6Color, 4, Config::ConfigType::FloatArray);
    }

    // Container
    Config::RegisterConfig(XorStr("Container"), XorStr("Enable"), GameData.Config.Container.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxEnable"), GameData.Config.Container.BoxEnable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("ContainerIconRender"), GameData.Config.Container.ContainerIconRender, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("MaxDistance"), GameData.Config.Container.MaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxMaxDistance"), GameData.Config.Container.BoxMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxItemMaxDistance"), GameData.Config.Container.BoxItemMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("FontSize"), GameData.Config.Container.FontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("IconSize"), GameData.Config.Container.IconSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxFontSize"), GameData.Config.Container.BoxFontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxIconSize"), GameData.Config.Container.BoxIconSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxItemRender"), GameData.Config.Container.BoxItemRender, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("ItemListX"), GameData.Config.Container.ItemListX, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Container"), XorStr("ItemListY"), GameData.Config.Container.ItemListY, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Container"), XorStr("ContainerPrice"), GameData.Config.Container.ContainerPrice, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("FastItems"), GameData.Config.Container.FastItems, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("FastItemsSize"), GameData.Config.Container.FastItemsSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("HideOpened"), GameData.Config.Container.HideOpened, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxHideOpened"), GameData.Config.Container.BoxHideOpened, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("ContainerItem"), GameData.Config.Container.ContainerItem, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("AI"), GameData.Config.Container.AI, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("Player"), GameData.Config.Container.Player, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxItem"), GameData.Config.Container.BoxItem, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("InfoColor"), GameData.Config.Container.InfoColor, 4, Config::ConfigType::FloatArray);

    for (auto& BoxColor : GameData.Config.Container.BoxsColor)
    {
        Config::RegisterConfig(XorStr("Container"), "BoxColor" + std::to_string(BoxColor.first), BoxColor.second, 4, Config::ConfigType::FloatArray);
    }

    Config::RegisterConfig(XorStr("Container"), XorStr("AIDeadBoxInfoColor"), GameData.Config.Container.AIDeadBoxInfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("Container"), XorStr("PlayerDeadBoxInfoColor"), GameData.Config.Container.PlayerDeadBoxInfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("Container"), XorStr("Bosx"), GameData.Config.Container.Boxs, 31, Config::ConfigType::BoolArray);
    Config::RegisterConfig(XorStr("Container"), XorStr("EnableKey"), GameData.Config.Container.EnableKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxEnableKey"), GameData.Config.Container.BoxEnableKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("PriceGreaterThan"), GameData.Config.Container.PriceGreaterThan, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("QualityGreaterThan"), GameData.Config.Container.QualityGreaterThan, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Container"), XorStr("Price"), GameData.Config.Container.Price, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("Distance"), GameData.Config.Container.Distance, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("Name"), GameData.Config.Container.Name, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxDistance"), GameData.Config.Container.BoxDistance, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("BoxName"), GameData.Config.Container.BoxName, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Container"), XorStr("RandColor"), GameData.Config.Container.RandColor, Config::ConfigType::Bool);

    // Item
    Config::RegisterConfig(XorStr("Item"), XorStr("Enable"), GameData.Config.Item.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("AutoShow"), GameData.Config.Item.AutoShow, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("ShowLine"), GameData.Config.Item.ShowLine, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("LineWidth"), GameData.Config.Item.LineWidth, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Item"), XorStr("LinePosY"), GameData.Config.Item.LinePosY, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Item"), XorStr("EnableKey"), GameData.Config.Item.EnableKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("List"), GameData.Config.Item.List, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("Price"), GameData.Config.Item.Price, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("Indicator"), GameData.Config.Item.Indicator, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("EnableQualityFilter"), GameData.Config.Item.EnableQualityFilter, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("EnablePriceFilter"), GameData.Config.Item.EnablePriceFilter, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("OnLeft"), GameData.Config.Item.OnLeft, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("PriceGreaterThan"), GameData.Config.Item.PriceGreaterThan, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("QualityGreaterThan"), GameData.Config.Item.QualityGreaterThan, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("ItemRender"), GameData.Config.Item.ItemRender, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("FontSize"), GameData.Config.Item.FontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("IndicatorSize"), GameData.Config.Item.IndicatorSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("ListSize"), GameData.Config.Item.ListSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("IconSize"), GameData.Config.Item.IconSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("Items"), GameData.Config.Item.Items, 2712, Config::ConfigType::BoolArray);
    Config::RegisterConfig(XorStr("Item"), XorStr("ItemsForce"), GameData.Config.Item.ItemsForce, 2712, Config::ConfigType::BoolArray);
    Config::RegisterConfig(XorStr("Item"), XorStr("ShowBoxItems"), GameData.Config.Item.ShowBoxItems, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("ShowConItems"), GameData.Config.Item.ShowConItems, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("bSortByPrice"), GameData.Config.Item.bSortByPrice, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("ItemMaxCount"), GameData.Config.Item.ItemMaxCount, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Item"), XorStr("Distance"), GameData.Config.Item.Distance, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Item"), XorStr("Name"), GameData.Config.Item.Name, Config::ConfigType::Bool);

    for (auto& QualityColor : GameData.Config.Item.QualityColor)
    {
        Config::RegisterConfig(XorStr("Item"), "QualityColor" + std::to_string(QualityColor.first), QualityColor.second, 4, Config::ConfigType::FloatArray);
    }

    // WebRadar
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("IP"), GameData.Config.WebRadar.IP, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("Port"), GameData.Config.WebRadar.Port, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("Password"), GameData.Config.WebRadar.Password, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("Mode"), GameData.Config.WebRadar.Mode, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("Delay"), GameData.Config.WebRadar.Delay, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendPlayers"), GameData.Config.WebRadar.SendPlayers, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("EncryptedNickname"), GameData.Config.WebRadar.EncryptedNickname, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendBOSS"), GameData.Config.WebRadar.SendBOSS, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendAI"), GameData.Config.WebRadar.SendAI, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendKeyRoom"), GameData.Config.WebRadar.SendKeyRoom, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendItems"), GameData.Config.WebRadar.SendItems, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendContainers"), GameData.Config.WebRadar.SendContainers, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendAIDeadBoxs"), GameData.Config.WebRadar.SendAIDeadBoxs, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendPlayersDeadBoxs"), GameData.Config.WebRadar.SendPlayersDeadBoxs, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendPlayerExit"), GameData.Config.WebRadar.SendPlayerExit, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendExitTrigger"), GameData.Config.WebRadar.SendExitTrigger, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("WebRadar"), XorStr("SendCodedLock"), GameData.Config.WebRadar.SendCodedLock, Config::ConfigType::Bool);

    // AimBot 配置
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Enable"), GameData.Config.AimBot.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("HideBone"), GameData.Config.AimBot.HideBone, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("BaudRate"), GameData.Config.AimBot.BaudRate, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("IP"), GameData.Config.AimBot.IP, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Port"), GameData.Config.AimBot.Port, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("UUID"), GameData.Config.AimBot.UUID, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Connected"), GameData.Config.AimBot.Connected, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Controller"), GameData.Config.AimBot.Controller, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("COM"), GameData.Config.AimBot.COM, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("COMNumber"), GameData.Config.AimBot.COMNumber, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Freq"), GameData.Config.AimBot.Freq, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("Mode"), GameData.Config.AimBot.Mode, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("NewFPSLimit"), GameData.Config.AimBot.FPSLimit, 7, Config::ConfigType::IntArray);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("FOV"), GameData.Config.AimBot.FOV, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("ConfigIndex"), GameData.Config.AimBot.ConfigIndex, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("FOVColor"), GameData.Config.AimBot.FOVColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("DHZIP"), GameData.Config.AimBot.DHZIP, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("DHZPort"), GameData.Config.AimBot.DHZPort, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("DHZRANDOM"), GameData.Config.AimBot.DHZRANDOM, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("CATBOXIP"), GameData.Config.AimBot.CATBOXIP, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("CATBOXPort"), GameData.Config.AimBot.CATBOXPort, Config::ConfigType::String);
    Config::RegisterConfig(XorStr("AimBot"), XorStr("CATBOXUUID"), GameData.Config.AimBot.CATBOXUUID, Config::ConfigType::String);

    // Config 0 和 Config 1
    for (int configIndex = 0; configIndex < 2; configIndex++)
    {
        Config::RegisterConfig(std::format("AimBot_Config_{}", configIndex), XorStr("Key"), GameData.Config.AimBot.Configs[configIndex].Key, Config::ConfigType::Int);

        // 每种武器类型配置
        for (int i = 1; i < 8; i++)
        {
            std::string section = std::format("AimBot_Config_{}_{}", configIndex, i);
            auto& config = GameData.Config.AimBot.Configs[configIndex].Weapon[static_cast<EWeaponItemType>(i)];

            Config::RegisterConfig(section, XorStr("RandomValue"), config.RandomValue, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("AimSpeedMaxFactor"), config.AimSpeedMaxFactor, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("AimDistance"), config.AimDistance, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("RandomDelay"), config.RandomDelay, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("FireOnlyRandomBone"), config.FireOnlyRandomBone, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("AutoSwitchPlayer"), config.AutoSwitchPlayer, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("UseClosest"), config.UseClosest, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("AutoSwitchPlayerFOV"), config.AutoSwitchPlayerFOV, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("RayCast"), config.RayCast, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("LineTraceSingleRecoilLocation"), config.LineTraceSingleRecoilLocation, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("VisibleCheck"), config.VisibleCheck, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("HotkeyMerge"), config.HotkeyMerge, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("LegitMode"), config.LegitMode, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("FOV"), config.FOV, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("RecoilSmoothPitch"), config.RecoilSmoothPitch, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("XSpeed"), config.XSpeed, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("YSpeed"), config.YSpeed, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("AutoSwitch"), config.AutoSwitch, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("ADS"), config.ADS, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("Sway"), config.Sway, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("Recoil"), config.Recoil, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("IgnoreGroggy"), config.IgnoreGroggy, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("RecoilTime"), config.RecoilTime, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("SwitchingDelay"), config.SwitchingDelay, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("NewCurveTime"), config.NewCurveTime, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("DontAimAI"), config.DontAimAI, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("PowerfulCurve"), config.PowerfulCurve, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("NoBulletNotAim"), config.NoBulletNotAim, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("Prediction"), config.Prediction, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("Curve"), config.Curve, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("Curves"), config.Curves, 4, Config::ConfigType::FloatArray);
            Config::RegisterConfig(section, XorStr("bCloseRangeSpeed"), config.bCloseRangeSpeed, Config::ConfigType::Bool);
            Config::RegisterConfig(section, XorStr("CloseRangeSpeed"), config.CloseRangeSpeed, Config::ConfigType::Int);
            Config::RegisterConfig(section, XorStr("CloseRangeDistance"), config.CloseRangeDistance, Config::ConfigType::Float);
            Config::RegisterConfig(section, XorStr("VelocityMode"), config.VelocityMode, Config::ConfigType::Int);

            // Throw 配置
            Config::RegisterConfig(section + XorStr("_Throw"), XorStr("Enable"), config.Throw.Enable, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Throw"), XorStr("Key"), config.Throw.Key, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Throw"), XorStr("Speed"), config.Throw.Speed, Config::ConfigType::Float);
            Config::RegisterConfig(section + XorStr("_Throw"), XorStr("MaxDistance"), config.Throw.MaxDistance, Config::ConfigType::Int);

            for (auto& Enable : config.Throw.Enables)
            {
                Config::RegisterConfig(section + XorStr("_Throw_Enables"), Enable.first, Enable.second, Config::ConfigType::Bool);
            }

            // First 骨骼配置
            Config::RegisterConfig(section + XorStr("_First"), XorStr("Key"), config.First.Key, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_First"), XorStr("Bones"), config.First.Bones, 18, Config::ConfigType::BoolArray);

            // Second 骨骼配置
            Config::RegisterConfig(section + XorStr("_Second"), XorStr("Key"), config.Second.Key, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Second"), XorStr("Bones"), config.Second.Bones, 18, Config::ConfigType::BoolArray);

            // Groggy 骨骼配置
            Config::RegisterConfig(section + XorStr("_Groggy"), XorStr("Key"), config.Groggy.Key, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Groggy"), XorStr("Bones"), config.Groggy.Bones, 18, Config::ConfigType::BoolArray);

            // Trigger 配置
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Enable"), config.Trigger.Enable, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Independent"), config.Trigger.Independent, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("bMaxMin"), config.Trigger.bMaxMin, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("NewLong"), config.Trigger.Long, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("AutoVisibility"), config.Trigger.AutoVisibility, Config::ConfigType::Bool);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Key"), config.Trigger.Key, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Key1"), config.Trigger.Key1, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("MaxMinDistance"), config.Trigger.MaxMinDistance, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Bones"), config.Trigger.Bones, 18, Config::ConfigType::BoolArray);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Smooth"), config.Trigger.Smooth, Config::ConfigType::Float);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("TriggerRange"), config.Trigger.TriggerRange, Config::ConfigType::Float);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("Sleep"), config.Trigger.Sleep, Config::ConfigType::Int);
            Config::RegisterConfig(section + XorStr("_Trigger"), XorStr("MaxDistance"), config.Trigger.MaxDistance, Config::ConfigType::Int);
        }
    }

    // Overlay 配置
    Config::RegisterConfig(XorStr("Overlay"), XorStr("Enable"), GameData.Config.Overlay.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("FontBold"), GameData.Config.Overlay.FontBold, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("FontIndex"), GameData.Config.Overlay.FontIndex, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("VSync"), GameData.Config.Overlay.VSync, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("FusionMode"), GameData.Config.Overlay.FusionMode, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("sRgbCapable"), GameData.Config.Overlay.sRgbCapable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("MonitorCurrentIdx"), GameData.Config.Overlay.MonitorCurrentIdx, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("ShowFPS"), GameData.Config.Overlay.ShowFPS, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("ShowAimBotConfig"), GameData.Config.Overlay.ShowAimBotConfig, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("ShowPlayerAlive"), GameData.Config.Overlay.ShowPlayerAlive, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Overlay"), XorStr("ShowAccount"), GameData.Config.Overlay.ShowAccount, Config::ConfigType::Bool);

    // Window
    Config::RegisterConfig(XorStr("Window"), XorStr("SettingKey"), GameData.Config.Window.SettingKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("CloseESPKey"), GameData.Config.Window.CloseESPKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("ClearKey"), GameData.Config.Window.ClearKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewNewESPSleep"), GameData.Config.Window.ESPSleep, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewNewCameraSleep"), GameData.Config.Window.CameraSleep, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewCacheSleep2"), GameData.Config.Window.CacheSleep, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewFreqMem"), GameData.Config.Window.FreqMem, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("MemMap"), GameData.Config.Window.MemMap, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("NoEncCache"), GameData.Config.Window.NoEncCache, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewFreqAll1"), GameData.Config.Window.FreqAll, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("IsHeino"), GameData.Config.Window.IsHeino, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("IsGarena"), GameData.Config.Window.IsGarena, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Window"), XorStr("Server"), GameData.Config.Window.Server, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Window"), XorStr("NewAutoCollectDecrypt"), GameData.Config.Window.AutoCollectDecrypt, Config::ConfigType::Bool);

    // 密码锁
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("Enable"), GameData.Config.CodedLock.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("EnableExitTrigger"), GameData.Config.CodedLock.EnableExitTrigger, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("EnablePlayerExit"), GameData.Config.CodedLock.EnablePlayerExit, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("InfoColor"), GameData.Config.CodedLock.InfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("ExitTriggerInfoColor"), GameData.Config.CodedLock.ExitTriggerInfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("PlayerExitInfoColor"), GameData.Config.CodedLock.PlayerExitInfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("InfoFontSize"), GameData.Config.CodedLock.InfoFontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("InfoIconSize"), GameData.Config.CodedLock.InfoIconSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("EnableKey"), GameData.Config.CodedLock.EnableKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("PWD"), GameData.Config.CodedLock.PWD, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("MaxDistance"), GameData.Config.CodedLock.MaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("OtherMaxDistance"), GameData.Config.CodedLock.OtherMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("Distance"), GameData.Config.CodedLock.Distance, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("Name"), GameData.Config.CodedLock.Name, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("CodedLock"), XorStr("Icon"), GameData.Config.CodedLock.Icon, Config::ConfigType::Bool);

    // Throw
    Config::RegisterConfig(XorStr("Throw"), XorStr("Enable"), GameData.Config.Throw.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Throw"), XorStr("InfoColor"), GameData.Config.Throw.InfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("Throw"), XorStr("OffInfoColor"), GameData.Config.Throw.OffInfoColor, 4, Config::ConfigType::FloatArray);
    Config::RegisterConfig(XorStr("Throw"), XorStr("InfoFontSize"), GameData.Config.Throw.InfoFontSize, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Throw"), XorStr("MaxDistance"), GameData.Config.Throw.MaxDistance, Config::ConfigType::Int);

    // PhysX基础配置
    Config::RegisterConfig(XorStr("Physics"), XorStr("bCanLoadLocalModel"), GameData.Physics.bCanLoadLocalModel, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("Enable"), GameData.Config.PhysX.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("UpdateModelMaxDistanceEnable"), GameData.Config.PhysX.UpdateModelMaxDistanceEnable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("bNewDynamic"), GameData.Config.PhysX.bNewDynamic, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("DeBug"), GameData.Config.PhysX.DeBug, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("DeBugAll"), GameData.Config.PhysX.DeBugAll, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("NoCache"), GameData.Config.PhysX.NoCache, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("ClearKey"), GameData.Config.PhysX.ClearKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("DeBugKey"), GameData.Config.PhysX.DeBugKey, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("ReDistance"), GameData.Config.PhysX.ReDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("UpdateModelMaxDistance"), GameData.Config.PhysX.UpdateModelMaxDistance, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("NewDynamicSleep"), GameData.Config.PhysX.NewDynamicSleep, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("PhysX"), XorStr("NewDynamicMaxDistance"), GameData.Config.PhysX.NewDynamicMaxDistance, Config::ConfigType::Int);

    Config::RegisterConfig(XorStr("MainRadar"), XorStr("Enable"), GameData.Config.MainRadar.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowPlayer"), GameData.Config.MainRadar.ShowPlayer, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowHeroAvatar"), GameData.Config.MainRadar.ShowHeroAvatar, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowAI"), GameData.Config.MainRadar.ShowAI, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowBOSS"), GameData.Config.MainRadar.ShowBOSS, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowTeam"), GameData.Config.MainRadar.ShowTeam, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowDirection"), GameData.Config.MainRadar.ShowDirection, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowSelf"), GameData.Config.MainRadar.ShowSelf, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowArmor"), GameData.Config.MainRadar.ShowArmor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowKeyDoor"), GameData.Config.MainRadar.ShowKeyDoor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("ShowTeammate"), GameData.Config.MainRadar.ShowTeammate, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("Size"), GameData.Config.MainRadar.Size, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("MainRadar"), XorStr("RatioY"), GameData.Config.MainRadar.RatioY, Config::ConfigType::Float);

    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("Enable"), GameData.Config.MiniRadar.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowPlayer"), GameData.Config.MiniRadar.ShowPlayer, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowHeroAvatar"), GameData.Config.MiniRadar.ShowHeroAvatar, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowAI"), GameData.Config.MiniRadar.ShowAI, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowBOSS"), GameData.Config.MiniRadar.ShowBOSS, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowTeam"), GameData.Config.MiniRadar.ShowTeam, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowDirection"), GameData.Config.MiniRadar.ShowDirection, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowSelf"), GameData.Config.MiniRadar.ShowSelf, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowArmor"), GameData.Config.MiniRadar.ShowArmor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowKeyDoor"), GameData.Config.MiniRadar.ShowKeyDoor, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("ShowTeammate"), GameData.Config.MiniRadar.ShowTeammate, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("Size"), GameData.Config.MiniRadar.Size, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("MiniRadar"), XorStr("RatioY"), GameData.Config.MiniRadar.RatioY, Config::ConfigType::Float);

    Config::RegisterConfig(XorStr("Recoil"), XorStr("Enable"), GameData.Config.Recoil.Enable, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Recoil"), XorStr("X"), GameData.Config.Recoil.X, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Recoil"), XorStr("Speed"), GameData.Config.Recoil.Speed, Config::ConfigType::Float);
    Config::RegisterConfig(XorStr("Recoil"), XorStr("Key"), GameData.Config.Recoil.Key, Config::ConfigType::Int);
    Config::RegisterConfig(XorStr("Recoil"), XorStr("ShowEnableType"), GameData.Config.Recoil.ShowEnableType, Config::ConfigType::Bool);
    Config::RegisterConfig(XorStr("Recoil"), XorStr("ContinueOne"), GameData.Config.Recoil.ContinueOne, Config::ConfigType::Bool);
};

void Config::Save()
{
    nlohmann::json Config;

    for (const auto& item : GetConfigItems())
    {
        switch (item.type)
        {
        case Config::ConfigType::String:
            Config[item.section][item.key] = std::string(static_cast<char*>(item.value));
            break;
        case Config::ConfigType::Bool:
            Config[item.section][item.key] = *static_cast<bool*>(item.value);
            break;
        case Config::ConfigType::Int:
            Config[item.section][item.key] = *static_cast<int*>(item.value);
            break;
        case Config::ConfigType::Float:
            Config[item.section][item.key] = *static_cast<float*>(item.value);
            break;
        case Config::ConfigType::BoolArray:
        {
            std::vector<bool> arrayValues;
            bool* boolArray = static_cast<bool*>(item.value);
            for (size_t i = 0; i < item.arraySize; i++)
            {
                arrayValues.push_back(boolArray[i]);
            }
            Config[item.section][item.key] = arrayValues;
            break;
        }
        case Config::ConfigType::IntArray:
        {
            std::vector<int> arrayValues;
            int* intArray = static_cast<int*>(item.value);
            for (size_t i = 0; i < item.arraySize; i++)
            {
                arrayValues.push_back(intArray[i]);
            }
            Config[item.section][item.key] = arrayValues;
            break;
        }
        case Config::ConfigType::FloatArray:
        {
            std::vector<float> arrayValues;
            float* floatArray = static_cast<float*>(item.value);
            for (size_t i = 0; i < item.arraySize; i++)
            {
                arrayValues.push_back(floatArray[i]);
            }
            Config[item.section][item.key] = arrayValues;
            break;
        }
        }
    }

    std::string jsonStr = Config.dump();
    std::string encryptedJson = Encrypt::EncryptConfig(jsonStr);
    Utils::WriteConfigFile(XorStr("Config/Config"), encryptedJson);
    // Utils::WriteConfigFile(XorStr("Config/Config1"), encryptedJson);
};

void Config::Load()
{
    std::string configContent = Utils::ReadConfigFile(XorStr("Config/Config"));
    if (configContent.empty())
    {
        return;
    }

    try
    {
        std::string jsonStr = Encrypt::DecryptConfig(configContent);
        auto Config = nlohmann::json::parse(jsonStr);

        for (const auto& item : GetConfigItems())
        {
            if (!Config.contains(item.section) || !Config[item.section].contains(item.key))
                continue;

            try
            {
                std::string stringValue;
                switch (item.type)
                {
                case Config::ConfigType::String:
                    stringValue = Utils::StringToUTF8(Config[item.section][item.key]);
                    snprintf(static_cast<char*>(item.value), item.size, "%s", stringValue.c_str());
                    break;
                case Config::ConfigType::Bool:
                    *static_cast<bool*>(item.value) = Config[item.section][item.key].get<bool>();
                    break;
                case Config::ConfigType::Int:
                    *static_cast<int*>(item.value) = Config[item.section][item.key].get<int>();
                    break;
                case Config::ConfigType::Float:
                    *static_cast<float*>(item.value) = Config[item.section][item.key].get<float>();
                    break;
                case Config::ConfigType::BoolArray:
                {
                    auto arrayJson = Config[item.section][item.key];
                    if (arrayJson.is_array())
                    {
                        bool* boolArray = static_cast<bool*>(item.value);
                        size_t arraySize = item.arraySize;
                        if (arrayJson.size() < arraySize)
                        {
                            arraySize = arrayJson.size();
                        }
                        for (size_t i = 0; i < arraySize; i++)
                        {
                            boolArray[i] = arrayJson[i].get<bool>();
                        }
                    }
                    break;
                }
                case Config::ConfigType::IntArray:
                {
                    auto arrayJson = Config[item.section][item.key];
                    if (arrayJson.is_array())
                    {
                        int* intArray = static_cast<int*>(item.value);
                        size_t arraySize = item.arraySize;
                        if (arrayJson.size() < arraySize)
                        {
                            arraySize = arrayJson.size();
                        }
                        for (size_t i = 0; i < arraySize; i++)
                        {
                            intArray[i] = arrayJson[i].get<int>();
                        }
                    }
                    break;
                }
                case Config::ConfigType::FloatArray:
                {
                    auto arrayJson = Config[item.section][item.key];
                    if (arrayJson.is_array())
                    {
                        float* floatArray = static_cast<float*>(item.value);
                        size_t arraySize = item.arraySize;
                        if (arrayJson.size() < arraySize)
                        {
                            arraySize = arrayJson.size();
                        }
                        for (size_t i = 0; i < arraySize; i++)
                        {
                            floatArray[i] = arrayJson[i].get<float>();
                        }
                    }
                    break;
                }
                }
            }
            catch (const std::exception&)
            {
                // 忽略单个配置项的错误，继续处理其他配置项
            }
        }
    }
    catch (const std::exception&)
    {
        // 忽略整体加载错误
    }
};
