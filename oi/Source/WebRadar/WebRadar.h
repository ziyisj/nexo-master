#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <Common/Data.h>
#include <Utils/XorString.h>
#include <Utils/Utils.h>
#include "WebSocketClient.h"
//E:\vcpkg\installed\x64-windows-static\tools\protobuf\protoc.exe --cpp_out=. .\WebRadar.proto

class WebRadar
{
public:
    static void Loop();
    static bool SeedPlayers(WebSocketClient& clinet);
    static bool SeedPlayersUpdate(WebSocketClient& clinet);
    static bool SeedItems(WebSocketClient& clinet);
};