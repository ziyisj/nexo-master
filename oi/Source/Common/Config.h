#pragma once

#include <Common/Data.h>
#include <Common/Encrypt.h>
#include <Common/Constant.h>
#include <Common/ItemTranslate.h>
#include <Common/SDK.h>
#include <Utils/Utils.h>
#include <nlohmann/json.hpp>
#include <Utils/XorString.h>
#include <CryptoPP/aes.h>
#include <CryptoPP/modes.h>
#include <random>

class Config
{
public:
    // 定义支持的配置类型
    enum class ConfigType {
        String,
        Bool,
        Int,
        Float,
        BoolArray,    // 新增整数数组类型
        IntArray,    // 新增整数数组类型
        FloatArray   // 新增浮点数数组类型
    };

    // 配置项定义结构体
    struct ConfigItem {
        std::string section;
        std::string key;
        void* value;
        size_t size;
        ConfigType type;
        size_t arraySize;  // 数组长度

        // 普通类型的构造函数
        template<typename T>
        ConfigItem(const std::string& s, const std::string& k, T& v, ConfigType t)
            : section(s), key(k), value(&v), size(sizeof(T)), type(t), arraySize(1) {
        }

        // 数组类型的构造函数
        template<typename T>
        ConfigItem(const std::string& s, const std::string& k, T* v, size_t arrSize, ConfigType t)
            : section(s), key(k), value(v), size(sizeof(T)), type(t), arraySize(arrSize) {
        }
    };

    static std::vector<ConfigItem>& GetConfigItems() {
        static std::vector<ConfigItem> items;
        return items;
    }

    // 注册配置项的辅助函数
    template<typename T>
    static void RegisterConfig(const std::string& section, const std::string& key, T& value, ConfigType type) {
        GetConfigItems().emplace_back(section, key, value, type);
    }

    // 注册数组配置项的辅助函数
    template<typename T>
    static void RegisterConfig(const std::string& section, const std::string& key, T* value, size_t arraySize, ConfigType type) {
        GetConfigItems().emplace_back(section, key, value, arraySize, type);
    }

    static void SetColor(float(&Color)[4], float r, float g, float b, float a = 255.f);

    static void InitializeConfigs();

    static void Save();

    static void Load();
};