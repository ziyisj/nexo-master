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
#include <Hack/Decrypt.h>
#include <Utils/FLoop.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <Utils/Timer.h>

class Actor
{
public:
	static void Loop();

	static void LoopThrows();

	static void LoopCodedLocks();

	static void DebugLoop();
};