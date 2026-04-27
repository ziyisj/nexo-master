#pragma once

#include <winsock2.h>
#include <windows.h>
#include <DMALibrary/Memory/Memory.h>
#include <Common/Data.h>
#include <Hack/GName.h>
#include <Hack/PhysXMirror.h>

class KeyState
{
public:
	static void Init();
	static void Update();
};
