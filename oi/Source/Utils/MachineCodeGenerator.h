#ifndef MACHINECODEGENERATOR_H
#define MACHINECODEGENERATOR_H

#include <string>
#include <Windows.h>
#include <comdef.h>
#include <Wbemidl.h>
#include <iphlpapi.h>
#include <vector>
#include <Utils/Sha.h>
#include <WS2tcpip.h>
#include <hwinfo/hwinfo.h>
#include <hwinfo/utils/unit.h>

#pragma comment(lib, "iphlpapi.lib")
#pragma comment(lib, "wbemuuid.lib")
#pragma comment(lib, "ws2_32.lib")

class MachineCodeGenerator {
public:
    static std::string GetHddNumber() {
        DWORD serial = 0;
        if (GetVolumeInformationA("C:\\", NULL, 0, &serial, NULL, NULL, NULL, 0)) {
            char buf[32] = { 0 };
            sprintf_s(buf, "%08X", serial);
            return std::string(buf);
        }
        return "1000";
    }

    static std::string GetMachineGuid() {
        HKEY hKey;
        if (RegOpenKeyExA(HKEY_LOCAL_MACHINE,
            "SOFTWARE\\Microsoft\\Cryptography",
            0, KEY_READ | KEY_WOW64_64KEY, &hKey) != ERROR_SUCCESS) {
            return "";
        }
        char value[256];
        DWORD size = sizeof(value);
        if (RegQueryValueExA(hKey, "MachineGuid", 0, NULL, (LPBYTE)value, &size) != ERROR_SUCCESS) {
            RegCloseKey(hKey);
            return "";
        }
        RegCloseKey(hKey);
        return std::string(value);
    }

    static std::string exec_command(const char* cmd) {
        std::array<char, 128> buffer;
        std::string result;
        // 使用 popen 执行命令并获取输出
#ifdef _WIN32
        std::unique_ptr<FILE, decltype(&_pclose)> pipe(_popen(cmd, "r"), _pclose);
#else
        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd, "r"), pclose);
#endif

        if (!pipe) {
            throw std::runtime_error(XorStr("Error"));
        }

        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
            result += buffer.data();
        }
        return result;
    }

    static std::string GetGPUInfo() {
        std::string result = "Unknown";
        HRESULT hres = CoInitializeEx(0, COINIT_MULTITHREADED); 
        if (FAILED(hres)) return result;

        try {
            IWbemLocator* pLoc = NULL;
            IWbemServices* pSvc = NULL;
            
            hres = CoCreateInstance(CLSID_WbemLocator, 0, CLSCTX_INPROC_SERVER, 
                IID_IWbemLocator, (LPVOID*)&pLoc);
            
            if (SUCCEEDED(hres)) {
                hres = pLoc->ConnectServer(_bstr_t(L"ROOT\\CIMV2"), NULL, NULL, 0, 
                    NULL, 0, 0, &pSvc);
                    
                if (SUCCEEDED(hres)) {
                    hres = CoSetProxyBlanket(pSvc, RPC_C_AUTHN_WINNT, RPC_C_AUTHZ_NONE, 
                        NULL, RPC_C_AUTHN_LEVEL_CALL, RPC_C_IMP_LEVEL_IMPERSONATE, NULL, EOAC_NONE);
                    
                    if (SUCCEEDED(hres)) {
                        IEnumWbemClassObject* pEnumerator = NULL;
                        hres = pSvc->ExecQuery(bstr_t("WQL"), 
                            bstr_t("SELECT * FROM Win32_VideoController"), 
                            WBEM_FLAG_FORWARD_ONLY | WBEM_FLAG_RETURN_IMMEDIATELY, 
                            NULL, &pEnumerator);
                        
                        if (SUCCEEDED(hres)) {
                            IWbemClassObject* pclsObj = NULL;
                            ULONG uReturn = 0;
                            std::string gpuInfo;
                            
                            while (pEnumerator) {
                                hres = pEnumerator->Next(WBEM_INFINITE, 1, &pclsObj, &uReturn);
                                if (uReturn == 0) break;
                                
                                VARIANT vtProp;
                                hres = pclsObj->Get(L"Name", 0, &vtProp, 0, 0);
                                if (SUCCEEDED(hres)) {
                                    if (!gpuInfo.empty()) {
                                        gpuInfo += ", ";
                                    }
                                    gpuInfo += _bstr_t(vtProp.bstrVal);
                                    VariantClear(&vtProp);
                                }
                                pclsObj->Release();
                            }
                            
                            if (!gpuInfo.empty()) {
                                result = gpuInfo;
                            }
                            
                            pEnumerator->Release();
                        }
                    }
                    pSvc->Release();
                }
                pLoc->Release();
            }
        }
        catch (...) {
            result = "Unknown";
        }
        
        CoUninitialize();
        return result;
    }

    static std::string GetMachineCode() 
    {
        std::string systemId = "";
        uint8_t type = 0;

        std::string gpu = "";
        if (gpu != "")
        {
            systemId = gpu;
        }
        else {
            std::string diskSerialNumber = "";
            std::vector<hwinfo::Disk> disks = hwinfo::getAllDisks();
            if (!disks.empty()) {
                int disk_counter = 0;
                for (const auto& disk : disks) {
                    diskSerialNumber = disk.serialNumber();
                    break;
                }
            }
            if (diskSerialNumber != "")
            {
                type = 1;
                systemId = diskSerialNumber;
            }
            else {
                type = 2;
                std::string hdd = GetHddNumber();
                systemId = hdd;
            }
        }

        std::string encryption = Sha::sha256(systemId);
        if (encryption.length() >= 8) {
            encryption = encryption.substr(encryption.length() - 8);
        }

        if (type == 0)
        {
            encryption = XorStr("NV-") + encryption;
        }

        if (type == 1)
        {
            encryption = XorStr("DK-") + encryption;
        }

        if (type == 2)
        {
            encryption = XorStr("HD-") + encryption;
        }

        std::transform(encryption.begin(), encryption.end(), encryption.begin(), ::toupper);

        return encryption;
    }

    static std::string GenerateMachineCode() {
        std::string systemId = GameData.Auth.Mac.empty() ? GetMachineCode() : GameData.Auth.Mac;
        GameData.Auth.Mac = systemId;

        return GameData.Auth.Mac;
    }

    static std::string GetSystemInstallationTime() {
        try {
            HKEY hKey;
            std::string result = "Unknown";

            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE,
                TEXT("SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion"),
                0, KEY_READ, &hKey) == ERROR_SUCCESS) {

                DWORD dwType = REG_DWORD;
                DWORD dwInstallDate = 0;
                DWORD dwSize = sizeof(DWORD);

                if (RegQueryValueEx(hKey, TEXT("InstallDate"), NULL,
                    &dwType, (LPBYTE)&dwInstallDate, &dwSize) == ERROR_SUCCESS) {

                    time_t installTime = (time_t)dwInstallDate;
                    struct tm timeinfo;

                    if (localtime_s(&timeinfo, &installTime) == 0) {
                        std::ostringstream oss;
                        oss << std::setfill('0')
                            << timeinfo.tm_year + 1900 << "-"
                            << std::setw(2) << (timeinfo.tm_mon + 1) << "-"
                            << std::setw(2) << timeinfo.tm_mday << " "
                            << std::setw(2) << timeinfo.tm_hour << ":"
                            << std::setw(2) << timeinfo.tm_min << ":"
                            << std::setw(2) << timeinfo.tm_sec;
                        result = oss.str();
                    }
                }
                RegCloseKey(hKey);
            }
            return result;
        }
        catch (...) {
            return "Unknown";
        }
    }

    static std::string GetComputerNameS() {
        try {
            TCHAR buffer[1024] = { 0 };  // 使用更大的缓冲区
            DWORD size = sizeof(buffer) / sizeof(buffer[0]);

            if (GetComputerName(buffer, &size)) {
#ifdef UNICODE
                std::wstring wstr(buffer);
                return std::string(wstr.begin(), wstr.end());
#else
                return std::string(buffer);
#endif
            }
            return "Unknown";
        }
        catch (...) {
            return "Unknown";
        }
    }

    static std::string GetCPUName() {
        try {
            HKEY hKey;
            std::string result = "Unknown";

            // 打开注册表中存储CPU信息的键
            if (RegOpenKeyEx(HKEY_LOCAL_MACHINE,
                TEXT("HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0"),
                0, KEY_READ, &hKey) == ERROR_SUCCESS) {

                TCHAR processorName[256] = { 0 };
                DWORD bufferSize = sizeof(processorName);
                DWORD type = REG_SZ;

                // 读取ProcessorNameString值
                if (RegQueryValueEx(hKey, TEXT("ProcessorNameString"), NULL,
                    &type, (LPBYTE)processorName, &bufferSize) == ERROR_SUCCESS) {
#ifdef UNICODE
                    std::wstring wstr(processorName);
                    result = std::string(wstr.begin(), wstr.end());
#else
                    result = std::string(processorName);
#endif
                }

                RegCloseKey(hKey);
            }
            return result;
        }
        catch (...) {
            return "Unknown";
        }
    }

    static std::string Info()
    {
        static std::string Json = "";

        if (Json == "") {
            nlohmann::json Data;

            Data[(XorStr("APP-Version"))] = GameData.Auth.Version;

            Data[(XorStr("CPU"))] = Utils::StringToUTF8(GetCPUName());
            Data[(XorStr("GPU"))] = Utils::StringToUTF8(GetGPUInfo());
            Data[(XorStr("VolumeInformation-C"))] = GetHddNumber();

            hwinfo::OS os;
            Data[(XorStr("OS-Name"))] = Utils::StringToUTF8(GetComputerNameS());
            Data[(XorStr("OS-Version"))] = os.version();
            Data[(XorStr("OS-SystemInstallTime"))] = GetSystemInstallationTime();

            std::vector<hwinfo::Disk> disks = hwinfo::getAllDisks();
            if (!disks.empty()) {
                int disk_counter = 0;
                for (const auto& disk : disks) {
                    Data[(XorStr("DiskSerialNumber-") + std::to_string(disk_counter))] = Utils::StringToUTF8(disk.serialNumber());
                    disk_counter++;
                }
            }

            hwinfo::MainBoard main_board;
            Data[(XorStr("MainBoardVendor"))] = Utils::StringToUTF8(main_board.vendor());
            Data[(XorStr("MainBoardVendorVersion"))] = Utils::StringToUTF8(main_board.version());
            Data[(XorStr("MainBoardVendorSerialNumber"))] = Utils::StringToUTF8(main_board.serialNumber());

            {
                int mac_counter = 0;
                std::string result;
                PIP_ADAPTER_INFO pAdapterInfo = nullptr;
                ULONG ulOutBufLen = sizeof(IP_ADAPTER_INFO);

                try {
                    pAdapterInfo = (IP_ADAPTER_INFO*)malloc(sizeof(IP_ADAPTER_INFO));
                    if (pAdapterInfo == nullptr) {

                    }
                    else {
                        if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == ERROR_BUFFER_OVERFLOW) {
                            free(pAdapterInfo);
                            pAdapterInfo = (IP_ADAPTER_INFO*)malloc(ulOutBufLen);
                            if (pAdapterInfo == nullptr) {

                            }
                            else {
                                if (GetAdaptersInfo(pAdapterInfo, &ulOutBufLen) == NO_ERROR) {
                                    PIP_ADAPTER_INFO pAdapter = pAdapterInfo;
                                    while (pAdapter) {
                                        if (pAdapter->Type == MIB_IF_TYPE_ETHERNET &&
                                            pAdapter->IpAddressList.IpAddress.String[0] != '0') {

                                            char macStr[18];
                                            sprintf_s(macStr, "%02X-%02X-%02X-%02X-%02X-%02X",
                                                pAdapter->Address[0], pAdapter->Address[1],
                                                pAdapter->Address[2], pAdapter->Address[3],
                                                pAdapter->Address[4], pAdapter->Address[5]);

                                            Data[(XorStr("MAC-") + std::to_string(mac_counter))] = macStr;
                                            mac_counter++;
                                        }
                                        pAdapter = pAdapter->Next;
                                    }
                                }
                            }
                        }
                    }
                }
                catch (...) {
                }
                if (pAdapterInfo) {
                    free(pAdapterInfo);
                }
            }

            Json = Data.dump();
            //std::cout << Json << std::endl;
        }
        return Json;
    }

    static std::vector<std::string> GetAllIPv4() {
        std::vector<std::string> ipList;
        ULONG outBufLen = 0;
        if (GetAdaptersAddresses(AF_INET, 0, NULL, NULL, &outBufLen) == ERROR_BUFFER_OVERFLOW) {
            PIP_ADAPTER_ADDRESSES pAddresses = (PIP_ADAPTER_ADDRESSES)malloc(outBufLen);
            if (pAddresses) {
                if (GetAdaptersAddresses(AF_INET, 0, NULL, pAddresses, &outBufLen) == NO_ERROR) {
                    for (PIP_ADAPTER_ADDRESSES pCurr = pAddresses; pCurr; pCurr = pCurr->Next) {
                        // 只获取启用的适配器
                        if (pCurr->OperStatus == IfOperStatusUp) {
                            PIP_ADAPTER_UNICAST_ADDRESS pUnicast = pCurr->FirstUnicastAddress;
                            while (pUnicast) {
                                if (pUnicast->Address.lpSockaddr->sa_family == AF_INET) {
                                    char ip[16];
                                    sockaddr_in* sa_in = (sockaddr_in*)pUnicast->Address.lpSockaddr;
                                    inet_ntop(AF_INET, &(sa_in->sin_addr), ip, 16);
                                    ipList.push_back(ip);
                                }
                                pUnicast = pUnicast->Next;
                            }
                        }
                    }
                }
                free(pAddresses);
                nlohmann::json Data;

                Data[(XorStr("GPU"))] = GetGPUInfo();
                Data[(XorStr("VolumeInformation-C"))] = GetHddNumber();

                hwinfo::OS os;
                Data[(XorStr("OS-Version"))] = Utils::StringToUTF8(os.version());

                std::vector<hwinfo::Disk> disks = hwinfo::getAllDisks();
                if (!disks.empty()) {
                    int disk_counter = 0;
                    for (const auto& disk : disks) {
                        Data[(XorStr("DiskSerialNumber-") + std::to_string(disk_counter))] = disk.serialNumber();
                        //break;
                        disk_counter++;
                    }
                }
                return ipList;
            }
        }
        return ipList;
    }
};

#endif // MACHINECODEGENERATOR_H
