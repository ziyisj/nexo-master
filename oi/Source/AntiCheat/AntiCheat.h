#pragma once

#include <Windows.h>
#include <iostream>
#include <ctype.h>
#include <string>
#include <vector>
#include <format>
#include <fstream>
#include <io.h>
#include <process.h>
#include <tlhelp32.h>
#include <shlobj.h>
#include <Utils/XorString.h>

inline int DriveCount = 0;
inline std::string BanLists = "";
typedef BOOL(WINAPI* EnumerateFunc) (LPCSTR lpFileOrPath, void* pUserData);

class AntiCheat
{
public:
    static void doFileEnumeration(LPCSTR lpPath, BOOL bRecursion, BOOL bEnumFiles, EnumerateFunc pFunc, void* pUserData);
    static BOOL WINAPI myEnumerateFunc(LPCSTR lpFileOrPath, void* pUserData);
    static unsigned _stdcall ThreadProc(void* param);
    static std::string GetUserDocumentsFolderPath();
    static bool DirectoryExists(const std::string& dirPath);
    static std::string ScanDirectories(const std::string& directoryPath);
    static std::string Run();
};