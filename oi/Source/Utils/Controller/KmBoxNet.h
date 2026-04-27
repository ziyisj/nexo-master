#pragma once

#include <Utils/Controller/NetConfig/kmboxNet.h>
#include <Utils/Controller/NetConfig/HidTable.h>
#include <iostream>

class KmBoxNet
{
public:
    static bool Init(char* IP, char* Port, char* UUID)
    {
        //连接前 PING 一下
        std::string pingCommand = "ping ";
        pingCommand += IP;
        pingCommand += " >nul";
        system(pingCommand.c_str());

        kmNet_init((char*)IP, (char*)Port, (char*)UUID);
        return true;
    }

    static void Clear()
    {
        static ULONGLONG lastExecutionTime = 0;
        ULONGLONG currentTime = GetTickCount64();

        if (currentTime - lastExecutionTime < 60000) {
            return;
        }

        lastExecutionTime = currentTime;

        Sleep(4);
        std::thread([]() {
            std::string pingCommand = "ping ";
            pingCommand += GameData.Config.AimBot.IP;
            pingCommand += " >nul";
            system(pingCommand.c_str());
            //Utils::Log(1, "KMBOXNET Clear Success");
        }).detach();
        //Sleep(4);
    }

    static void Close()
    {
        kmNet_reboot();
        //Sleep(5000);
    }

    static void LeftClick()
    {
        kmNet_mouse_left(1);
        Sleep(10);
        kmNet_mouse_left(0);
    }

    static void LeftDown()
    {
        kmNet_mouse_left(1);
    }

    static void LeftUp()
    {
        kmNet_mouse_left(0);
    }

    static void Move(int X, int Y)
    {
        kmNet_mouse_move(X, Y);
    }
};