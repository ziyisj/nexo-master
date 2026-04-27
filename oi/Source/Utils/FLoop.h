// FLoop.h
#pragma once
#include <functional>

class FLoop {
private:
    uint32_t LoopSleepMs_;
    uint32_t WaitSleepMs_;
    std::function<void()> LoopFunc_;
    std::function<void()> WaitFunc_;

public:
    static constexpr uint32_t DefaultLoopSleepMs = 500;
    static constexpr uint32_t DefaultWaitSleepMs = 800;

    FLoop();
    FLoop(uint32_t InLoopSleepMs, uint32_t InWaitSleepMs = DefaultWaitSleepMs);

    void Run();
    void SetLoopFunc(const std::function<void()>& Func);
    void SetWaitFunc(const std::function<void()>& Func);
    void SetLoopSleep(uint32_t Ms);
    void SetWaitSleep(uint32_t Ms);
};