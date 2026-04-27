#pragma once

#define WIN32_LEAN_AND_MEAN  // 防止 windows.h 包含 winsock.h
#include <windows.h>
#include <WinSock2.h>   // 使用新版本的 WinSock2.h
#include <ws2tcpip.h>   // 如果需要更多的网络功能
#include <iostream>

#include "cat_net.h"

class CatBox
{
public:
    static CatNet hCatNet;
    static bool Init(char* IP, char* Port, char* UUID);
    static void Move(int x, int y);
    static void Close();
    static void LeftDown();
    static void LeftUp();
    static void LeftClick();
};