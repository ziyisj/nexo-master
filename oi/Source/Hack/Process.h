#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <regex>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Common/ItemTranslate.h>
#include <Hack/GName.h>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include <Utils/Throttler.h>
#include <DMALibrary/Memory/Memory.h>

class Process
{
public:
	static UINT32 GetGameProcess1();

	static UINT32 GetGameProcess();

	static void Loop();
};