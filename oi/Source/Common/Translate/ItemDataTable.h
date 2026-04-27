#pragma once

#include <unordered_map>
#include <string>
#include <set>
#include <windows.h>

struct ItemDataTableInfo
{
    int Index{};
    int GameItemType{};
    int Quality{};
    int MaxStackCount{};
    int Length{};
    int Width{};
    bool CanUsed{};
    float Weight{};
    int InitialGuidePrice{};
    int TagFilterMain{};
    int TagFilterSub{};
    float ItemDurability{};
    float ItemDurabilityMax{};
    uint64_t ItemID{};
};

// 声明为外部变量
std::unordered_map<uint64_t, ItemDataTableInfo>& GetItemDataTable();