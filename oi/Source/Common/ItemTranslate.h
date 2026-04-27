#pragma once

#include <unordered_map>
#include <string>
#include <set>
#include <iostream>
#include <windows.h>
#include <Utils/I18N.h>
#include <cpr/cpr.h>
#include <Common/Data.h>
#include <nlohmann/json.hpp>

#include <Common/Translate/ItemDataTable.h>
#include <Common/Translate/ItemTranslateCN.h>
#include <Common/Translate/ItemTranslateEN.h>

//DeltaForce\Content\StringTables\STForDataTable\Common\Base\LOC_GameItem.json 是语言
//Content\Localization\GameItem\zh-Hans\GameItem.json 是语言
//Content\R13N\Common\Base\DataTables\GameItem.json 物品
//Content\DataTables\CommonItemAsset\CommonItemAssets_Prop.json 图标?

static inline std::string GetItemTranslate(const uint64_t& ItemID)
{
    std::shared_lock<std::shared_mutex> lock(GameData.Global.Data.Mutex.ItemTranslate);

    if (GameData.CurrentLanguage == Language::Chinese)
    {
        auto it = GetItemTranslateCN().find(ItemID);
        if (it != GetItemTranslateCN().end())
            return it->second;

        it = GetItemTranslateShortNameCN().find(ItemID);
        if (it != GetItemTranslateShortNameCN().end())
            return it->second;
    }
    else
    {
        auto it = GetItemTranslateEN().find(ItemID);
        if (it != GetItemTranslateEN().end())
            return it->second;

        it = GetItemTranslateShortNameEN().find(ItemID);
        if (it != GetItemTranslateShortNameEN().end())
            return it->second;
    }
    return std::to_string(ItemID);
}

static inline ItemDataTableInfo GetItemDataTableInfo(const uint64_t& ItemID)
{
    std::shared_lock<std::shared_mutex> lock(GameData.Global.Data.Mutex.ItemDataTableInfo);
    auto it = GetItemDataTable().find(ItemID);
    if (it != GetItemDataTable().end())
        return it->second;
    return ItemDataTableInfo{};
}

static inline void SetItemDataTableInfo(const uint64_t& ItemID, ItemDataTableInfo& Value)
{
    std::unique_lock<std::shared_mutex> lock(GameData.Global.Data.Mutex.ItemDataTableInfo);
    GetItemDataTable()[ItemID] = Value;
}

static inline void GenerateItemDataTableHeader() {
    std::ifstream in("Data/GameItem.json");
    nlohmann::json j;
    in >> j;

    std::ofstream out("Data/ItemDataTable.h");
    out << "inline std::unordered_map<uint64_t, ItemDataTableInfo> ItemDataTable = {\n";
    out << std::fixed << std::setprecision(1); // 保证小数点后有一位

    if (!j.is_array() || j.empty()) return;
    const auto& rows = j[0]["Rows"];
    int Index = GetItemDataTable().size() - 1;
    for (auto& [item_id_str, value] : rows.items()) {
        float Weight = value.value("Weight", 0.0f);
        int InitialGuidePrice = value.value("InitialGuidePrice", 0);
        if (Weight <= 0.0f) continue;
        if (InitialGuidePrice <= 0) continue;

        Utils::Log(4, "%s %llu", "11010001001", Utils::StringToUint64("11010001001", 10));
        auto it = GetItemDataTable().find(Utils::StringToUint64(item_id_str, 10));
        if (it != GetItemDataTable().end())
        {
            continue;
        }

        Index++;

        int GameItemType = value.value("GameItemType", 0);
        int Quality = value.value("Quality", 0);
        int MaxStackCount = value.value("MaxStackCount", 0);
        int Length = value.value("Length", 0);
        int Width = value.value("Width", 0);
        bool CanUsed = value.value("CanUsed", false);
        int TagFilterMain = value.value("TagFilterMain", 0);
        int TagFilterSub = value.value("TagFilterSub", 0);

        out << "    {" << item_id_str << ", {"
            << Index << ", "
            << GameItemType << ", "
            << Quality << ", "
            << MaxStackCount << ", "
            << Length << ", "
            << Width << ", "
            << (CanUsed ? "true" : "false") << ", "
            << Weight << "f, "
            << InitialGuidePrice << ", "
            << TagFilterMain << ", "
            << TagFilterSub << ", 0.f, 0.f"
            << "}},\n";
    }
    out << "};\n";
}

static inline std::string EscapeString(const std::string& input) {
    std::string output;
    for (char c : input) {
        switch (c) {
        case '\\': output += "\\\\"; break;
        case '"':  output += "\\\""; break;
        case '\n': output += "\\n"; break;
        case '\r': output += "\\r"; break;
        case '\t': output += "\\t"; break;
        default:   output += c; break;
        }
    }
    return output;
}

static inline void GenerateItemTranslateHeaderCN(bool All = true) {
    std::unordered_map<uint64_t, std::string> item_map;
    std::regex key_regex(R"((\d+)_Name)");

    std::ifstream in("Data/LOC_GameItem.json");
    nlohmann::json j;
    in >> j;

    for (auto& [key, value] : j[0]["StringTable"]["KeysToEntries"].items()) {
        std::smatch match;
        if (std::regex_match(key, match, key_regex)) {
            uint64_t id = std::stoull(match[1].str());
            std::string name = value.get<std::string>();
            auto it = GetItemTranslateCN().find(id);
            if (it != GetItemTranslateCN().end())
            {
                continue;
            }
            {
                auto it = GetItemTranslateShortNameCN().find(id);
                if (it != GetItemTranslateShortNameCN().end())
                {
                    continue;
                }
            }
            item_map[id] = EscapeString(name);
        }
    }

    if (All)
    {
        std::ifstream inx("Data/GameItemCN.json");
        nlohmann::json x;
        inx >> x;

        for (auto& [key, value] : x["LOC_GameItem"].items())
        {
            std::smatch match;
            if (std::regex_match(key, match, key_regex))
            {
                uint64_t id = std::stoull(match[1].str());
                std::string name = value.get<std::string>();
                if (GetItemTranslate(id) != match[1].str())
                {
                    continue;
                }
                item_map[id] = EscapeString(name);
            }
        }
    }

    // 写入到头文件
    std::ofstream out("Data/ItemTranslateCN.h");
    out << "#pragma once\n";
    out << "#include <unordered_map>\n#include <string>\n\n";
    out << "static inline std::unordered_map<uint64_t, std::string> ItemTranslateCN = {\n";
    for (const auto& [id, name] : item_map) {
        out << "    {" << id << ", \"" << name << "\"},\n";
    }
    out << "};\n";
}

static inline void GenerateItemTranslateHeaderShortNameCN() {
    std::ifstream in("Data/LOC_GameItem.json");
    nlohmann::json j;
    in >> j;

    std::ifstream inx("Data/GameItemCN.json");
    nlohmann::json x;
    inx >> x;

    std::unordered_map<uint64_t, std::string> item_map;
    std::regex key_regex(R"((\d+)_ShortName)");

    for (auto& [key, value] : j[0]["StringTable"]["KeysToEntries"].items()) {
        std::smatch match;
        if (std::regex_match(key, match, key_regex)) {
            uint64_t id = std::stoull(match[1].str());
            std::string name = value.get<std::string>();
            if (GetItemTranslate(id) != match[1].str())
            {
                continue;
            }
            item_map[id] = EscapeString(name);
        }
    }

    for (auto& [key, value] : x["LOC_GameItem"].items()) {
        std::smatch match;
        if (std::regex_match(key, match, key_regex)) {
            uint64_t id = std::stoull(match[1].str());
            std::string name = value.get<std::string>();
            if (GetItemTranslate(id) != match[1].str())
            {
                continue;
            }
            item_map[id] = EscapeString(name);
        }
    }

    // 写入到头文件
    std::ofstream out("Data/ItemTranslateShortNameCN.h");
    out << "#pragma once\n";
    out << "#include <unordered_map>\n#include <string>\n\n";
    out << "static inline std::unordered_map<uint64_t, std::string> ItemTranslateShortNameCN = {\n";
    for (const auto& [id, name] : item_map) {
        out << "    {" << id << ", \"" << name << "\"},\n";
    }
    out << "};\n";
}

static inline void GenerateItemTranslateHeaderEN() {
    std::ifstream in("Data/GameItemEN.json");
    nlohmann::json x;
    in >> x;

    std::unordered_map<uint64_t, std::string> item_map;
    std::regex key_regex(R"((\d+)_Name)");

    for (auto& [key, value] : x["LOC_GameItem"].items()) {
        std::smatch match;
        if (std::regex_match(key, match, key_regex)) {
            uint64_t id = std::stoull(match[1].str());
            std::string name = value.get<std::string>();
            item_map[id] = EscapeString(name);
        }
    }

    // 写入到头文件
    std::ofstream out("Data/ItemTranslateEN.h");
    out << "#pragma once\n";
    out << "#include <unordered_map>\n#include <string>\n\n";
    out << "static inline std::unordered_map<uint64_t, std::string> ItemTranslateEN = {\n";
    for (const auto& [id, name] : item_map) {
        out << "    {" << id << ", \"" << name << "\"},\n";
    }
    out << "};\n";
}

static inline void GenerateItemTranslateHeaderShortNameEN() {
    std::ifstream in("Data/GameItemEN.json");
    nlohmann::json x;
    in >> x;

    std::unordered_map<uint64_t, std::string> item_map;
    std::regex key_regex(R"((\d+)_ShortName)");

    for (auto& [key, value] : x["LOC_GameItem"].items()) {
        std::smatch match;
        if (std::regex_match(key, match, key_regex)) {
            uint64_t id = std::stoull(match[1].str());
            std::string name = value.get<std::string>();
            item_map[id] = EscapeString(name);
        }
    }

    // 写入到头文件
    std::ofstream out("Data/ItemTranslateShortNameEN.h");
    out << "#pragma once\n";
    out << "#include <unordered_map>\n#include <string>\n\n";
    out << "static inline std::unordered_map<uint64_t, std::string> ItemTranslateShortNameEN = {\n";
    for (const auto& [id, name] : item_map) {
        out << "    {" << id << ", \"" << name << "\"},\n";
    }
    out << "};\n";
}

static inline void CheckAndDownloadItemIcons() {
    namespace fs = std::filesystem;

    // 创建线程池，线程数为CPU核心数的2倍
    const size_t threadCount = std::thread::hardware_concurrency() * 2;
    std::vector<std::thread> threads;
    std::mutex taskMutex;
    std::mutex dirMutex;

    // 获取物品数据表
    auto& itemDataTable = GetItemDataTable();
    auto iter = itemDataTable.begin();

    // 创建工作线程
    for (size_t i = 0; i < threadCount; ++i) {
        threads.emplace_back([&]() {
            while (true) {
                // 获取下一个任务
                uint64_t itemId;
                {
                    std::lock_guard<std::mutex> lock(taskMutex);
                    if (iter == itemDataTable.end()) {
                        return;  // 没有更多任务，退出线程
                    }
                    itemId = iter->first;
                    ++iter;
                }

                // 构建文件路径
                std::string hubPath = "Engine\\Resource\\Icon\\Hub\\" + std::to_string(itemId) + ".png";
                std::string downHubPath = "Engine\\Resource\\Icon\\DownHub\\" + std::to_string(itemId) + ".png";

                // 检查文件是否存在
                if (fs::exists(hubPath)) {
                    continue;
                }

                // 构建下载URL
                std::string url = "https://playerhub.df.qq.com/playerhub/60004/object/" + std::to_string(itemId) + ".png";

                // 检查URL是否可访问
                auto head = cpr::Head(cpr::Url{ url });
                if (head.status_code != 200) {
                    std::cout << "URL不可访问，物品ID: " << itemId << " 状态码: " << head.status_code << std::endl;
                    continue;
                }

                // 确保目标目录存在
                {
                    std::lock_guard<std::mutex> lock(dirMutex);
                    fs::create_directories(fs::path(downHubPath).parent_path());
                }

                // 下载文件
                auto response = cpr::Get(cpr::Url{ url });
                if (response.status_code != 200) {
                    std::cout << "下载失败，物品ID: " << itemId << " 状态码: " << response.status_code << std::endl;
                    continue;
                }

                // 写入文件
                std::ofstream file(downHubPath, std::ios::binary);
                if (file.is_open()) {
                    file.write(response.text.c_str(), response.text.length());
                    file.close();
                    std::cout << "成功下载图标: " << itemId << std::endl;
                }
                else {
                    std::cout << "无法创建文件: " << downHubPath << std::endl;
                }
            }
            });
    }

    // 等待所有线程完成
    for (auto& thread : threads) {
        thread.join();
    }
}

static inline std::string FormatMoney(int value) {
    if (GameData.Config.ESP.ValueModel == 0)
    {
        std::ostringstream oss;
        if (value >= 10000)
        {
            // 保留一位小数（如12000=1.2w）
            oss << std::fixed << std::setprecision((value % 10000 == 0) ? 0 : 1) << (value / 10000.0) << "w";
        }
        else if (value >= 1000)
        {
            // 保留一位小数（如1500=1.5k）
            oss << std::fixed << std::setprecision((value % 1000 == 0) ? 0 : 1) << (value / 1000.0) << "k";
        }
        else
        {
            oss << value;
        }
        return oss.str();
    }
    else
    {
        // 国际格式（支持k和m）
        std::ostringstream oss;
        if (value >= 1000000)
        {
            oss << std::fixed << std::setprecision((value % 1000000 == 0) ? 0 : 1) << (value / 1000000.0) << "M";
        }
        else if (value >= 1000)
        {
            oss << std::fixed << std::setprecision((value % 1000 == 0) ? 0 : 1) << (value / 1000.0) << "K";
        }
        else
        {
            oss << value;
        }
        return oss.str();
    }
}

inline void CheckItemIconMove()
{
    namespace fs = std::filesystem;
    
    // 加载 CommonItemAssets_Prop.json 文件
    std::ifstream in("Data/CommonItemAssets_Prop.json");
    if (!in.is_open()) {
        return;
    }
    
    nlohmann::json j;
    try {
        in >> j;
    } catch (const std::exception& e) {
        return;
    }
    
    // 创建 ID 到图标地址的映射
    std::unordered_map<uint64_t, std::string> itemIconMap;
    
    // 解析 JSON 数据
    if (j.contains("Rows") && j["Rows"].is_object())
    {
        for (auto& [itemIdStr, itemData] : j["Rows"].items()) {
            try {
                uint64_t itemId = Utils::StringToUint64(itemIdStr, 10);
                
                // 检查是否有 ItemIconPath 字段
                if (itemData.contains("ItemIconPath") && 
                    itemData["ItemIconPath"].contains("AssetPathName")) {
                    
                    std::string assetPath = itemData["ItemIconPath"]["AssetPathName"].get<std::string>();

                    //std::cout << assetPath << std::endl;
                    
                    // 只存储非空的路径
                    if (assetPath != "None" && !assetPath.empty()) {
                        itemIconMap[itemId] = assetPath;
                    }
                }
            } catch (const std::exception& e) {
                continue;
            }
        }
    }
    
    
    // 获取物品数据表
    auto& itemDataTable = GetItemDataTable();
    
    // 遍历物品数据表，检查图标文件
    for (const auto& [itemId, itemData] : itemDataTable) {
        // 构建Hub图标路径
        std::string hubPath = "Engine\\Resource\\Icon\\Hub\\" + std::to_string(itemId) + ".png";
        
        // 检查文件是否存在
        if (!fs::exists(hubPath)) {
            // 文件不存在，查找map表中是否有对应的图标地址
            auto it = itemIconMap.find(itemId);
            if (it != itemIconMap.end()) {
                std::string assetPath = it->second;
                
                // 去掉路径前面的第一个斜杠
                if (assetPath.substr(0, 1) == "/") {
                    assetPath = assetPath.substr(1);
                }
                
                // 处理资源路径：去掉重复后缀并添加.png扩展名
                size_t lastDot = assetPath.find_last_of('.');
                if (lastDot != std::string::npos) {
                    std::string beforeDot = assetPath.substr(0, lastDot);
                    std::string afterDot = assetPath.substr(lastDot + 1);
                    
                    // 检查是否有重复的后缀
                    size_t lastSlash = beforeDot.find_last_of('/');
                    if (lastSlash != std::string::npos) {
                        std::string fileName = beforeDot.substr(lastSlash + 1);
                        if (fileName == afterDot) {
                            // 有重复后缀，去掉重复部分
                            assetPath = beforeDot + ".png";
                        } else {
                            // 没有重复后缀，直接添加.png
                            assetPath = it->second + ".png";
                        }
                    } else {
                        assetPath = it->second + ".png";
                    }
                } else {
                    assetPath = it->second + ".png";
                }
                
                std::cout << "物品ID: " << itemId << " 缺失图标，处理后路径: " << assetPath << std::endl;
                
                // 检查源文件是否存在
                if (fs::exists(assetPath)) {
                    // 确保目标目录存在
                    std::string targetDir = "Game/New";
                    fs::create_directories(targetDir);
                    
                    // 构建目标文件路径
                    std::string fileName = std::to_string(itemId) + ".png";
                    std::string targetPath = targetDir + "/" + fileName;
                    
                    try {
                        // 复制文件
                        fs::copy_file(assetPath, targetPath, fs::copy_options::overwrite_existing);
                        std::cout << "成功复制: " << assetPath << " -> " << targetPath << std::endl;
                    } catch (const std::exception& e) {
                        std::cout << "复制失败: " << assetPath << " 错误: " << e.what() << std::endl;
                    }
                } else {
                    std::cout << "源文件不存在: " << assetPath << std::endl;
                }
            }
        }
    }
}