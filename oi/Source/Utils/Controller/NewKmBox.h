#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

#include <Utils/Utils.h>
#include <Common/Data.h>

namespace NewKmBox
{
    static std::mutex SerialMutex;

    static inline bool OpenSerialPort(HANDLE& hSerial, const char* portName, DWORD baudRate)
    {
        char formattedPortName[20];
        if (strncmp(portName, "\\\\.\\", 4) != 0 && strlen(portName) >= 4)
        {
            // 检查是否是COM10及以上的端口
            if (strncmp(portName, "COM", 3) == 0 && strlen(portName) > 4)
            {
                sprintf(formattedPortName, "\\\\.\\%s", portName);
            }
            else
            {
                strcpy(formattedPortName, portName);
            }
        }
        else
        {
            strcpy(formattedPortName, portName);
        }

        hSerial = CreateFileA(formattedPortName, GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);

        if (hSerial == INVALID_HANDLE_VALUE)
        {
            Utils::Log(2, U8("B+ INVALID_HANDLE_VALUE Error"));
            return false;
        }

        DCB dcbSerialParams = {0};
        dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

        if (!GetCommState(hSerial, &dcbSerialParams))
        {
            CloseHandle(hSerial);
            Utils::Log(2, U8("B+ GetCommState Error"));
            return false;
        }

        dcbSerialParams.BaudRate = baudRate;
        dcbSerialParams.ByteSize = 8;
        dcbSerialParams.StopBits = ONESTOPBIT;
        dcbSerialParams.Parity = NOPARITY;

        if (!SetCommState(hSerial, &dcbSerialParams))
        {
            CloseHandle(hSerial);
            Utils::Log(2, U8("B+ SetCommState Error"));
            return false;
        }

        COMMTIMEOUTS timeouts = {0};
        timeouts.ReadIntervalTimeout = 5;
        timeouts.ReadTotalTimeoutConstant = 5;
        timeouts.ReadTotalTimeoutMultiplier = 5;
        timeouts.WriteTotalTimeoutConstant = 5;
        timeouts.WriteTotalTimeoutMultiplier = 5;

        if (!SetCommTimeouts(hSerial, &timeouts))
        {
            Utils::Log(2, U8("B+ SetCommTimeouts Error"));
            CloseHandle(hSerial);
            return false;
        }

        return true;
    }

    static void SendCommand(HANDLE hSerial, const std::string& command)
    {
        std::lock_guard<std::mutex> lock(SerialMutex);

        DWORD bytesWritten;
        if (!WriteFile(hSerial, command.c_str(), command.length(), &bytesWritten, NULL))
        {
            // Utils::Log(2, U8("B+ Send Error"));
        }
    }

    static void SendCommand(HANDLE hSerial, const char* command)
    {
        std::lock_guard<std::mutex> lock(SerialMutex);

        DWORD bytesWritten;
        if (!WriteFile(hSerial, command, 1, &bytesWritten, NULL))
        {
            // Utils::Log(2, U8("B+ Send Error"));
        }
    }

    static inline void Close()
    {
        char ctrlC = 0x03;
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, &ctrlC);
        Sleep(100);

        PurgeComm(GameData.Config.AimBot.hKmBoxSerial, PURGE_TXABORT | PURGE_RXABORT | PURGE_TXCLEAR | PURGE_RXCLEAR);

        CloseHandle(GameData.Config.AimBot.hKmBoxSerial);
        GameData.Config.AimBot.hKmBoxSerial = INVALID_HANDLE_VALUE;
        Sleep(100);
    }

    static inline bool Init(int com)
    {
        if (!OpenSerialPort(GameData.Config.AimBot.hKmBoxSerial, std::format("COM{}", com).c_str(), std::stoi(GameData.Config.AimBot.BaudRate)))
        {
            Utils::Log(2, "B+ Init Error %d", com);
            return false;
        }

        char ctrlC = 0x03;

        SendCommand(GameData.Config.AimBot.hKmBoxSerial, &ctrlC);
        Sleep(100);

        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.freq({})\r\n", GameData.Config.AimBot.Freq));
        Sleep(100);

        // Utils::Log(1, "B+ Init Successful");

        return true;
    }

    static inline void Move(int x, int y)
    {
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.move({},{})\r\n", x, y));
    }

    static inline void LeftClick()
    {
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.left({})\r\n", 1));
        Sleep(10);
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.left({})\r\n", 0));
    }

    static inline void LeftDown()
    {
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.left({})\r\n", 1));
    }

    static inline void LeftUp()
    {
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, std::format("km.left({})\r\n", 0));
    }

    static inline void Clear()
    {
        Sleep(4);
        char ctrlC = 0x03;
        SendCommand(GameData.Config.AimBot.hKmBoxSerial, &ctrlC);
        Sleep(4);
    }
} // namespace NewKmBox