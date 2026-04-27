#pragma once
#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
#include <codecvt>

#include <windows.h>
#include <iostream>
#include <string>
#include <ShlObj.h>
#include <ctime>
#include <sstream>
#include <regex>
#include <fstream>
#include <iomanip>
#include <setupapi.h>
#include <initguid.h>
#include <devguid.h>
#include <imgui/imgui.h>
#include <zlib.h>
#include <random>
#include <chrono>
#include <filesystem>

#define U8(_S)    (const char*)u8##_S
//#define COLOR_RED     "\033[31m"
//#define COLOR_GREEN   "\033[32m"
//#define COLOR_RESET   "\033[0m"
//#define COLOR_WHITE   "\033[37m"
//#define COLOR_LRED    "\033[91m"
//#define COLOR_LGREEN  "\033[92m"
//#define COLOR_LYELLOW "\033[93m"
//#define COLOR_LBLUE   "\033[36m"
//#define COLOR_DGRAY   "\033[90m"

#define COLOR_RESET   "\033[0m"
#define BG_DARK      "\033[48;2;30;30;30m"      // 深色背景
#define BG_INFO      "\033[48;2;220;220;220m"   // 淡白色
#define BG_SUCCESS   "\033[48;2;66;165;245m"    // 亮蓝色
#define BG_ERROR     "\033[48;2;255;85;85m"     // 亮红色
#define BG_WARNING   "\033[48;2;255;213;79m"    // 明黄色
#define BG_DEBUG     "\033[48;2;149;128;255m"   // 紫色

#define COLOR_DARK   "\033[38;2;10;10;10m"
#define COLOR_LIGHT  "\033[38;2;220;220;220m"   // 淡白色文字
#define COLOR_DGRAY  "\033[38;2;140;140;140m"   // 柔和的灰色文字
#define COLOR_INFO   "\033[38;2;220;220;220m"   // 淡白色文字
#define COLOR_SUCCESS "\033[38;2;66;165;245m"   // 亮蓝色文字
#define COLOR_ERROR  "\033[38;2;255;85;85m"     // 亮红色文字
#define COLOR_WARNING "\033[38;2;255;213;79m"   // 明黄色文字
#define COLOR_DEBUG  "\033[38;2;149;128;255m"   // 紫色文字

namespace Utils
{
    inline float HexToFloat(uint32_t hex)
    {
        float result;
        memcpy(&result, &hex, sizeof(float));
        return result;
    }

    inline uint32_t FloatToHex(float f)
    {
        uint32_t result;
        memcpy(&result, &f, sizeof(float));
        return result;
    }

    inline std::string TruncateUTF8String(const std::string& str, size_t maxLength = 10) {
        if (str.empty() || maxLength == 0) return "";

        size_t length = 0;
        size_t bytePos = 0;

        while (bytePos < str.length()) {
            unsigned char c = str[bytePos];
            if (length >= maxLength) {
                return str.substr(0, bytePos) + "...";
            }

            if ((c & 0x80) == 0) {
                bytePos += 1;
            }
            else if ((c & 0xE0) == 0xC0) {
                bytePos += 2;
            }
            else if ((c & 0xF0) == 0xE0) {
                bytePos += 3;
            }
            else if ((c & 0xF8) == 0xF0) {
                bytePos += 4;
            }

            length++;
        }

        return str;
    }
    inline int ProcessString(const std::string& input) {
        try {
            std::stringstream ss(input);
            std::string token;
            int result = 0;

            while (std::getline(ss, token, ',')) {
                token.erase(remove_if(token.begin(), token.end(), isspace), token.end());
                if (!token.empty()) {
                    result = result * 10 + (std::stoi(token) + 1);
                }
            }

            return result;
        }
        catch (...) {
            return 0;  // 任何错误情况都返回0
        }
    }

    inline std::string GenerateRandomString(int Length) {
        const std::string Characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

        std::random_device Rd;
        std::mt19937 Gen(Rd());
        std::uniform_int_distribution<> Dis(0, Characters.size() - 1);

        std::string Result;
        Result.reserve(Length);

        for (int I = 0; I < Length; I++) {
            Result += Characters[Dis(Gen)];
        }

        return Result;
    }

    inline std::string Uint64ToString(uint64_t Key) {
        std::ostringstream Oss;
        Oss << std::hex << std::uppercase << Key;
        return Oss.str();
    }

    // 字符串转uint64_t
    inline uint64_t StringToUint64(const std::string& str, int base = 10) {
        try {
            size_t pos = 0;
            uint64_t result = std::stoull(str, &pos, base);
            if (pos != str.length()) {
                return 0;
            }
            return result;
        }
        catch (const std::exception& e) {
            return 0;
        }
    }

    inline uint64_t XorBytes(uint64_t Key) {
        // 预定义的XOR表
        uint8_t XorTable[8] = { 0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0 };

        uint64_t Result = 0;
        for (int I = 0; I < 8; I++) {
            uint8_t Byte = (Key >> (I * 8)) & 0xFF;
            Result |= ((uint64_t)(Byte ^ XorTable[I]) << (I * 8));
        }
        return Result;
    }

    inline bool FileExists(const std::string& filePath)
    {
        try
        {
            return std::filesystem::exists(filePath);
        }
        catch (const std::filesystem::filesystem_error&)
        {
            return false;
        }
    }

    inline bool ForceDeleteFile(const std::string& filePath)
    {
        try
        {
            // 首先检查文件是否存在
            if (!std::filesystem::exists(filePath))
            {
                return false;
            }

            // 尝试移除文件的只读属性（如果有的话）
            std::filesystem::permissions(
                filePath,
                std::filesystem::perms::owner_write | std::filesystem::perms::group_write,
                std::filesystem::perm_options::add
            );

            // 删除文件
            return std::filesystem::remove(filePath);
        }
        catch (const std::filesystem::filesystem_error&)
        {
            // 如果删除失败，返回false
            return false;
        }
    }

    inline bool NCopyFile(const char* sourcePath, const char* destPath) {
        // 设置文件属性为普通文件（移除只读等属性）
        ::SetFileAttributesA(destPath, FILE_ATTRIBUTE_NORMAL);

        // 直接强制复制，使用Windows API的完整路径
        return ::CopyFileA(
            sourcePath,  // 源文件
            destPath,    // 目标文件
            FALSE       // FALSE = 覆盖已存在的文件
        );
    }

    inline bool RenameFile(const char* oldName, const char* newName) {
        // 直接使用MOVEFILE_REPLACE_EXISTING标志强制覆盖
        return MoveFileExA(
            oldName,                    // 源文件名
            newName,                    // 新文件名
            MOVEFILE_REPLACE_EXISTING   // 如果目标存在则覆盖
        );
    }

    inline bool DeleteFileDelayed(const char* filename) {
        // 首先重命名文件，添加待删除标记
        char tempPath[MAX_PATH];
        strcpy_s(tempPath, filename);
        strcat_s(tempPath, ".del.nexo");

        // 尝试重命名文件
        if (!MoveFileExA(filename, tempPath, MOVEFILE_REPLACE_EXISTING)) {
            return false;
        }

        // 设置在下次系统重启时删除该文件
        return MoveFileExA(tempPath, NULL, MOVEFILE_DELAY_UNTIL_REBOOT);
    }

    // 辅助函数：转义PowerShell字符串中的单引号
    inline std::string EscapePowerShellString(const std::string& str) {
        std::string result = str;
        size_t pos = 0;
        while ((pos = result.find('\'', pos)) != std::string::npos) {
            result.replace(pos, 1, "''");  // PowerShell中单引号通过双写来转义
            pos += 2;
        }
        return result;
    }

    inline void ShowSimpleNotification(const std::string& title, const std::string& message) {
        std::string command = "powershell -Command \"";

        // 使用带转义的PowerShell脚本
        command += "[Windows.UI.Notifications.ToastNotificationManager, Windows.UI.Notifications, ContentType = WindowsRuntime] | Out-Null; ";
        command += "[Windows.UI.Notifications.ToastNotification, Windows.UI.Notifications, ContentType = WindowsRuntime] | Out-Null; ";
        command += "[Windows.Data.Xml.Dom.XmlDocument, Windows.Data.Xml.Dom.XmlDocument, ContentType = WindowsRuntime] | Out-Null; ";

        // 使用ToastText01模板，它只有一个文本元素，更简单可靠
        command += "$template = [Windows.UI.Notifications.ToastTemplateType]::ToastText01; ";
        command += "$xml = [Windows.UI.Notifications.ToastNotificationManager]::GetTemplateContent($template); ";
        command += "$text = $xml.GetElementsByTagName('text'); ";

        // 安全地添加文本，使用引号转义
        command += "$titleEscaped = '" + EscapePowerShellString(title) + "'; ";
        command += "$messageEscaped = '" + EscapePowerShellString(message) + "'; ";
        command += "$combinedText = $titleEscaped + ' - ' + $messageEscaped; ";
        command += "$text.Item(0).AppendChild($xml.CreateTextNode($combinedText)) | Out-Null; ";

        // 创建并显示通知
        command += "$toast = [Windows.UI.Notifications.ToastNotification]::new($xml); ";
        command += "[Windows.UI.Notifications.ToastNotificationManager]::CreateToastNotifier('Microsoft.Windows.Shell.NotificationCenter').Show($toast);\"";

        system(command.c_str());
    }

    inline std::string ReadFileToString(const std::string& filePath, bool& success) {
        try {
            std::ifstream file(filePath, std::ios::binary);
            if (!file.is_open()) {
                success = false;
                return "";
            }

            // 获取文件大小
            file.seekg(0, std::ios::end);
            const size_t fileSize = file.tellg();
            file.seekg(0, std::ios::beg);

            // 如果文件为空
            if (fileSize == 0) {
                success = true;
                return "";
            }

            // 预分配内存
            std::string content;
            content.resize(fileSize);

            // 读取文件
            if (!file.read(content.data(), fileSize)) {
                success = false;
                return "";
            }

            success = true;
            return content;
        }
        catch (const std::exception& e) {
            success = false;
            return "";
        }
    }

    inline void SetConsoleStyle()
    {
        SetConsoleOutputCP(CP_UTF8);

        SetConsoleTitle("Console");

        CONSOLE_FONT_INFOEX cfi;
        cfi.cbSize = sizeof(cfi);
        cfi.nFont = 0;
        cfi.dwFontSize.X = 0;
        cfi.dwFontSize.Y = 14;

        SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

        DWORD dwMode = 0;
        GetConsoleMode(hOut, &dwMode);
        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hOut, dwMode);

        auto hStdin = ::GetStdHandle(STD_INPUT_HANDLE);
        DWORD mode;
        ::GetConsoleMode(hStdin, &mode);
        mode &= ~ENABLE_QUICK_EDIT_MODE;
        ::SetConsoleMode(hStdin, mode);
    }

    inline void MoveMouseRelative(int dx, int dy) {
        INPUT input = { 0 };
        input.type = INPUT_MOUSE;
        input.mi.dwFlags = MOUSEEVENTF_MOVE;
        input.mi.dx = dx;
        input.mi.dy = dy;

        SendInput(1, &input, sizeof(INPUT));
    }

    inline void LeftMouseDown() {
        INPUT input = { 0 };
        input.type = INPUT_MOUSE;
        input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
        SendInput(1, &input, sizeof(INPUT));
    }

    inline void LeftMouseUp() {
        INPUT input = { 0 };
        input.type = INPUT_MOUSE;
        input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
        SendInput(1, &input, sizeof(INPUT));
    }

    inline void LeftMouseClick() {
        LeftMouseDown();
        Sleep(10);
        LeftMouseUp();
    }

    struct DisplayInfo {
        int index;
        int x;
        int y;
        int width;
        int height;
    };

    inline BOOL CALLBACK MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, LPRECT lprcMonitor, LPARAM dwData) {
        std::vector<DisplayInfo>* displays = reinterpret_cast<std::vector<DisplayInfo>*>(dwData);

        MONITORINFOEX monitorInfo;
        monitorInfo.cbSize = sizeof(MONITORINFOEX);
        GetMonitorInfo(hMonitor, &monitorInfo);

        DisplayInfo display;
        display.index = displays->size();
        display.x = monitorInfo.rcMonitor.left;
        display.y = monitorInfo.rcMonitor.top;
        display.width = monitorInfo.rcMonitor.right - monitorInfo.rcMonitor.left;
        display.height = monitorInfo.rcMonitor.bottom - monitorInfo.rcMonitor.top;

        displays->push_back(display);
        return TRUE;
    }

    inline std::wstring GetRandomLetters(int length) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis('A', 'Z');
        std::wstring result;
        for (int i = 0; i < length; ++i) {
            result += static_cast<wchar_t>(dis(gen));
        }
        return result;
    }

    //inline std::string CompressString(const std::string& str) {
    //    z_stream zs; // zlib的状态结构体
    //    memset(&zs, 0, sizeof(zs));

    //    if (deflateInit(&zs, Z_DEFAULT_COMPRESSION) != Z_OK)
    //        throw(std::runtime_error("deflateInit failed while compressing."));

    //    zs.next_in = (Bytef*)str.data();
    //    zs.avail_in = str.size(); // 设置输入

    //    int ret;
    //    char outbuffer[32768];
    //    std::string outstring;

    //    // 获取压缩的数据
    //    do {
    //        zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
    //        zs.avail_out = sizeof(outbuffer);

    //        ret = deflate(&zs, Z_FINISH);

    //        if (outstring.size() < zs.total_out) {
    //            outstring.append(outbuffer, zs.total_out - outstring.size());
    //        }
    //    } while (ret == Z_OK);

    //    deflateEnd(&zs);

    //    if (ret != Z_STREAM_END) {
    //        std::ostringstream oss;
    //        oss << "Exception during zlib compression: (" << ret << ") " << zs.msg;
    //        throw(std::runtime_error(oss.str()));
    //    }

    //    return outstring;
    //}

    inline std::string CompressString(const std::string& str, int compressionlevel = Z_BEST_COMPRESSION) {
        z_stream zs; // zlib state
        memset(&zs, 0, sizeof(zs));

        if (deflateInit(&zs, compressionlevel) != Z_OK)
            throw(std::runtime_error("Failed to initialize zlib deflate"));

        zs.next_in = (Bytef*)str.data();
        zs.avail_in = str.size(); // set the z_stream's input

        int ret;
        char outbuffer[32768];
        std::string outstring;

        // retrieve the compressed bytes blockwise
        do {
            zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
            zs.avail_out = sizeof(outbuffer);

            ret = deflate(&zs, Z_FINISH);

            if (outstring.size() < zs.total_out) {
                // append the block to the output string
                outstring.append(outbuffer, zs.total_out - outstring.size());
            }
        } while (ret == Z_OK);

        deflateEnd(&zs);

        if (ret != Z_STREAM_END) { // an error occurred that was not EOF
            std::ostringstream oss;
            oss << "Exception during zlib compression: (" << ret << ") " << zs.msg;
            throw(std::runtime_error(oss.str()));
        }

        return outstring;
    }

    inline std::string DecompressString(const std::string& str) {
        z_stream zs; // zlib状态结构体
        memset(&zs, 0, sizeof(zs));

        if (inflateInit(&zs) != Z_OK)
            throw(std::runtime_error("inflateInit failed while decompressing."));

        zs.next_in = (Bytef*)str.data();
        zs.avail_in = str.size();

        int ret;
        char outbuffer[32768];
        std::string outstring;

        // 获取解压缩的数据
        do {
            zs.next_out = reinterpret_cast<Bytef*>(outbuffer);
            zs.avail_out = sizeof(outbuffer);

            ret = inflate(&zs, 0);

            if (outstring.size() < zs.total_out) {
                outstring.append(outbuffer, zs.total_out - outstring.size());
            }

        } while (ret == Z_OK);

        inflateEnd(&zs);

        if (ret != Z_STREAM_END) { // 一个错误发生了
            std::ostringstream oss;
            oss << "Exception during zlib decompression: (" << ret << ") " << zs.msg;
            throw(std::runtime_error(oss.str()));
        }

        return outstring;
    }

    inline ImVec4 FloatToImColor(const float Color[4]) {
        return ImVec4(Color[0], Color[1], Color[2], Color[3]);
    }

    inline bool IsLobby(const std::string& mapName) {
        bool IsLobby = (mapName.find("fail") != std::string::npos || mapName.find("None") != std::string::npos || mapName.find("TslLobby") != std::string::npos || mapName.find("Tsl") != std::string::npos);
        if (IsLobby) return IsLobby;
        return mapName.find("Main") == std::string::npos;
    }

    inline bool Contains(std::vector<std::string> vec, std::string str) {
        for (std::string s : vec) {
            if (s == str)
                return true;
        }
        return false;
    }

    inline std::string ReplaceAll(std::string str, const std::string& from, const std::string& to) {
        size_t start_pos = 0;
        while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
            str.replace(start_pos, from.length(), to);
            start_pos += to.length();  // Handles case where 'to' is a substring of 'from'
        }
        return str;
    }

    inline uint32_t ReverseBytes(uint32_t value) {
        return ((value & 0x000000FF) << 24) |
            ((value & 0x0000FF00) << 8) |
            ((value & 0x00FF0000) >> 8) |
            ((value & 0xFF000000) >> 24);
    }

    inline ULONG64 CalcRelative(ULONG64 current)
    {
        return current + *(int32_t*)(current) + 4;
    }

    inline std::string RemoveBracketsAndTrim(const std::string& input) {
        size_t leftBracketPos = input.find('[');
        size_t rightBracketPos = input.find(']');

        if (leftBracketPos != std::string::npos && rightBracketPos != std::string::npos && rightBracketPos > leftBracketPos) {
            std::string result = input.substr(rightBracketPos + 1);
            size_t firstNonSpace = result.find_first_not_of(" ");
            size_t lastNonSpace = result.find_last_not_of(" ");

            if (firstNonSpace != std::string::npos && lastNonSpace != std::string::npos) {
                result = result.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
            }
            else {
                result.clear();
            }

            return result;
        }
        else {
            return input;
        }
    }

    inline std::string ExtractSubstring(const std::string& source, const std::string& pattern) {
        if (source == "")
        {
            return "";
        }
        std::regex re(pattern);
        std::smatch match;

        if (std::regex_search(source, match, re) && match.size() > 1) {
            return match.str(1);
        }
        return "";
    }

    inline bool IsPointInScreen(float x, float y, float screenWidth, float screenHeight) {
        return x >= 0 && x <= screenWidth && y >= 0 && y <= screenHeight;
    }

    inline std::vector<std::string> GetCOMPorts() {
        std::vector<std::string> comPorts;

        HDEVINFO hDevInfo;
        SP_DEVINFO_DATA DeviceInfoData;

        hDevInfo = SetupDiGetClassDevs(&GUID_DEVCLASS_PORTS, NULL, NULL, DIGCF_PRESENT);
        if (hDevInfo == INVALID_HANDLE_VALUE) {
            std::cerr << "Failed to get device information set for the COM ports." << std::endl;
            return comPorts;
        }

        DeviceInfoData.cbSize = sizeof(SP_DEVINFO_DATA);
        for (DWORD i = 0; SetupDiEnumDeviceInfo(hDevInfo, i, &DeviceInfoData); i++) {
            char friendlyName[256];
            DWORD size = sizeof(friendlyName);

            if (SetupDiGetDeviceRegistryPropertyA(hDevInfo, &DeviceInfoData, SPDRP_FRIENDLYNAME,
                NULL, (PBYTE)friendlyName, size, &size)) {
                comPorts.push_back(friendlyName);
            }
        }

        SetupDiDestroyDeviceInfoList(hDevInfo);
        return comPorts;
    }

    inline float CalculateDistance(float x1, float y1, float x2, float y2) {
        float dx = x2 - x1;
        float dy = y2 - y1;
        return std::sqrt(dx * dx + dy * dy);
    }

    inline void Trim(std::string& s) {
        // Trim from the left
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
            return !std::isspace(ch);
            }));

        // Trim from the right
        s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
            }).base(), s.end());
    }

    inline bool ValidPtr(const uint64_t& Ptr)
    {
        return (bool)(Ptr < 0x1000000 || Ptr > 0x7FFFFFF00000 || Ptr % sizeof(uint64_t));
    }

    inline bool ValidPtr2(const uint64_t& Ptr)
    {
        return (bool)(Ptr < 0x1000000 || Ptr > 0x7FFFFFF00000);
    }

    inline bool ValidPtr(PVOID Ptr)
    {
        auto v1 = (ULONG64)Ptr;

        return (bool)(v1 < 0x1000000 || v1 > 0x7FFFFFF00000 || v1 % sizeof(uint64_t));
    }

    inline std::string ReadConfigFile(const std::string& filename) {
        std::ifstream file(filename);
        std::string content;

        if (!file) {
            return "";
        }

        std::string line;
        while (std::getline(file, line)) {
            content += line + '\n';
        }

        return content;
    }

    inline void WriteConfigFile(const std::string& filename, const std::string& content) {
        std::ofstream file(filename);

        if (!file) {
            return;
        }

        file << content;
    }

    inline char* UnicodeToAnsi(char* wstr)
    {
        if (!wstr) { return NULL; }
        int strleng = WideCharToMultiByte(CP_ACP, NULL, (LPCWCH)wstr, (int)wcslen((LPCWCH)wstr), NULL, 0, NULL, FALSE);
        char* str = new char[strleng + 1];
        WideCharToMultiByte(CP_ACP, NULL, (LPCWCH)wstr, (int)wcslen((LPCWCH)wstr), str, strleng, NULL, FALSE);
        str[strleng] = '\0';
        return str;
    }

    //inline std::wstring StringToWstring(const std::string& str) {
    //    std::wstring res;
    //    int len = MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, nullptr, 0);
    //    if (len <= 0) {
    //        return res;
    //    }
    //    res.resize(len - 1); // 减1去除末尾的 null 终止符
    //    MultiByteToWideChar(CP_ACP, 0, str.c_str(), -1, &res[0], len);
    //    return res;
    //}

    inline std::wstring StringToWstring(const std::string& str) {
        if (str.empty()) return std::wstring();

        // 预分配足够大的buffer，避免第一次调用API获取长度
        std::wstring res(str.length(), L'\0');

        // 直接转换，如果buffer不够会返回0
        int len = MultiByteToWideChar(
            CP_ACP,
            0,
            str.c_str(),
            str.length(),    // 明确指定长度而不是用-1
            &res[0],
            res.length()
        );

        if (len <= 0) return std::wstring();

        res.resize(len);  // 调整到实际长度
        return res;
    }

    inline std::wstring StringToWstringByUTF8(const std::string& str) {
        std::wstring res;
        // 使用 CP_UTF8 而不是 CP_ACP
        int len = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, nullptr, 0);
        if (len <= 0) {
            return res;
        }
        res.resize(len - 1);
        MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, &res[0], len);
        return res;
    }

    inline std::string WstringToUTF8(const std::wstring& wstr) {
        std::string res;
        int len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
        if (len <= 0) {
            return res;
        }
        res.resize(len - 1); // 减1去除末尾的 null 终止符
        WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, &res[0], len, nullptr, nullptr);
        return res;
    }

    inline std::string FormatMinutes(float minutes) {
        // 计算小时和分钟
        int hours = static_cast<int>(minutes / 60);
        int remainingMinutes = static_cast<int>(minutes) % 60;

        // 使用 stringstream 格式化字符串
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << hours << ":";
        ss << std::setw(2) << std::setfill('0') << remainingMinutes;

        return ss.str();
    }

    inline std::string StringToUTF8(const std::string& str) {
        std::wstring wideStr = StringToWstring(str);
        return WstringToUTF8(wideStr);
    }

    inline std::string Utf8ToGbk(const std::string& utf8_str) {
        if (utf8_str.empty()) {
            return "";
        }

        // 先将UTF-8转为宽字符
        int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8_str.c_str(), -1, NULL, 0);
        if (wlen == 0) {
            return ""; // 转换失败
        }

        std::wstring wstr(wlen, 0);
        if (MultiByteToWideChar(CP_UTF8, 0, utf8_str.c_str(), -1, &wstr[0], wlen) == 0) {
            return ""; // 转换失败
        }
        wstr.pop_back(); // 移除结尾的null字符

        // 再将宽字符转为GBK
        int gbk_len = WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
        if (gbk_len == 0) {
            return ""; // 转换失败
        }

        std::string gbk_str(gbk_len, 0);
        if (WideCharToMultiByte(CP_ACP, 0, wstr.c_str(), -1, &gbk_str[0], gbk_len, NULL, NULL) == 0) {
            return ""; // 转换失败
        }
        gbk_str.pop_back(); // 移除结尾的null字符

        return gbk_str;
    }

    inline std::string getCurrentTime() {
        // 获取当前时间点，包含毫秒
        auto now = std::chrono::system_clock::now();

        // 转换为时间戳
        auto now_c = std::chrono::system_clock::to_time_t(now);

        // 获取毫秒部分
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()
        ).count() % 1000;

        struct tm timeinfo;
        localtime_s(&timeinfo, &now_c);

        // 格式化时间字符串，包含毫秒
        char timeStr[13];  // HH:MM:SS.mmm
        strftime(timeStr, sizeof(timeStr), "%T", &timeinfo);

        // 添加毫秒
        std::string result = timeStr;
        result += "." + std::to_string(ms);

        // 确保毫秒始终是3位
        if (ms < 10) {
            result = result.substr(0, result.length() - 1) + "00" + std::to_string(ms);
        }
        else if (ms < 100) {
            result = result.substr(0, result.length() - 2) + "0" + std::to_string(ms);
        }

        return result;
    }

    //inline void Log(const int& type, const char* format, ...) {
    //    std::ostringstream oss;
    //    const char* prefix = U8("▲");  // 使用圆点作为前缀标记

    //    // 时间戳部分使用暗灰色，使其不那么显眼但仍然可见
    //    oss << COLOR_DGRAY << "[" << getCurrentTime() << "] ";

    //    // 根据不同的日志类型设置不同的颜色和标签
    //    switch (type) {
    //    case 1:  // SUCCESS
    //        oss << COLOR_LBLUE << prefix << " SUCCESS ";  // 使用浅绿色表示成功
    //        break;
    //    case 2:  // ERROR
    //        oss << COLOR_LRED << prefix << " ERROR   ";    // 使用浅红色表示错误
    //        break;
    //    case 3:  // WARNING
    //        oss << COLOR_LYELLOW << prefix << " WARNING ";  // 使用浅黄色表示警告
    //        break;
    //    case 4:  // DEBUG
    //        oss << COLOR_WHITE << prefix << " DEBUG   ";  // 使用白色表示调试
    //        break;
    //    default:  // INFO
    //        oss << COLOR_WHITE << prefix << " INFO    ";    // 使用浅蓝色表示信息
    //    }

    //    // 消息内容使用白色，使其更醒目
    //    oss << COLOR_WHITE;

    //    va_list args;
    //    va_start(args, format);
    //    char buffer[256];
    //    std::vsnprintf(buffer, sizeof(buffer), format, args);
    //    va_end(args);

    //    oss << buffer << COLOR_RESET;
    //    std::cout << oss.str() << std::endl;
    //}

    inline void Log(const int& type, const char* format, ...) {
        // 静态变量，只在第一次调用时初始化
        static std::string logFileName = []() {
            auto now = std::chrono::system_clock::now();
            auto time = std::chrono::system_clock::to_time_t(now);
            struct tm timeinfo;
            localtime_s(&timeinfo, &time);
            
            char dateStr[64];
            std::strftime(dateStr, sizeof(dateStr), "%Y-%m-%d_%H-%M-%S", &timeinfo);
            return std::string("Log_") + dateStr + ".txt";
        }();

        // 静态变量，确保 Logs 目录存在
        static bool logsDirectoryCreated = []() {
            try {
                std::filesystem::create_directories("Logs");
                return true;
            } catch (...) {
                return false;
            }
        }();

        std::ostringstream oss;
        const char* prefix = "▲";

        // 获取时间戳
        auto now = std::chrono::system_clock::now();
        auto time = std::chrono::system_clock::to_time_t(now);
        auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
            now.time_since_epoch()) % 1000;

        struct tm timeinfo;
        localtime_s(&timeinfo, &time);

        // 格式化时间戳
        char timeStr[32];
        std::strftime(timeStr, sizeof(timeStr), "%H:%M:%S", &timeinfo);
        //<< BG_DARK 
        // 时间戳样式
        oss << COLOR_DGRAY << "[" << timeStr << "."
            << std::setfill('0') << std::setw(3) << ms.count() << "]" << COLOR_RESET << " ";

        // 统一标签宽度
        const char* labels[] = {
            "INFO    ",
            "SUCCESS ",
            "ERROR   ",
            "WARNING ",
            "DEBUG   "
        };

        // 根据不同的日志类型设置不同的样式
        switch (type) {
        case 1:  // SUCCESS - 亮蓝色
            oss << BG_SUCCESS << COLOR_DARK << " " << prefix << " " << labels[1] << COLOR_RESET;
            break;
        case 2:  // ERROR - 亮红色
            oss << BG_ERROR << COLOR_DARK << " " << prefix << " " << labels[2] << COLOR_RESET;
            break;
        case 3:  // WARNING - 明黄色
            oss << BG_WARNING << COLOR_DARK << " " << prefix << " " << labels[3] << COLOR_RESET;
            break;
        case 4:  // DEBUG - 紫色
            oss << BG_DEBUG << COLOR_DARK << " " << prefix << " " << labels[4] << COLOR_RESET;
            break;
        default:  // INFO - 淡白色
            oss << BG_INFO << COLOR_DARK << " " << prefix << " " << labels[0] << COLOR_RESET;
        }

        oss << " ";

        // 格式化消息内容
        va_list args;
        va_start(args, format);
        char buffer[1024];
        vsnprintf(buffer, sizeof(buffer), format, args);
        va_end(args);

        // 根据日志类型选择消息的文字颜色
        switch (type) {
        case 1:  // SUCCESS - 亮蓝色
            oss << COLOR_LIGHT;
            break;
        case 2:  // ERROR - 亮红色
            oss << COLOR_LIGHT;
            break;
        case 3:  // WARNING - 明黄色
            oss << COLOR_LIGHT;
            break;
        case 4:  // DEBUG - 紫色
            oss << COLOR_LIGHT;
            break;
        default:  // INFO - 淡白色
            oss << COLOR_LIGHT;
        }

        oss << buffer << COLOR_RESET;
        std::cout << oss.str() << std::endl;

        // 如果不是 DEBUG 类型，写入文件
        if ((type == 2 || type == 3) && logsDirectoryCreated) {
            try {
                std::ofstream logFile("Logs/" + logFileName, std::ios::app);
                if (logFile.is_open()) {
                    // 创建不带颜色代码的纯文本日志
                    std::ostringstream plainOss;
                    plainOss << "[" << timeStr << "."
                        << std::setfill('0') << std::setw(3) << ms.count() << "] ";
                    plainOss << labels[type == 1 ? 1 : type == 2 ? 2 : type == 3 ? 3 : 0];
                    plainOss << " " << buffer;
                    
                    logFile << plainOss.str() << std::endl;
                    logFile.close();
                }
            } catch (...) {
                // 忽略文件写入错误
            }
        }
    }
}