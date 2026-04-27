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

//class XorDecoder {
//private:
//    PVOID Content;
//    typedef uint64_t(__fastcall* XFunc)(int Key);
//    XFunc Func;
//
//public:
//    XorDecoder() {
//        Content = VirtualAlloc(0, 64, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
//        *(BYTE*)Content = 0xC3; // ret
//        Func = (XFunc)Content;
//    }
//
//    ~XorDecoder() {
//        if (Content) {
//            VirtualFree(Content, 0, MEM_RELEASE);
//            Content = nullptr;
//        }
//    }
//
//    uint64_t Process(uintptr_t FuncAddress, uintptr_t Address, int Key) {
//        mem.Read(FuncAddress, Content, 64);
//        return Address ^ Func(Key);
//    }
//};

enum class FDynamicDecryptType
{
    GameState,
    OwningGameInstance,
    PlayerCameraManager,
    RootComponent
};

class XorDecoder {
private:
    PVOID Content;
    typedef uint64_t(__fastcall* XFunc)(int Key);
    XFunc Func;
    std::shared_mutex rwMutex;

public:
    // 恢复构造函数
    XorDecoder() {
        Content = VirtualAlloc(0, 64, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
        *(BYTE*)Content = 0xC3; // ret
        Func = (XFunc)Content;
    }

    ~XorDecoder() {
        if (Content) {
            VirtualFree(Content, 0, MEM_RELEASE);
            Content = nullptr;
        }
    }

    // 处理函数，不再需要每次读取
    uint64_t Process(uintptr_t Address, int Key) {
        std::shared_lock<std::shared_mutex> lock(rwMutex);
        return Address ^ Func(Key);
    }

    // 更新函数内容
    void UpdateFunction(uintptr_t FuncAddress) {
        std::unique_lock<std::shared_mutex> lock(rwMutex);
        if (Content) {
            mem.Read(FuncAddress, Content, 64);
        }
    }
};

class DynamicDecrypt
{
public:
    static uint64_t Indicator(const FDynamicDecryptType& Type, const uint64_t &Address, const uint64_t& Key);
};