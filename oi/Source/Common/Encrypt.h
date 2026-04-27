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
#include <random>
#include <cryptopp/md5.h>
#include <cryptopp/hex.h>
#include <fstream>

namespace Encrypt
{
	inline std::string EncryptAES(const std::string& plainText, const CryptoPP::SecByteBlock& key, const CryptoPP::SecByteBlock& iv) {
		std::string cipherText;

		try {
			CryptoPP::CBC_Mode<CryptoPP::AES>::Encryption encryption;
			encryption.SetKeyWithIV(key, key.size(), iv);

			CryptoPP::StringSource ss(plainText, true,
				new CryptoPP::StreamTransformationFilter(encryption,
					new CryptoPP::StringSink(cipherText)
				) // StreamTransformationFilter
			); // StringSource

			std::string encoded;
			CryptoPP::StringSource(cipherText, true,
				new CryptoPP::Base64Encoder(
					new CryptoPP::StringSink(encoded),
					false
				) // Base64Encoder
			); // StringSource

			return encoded;
		}
		catch (const CryptoPP::Exception& e) {
			std::cerr << e.what() << std::endl;
			return "";
		}
	}

	inline std::string DecryptAES(const std::string& cipherText, const CryptoPP::SecByteBlock& key, const CryptoPP::SecByteBlock& iv) {
		std::string decryptedText;

		try {
			std::string decoded;
			CryptoPP::StringSource ss1(cipherText, true,
				new CryptoPP::Base64Decoder(
					new CryptoPP::StringSink(decoded)
				) // Base64Decoder
			); // StringSource

			CryptoPP::CBC_Mode<CryptoPP::AES>::Decryption decryption;
			decryption.SetKeyWithIV(key, key.size(), iv);

			CryptoPP::StringSource ss2(decoded, true,
				new CryptoPP::StreamTransformationFilter(decryption,
					new CryptoPP::StringSink(decryptedText)
				) // StreamTransformationFilter
			); // StringSource

			return decryptedText;
		}
		catch (const CryptoPP::Exception& e) {
			std::cerr << e.what() << std::endl;
			return "";
		}
	}

	inline std::string Base64Encode(const std::string& input) {
		std::string encoded;
		CryptoPP::StringSource ss(input, true,
			new CryptoPP::Base64Encoder(
				new CryptoPP::StringSink(encoded)
			)
		);
		return encoded;
	}

	inline std::string Base64Decode(const std::string& input) {
		std::string decoded;
		CryptoPP::StringSource ss(input, true,
			new CryptoPP::Base64Decoder(
				new CryptoPP::StringSink(decoded)
			)
		);
		return decoded;
	}

	inline std::string ObfuscateBase64(const std::string& base64Input) {
		std::string result;
		result.reserve(base64Input.length());

		const uint8_t offset = GameData.Remote.ObfuscateKey;
		
		for (size_t i = 0; i < base64Input.length(); ++i) {
			unsigned char c = base64Input[i];
			c = (c ^ offset) + GameData.Remote.ObfuscateKeyAdd;
			result += c;
		}
		return result;
	}

	inline std::string DeobfuscateBase64(const std::string& obfuscatedInput) {
		std::string result;
		result.reserve(obfuscatedInput.length());
		
		const uint8_t offset = GameData.Remote.ObfuscateKey;
		
		for (size_t i = 0; i < obfuscatedInput.length(); ++i) {
			unsigned char c = obfuscatedInput[i];
			c = (c - GameData.Remote.ObfuscateKeyAdd) ^ offset;
			result += c;
		}
		return result;
	}

	// 生成伪造的DLL数据
	inline std::string GenerateFakeDllData() {
		// DLL头部
		std::string dllHeader = "MZ";
		dllHeader += std::string(62, '\0');
		dllHeader += "PE\0\0";

		// 生成100KB的垃圾数据
		std::string junkData;
		junkData.reserve(102400);

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(0, 255);

		// x86汇编指令模式
		const char* codePatterns[] = {
			"\x55\x8B\xEC",  // push ebp; mov ebp, esp
			"\x83\xEC",      // sub esp
			"\x8B\x45",      // mov eax
			"\x89\x45",      // mov [ebp-xx]
			"\x5D\xC3",      // pop ebp; ret
			"\xFF\x15",      // call dword ptr
			"\x68",          // push
			"\xE8",          // call
		};

		size_t totalSize = 0;
		while (totalSize < 102400) {
			const char* pattern = codePatterns[dis(gen) % (sizeof(codePatterns)/sizeof(codePatterns[0]))];
			size_t patternLen = strlen(pattern);
			junkData.append(pattern, patternLen);

			for (int i = 0; i < dis(gen) % 8 + 1; ++i) {
				junkData.push_back(static_cast<char>(dis(gen)));
			}
			totalSize = junkData.size();
		}

		junkData.resize(102400);
		return dllHeader + junkData;
	}

	// 加密配置数据
	inline std::string EncryptConfig(const std::string& jsonStr) {
		CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
		CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
		
		// 使用固定的密钥和IV
		const unsigned char keyData[] = {
			0x54, 0x35, 0xEC, 0x2E, 0xC0, 0xEC, 0x35, 0x54,
			0x54, 0x35, 0xEC, 0x2E, 0xC0, 0xEC, 0x35, 0x54
		};
		const unsigned char ivData[] = {
			0x6B, 0x3F, 0x71, 0x92, 0xD1, 0x92, 0x71, 0x3F,
			0x6B, 0x3F, 0x71, 0x92, 0xD1, 0x92, 0x71, 0x3F
		};
		
		memcpy(key, keyData, key.size());
		memcpy(iv, ivData, iv.size());
		
		return EncryptAES(jsonStr, key, iv);
	}

	// 解密配置数据
	inline std::string DecryptConfig(const std::string& encryptedData) {
		CryptoPP::SecByteBlock key(CryptoPP::AES::DEFAULT_KEYLENGTH);
		CryptoPP::SecByteBlock iv(CryptoPP::AES::BLOCKSIZE);
		
		// 使用相同的密钥和IV
		const unsigned char keyData[] = {
			0x54, 0x35, 0xEC, 0x2E, 0xC0, 0xEC, 0x35, 0x54,
			0x54, 0x35, 0xEC, 0x2E, 0xC0, 0xEC, 0x35, 0x54
		};
		const unsigned char ivData[] = {
			0x6B, 0x3F, 0x71, 0x92, 0xD1, 0x92, 0x71, 0x3F,
			0x6B, 0x3F, 0x71, 0x92, 0xD1, 0x92, 0x71, 0x3F
		};
		
		memcpy(key, keyData, key.size());
		memcpy(iv, ivData, iv.size());
		
		return DecryptAES(encryptedData, key, iv);
	}

	// 获取DLL头部大小
	constexpr size_t GetDllHeaderSize() {
		return 66;  // DOS头(64) + PE标识(2)
	}

	// 获取垃圾数据大小
	constexpr size_t GetJunkDataSize() {
		return 102400;  // 100KB
	}

	// 计算文件的MD5值
	inline std::string GetFileMD5(const std::string& filePath) {
		try {
			// 以二进制模式打开文件
			std::ifstream file(filePath, std::ios::binary);
			if (!file) {
				return "";
			}

			// 创建MD5对象
			CryptoPP::MD5 hash;
			
			// 读取文件内容并更新hash
			const size_t bufferSize = 4096;
			char buffer[bufferSize];
			while (file.read(buffer, bufferSize)) {
				hash.Update(reinterpret_cast<const byte*>(buffer), file.gcount());
			}
			if (file.gcount() > 0) {
				hash.Update(reinterpret_cast<const byte*>(buffer), file.gcount());
			}

			// 计算最终的hash值
			byte digest[CryptoPP::MD5::DIGESTSIZE];
			hash.Final(digest);

			// 将hash值转换为十六进制字符串
			std::string result;
			CryptoPP::HexEncoder encoder(new CryptoPP::StringSink(result));
			encoder.Put(digest, sizeof(digest));
			encoder.MessageEnd();

			return result;
		}
		catch (const CryptoPP::Exception& e) {
			//std::cerr << "MD5 calculation error: " << e.what() << std::endl;
			return "";
		}
	}
}