#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <mutex>
#include <thread>
#include <functional>
#include <Windows.h>

class ThreadManager {
private:
    std::vector<std::shared_ptr<std::thread>> threads;
    std::mutex mtx;

public:
    void addThread(std::function<void()> func) {
        std::lock_guard<std::mutex> lock(mtx);
        // 清理已完成的线程
        threads.erase(
            std::remove_if(threads.begin(), threads.end(),
                [](const std::shared_ptr<std::thread>& t) {
                    return !t || !t->joinable();
                }),
            threads.end()
        );

        // 添加新线程
        threads.push_back(std::make_shared<std::thread>(func));
        threads.back()->detach();
    }

    ~ThreadManager() {
        std::lock_guard<std::mutex> lock(mtx);
        threads.clear(); // 清理所有线程引用
    }
};