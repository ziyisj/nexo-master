// UDPSender.h
#pragma once

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <WinSock2.h>
#include <WS2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")
#include <string>

class UDPSender {
private:
    static UDPSender* Instance;
    SOCKET Sock;
    sockaddr_in TargetAddr;
    bool IsInitialized;

    // 新增配置参数
    const int MaxRetries = 3;        // 最大重试次数
    const DWORD Timeout = 50;        // 超时时间(毫秒)
    const DWORD ReconnectDelay = 100; // 重连延迟(毫秒)

    UDPSender();
    bool InitSocket();
    bool Reconnect();

public:
    static UDPSender* GetInstance();
    bool Init(const std::string& Ip, int Port);
    bool Send(const std::string& Message);
    ~UDPSender();

    UDPSender(const UDPSender&) = delete;
    UDPSender& operator=(const UDPSender&) = delete;
};