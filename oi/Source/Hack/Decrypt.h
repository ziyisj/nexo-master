#pragma once

#include <winsock2.h>
#include <windows.h>
#include <unordered_map>
#include <string>
#include <iostream>
#include <stdint.h>
#include <stdio.h>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include <Utils/Timer.h>
#include <Common/Offset.h>
#include <DMALibrary/Memory/Memory.h>
#include <Common/Data.h>
#include <Hack/GName.h>

class Decrypt
{
public:
    static uint64_t ReadFileKey();
    static bool SaveFileKey(uint64_t newKey);

    static uint64_t Indicator(uint64_t Address, uint64_t Key);

    static bool CheckValue(uint64_t value);

    static bool Verify(uint64_t PlayerArray, uint64_t CacheKey);

    static void Init();
};