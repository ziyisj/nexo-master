#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Common/Bone.h>
#include <Common/ItemMap.h>
#include <Utils/XorString.h>
#include <Hack/Process.h>
#include <Hack/GName.h>
#include <Hack/PhysXMirror.h>
#include <Utils/FLoop.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <DMALibrary/Memory/Memory.h>
#include <thread>
#include <chrono>

class Player
{
public:
	static void Loop();
	static void Info();
};
