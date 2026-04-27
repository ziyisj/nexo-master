#pragma once

#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <chrono>
#include <ctime>
#include <random>
#include <sstream>
#include <iomanip>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include "Crypto.h"
#include <ThemidaSDK/ThemidaSDK.h>

namespace API
{
	inline std::string SeverHost = XorStr("https://hebrew-wilder-kaos.nexodma.vip/scale-vasco-hetty");
	//inline std::string SeverHost = XorStr("http://127.0.0.1:8080/scale-vasco-hetty");
	inline std::string DefaultAESKey = XorStr("i~h%Yr@z%#>.,#Ux+1@Pyaq6P}AVEERD");
	inline std::string DefaultSignSecret = XorStr("%@VRtGq+>rH}Z)N#3z");
	inline int DefaultTimeOffset = 300;

	inline std::string GenerateNonce() {
		return Crypto::GenerateNonce();
	}

	inline int GetTimestamp() {
		return static_cast<int>(Crypto::GetTimestamp());
	}

	inline nlohmann::json Request(const std::string& method, const std::string& api, const nlohmann::json& data, const int& timeout = 10000)
	{
		//VM_TIGER_WHITE_START
		try
		{
			//VM_TIGER_WHITE_START

			nlohmann::json RequestData;
			RequestData[(XorStr("method"))] = method;
			RequestData[(XorStr("api"))] = api;
			RequestData[(XorStr("data"))] = data;
			RequestData[(XorStr("time"))] = GetTimestamp();
			RequestData[(XorStr("nonce"))] = GenerateNonce();
			RequestData[(XorStr("sign"))] = "";

			std::string sign = Crypto::GenerateSign(RequestData);
			RequestData[(XorStr("sign"))] = sign;

			std::string jsonRequest = RequestData.dump();
			std::string encryptedData = Crypto::EncryptRequest(jsonRequest);

			cpr::Response response = cpr::Post(
				cpr::Url{ SeverHost },
				cpr::Header{ {XorStr("Content-Type"), XorStr("application/octet-stream")} },
				cpr::Body{ encryptedData },
				cpr::Timeout{ timeout }
			);

			if (response.status_code != 200) {
				return {};
			}

			std::string decryptedResponse = Crypto::DecryptRequest(response.text);
			nlohmann::json result = nlohmann::json::parse(decryptedResponse);

			//VM_TIGER_WHITE_END

			return result;
		}
		catch (const std::exception&)
		{
			return {};
		}
		//VM_TIGER_WHITE_END
	}
}