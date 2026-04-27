#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Utils/XorString.h>

#include <Hack/Process.h>
#include <Hack/GName.h>
#include <Hack/Actor.h>
#include <Hack/Player.h>
#include <Hack/PhysXMirror.h>
#include <Hack/KeyState.h>
#include <Hack/Container.h>
#include <Hack/Item.h>
#include <Hack/DeadBody.h>
#include <Hack/AimBot.h>
#include <Hack/Radar.h>

#include <WebRadar/WebRadar.h>

#include <Hack/Decrypt.h>

#include <Utils/Controller/NewKmBox.h>
#include <Utils/Controller/MoBox.h>
#include <Utils/Controller/DHZBox.h>
#include <Utils/Controller/KmBoxNet.h>

class Hack
{
public:
    static void Loop();

    static void DecryptLoop();

    static uint32_t GetDecryptCameraOffset();

    static void UpdateCamera();

    static void InitDMA();

    static void Init();
};