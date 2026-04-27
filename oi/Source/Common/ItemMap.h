#pragma once

#include <unordered_map>
#include <string>
#include <windows.h>
#include <Utils/I18N.h>
#include <Common/Data.h>

struct ItemTranslate
{
	std::string EN{};
	std::string CN{};
};

static inline std::unordered_map<uint64_t, ItemTranslate> ItemHero = {
	{88000000035, {"Uluru", "乌鲁鲁"}},
	{88000000025, {"Vyron", "威龙"}},
	{88000000030, {"D-wolf", "红狼"}},
	{88000000027, {"Stinger", "蜂医"}},
	{88000000036, {"Toxik", "蛊"}},
	{88000000029, {"Shepherd", "牧羊人"}},
	{88000000028, {"Luna", "露娜"}},
	{88000000026, {"Hackclaw", "骇爪"}},
	{88000000037, {"Sineva", "深蓝"}},
    {88000000038, {"Nox", "无名"}},
    {88000000039, {"Blast", "疾风"}},
    {88000000040, {"Silver Wing", "银翼"}},
    {88000000041, {"Bit", "比特"}}
};

static inline std::unordered_map<uint64_t, ItemTranslate> ItemWeapons = {
    {18010000038, {"CI-19", "腾龙"}},
    {18010000042, {"KC17", "KC17"}},
    {18150000001, {"Compound Bow", "复合弓"}},
    {18010000040, {"K437", ""}},
    {18010000037, {"As Val", ""}},
    {18010000031, {"CAR-15", ""}},
    {18010000024, {"PTR-32", ""}},
    {18010000023, {"G3", ""}},
    {18010000021, {"SCAR-H", ""}},
    {18010000018, {"AK-12", ""}},
    {18010000017, {"SG552", ""}},
    {18010000016, {"M7", ""}},
    {18010000015, {"AUG", ""}},
    {18010000014, {"M16A4", ""}},
    {18010000013, {"K416", ""}},
    {18010000012, {"ASH-12", ""}},
    {18010000010, {"AKS-74U", ""}},
    {18010000008, {"QBZ95", ""}},
    {18010000006, {"AKM", ""}},
    {18010000001, {"M4", ""}},
    {18020000010, {"MP7", ""}},
    {18020000009, {"Vityaz", "勇士"}},
    {18020000008, {"SR-3M", ""}},
    {18020000006, {"SMG-45", ""}},
    {18020000005, {"Bizon", "野牛"}},
    {18020000004, {"UZI", ""}},
    {18020000003, {"Vector", ""}},
    {18020000002, {"P90", ""}},
    {18020000001, {"MP5", ""}},
    {18020000011, {"QCQ17", ""}},
    {18020000012, {"MK4", ""}},
    {18030000004, {"M870", ""}},
    {18030000002, {"S12K", ""}},
    {18030000005, {"S686", ""}},
    {18030000001, {"M1014", ""}},
    {18040000003, {"M250", ""}},
    {18040000002, {"M249", ""}},
    {18040000001, {"PKM", ""}},
    {18040000004, {"QJB201", ""}},
    {18050000031, {"PSG-1", ""}},
    {18050000007, {"SR-25", ""}},
    {18050000008, {"SR-9", ""}},
    {18050000006, {"SKS", ""}},
    {18050000005, {"M14", ""}},
    {18050000004, {"SVD", ""}},
    {18050000003, {"VSS", ""}},
    {18050000002, {"Mini-14", ""}},
    {18060000011, {"AWM", ""}},
    {18060000009, {"M700", ""}},
    {18060000008, {"R93", ""}},
    {18060000007, {"SV-98", ""}},
    {18070000033, {"M1911", ""}},
    {18070000010, {"G17", ""}},
    {18070000006, {"93R", ""}},
    {18070000005, {"G18", ""}},
    {18070000004, {"Desert Eagle", "沙漠之鹰"}},
    {18070000003, {"Revolver", ".357左轮"}},
    {18070000002, {"QSZ-92G", ""}},
    {18080000009, {"Loiterer", "巡飞弹发射器"}},
    {18010000043, {"MK47", ""}},
    {18050000032, {"Marlin", ""}},

    {18050000032, {"Sentinel Nest", "哨兵母巢"}},
    {21020300034, {"Smart smoke", "智能烟雾"}},
    {21010000022, {"Grenade", "手雷"}},
    {21010000001, {"Grenade", "手雷"}},
    {21010000020, {"Barbed Wire Grenade", "铁丝网手雷"}},
    {21010000006, {"Incendiary Bombs", "燃烧弹"}},
    {21010000004, {"Flash Logging", "闪光巡飞器"}},
    {21010000025, {"Flash", "闪光弹"}},
    {21010000027, {"Drilling Spikes", "钻墙电刺"}},
    {21010000009, {"Magnetic Bomb", "磁吸炸弹"}},
    {21010000003, {"Data Knife", "数据飞刀"}},
    {21010000005, {"Data Knife", "速凝掩体"}},
    {21010000024, {"Spinning Blade Aircraft", "旋刃飞行器"}},
    {21010000028, {"Pulse Grenade", "脉冲手雷"}},
    {21010000031, {"Web Catching Spider", "捕网蜘蛛"}},
    {18130000001, {"Electromagnetic Bow", "电击弓"}},
    {18130000002, {"Scanning Bow", "扫描弓"}},
    {21020300006, {"Sound Trap", "声波陷阱"}},
    {18080000010, {"Triple Barrel", "三联装手炮"}},
    {18080000011, {"Tiger Crouch", "虎蹲炮"}},
    {21010000018, {"Blinding Toxic Fog", "致盲毒雾"}},
};

enum class ItemType
{
    Hero,
    Weapon,
	Box,
};

static inline std::string GetItemName(const uint64_t& ItemID, ItemType type)
{
    std::shared_lock<std::shared_mutex> lock(GameData.Global.Data.Mutex.ItemName);
    const auto& GetItemMap = [&]() -> const auto& {
        switch (type)
        {
        case ItemType::Hero: return ItemHero;
        case ItemType::Weapon: return ItemWeapons;
        default: static std::unordered_map<uint64_t, ItemTranslate> empty; return empty;
        }
    };

    const auto& itemMap = GetItemMap();

    if (auto it = itemMap.find(ItemID); it != itemMap.end())
    {
        return (GameData.CurrentLanguage == Language::Chinese) ? it->second.CN == "" ? it->second.EN : it->second.CN : it->second.EN;
    }

    const auto& GetTypeName = [&]() -> std::string {
        switch (type)
        {
        case ItemType::Hero: return "Hero";
        case ItemType::Weapon: return "Weapon";
        default: return "Unknown";
        }
    };

    //return std::format("{}({})", GetTypeName(), ItemID);
    return std::format("Unknown", GetTypeName(), ItemID);
}

static inline const float(&GetArmorColor(const INT32& Lv, const PlayerConfig& Config))[4]
{
    switch (Lv)
    {
	case 1:
		return Config.ArmorLv1Color;
		break;
	case 2:
		return Config.ArmorLv2Color;
		break;
	case 3:
		return Config.ArmorLv3Color;
		break;
	case 4:
		return Config.ArmorLv4Color;
        break;
    case 5:
		return Config.ArmorLv5Color;
		break;
	case 6:
		return Config.ArmorLv6Color;
		break;
    default:
        return Config.ArmorLv1Color;
        break;
    }
}