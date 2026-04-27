#pragma once

#include "Crypto.h"
#include <algorithm>
#include <random>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <openssl/evp.h>
#include <openssl/aes.h>
#include <openssl/sha.h>
#include <openssl/rand.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>

namespace Crypto {
    // 字符替换映射表
    const std::map<char, char> encryptMap = {
        {'A', '!'}, {'B', '@'}, {'C', '#'}, {'D', '$'}, {'E', '%'}, {'F', '^'}, {'G', '&'},
        {'H', '*'}, {'I', '('}, {'J', ')'}, {'K', '-'}, {'L', '+'}, {'M', '='}, {'N', '['},
        {'O', ']'}, {'P', '{'}, {'Q', '}'}, {'R', '|'}, {'S', ';'}, {'T', ':'}, {'U', ','},
        {'V', '.'}, {'W', '<'}, {'X', '>'}, {'Y', '?'}, {'Z', '~'}, {'a', '1'}, {'b', '2'},
        {'c', '3'}, {'d', '4'}, {'e', '5'}, {'f', '6'}, {'g', '7'}, {'h', '8'}, {'i', '9'},
        {'j', '0'}, {'k', 'q'}, {'l', 'w'}, {'m', 'e'}, {'n', 'r'}, {'o', 't'}, {'p', 'y'},
        {'q', 'u'}, {'r', 'i'}, {'s', 'o'}, {'t', 'p'}, {'u', 'a'}, {'v', 's'}, {'w', 'd'},
        {'x', 'f'}, {'y', 'g'}, {'z', 'h'}, {'/', '_'}, {'+', 'x'}, {'=', 'c'}, {'0', 'k'},
        {'1', 'l'}, {'2', 'm'}, {'3', 'n'}, {'4', 'b'}, {'5', 'v'}, {'6', 'Q'}, {'7', 'W'},
        {'8', 'E'}, {'9', 'R'}
    };

    std::map<char, char> decryptMap;

    // 初始化解密映射表
    struct InitDecryptMap {
        InitDecryptMap() {
            for (const auto& pair : encryptMap) {
                decryptMap[pair.second] = pair.first;
            }
        }
    } initDecryptMap;

    // 分隔符定义
    const std::vector<std::string> separators = {
        "\uFFFD\u2370\u0489\uFFFD",
        "\u2621\u0488\u07F7\u0858",
        "\u2388\u0489\uFE1F\u0760",
        "\u239B\u07EA\u0487\u0314",
        "\u23AE\u0315\u0484\u0650"
    };

    std::string GenerateNonce() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<unsigned int> dis(0, 255);

        unsigned char b[16];
        for (int i = 0; i < 16; ++i) {
            b[i] = static_cast<unsigned char>(dis(gen));
        }

        std::ostringstream oss;
        for (int i = 0; i < 16; ++i) {
            oss << std::hex << std::setw(2) << std::setfill('0') << (int)b[i];
        }
        return oss.str();
    }

    int64_t GetTimestamp() {
        auto now = std::chrono::system_clock::now();
        auto now_c = std::chrono::system_clock::to_time_t(now);
        std::tm* tm_utc8 = std::gmtime(&now_c);
        tm_utc8->tm_hour += 8;
        return std::mktime(tm_utc8);
    }

    std::string ReverseString(const std::string& s) {
        std::string result = s;
        std::reverse(result.begin(), result.end());
        return result;
    }

    std::string GenerateDynamicKey(const std::string& baseKey, int64_t timestamp) {
        std::string input = baseKey + ":" + std::to_string(timestamp / 300);
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, input.c_str(), input.length());
        SHA256_Final(hash, &sha256);

        std::stringstream ss;
        for (int i = 0; i < 32; i++) {
            ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
        }
        return ss.str().substr(0, 32);
    }

    std::string EncodeTimestamp(int64_t timestamp) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> paddingLenDist(3, 8);
        int paddingLen = paddingLenDist(gen);

        std::string padding;
        std::uniform_int_distribution<> charDist('A', 'Z');
        for (int i = 0; i < paddingLen; ++i) {
            padding += static_cast<char>(charDist(gen));
        }

        std::stringstream ss;
        ss << std::hex << timestamp;
        std::string hex = ss.str();
        //std::string encoded = ObfuscateString(hex);
        std::string encoded = hex;

        return padding + encoded + std::to_string(paddingLen);
    }

    int64_t DecodeTimestamp(const std::string& encoded) {
        if (encoded.length() < 4) {
            throw std::runtime_error("encoded timestamp too short");
        }

        char lenChar = encoded.back();
        int paddingLen = lenChar - '0';
        if (paddingLen < 3 || paddingLen > 8) {
            throw std::runtime_error("invalid padding length");
        }

        if (encoded.length() < paddingLen + 2) {
            throw std::runtime_error("invalid encoded format");
        }

        std::string encodedHex = encoded.substr(paddingLen, encoded.length() - paddingLen - 1);
        //std::string hex = DeobfuscateString(encodedHex);
        std::string hex = encodedHex;
        
        return std::stoll(hex, nullptr, 16);
    }

    std::string GetAESKey() {
        return DefaultAESKey;
    }

    std::string GetSignSecret() {
        return DefaultSignSecret;
    }

    int64_t GetTimeOffset() {
        return DefaultTimeOffset;
    }

    std::string ObfuscateString(const std::string& s) {
        std::string result;
        result.reserve(s.length());
        for (char c : s) {
            auto it = encryptMap.find(c);
            result += (it != encryptMap.end()) ? it->second : c;
        }
        return result;
    }

    std::string DeobfuscateString(const std::string& s) {
        std::string result;
        result.reserve(s.length());
        for (char c : s) {
            auto it = decryptMap.find(c);
            result += (it != decryptMap.end()) ? it->second : c;
        }
        return result;
    }

    std::string GetRandomSeparator() {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, separators.size() - 1);
        return separators[dis(gen)];
    }

    std::string InsertSeparator(const std::string& data) {
        return data;
        if (data.empty()) return data;

        const int minChunkSize = 4;
        const int maxChunkSize = 8;
        std::string result;
        size_t pos = 0;

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> chunkDist(minChunkSize, maxChunkSize);

        while (pos < data.length()) {
            int chunkSize = chunkDist(gen);
            size_t end = std::min(pos + chunkSize, data.length());
            result += data.substr(pos, end - pos);

            if (end < data.length()) {
                result += GetRandomSeparator();
            }

            pos = end;
        }
        return result;
    }

    std::string RemoveSeparator(const std::string& data) {
        std::string result = data;
        for (const auto& sep : separators) {
            size_t pos = 0;
            while ((pos = result.find(sep, pos)) != std::string::npos) {
                result.erase(pos, sep.length());
            }
        }
        return result;
    }

    std::string EncryptRequest(const std::string& data) {
        int64_t currentTime = GetTimestamp();
        std::string dynamicKey = GenerateDynamicKey(GetAESKey(), currentTime);

        // AES-GCM 加密
        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        if (!ctx) throw std::runtime_error("Failed to create cipher context");

        const EVP_CIPHER* cipher = EVP_aes_256_gcm();
        unsigned char iv[12]; // 12字节，和Go一致
        if (RAND_bytes(iv, sizeof(iv)) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            throw std::runtime_error("Failed to generate IV");
        }

        if (EVP_EncryptInit_ex(ctx, cipher, nullptr,
            reinterpret_cast<const unsigned char*>(dynamicKey.c_str()), iv) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            throw std::runtime_error("Failed to initialize encryption");
        }

        std::vector<unsigned char> ciphertext(data.length() + EVP_MAX_BLOCK_LENGTH);
        int len;
        if (EVP_EncryptUpdate(ctx, ciphertext.data(), &len,
            reinterpret_cast<const unsigned char*>(data.c_str()), data.length()) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            throw std::runtime_error("Failed to encrypt data");
        }

        int finalLen;
        if (EVP_EncryptFinal_ex(ctx, ciphertext.data() + len, &finalLen) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            throw std::runtime_error("Failed to finalize encryption");
        }

        unsigned char tag[16];
        if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, tag) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            throw std::runtime_error("Failed to get authentication tag");
        }

        EVP_CIPHER_CTX_free(ctx);

        std::vector<unsigned char> cipher_and_tag;
        cipher_and_tag.insert(cipher_and_tag.end(), ciphertext.begin(), ciphertext.begin() + len + finalLen);
        cipher_and_tag.insert(cipher_and_tag.end(), tag, tag + 16);

        // 拼接iv + (密文+tag)
        std::vector<unsigned char> finalCiphertext;
        finalCiphertext.insert(finalCiphertext.end(), iv, iv + 12);
        finalCiphertext.insert(finalCiphertext.end(), cipher_and_tag.begin(), cipher_and_tag.end());

        // Base64编码
        BIO* b64 = BIO_new(BIO_f_base64());
        BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);
        BIO* bmem = BIO_new(BIO_s_mem());
        b64 = BIO_push(b64, bmem);
        BIO_write(b64, finalCiphertext.data(), finalCiphertext.size());
        BIO_flush(b64);

        BUF_MEM* bptr;
        BIO_get_mem_ptr(b64, &bptr);

        std::string base64Str(bptr->data, bptr->length);
        BIO_free_all(b64);

		base64Str = ObfuscateString(ReverseString(base64Str));

        // 返回
        std::string encodedTime = EncodeTimestamp(currentTime);
        return InsertSeparator(encodedTime) + "|" + InsertSeparator(base64Str);
    }

    std::string DecryptRequest(const std::string& data) {
        // 分离时间戳和加密数据
        size_t pos = data.find('|');
        if (pos == std::string::npos) {
            throw std::runtime_error("invalid data format: expected timestamp|data");
        }

        std::string encodedTime = RemoveSeparator(data.substr(0, pos));
        std::string encryptedData = RemoveSeparator(data.substr(pos + 1));

		encryptedData = ReverseString(DeobfuscateString(encryptedData));

        // 解码时间戳
        int64_t timestamp = DecodeTimestamp(encodedTime);
        std::string dynamicKey = GenerateDynamicKey(GetAESKey(), timestamp);

        // Base64 解码
        BIO* b64 = BIO_new(BIO_f_base64());
        BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);
        BIO* bmem = BIO_new_mem_buf(encryptedData.c_str(), encryptedData.length());
        bmem = BIO_push(b64, bmem);

        // 分配足够大的缓冲区
        unsigned char* decodedData = new unsigned char[encryptedData.length()];
        int len = BIO_read(bmem, decodedData, encryptedData.length());
        BIO_free_all(bmem);

        if (len <= 0) {
            delete[] decodedData;
            throw std::runtime_error("Failed to decode base64");
        }

        if (len < 12 + 16) {
            delete[] decodedData;
            throw std::runtime_error("Ciphertext too short");
        }

        // 提取IV (前12字节)
        unsigned char iv[12];
        memcpy(iv, decodedData, 12);

        // 计算密文长度 (总长度 - IV长度 - tag长度)
        int ciphertextLen = len - 12 - 16;

        // 提取密文 (IV后面，tag前面)
        unsigned char* ciphertext = new unsigned char[ciphertextLen];
        memcpy(ciphertext, decodedData + 12, ciphertextLen);

        // 提取tag (最后16字节)
        unsigned char tag[16];
        memcpy(tag, decodedData + len - 16, 16);

        // 初始化加密上下文
        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        if (!ctx) {
            delete[] decodedData;
            delete[] ciphertext;
            throw std::runtime_error("Failed to create cipher context");
        }

        // 设置加密算法、密钥和IV
        const EVP_CIPHER* cipher = EVP_aes_256_gcm();
        if (EVP_DecryptInit_ex(ctx, cipher, nullptr,
            reinterpret_cast<const unsigned char*>(dynamicKey.c_str()), iv) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            delete[] decodedData;
            delete[] ciphertext;
            throw std::runtime_error("Failed to initialize decryption");
        }

        // 解密密文
        unsigned char* plaintext = new unsigned char[ciphertextLen];
        int plaintextLen;
        if (EVP_DecryptUpdate(ctx, plaintext, &plaintextLen,
            ciphertext, ciphertextLen) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            delete[] decodedData;
            delete[] ciphertext;
            delete[] plaintext;
            throw std::runtime_error("Failed to decrypt data");
        }

        // 设置认证标签
        if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_TAG, 16, tag) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            delete[] decodedData;
            delete[] ciphertext;
            delete[] plaintext;
            throw std::runtime_error("Failed to set authentication tag");
        }

        // 完成解密
        int finalLen;
        if (EVP_DecryptFinal_ex(ctx, plaintext + plaintextLen, &finalLen) != 1) {
            EVP_CIPHER_CTX_free(ctx);
            delete[] decodedData;
            delete[] ciphertext;
            delete[] plaintext;
            throw std::runtime_error("Failed to finalize decryption");
        }

        // 释放加密上下文
        EVP_CIPHER_CTX_free(ctx);

        // 组装结果
        std::string result(reinterpret_cast<char*>(plaintext), plaintextLen + finalLen);

        // 释放内存
        delete[] decodedData;
        delete[] ciphertext;
        delete[] plaintext;

        return result;
    }

    std::string GenerateSign(const nlohmann::json& req) {
        std::string jsonStr = req.dump();
        
        unsigned char hash[SHA256_DIGEST_LENGTH];
        SHA256_CTX sha256;
        SHA256_Init(&sha256);
        SHA256_Update(&sha256, jsonStr.c_str(), jsonStr.length());
        SHA256_Update(&sha256, GetSignSecret().c_str(), GetSignSecret().length());
        SHA256_Final(hash, &sha256);

        std::stringstream ss;
        for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
            ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
        }
        return ss.str();
    }
}