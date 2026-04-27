// UDPSender.cpp
#include "UDPSender.h"
#include <iostream>

UDPSender* UDPSender::Instance = nullptr;

UDPSender::UDPSender() : Sock(INVALID_SOCKET), IsInitialized(false) {
}

UDPSender* UDPSender::GetInstance() {
    if (Instance == nullptr) {
        Instance = new UDPSender();
    }
    return Instance;
}

bool UDPSender::InitSocket() {
    // 创建新套接字
    Sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (Sock == INVALID_SOCKET) {
        return false;
    }

    // 设置发送超时
    if (setsockopt(Sock, SOL_SOCKET, SO_SNDTIMEO,
        (const char*)&Timeout, sizeof(Timeout)) == SOCKET_ERROR) {
        closesocket(Sock);
        Sock = INVALID_SOCKET;
        return false;
    }

    // 设置接收超时
    if (setsockopt(Sock, SOL_SOCKET, SO_RCVTIMEO,
        (const char*)&Timeout, sizeof(Timeout)) == SOCKET_ERROR) {
        closesocket(Sock);
        Sock = INVALID_SOCKET;
        return false;
    }

    return true;
}

bool UDPSender::Reconnect() {
    if (Sock != INVALID_SOCKET) {
        closesocket(Sock);
        Sock = INVALID_SOCKET;
    }

    Sleep(ReconnectDelay); // 重连前等待一段时间
    return InitSocket();
}

bool UDPSender::Init(const std::string& Ip, int Port) {
    if (IsInitialized) {
        return true;
    }

    WSADATA WsaData;
    if (WSAStartup(MAKEWORD(2, 2), &WsaData) != 0) {
        return false;
    }

    // 设置目标地址
    ZeroMemory(&TargetAddr, sizeof(TargetAddr));
    TargetAddr.sin_family = AF_INET;
    TargetAddr.sin_port = htons(Port);
    inet_pton(AF_INET, Ip.c_str(), &TargetAddr.sin_addr);

    if (!InitSocket()) {
        WSACleanup();
        return false;
    }

    IsInitialized = true;
    return true;
}

bool UDPSender::Send(const std::string& Message) {
    if (!IsInitialized) {
        return false;
    }

    int Result = sendto(Sock,
        Message.c_str(),
        static_cast<int>(Message.length()),
        0,
        (sockaddr*)&TargetAddr,
        sizeof(TargetAddr));

    if (Result == SOCKET_ERROR) {
        return false;
    }
    return true;

    //for (int Retry = 0; Retry < MaxRetries; ++Retry) {
    //    // 如果套接字无效，尝试重新初始化
    //    if (Sock == INVALID_SOCKET && !InitSocket()) {
    //        continue;
    //    }

    //    int Result = sendto(Sock,
    //        Message.c_str(),
    //        static_cast<int>(Message.length()),
    //        0,
    //        (sockaddr*)&TargetAddr,
    //        sizeof(TargetAddr));

    //    if (Result != SOCKET_ERROR) {
    //        // 发送成功，等待响应
    //        char RecvBuf[1024];
    //        sockaddr_in RecvAddr;
    //        int AddrLen = sizeof(RecvAddr);

    //        int RecvResult = recvfrom(Sock,
    //            RecvBuf,
    //            sizeof(RecvBuf),
    //            0,
    //            (sockaddr*)&RecvAddr,
    //            &AddrLen);

    //        if (RecvResult != SOCKET_ERROR) {
    //            // 成功收到响应
    //            return true;
    //        }

    //        int Error = WSAGetLastError();
    //        if (Error == WSAETIMEDOUT) {
    //            // 超时，尝试重试
    //            continue;
    //        }
    //    }

    //    // 发送失败或其他错误，尝试重连
    //    if (!Reconnect()) {
    //        continue;
    //    }
    //}

    //return false;
}

UDPSender::~UDPSender() {
    if (Sock != INVALID_SOCKET) {
        closesocket(Sock);
    }
    WSACleanup();
}