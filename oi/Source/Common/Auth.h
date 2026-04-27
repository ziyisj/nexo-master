#pragma once

#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <iostream>
#include <chrono>
#include <ctime>
#include <random>
#include <sstream>
#include <iomanip>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include <Common/Data.h>
#include <Common/API.h>
#include <Common/Base64.h>
#include <Common/Encrypt.h>
#include <Utils/Download.h>
#include <Utils/MachineCodeGenerator.h>
#include <AntiCheat/AntiCheat.h>
#include <AntiCheat/ScreenCapture.h>
#include <Utils/ExtractZipFile.h>

class Auth
{
public:
	static void ReRun();

	static int TimeOut();

	static void AntiCheatV1();

	static void DownloadFonts();

	static void CheckDllMd5();

	static void Init();
};