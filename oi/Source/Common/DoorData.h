#pragma once

#include <windows.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <Utils/XorString.h>
#include <Utils/ue4math/rotator.h>
#include <Utils/ue4math/transform.h>

struct DoorData
{

};

inline std::unordered_map<std::string, std::vector<DoorData>> DoorDatas = {
	{
		XorStr("Dam_Iris"),
		{

		}
	}
};

