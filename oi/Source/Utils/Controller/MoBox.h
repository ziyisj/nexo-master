#pragma once
#include <iostream>
#include <windows.h>

class MoBox
{
public:

    static bool Init(int com);
    static bool Load();
    static void Move(int x, int y);
    static void Close();
    static void LeftDown();
    static void LeftUp();
    static void LeftClick();
    static void RightClick();
};