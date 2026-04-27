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
#include <Utils/FLoop.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <Utils/ThreadManager.h>
#include <Utils/HighResolutionTimer.h>
#include <Utils/Controller/NewKmBox.h>
#include <Utils/Controller/MoBox.h>
#include <Utils/Controller/DHZBox.h>
#include <Utils/Controller/KmBoxNet.h>
#include <Utils/Controller/CatBox/CatBox.h>

// 后坐力计算结果的结构体
struct FRecoilResult
{
    float Horizontal;    // 水平后坐力
    float Vertical;      // 垂直后坐力
};

class Recoil
{
public:
	static void Loop();
};