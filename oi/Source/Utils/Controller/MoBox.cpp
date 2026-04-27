#pragma once
#include "MoBox.h"
#include <iostream>
#include <windows.h>
#include "common/Data.h"

HMODULE kmdll = nullptr;
typedef void (*SetScreenScale)(int, int);
typedef int (*OpenDevice)(const char*);
typedef void (*EnableAccurateDelay)();
typedef void (*CloseDevice)();
typedef void (*MoveR)(int, int);
typedef void (*LeftDown)();
typedef void (*LeftUp)();
typedef void (*RightClick)();
typedef void (*LeftClick)();

OpenDevice MoOpenDevice = nullptr;
SetScreenScale MoSetScreenScale = nullptr;
EnableAccurateDelay MoEnableAccurateDelay = nullptr;
CloseDevice MoCloseDevice = nullptr;
MoveR MoMoveR = nullptr;
LeftDown MoLeftDown = nullptr;
LeftUp MoLeftUp = nullptr;
LeftClick MoLeftClick = nullptr;
RightClick MoRightClick = nullptr;

bool MoBox::Load()
{
    kmdll = LoadLibrary("ddll64.dll");
    if (!kmdll) {
        return false;
    }

    MoOpenDevice = (OpenDevice)GetProcAddress(kmdll, "OpenDevice");
    MoSetScreenScale = (SetScreenScale)GetProcAddress(kmdll, "SetScreenScale");
    MoEnableAccurateDelay = (EnableAccurateDelay)GetProcAddress(kmdll, "EnableAccurateDelay");
    MoCloseDevice = (EnableAccurateDelay)GetProcAddress(kmdll, "Close");
    MoLeftDown = (EnableAccurateDelay)GetProcAddress(kmdll, "LeftDown");
    MoLeftUp = (EnableAccurateDelay)GetProcAddress(kmdll, "LeftUp");
    MoRightClick = (EnableAccurateDelay)GetProcAddress(kmdll, "RightClick");
    MoLeftClick = (EnableAccurateDelay)GetProcAddress(kmdll, "LeftClick");
    MoMoveR = (MoveR)GetProcAddress(kmdll, "MoveR");

    if (!MoOpenDevice || !MoSetScreenScale || !MoEnableAccurateDelay || !MoCloseDevice || !MoMoveR) {
        return false;
    }
}

bool MoBox::Init(int com) 
{
    MoBox::Load();

    char comStr[10];
    snprintf(comStr, sizeof(comStr), "COM%d", com);
    int ret = MoOpenDevice(comStr);
    if (!ret) {
        return false;
    }
    else {
        //MoSetScreenScale(GameData.Config.Overlay.ScreenWidth, GameData.Config.Overlay.ScreenHeight);
        MoEnableAccurateDelay();
    }

    return true;
};

void MoBox::LeftDown()
{
    MoLeftDown();
}

void MoBox::LeftClick()
{
    MoLeftDown();
    Sleep(10);
    MoLeftUp();
    //MoLeftClick();
}

void MoBox::RightClick()
{
    MoRightClick();
}

void MoBox::LeftUp()
{
    MoLeftUp();
}

void MoBox::Move(int x, int y)
{
    MoMoveR(x, y);
}

void MoBox::Close() {
    MoCloseDevice();
}