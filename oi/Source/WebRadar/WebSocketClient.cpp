#include "WebSocketClient.h"
#include <iostream>
#include <Common/Data.h>
#include <mstcpip.h>

// TCP_MAXRT: Windows Vista+ 支持，限制 TCP 重传超时时间
#ifndef TCP_MAXRT
#define TCP_MAXRT 5
#endif

WebSocketClient::WebSocketClient() : running_(false), connected_(false), first_connect_(true), connect_aborted_(false) {
    client_.clear_access_channels(websocketpp::log::alevel::all);
    client_.clear_error_channels(websocketpp::log::elevel::all);

    client_.init_asio();
    
    // 设置底层 socket 的超时选项，避免长时间阻塞
    client_.set_socket_init_handler([](websocketpp::connection_hdl, websocketpp::lib::asio::ip::tcp::socket& s) {
        websocketpp::lib::asio::error_code ec;
        
        // 设置 TCP keepalive 选项
        websocketpp::lib::asio::socket_base::keep_alive keep_alive(true);
        s.set_option(keep_alive, ec);
        
        // 使用 Windows 原生 socket 选项设置超时
        SOCKET native_sock = s.native_handle();
        DWORD timeout = 3000; // 3 秒超时
        
        // 设置接收超时
        setsockopt(native_sock, SOL_SOCKET, SO_RCVTIMEO, 
                   (const char*)&timeout, sizeof(timeout));
        
        // 设置发送超时
        setsockopt(native_sock, SOL_SOCKET, SO_SNDTIMEO, 
                   (const char*)&timeout, sizeof(timeout));
        
        // Windows: 设置 TCP_MAXRT 减少重传次数，加速连接超时检测
        // 值为重传超时时间（毫秒），设置为 3000ms = 3秒
        DWORD maxrt = 3000;
        setsockopt(native_sock, IPPROTO_TCP, TCP_MAXRT, 
                   (const char*)&maxrt, sizeof(maxrt));
    });
    
    client_.set_open_handler(
        std::bind(&WebSocketClient::on_open, this, std::placeholders::_1));
    client_.set_close_handler(
        std::bind(&WebSocketClient::on_close, this, std::placeholders::_1));
    client_.set_fail_handler(
        std::bind(&WebSocketClient::on_fail, this, std::placeholders::_1));
}

WebSocketClient::~WebSocketClient() {
    close();
}

void WebSocketClient::on_open(websocketpp::connection_hdl hdl) {
    std::lock_guard<std::mutex> lock(mutex_);
    connected_ = true;
    first_connect_ = false;
    connect_cv_.notify_one();
}

void WebSocketClient::on_close(websocketpp::connection_hdl hdl) {
    std::lock_guard<std::mutex> lock(mutex_);
    connected_ = false;
}

void WebSocketClient::on_fail(websocketpp::connection_hdl hdl) {
    std::lock_guard<std::mutex> lock(mutex_);
    connected_ = false;
}

bool WebSocketClient::connect(const std::string& uri) {
    // 先确保之前的连接已经完全关闭
    close();

    websocketpp::lib::error_code ec;
    auto con = client_.get_connection(uri, ec);
    //con->append_header("Authorization", std::to_string(GameData.Config.WebRadar.Pwd));

    if (ec) {
        //std::cout << "Get Connection Error: " << ec.message() << std::endl;
        return false;
    }

    connection_ = con;
    connected_ = false;
    connect_aborted_ = false;

    // 启动运行线程
    running_ = true;
    runner_ = std::thread([this]() {
        while (running_) {
            try {
                client_.run();
            }
            catch (const std::exception& e) {
                //std::cout << "Runner Exception: " << e.what() << std::endl;
            }
            if (!running_) break;
            client_.reset();  // 重置连接状态，但保持ASIO服务
        }
    });

    // 启动超时监控线程，强制在 3 秒后中止连接
    std::thread timeout_thread([this]() {
        std::this_thread::sleep_for(std::chrono::seconds(3));
        
        // 如果 3 秒后还未连接成功，强制中止
        if (!connected_ && running_) {
            connect_aborted_ = true;
            
            // 强制关闭连接
            try {
                websocketpp::lib::error_code ec;
                if (connection_) {
                    connection_->close(websocketpp::close::status::abnormal_close, "Connection timeout", ec);
                }
            }
            catch (...) {}
            
            // 停止事件循环
            client_.stop();
            
            // 通知等待线程
            connect_cv_.notify_all();
        }
    });

    // 进行连接
    try {
        client_.connect(con);

        // 等待连接建立或超时中止
        std::unique_lock<std::mutex> lock(mutex_);
        bool result = connect_cv_.wait_for(lock,
            std::chrono::seconds(4),  // 稍微延长等待时间，确保超时线程有机会执行
            [this]() { return connected_ || connect_aborted_; });

        // 等待超时线程结束
        if (timeout_thread.joinable()) {
            timeout_thread.join();
        }

        if (!connected_ || connect_aborted_) {
            //std::cout << "Connection timeout or aborted" << std::endl;
            
            running_ = false;
            client_.stop();  // 停止 ASIO 事件循环
            
            if (runner_.joinable()) {
                runner_.join();
            }
            return false;
        }

        // 连接成功，超时线程会自动退出
        if (timeout_thread.joinable()) {
            timeout_thread.detach();
        }

        return true;
    }
    catch (const std::exception& e) {
        //std::cout << "Connect Exception: " << e.what() << std::endl;
        
        // 等待超时线程结束
        if (timeout_thread.joinable()) {
            timeout_thread.join();
        }
        
        running_ = false;
        client_.stop();  // 停止 ASIO 事件循环
        
        if (runner_.joinable()) {
            runner_.join();
        }
        return false;
    }
}

bool WebSocketClient::send_binary(const void* payload, size_t len) {
    if (!connection_ || !connected_) {
        return false;
    }

    try {
        // 使用异步发送，websocketpp 会自动管理发送队列
        // 如果网络阻塞超过 SO_SNDTIMEO (3秒)，底层会返回错误
        websocketpp::lib::error_code ec;
        client_.send(connection_, payload, len, websocketpp::frame::opcode::binary, ec);
        
        if (ec) {
            //std::cout << "Send Error: " << ec.message() << std::endl;
            // 发送失败，可能是队列满或连接已断开
            return false;
        }
        
        return true;
    }
    catch (const std::exception& e) {
        //std::cout << "Send Exception: " << e.what() << std::endl;
        return false;
    }
}

void WebSocketClient::close() {
    if (connection_ && connected_) {
        try {
            websocketpp::lib::error_code ec;
            connection_->close(websocketpp::close::status::normal, "", ec);
        }
        catch (...) {
            // 忽略关闭时的错误
        }
    }

    running_ = false;
    if (runner_.joinable()) {
        runner_.join();
    }

    connected_ = false;
    connection_.reset();
}