#pragma once

#include <string>
#include <vector>
#include <map>
#include <random>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <openssl/aes.h>
#include <openssl/evp.h>
#include <openssl/sha.h>
#include <openssl/rand.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>
#include <openssl/evp.h>
#include <nlohmann/json.hpp>

namespace Crypto {
    // 常量定义
    const std::string DefaultAESKey = "i~h%Yr@z%#>.,#Ux+1@Pyaq6P}AVEERD";
    const std::string DefaultSignSecret = "%@VRtGq+>rH}Z)N#3z";
    const int DefaultTimeOffset = 300;

    // 工具函数
    std::string GenerateNonce();
    int64_t GetTimestamp();
    std::string ReverseString(const std::string& s);
    std::string GenerateDynamicKey(const std::string& baseKey, int64_t timestamp);
    std::string EncodeTimestamp(int64_t timestamp);
    int64_t DecodeTimestamp(const std::string& encoded);
    std::string GetAESKey();
    std::string GetSignSecret();
    int64_t GetTimeOffset();

    // 加密相关函数
    std::string EncryptRequest(const std::string& data);
    std::string DecryptRequest(const std::string& data);
    std::string GenerateSign(const nlohmann::json& req);

    // 字符替换相关
    std::string ObfuscateString(const std::string& s);
    std::string DeobfuscateString(const std::string& s);
    std::string InsertSeparator(const std::string& data);
    std::string RemoveSeparator(const std::string& data);
}

