#pragma once
#include <string>
#include <unordered_map>
#include "Utils.h"
#include <Common/Data.h>

class I18N
{
public:
	static std::unordered_map<Language, std::unordered_map<std::string, std::string>> LanguageMap;

	static void SetCurrentLanguage(Language lang);

	static std::string s2t(const std::string& input);

	static std::wstring ws2t(const std::wstring& input);

	static std::string T(const std::string& key, bool NoChineseTraditional = false);

	static void Init();
};