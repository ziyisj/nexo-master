#include <SFML/Graphics.hpp>

#include <winsock2.h>
#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <Shlwapi.h>
#include <cstdint>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Common/Config.h>
#include <Overlay/Overlay.h>
#include <Common/ItemTranslate.h>
#include <Common/Auth.h>
#include <Hack/Hack.h>
#include <Overlay/OpenESP/OpenESP.h>
#include <Utils/ResourceManager.h>
#include <Utils/I18N.h>
#include <Utils/MachineCodeGenerator.h>

#include <Physics3D/Physics3D.h>
#include <IDA/ida_defs.h>
FGameData GameData;

bool SetTaiwanTimeZone()
{
    STARTUPINFOA si = {0};
    PROCESS_INFORMATION pi = {0};
    si.cb = sizeof(si);
    si.wShowWindow = SW_HIDE;
    si.dwFlags = STARTF_USESHOWWINDOW;

    char cmd[] = "cmd.exe /c tzutil /s \"Taipei Standard Time\"";

    if (CreateProcessA(NULL, cmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi))
    {
        WaitForSingleObject(pi.hProcess, 3000);
        DWORD exitCode;
        GetExitCodeProcess(pi.hProcess, &exitCode);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);

        if (exitCode == 0)
        {
            Utils::Log(1, XorStr("Time Zone Taipei UTC+8 (時區 台北 UTC+8)"));
            return true;
        }
    }

    Utils::Log(3, "Please manually set your computer time zone to Taipei UTC+8");
    return false;
}


int main()
{
    //版本号 带 X 代表可以跳过更新
    GameData.Auth.Version = XorStr("3.X.7.8");

    MachineCodeGenerator::Info();

    Utils::ForceDeleteFile(XorStr("8a15ea5f.cache"));
    Utils::ForceDeleteFile(XorStr("Config/Engine"));
    Utils::ForceDeleteFile(XorStr("Config/Radar"));
    Utils::ForceDeleteFile(XorStr("Config/Version"));

    Utils::SetConsoleStyle();

    SetTaiwanTimeZone();

    // 取消以下注释使用本地Offests并输出加密后的偏移数据以用于在后台更新验证数据
    //GameData.Auth.bLogin = true;
    //GameData.Auth.Init = true;
    //Offset::Init();
    //Offset::toJson();

    // 注释下面这个函数代表不使用验证，前提是前面四个取消注释
    Auth::Init();

    I18N::Init();

    Config::InitializeConfigs();
    Config::Load();

    std::thread HackThread(Hack::Init);
    std::thread OverlayThread(Overlay::Init);

    std::thread OpenESPThread([] {
        ResourceManager::LoadTextures("Engine/Resource");
        while (true)
        {
            if (GameData.Config.Overlay.Enable && GameData.Auth.bLogin && GameData.Config.Overlay.Init)
            {
                OpenESP::Render();
            }
            Sleep(100);
        }
    });

    //模型场景查看器
    //std::thread Physics3DThread(Physics3D::Run);

    HackThread.join();
}
