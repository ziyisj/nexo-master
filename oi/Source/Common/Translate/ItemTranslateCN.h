#pragma once

#include <unordered_map>
#include <string>
#include <set>
#include <windows.h>

std::unordered_map<uint64_t, std::string>& GetItemTranslateCN();
std::unordered_map<uint64_t, std::string>& GetItemTranslateShortNameCN();