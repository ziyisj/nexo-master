#pragma once
#include <cstdint>
#include <Common/Data.h>
#include <Common/Encrypt.h>
#include <nlohmann/json.hpp>
#include <cryptopp/aes.h>
#include <cryptopp/filters.h>
#include <cryptopp/modes.h>
#include <cryptopp/base64.h>
#include <iostream>
#include <string>
#include <Utils/XorString.h>
#include "Offsets.h"

class Offset
{
public:
	static inline uint64_t EncryptClass(uint64_t value) {
		auto v6 = _rotl64(value, GameData.Remote.EncryptClassXor);
		auto v7 = v6 ^ GameData.Remote.EncryptClassMask;
		return v7;
	};

	static inline uint64_t DecryptClass(uint64_t value) {
		auto v6 = value ^ GameData.Remote.EncryptClassMask;
		auto v5 = _rotr64(v6, GameData.Remote.EncryptClassXor);
		return v5;
	};

	static inline std::string GetEncryptKey(const std::string& key) {
		return GameData.Remote.EncryptedKeys[key];
	}

	static inline std::string SetEncryptKey(const std::string& key) {
		std::hash<std::string> hasher;
		std::string encryptedKey = std::to_string(hasher(key) + GameData.Remote.EncryptKeyAdd);

		GameData.Remote.EncryptedKeys[key] = encryptedKey;

		return encryptedKey;
	}

	static inline std::string EncryptKey(const std::string& key) {
		const std::string Key = GetEncryptKey(key);

		if (!Key.empty())
		{
			return Key;
		}
		else {
			return SetEncryptKey(key);
		}
	}

	static inline uint64_t GetEncryptedOffset(const std::string& key) {
		return DecryptClass(GameData.Remote.Offset[EncryptKey(key)]);
	}

	static void Init();

	static inline void toJson()
	{
		nlohmann::json Json;

		for (const auto& entry : GameData.Remote.Offset) {
			Json[(XorStr("Offset"))][entry.first] = EncryptClass(entry.second);
		}

		CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
		CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
		memset(key, GameData.Remote.AESKey, key.size());
		memset(iv, GameData.Remote.AESIV, iv.size());

		std::string base64 = Encrypt::EncryptAES(Json.dump(), key, iv);
		std::string obfuscated = Encrypt::ObfuscateBase64(base64);
		std::string deobfuscated = Encrypt::DeobfuscateBase64(obfuscated);

		//std::cout << base64 << std::endl;
		std::cout << obfuscated << std::endl;
		//std::cout << deobfuscated << std::endl;

		GameData.Remote.VerifyData = Json;

		for (const auto& entry : GameData.Remote.Offset) {
			GameData.Remote.Offset[entry.first] = EncryptClass(entry.second);
		}
	}

	static inline std::string UnLoadRemote(std::string Value)
	{
		CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
		CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
		memset(key, GameData.Remote.AESKey, key.size());
		memset(iv, GameData.Remote.AESIV, iv.size());

		auto obfuscated = Encrypt::DeobfuscateBase64(Value);

		return Encrypt::DecryptAES(obfuscated, key, iv);
	}

	static inline void LoadRemoteOffset()
	{
		const auto jsonData = GameData.Remote.VerifyData;

		if (jsonData.find(XorStr("Offset")) != jsonData.end()) {
			nlohmann::json offsetData = jsonData[(XorStr("Offset"))];
			for (nlohmann::json::iterator it = offsetData.begin(); it != offsetData.end(); ++it) {
				std::string key = it.key();

				GameData.Remote.Offset[key] = it.value();
			}
		}
	}
};