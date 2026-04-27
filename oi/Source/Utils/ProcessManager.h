#pragma once
#include <Windows.h>
#include <TlHelp32.h>
#include <string>

class ProcessManager {
public:
    // 检查进程是否在运行
    static bool IsProcessRunning(const std::wstring& processName) {
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snapshot == INVALID_HANDLE_VALUE) {
            return false;
        }

        PROCESSENTRY32W processEntry = { sizeof(processEntry) };
        bool processFound = false;

        if (Process32FirstW(snapshot, &processEntry)) {
            do {
                if (_wcsicmp(processEntry.szExeFile, processName.c_str()) == 0) {
                    processFound = true;
                    break;
                }
            } while (Process32NextW(snapshot, &processEntry));
        }

        CloseHandle(snapshot);
        return processFound;
    }

    // 结束指定进程
    static bool KillProcess(const std::wstring& processName) {
        HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snapshot == INVALID_HANDLE_VALUE) {
            return false;
        }

        PROCESSENTRY32W processEntry = { sizeof(processEntry) };
        bool killed = false;

        if (Process32FirstW(snapshot, &processEntry)) {
            do {
                if (_wcsicmp(processEntry.szExeFile, processName.c_str()) == 0) {
                    HANDLE processHandle = OpenProcess(PROCESS_TERMINATE, FALSE, processEntry.th32ProcessID);
                    if (processHandle != NULL) {
                        if (TerminateProcess(processHandle, 0)) {
                            killed = true;
                        }
                        CloseHandle(processHandle);
                    }
                }
            } while (Process32NextW(snapshot, &processEntry));
        }

        CloseHandle(snapshot);
        return killed;
    }

    // 运行程序
    static bool RunProcess(const std::wstring& exePath) {
        STARTUPINFOW si = { sizeof(si) };
        PROCESS_INFORMATION pi;

        // 创建进程
        if (CreateProcessW(
            exePath.c_str(),     // 可执行文件路径
            NULL,                // 命令行参数
            NULL,                // 进程安全属性
            NULL,                // 线程安全属性
            FALSE,              // 是否继承句柄
            0,                  // 创建标志
            NULL,               // 环境变量
            NULL,               // 当前目录
            &si,                // 启动信息
            &pi                 // 进程信息
        )) {
            CloseHandle(pi.hProcess);
            CloseHandle(pi.hThread);
            return true;
        }
        return false;
    }

    // 检查并运行程序
    static bool CheckAndRunProcess(const std::wstring& exePath) {
        // 获取程序名
        size_t pos = exePath.find_last_of(L"\\/");
        std::wstring processName = (pos != std::wstring::npos) ? exePath.substr(pos + 1) : exePath;

        // 如果进程正在运行，先结束它
        if (IsProcessRunning(processName)) {
            if (!KillProcess(processName)) {
                return false; // 结束进程失败
            }
            // 等待进程完全结束
            Sleep(1000);
        }

        // 运行新进程
        return RunProcess(exePath);
    }

    static bool WriteToFile(const std::wstring& filePath, const std::string& content) {
        try {
            // 以写入模式打开文件（如果不存在则创建，如果存在则覆盖）
            std::ofstream file(filePath, std::ios::out | std::ios::trunc);
            if (!file.is_open()) {
                return false;
            }

            // 写入内容
            file << content;

            // 关闭文件
            file.close();
            return true;
        }
        catch (...) {
            return false;
        }
    }
};