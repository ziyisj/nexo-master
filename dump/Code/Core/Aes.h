#pragma once

#include <windows.h>
#include <string>
#include <locale>
#include <codecvt>
#include <format>
#include <vector>

#include <FPGA/Memory/Memory.h>

#include <Core/Data.h>
#include <Core/Offset.h>
#include <Core/Process.h>
#include <Core/Wrappers.h>
#include <Core/GName.h>
#include <Core/Engine.h>
#include <Core/Enums.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

namespace Aes
{
	static inline std::vector<uint8_t> HexStringToBytes(const std::string& hex) {
		std::vector<uint8_t> bytes;
		std::string hex_clean = hex;
		if (hex_clean.substr(0, 2) == "0x") {
			hex_clean = hex_clean.substr(2);
		}

		for (size_t i = 0; i < hex_clean.length(); i += 2) {
			std::string byteString = hex_clean.substr(i, 2);
			uint8_t byte = (uint8_t)strtol(byteString.c_str(), nullptr, 16);
			bytes.push_back(byte);
		}
		return bytes;
	}

	static inline std::string BytesToHexString(const uint8_t* bytes, size_t length) {
		std::stringstream ss;
		ss << "0x";
		for (size_t i = 0; i < length; i++) {
			ss << std::uppercase << std::setfill('0') << std::setw(2) << std::hex << (int)bytes[i];
		}
		return ss.str();
	}

	std::string ProcessKey(const uint8_t* originalKey) {
		//49 8D 4F ? 0F 11 4D Call //这里下断点可以取aes到动态的密钥然后解密成静态的
		//E8 ? ? ? ? 0F 57 C0 4C 8D 44 24 ? 33 C0
		/*
		  do
		  {
			v9 = off_124648A8(&unk_13089AD0); //直接读13089AD0，124648A8是一个返回函数
			v10 = (char *)v22 + v7;
			v11 = *(_BYTE *)(v7 + v9) ^ *((_BYTE *)v22 + v7 + v8);
			++v7;
			*v10 = v11;
		  }
		  while ( v7 < 32 );
		  sub_9B6DD30(a1, (unsigned int)v5, v22);
		*/
		int v3 = 0;
		uint64_t v22[4];
		int64_t v7 = 0;

		uint8_t dynamicKey[32] = {
			0x1B, 0x02, 0xD5, 0x84, 0xBF, 0xF6, 0x59, 0xD8,
			0x23, 0xAA, 0x9D, 0xEC, 0x47, 0x1E, 0xA1, 0xC0,
			0xF2, 0x31, 0x01, 0xB7, 0x17, 0x00, 0x00, 0x00,
			0x33, 0xFA, 0x2D, 0xBC, 0x57, 0x6E, 0x31, 0x90
		};

		uint64_t* a3_ptr = (uint64_t*)originalKey;
		v22[0] = a3_ptr[0];
		v22[1] = a3_ptr[1];
		v22[2] = a3_ptr[2];
		v22[3] = a3_ptr[3];

		int64_t v8 = (char*)originalKey - (char*)v22;

		do {
			uint8_t* v9 = dynamicKey;
			uint8_t* v10 = (uint8_t*)v22 + v7;
			uint8_t v11 = v9[v7] ^ *((uint8_t*)v22 + v7 + v8);
			*v10 = v11;
			++v7;
		} while (v7 < 32);

		// 返回处理后的key的hex string
		return BytesToHexString((uint8_t*)v22, 32);
	}

	static inline void XorAesKey()
	{
		std::ifstream f("dynamic_keys.json");
		if (!f.is_open()) {
			std::cout << "Error: Cannot open dynamic_keys.json" << std::endl;
			
		}

		json data;
		f >> data;
		f.close();

		// 创建新的JSON对象，保持原有结构
		// 创建新文件，手动控制格式
		std::ofstream out("decrypted_keys.json");
		out << "{\n  \"dynamicKeys\": [\n";

		auto& items = data["dynamicKeys"];
		for (size_t i = 0; i < items.size(); ++i) {
			std::vector<uint8_t> keyBytes = HexStringToBytes(items[i]["key"].get<std::string>());
			std::string newKey = ProcessKey(keyBytes.data());
			std::string guid = items[i]["guid"].get<std::string>();

			out << "    {\n";
			out << "      \"key\": \"" << newKey << "\",\n";  // 移除多余的引号
			out << "      \"guid\":\"" << guid << "\"";      // 移除多余的引号

			if (i < items.size() - 1) {
				out << "\n    },\n";
			}
			else {
				out << "\n    }\n";
			}
		}

		out << "  ]\n}";
		out.close();

		std::cout << "\nDecrypted keys have been saved to decrypted_keys.json" << std::endl;
	}

	static bool isFirstWrite = true;

	static inline void DumpRTFormat(const char* filename, uint32_t* Td0, int size) {
		FILE* file;
		fopen_s(&file, filename, "a");
		if (!file) return;

		fprintf(file, "#define RT \\\n\\\n");

		// 每行4组数据
		for (int i = 0; i < size; i += 4) {
			fprintf(file, "    ");
			for (int j = 0; j < 4 && (i + j) < size; j++) {
				uint32_t value = Td0[i + j];
				// 拆分32位值为4个字节
				uint8_t b0 = (value >> 24) & 0xFF;
				uint8_t b1 = (value >> 16) & 0xFF;
				uint8_t b2 = (value >> 8) & 0xFF;
				uint8_t b3 = value & 0xFF;

				fprintf(file, "V(%02X,%02X,%02X,%02X)", b3, b2, b1, b0);

				// 添加逗号和空格，最后一个元素除外
				if ((i + j) < size - 1) {
					fprintf(file, ", ");
				}
			}

			// 如果不是最后一行，才添加续行符
			if (i < size - 4) {
				fprintf(file, " \\\n");
			}
			else {
				fprintf(file, "\n");
			}
		}

		fprintf(file, "\n");  // 添加一个空行
		fclose(file);
	}

	static inline void DumpArrayToFile(const char* filename, const char* arrayName, uint32_t* data, int size) {
		FILE* file;
		fopen_s(&file, filename, "a");
		if (!file) return;

		// 写入数组声明
		fprintf(file, "static const u32 %s[256] =\n{\n", arrayName);

		// 每行4个数
		for (int i = 0; i < size; i += 4) {
			fprintf(file, "  ");
			for (int j = 0; j < 4 && (i + j) < size; j++) {
				fprintf(file, "0x%08XU", data[i + j]);
				if ((i + j) < size - 1) fprintf(file, ", ");
			}
			fprintf(file, "\n");
		}

		fprintf(file, "};\n\n");
		fclose(file);
	}

	static inline void DumpByteArrayToFile(const char* filename, const char* arrayName, uint8_t* data, int size) {
		FILE* file;
		fopen_s(&file, filename, "a");
		if (!file) return;

		fprintf(file, "static const u8 %s[256] =\n{\n", arrayName);

		for (int i = 0; i < size; i += 8) {
			fprintf(file, "  ");
			for (int j = 0; j < 8 && (i + j) < size; j++) {
				fprintf(file, "0x%02XU", data[i + j]);
				if ((i + j) < size - 1) fprintf(file, ", ");
			}
			fprintf(file, "\n");
		}

		fprintf(file, "};\n\n");
		fclose(file);
	}

	static inline void Init()
	{
		//15.7 8B 14 88 81 E2 ? ? ? ? 44 33 D2 44 33 D5 41 33 FA
		uint32_t Te4Offset = 0x1049E360;
		uint32_t Te4[256];

		for (int i = 0; i < 256; ++i)
		{
			Te4[i] = mem.Read<uint32_t>(GameData.Global.Base + Te4Offset + (i * 4));
		}

		//15.7 45 33 84 8A ? ? ? ? 41 0F B6 8C 82 ? ? ? ? 45 33 84 8A
		uint32_t Td0Offset = 0x1049E760;
		uint32_t Td0[256];

		for (int i = 0; i < 256; ++i)
		{
			Td0[i] = mem.Read<uint32_t>(GameData.Global.Base + Td0Offset + (i * 4));
			//printf("Td0[%d]: 0x%llX\n", i, Td0[i]);
		}

		//15.7 45 33 84 8A ? ? ? ? 44 89 43
		uint32_t Td1Offset = 0x1049EB60;
		uint32_t Td1[256];

		for (int i = 0; i < 256; ++i)
		{
			Td1[i] = mem.Read<uint32_t>(GameData.Global.Base + Td1Offset + (i * 4));
			//printf("Td1[%d]: 0x%llX\n", i, Td1[i]);
		}

		//15.7 41 33 94 8A ? ? ? ? 89 53
		uint32_t Td2Offset = 0x1049EF60;
		uint32_t Td2[256];

		for (int i = 0; i < 256; ++i)
		{
			Td2[i] = mem.Read<uint32_t>(GameData.Global.Base + Td2Offset + (i * 4));
			//printf("Td2[%d]: 0x%llX\n", i, Td2[i]);
		}

		//15.7 41 8B 94 8A ? ? ? ? 41 0F B6 84 82 ? ? ? ? 41 33 94 82 ? ? ? ? 41 8B C0 C1 E8 ? 0F B6 C8 41 C1 E8 ? 41 0F B6 84 8A ? ? ? ? 41 33 94 82 ? ? ? ? 41 0F B6 C0 41 0F B6 8C 82
		uint32_t Td3Offset = 0x1049F360;
		uint32_t Td3[256];

		for (int i = 0; i < 256; ++i)
		{
			Td3[i] = mem.Read<uint32_t>(GameData.Global.Base + Td3Offset + (i * 4));
			//printf("Td3[%d]: 0x%llX\n", i, Td3[i]);
		}

		//15.7 41 0F B6 84 85 ? ? ? ? 33 D0 41 33 16 8B C2 41 88 57 ? C1 E8 ? 41 88 07 8B C2 C1 E8 ? 41 88 47 ? 8B C2 C1 E8 ? 41 88 47 ? 8B C5
		uint32_t inv_s_boxOffset = 0x1049F760;
		uint8_t inv_s_box[256];

		for (int i = 0; i < 256; ++i)
		{
			inv_s_box[i] = mem.Read<uint8_t>(GameData.Global.Base + inv_s_boxOffset + (i * 4));
			//printf("inv_s_box[%d]: 0x%llX\n", i, inv_s_box[i]);
		}

		const char* filename = "aes_crypto_tables.h";
		FILE* file;
		fopen_s(&file, filename, "w");
		if (file) {
			fprintf(file, "#pragma once\n\ntypedef unsigned long u32;\ntypedef unsigned char u8;\n\n");
			fclose(file);
		}

		DumpRTFormat(filename, Td0, 256);

		// 导出各个数组
		DumpArrayToFile(filename, "Te4", Te4, 256);
		DumpArrayToFile(filename, "Td0", Td0, 256);
		DumpArrayToFile(filename, "Td1", Td1, 256);
		DumpArrayToFile(filename, "Td2", Td2, 256);
		DumpArrayToFile(filename, "Td3", Td3, 256);
		DumpByteArrayToFile(filename, "inv_s_box", inv_s_box, 256);
	}
}