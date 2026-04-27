#include "AntiCheat.h"

void AntiCheat::doFileEnumeration(LPCSTR lpPath, BOOL bRecursion, BOOL bEnumFiles, EnumerateFunc pFunc, void* pUserData)
{
    static BOOL s_bUserBreak = FALSE;
    try {
        //-------------------------------------------------------------------------  
        if (s_bUserBreak) return;

        if (lpPath == NULL) return;

        size_t len = strlen(lpPath);
        if (len <= 0 || len >= MAX_PATH - 3) return;

        //NotifySys(NRS_DO_EVENTS, 0,0);  

       /* char path[MAX_PATH];
        strcpy(path, lpPath);
        if (lpPath[len - 1] != '\\') strcat(path, "\\");
        strcat(path, "*");*/

        /*char path[MAX_PATH];
        strncpy(path, lpPath, MAX_PATH - 3);
        path[MAX_PATH - 3] = '\0';
        if (lpPath[len - 1] != '\\') {
            strcat(path, "\\");
        }
        strcat(path, "*");*/

        char path[MAX_PATH];
        if (lpPath[len - 1] == '\\') {
            _snprintf_s(path, MAX_PATH, _TRUNCATE, "%s*", lpPath);
        }
        else {
            _snprintf_s(path, MAX_PATH, _TRUNCATE, "%s\\*", lpPath);
        }

        WIN32_FIND_DATAA fd;
        HANDLE hFindFile = FindFirstFileA(path, &fd);
        if (hFindFile == INVALID_HANDLE_VALUE)
        {
            //return;
            ::FindClose(hFindFile); return;
        }
        char tempPath[MAX_PATH]; BOOL bUserReture = TRUE; BOOL bIsDirectory;

        BOOL bFinish = FALSE;
        while (!bFinish)
        {
            strcpy(tempPath, lpPath);
            if (lpPath[len - 1] != '\\') strcat(tempPath, "\\");
            strcat(tempPath, fd.cFileName);

            bIsDirectory = ((fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) != 0);

            // std::cout << fd.cFileName << std::endl;

             //如果是.或..  
            if (bIsDirectory
                && (strcmp(fd.cFileName, ".") == 0 || strcmp(fd.cFileName, "..") == 0))
            {
                bFinish = (FindNextFileA(hFindFile, &fd) == FALSE);
                continue;
            }

            if (pFunc && bEnumFiles != bIsDirectory)
            {
                bUserReture = pFunc(tempPath, pUserData);
                if (bUserReture == FALSE)
                {
                    s_bUserBreak = TRUE; ::FindClose(hFindFile); return;
                }
            }

            //NotifySys(NRS_DO_EVENTS, 0,0);  

            if (bIsDirectory && bRecursion) //是子目录  
            {
                doFileEnumeration(tempPath, bRecursion, bEnumFiles, pFunc, pUserData);
            }

            bFinish = (FindNextFileA(hFindFile, &fd) == FALSE);
        }
        ::FindClose(hFindFile);

        //-------------------------------------------------------------------------  
    }
    catch (...) { return; }
}

BOOL WINAPI AntiCheat::myEnumerateFunc(LPCSTR lpFileOrPath, void* pUserData) {
    const std::vector<std::string> banListPatterns = {
        XorStr("die_win64_portable_3.10_x64.zip"),
        XorStr("reqable-app-windows-x86_64.exe"),
        XorStr("Reqable.exe"),
        XorStr("reqable_cronet.dll"),
        XorStr("die.exe"),
        XorStr("diec.exe"),
        XorStr("diel.exe"),

        XorStr("xdbg64.ini"),
        XorStr("x64dbg.dll"),
       // XorStr("cheatengine-x86_64.exe"),
        XorStr("CrazyDbg.exe"),
        XorStr("CrazyDll64.dll"),
        XorStr("CrazySys.sys"),
        //XorStr("cheatengine-x86_64"),
        //XorStr("lua53-64.dll"),
        //XorStr("win64_remote64.exe"),

        // IDA Pro
        XorStr("ida64.exe"), XorStr("idat64.exe"), XorStr("idaq.exe"), XorStr("idaq64.exe"),
        XorStr("idaw.exe"), XorStr("idaw64.exe"), XorStr("ida.exe"), XorStr("idat.exe"),

        // e
        XorStr("e.exe"),

        // vs
        //XorStr("devenv.exe"),

        // Ghidra
        XorStr("ghidraRun.bat"), XorStr("ghidra.exe"),

        // x64dbg
        XorStr("x32dbg.exe"), XorStr("x64dbg.exe"), XorStr("xdbg64.ini"), XorStr("x64dbg.dll"),

        // OllyDbg
        XorStr("ollydbg.exe"),

        // Cheat Engine
        //XorStr("cheatengine-x86_64.exe"), 

        //XorStr("cheatengine.exe"),

        // Fiddler
        XorStr("fiddler.exe"),

        // Process Hacker
        //XorStr("processhacker.exe"),

        // Frida
        XorStr("frida.exe"),

        XorStr("wireshark.exe"),

        // 其他常见逆向相关文件
        //XorStr("OpenArk.exe"),
        XorStr("CrazyDbg.exe"), XorStr("CrazyDll64.dll"),
        XorStr("CrazySys.sys"), 
        //XorStr("lua53-64.dll"),
        XorStr("win64_remote64.exe"),

        //XorStr("dbgview.exe"),
        //XorStr("OpenArk.exe"),
        //XorStr("OpenArk64.exe"),

        XorStr("charles.exe"),          // Charles Proxy

        //XorStr("InstDrv.exe"),

        //XorStr("exeinfope.exe"),

        //XorStr("Fatbeans.exe"),
    };

    /*const std::vector<std::string> banListPatterns1 = {
         XorStr(".id0"), XorStr(".id1"), XorStr(".id2"), XorStr(".i64"),
    };*/

    //for (const auto& pattern : banListPatterns1) {
    //    // 首先检查指针是否为空
    //    if (lpFileOrPath == nullptr) {
    //        continue;  // 或者 return，取决于您的需求
    //    }

    //    // 获取路径字符串长度
    //    size_t pathLen = strlen(lpFileOrPath);
    //    size_t patternLen = pattern.length();

    //    // 检查路径长度是否足够长，且末尾是否完全匹配模式
    //    if (pathLen >= patternLen &&
    //        strcmp(lpFileOrPath + pathLen - patternLen, pattern.c_str()) == 0) {
    //        BanLists += std::format("{}|", lpFileOrPath);
    //        break;
    //    }
    //}

    // 遍历每个模式，检查当前文件路径是否包含它
    //for (const auto& pattern : banListPatterns) {
    //    if (strstr(lpFileOrPath, pattern.c_str()) != NULL) {
    //        //std::cout << lpFileOrPath << std::endl;
    //        // 假设 BanLists 是一个 std::string 的全局变量或以某种方式可以访问
    //        // 注意：下面的 std::format 需要 C++20 支持
    //        BanLists += std::format("{}|", lpFileOrPath);
    //        break; // 找到匹配项后，不需要检查其他模式
    //    }
    //}

   /* for (const auto& pattern : banListPatterns1) {
        if (strstr(lpFileOrPath, pattern.c_str()) != NULL) {
            BanLists += std::format("{}|", lpFileOrPath);
            break;
        }
    }*/

    for (const auto& pattern : banListPatterns) {

        // 安全检查：确保输入不为空
        if (!lpFileOrPath || *lpFileOrPath == '\0') {
            continue;
        }

        // 高性能：从后往前查找最后一个路径分隔符
        const char* fileName = lpFileOrPath;
        const char* lastSlash = nullptr;

        // 一次遍历找到最后一个 \ 或 /
        for (const char* p = lpFileOrPath; *p != '\0'; ++p) {
            if (*p == '\\' || *p == '/') {
                lastSlash = p;
            }
        }

        // 如果找到分隔符，文件名从分隔符后开始
        if (lastSlash) {
            fileName = lastSlash + 1;
        }

        // 安全检查：确保文件名不为空
        if (*fileName == '\0') {
            continue;
        }

        // 高性能：直接比较字符串，避免创建临时对象
        if (strcmp(fileName, pattern.c_str()) == 0) {
            // 安全检查：确保 BanLists 有足够空间（可选）
            try {
                BanLists += std::format("{}|", lpFileOrPath);
            }
            catch (const std::exception&) {
                // 如果格式化失败，使用简单拼接
                BanLists += lpFileOrPath;
                BanLists += "|";
            }
            break;
        }
    }
    return TRUE;
}

unsigned _stdcall AntiCheat::ThreadProc(void* param)
{
    char X[20];
    strcpy(X, (char*)param);
    doFileEnumeration(X, TRUE, TRUE, myEnumerateFunc, NULL);
    DriveCount--;
    return 0;
}

std::string AntiCheat::GetUserDocumentsFolderPath() {
    char documentsPath[MAX_PATH];
    HRESULT result = SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, documentsPath);

    if (result != S_OK) {
        //std::cerr << "Error obtaining the Documents folder path." << std::endl;
        return "";
    }

    return std::string(documentsPath);
}

// 功能：检查目录是否存在
bool AntiCheat::DirectoryExists(const std::string& dirPath) {
    DWORD fileType = GetFileAttributesA(dirPath.c_str());
    if (fileType == INVALID_FILE_ATTRIBUTES)
        return false; // 目录不存在
    if (fileType & FILE_ATTRIBUTE_DIRECTORY)
        return true; // 是一个目录
    return false; // 存在，但不是一个目录
}

// 功能：扫描给定目录下的所有文件夹，并返回包含文件夹名称的字符串
std::string AntiCheat::ScanDirectories(const std::string& directoryPath) {
    if (!DirectoryExists(directoryPath)) {
        return ""; // 目录不存在，直接返回空字符串
    }

    WIN32_FIND_DATA findFileData;
    HANDLE hFind = INVALID_HANDLE_VALUE;
    std::string folders;

    // 构建搜索模式，*.* 表示匹配所有文件和文件夹
    std::string searchPattern = directoryPath + "\\*.*";

    hFind = FindFirstFile(searchPattern.c_str(), &findFileData);

    if (hFind == INVALID_HANDLE_VALUE) {
        //std::cerr << "Failed to access directory: " << directoryPath << std::endl;
        return "";
    }
    else {
        do {
            // 检查是否是目录以及不是当前目录(.)或上级目录(..)
            if ((findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) &&
                strcmp(findFileData.cFileName, ".") != 0 &&
                strcmp(findFileData.cFileName, "..") != 0) {
                folders += findFileData.cFileName;
                folders += "|"; // 每个文件夹名称后加换行符
            }
        } while (FindNextFile(hFind, &findFileData) != 0);

        FindClose(hFind);
    }

    return folders;
}

std::string AntiCheat::Run()
{
    //std::string userDocumentsPath = GetUserDocumentsFolderPath();
    /*std::string targetPath = userDocumentsPath + XorStr("\\Tencent Files");
    std::string scannedFolders = ScanDirectories(targetPath);*/

    DriveCount = 0;
    BanLists = "";

    char Devstr[20];

    for (char i = 'A'; i <= 'Z'; i++)
    {
        char x[20] = { i,':' };
        UINT Type = GetDriveTypeA(x);
        if (Type == DRIVE_FIXED || Type == DRIVE_REMOVABLE || Type == DRIVE_CDROM)
        {
            sprintf(Devstr, "%s\\", x);
            _beginthreadex(NULL, 0, ThreadProc, Devstr, NULL, NULL);
            DriveCount++;
            Sleep(100);
        }

    }

    while (1)
    {
        if (DriveCount == 0)
        {
            break;
        }
        Sleep(1);
    }

    if (BanLists != "")
    {
        BanLists = std::format("BanLists:{}", BanLists);
    }

    return BanLists;
}