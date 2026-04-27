#pragma once

#include <winsock2.h>
#include <windows.h>

#include <websocketpp/client.hpp>
#include <websocketpp/config/asio_no_tls_client.hpp>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <atomic>

class WebSocketClient {
public:
    WebSocketClient();
    ~WebSocketClient();

    bool connect(const std::string& uri);
    bool send_binary(const void* payload, size_t len);
    void close();
    bool is_connected() const { return connected_; }
    
private:
    void on_open(websocketpp::connection_hdl hdl);
    void on_close(websocketpp::connection_hdl hdl);
    void on_fail(websocketpp::connection_hdl hdl);

private:
    typedef websocketpp::client<websocketpp::config::asio_client> client_type;
    client_type client_;
    client_type::connection_ptr connection_;
    std::thread runner_;
    bool running_;
    bool first_connect_;  // 标记是否是首次连接

    std::mutex mutex_;
    std::condition_variable connect_cv_;
    bool connected_;
    std::atomic<bool> connect_aborted_;  // 标记连接是否被主动中止
};