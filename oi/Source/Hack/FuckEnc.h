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

class FuckEnc
{
public:
    //template <typename T>
    //static T CacheRead(uint64_t address)
    //{
    //    uint64_t threadId = GetCurrentThreadId();
    //    uint64_t Key = address ^ (threadId << 16) ^ 0x8128;

    //    if (!GameData.Config.Window.NoEncCache)
    //    {
    //        std::shared_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
    //        auto it = GameData.FuckEnc.Cache.find(Key);
    //        if (it != GameData.FuckEnc.Cache.end())
    //        {
    //            auto& variant = it->second;
    //            if (std::holds_alternative<T>(variant))
    //            {
    //                return std::get<T>(variant);
    //            }
    //        }
    //    }

    //    T result = mem.Read<T>(address);

    //    {
    //        std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);

    //        auto it = GameData.FuckEnc.Cache.find(Key);
    //        if (it != GameData.FuckEnc.Cache.end())
    //        {
    //            auto& variant = it->second;
    //            if (std::holds_alternative<T>(variant))
    //            {
    //                return std::get<T>(variant);
    //            }
    //        }

    //        GameData.FuckEnc.Cache[Key] = result;
    //    }

    //    return result;
    //}

    template <typename T>
    static T CacheRead(uint64_t address)
    {
        if (!GameData.Config.Window.NoEncCache)
        {
            std::shared_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
            auto it = GameData.FuckEnc.Cache.find(address);
            if (it != GameData.FuckEnc.Cache.end())
            {
                auto& variant = it->second;
                if (std::holds_alternative<T>(variant))
                {
                    return std::get<T>(variant);
                }
            }
        }

        std::unique_lock<std::shared_mutex> lock(GameData.FuckEnc.CacheMutex);
        T result = mem.Read<T>(address);
        if (result != 0)
        {
            GameData.FuckEnc.Cache[address] = result;
        }
        return result;
    }

    template <typename T>
    static T CacheReadPlural(uint64_t address)
    {
        return FuckEnc::CacheRead<T>(FuckEnc::CacheRead<T>(address));
    };

    static void FastCall(uint64_t func, int* a1, uint8_t base = 1);
    static void Decrypt(unsigned int* a2, unsigned int a3, __int16 a4, uint8_t base = 1);
};