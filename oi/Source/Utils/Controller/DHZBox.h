#pragma once

#include <windows.h>
#include <iostream>
#include <string>

class DHZBox {
public:
    static bool Init(const std::string& Ip, int Port);
    static void Move(int x, int y);
    static void LeftClick();
    static void LeftDown();
    static void LeftUp();
    static std::string EncryptString(const std::string& InputString);
    static void Close();
};