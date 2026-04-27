// FLoop.cpp
#include "FLoop.h"
#include <Common/Data.h>

FLoop::FLoop()
    : LoopSleepMs_(DefaultLoopSleepMs)
    , WaitSleepMs_(DefaultWaitSleepMs)
{
}

FLoop::FLoop(uint32_t InLoopSleepMs, uint32_t InWaitSleepMs)
    : LoopSleepMs_(InLoopSleepMs)
    , WaitSleepMs_(InWaitSleepMs)
{
}

void FLoop::Run() {
    while (true) {
        if (GameData.Process.GameState != FGameState::InGame) {
            if (WaitFunc_) {
                WaitFunc_();
            }
            if (WaitSleepMs_ > 0) {
                std::this_thread::sleep_for(std::chrono::milliseconds(WaitSleepMs_));
            }
            continue;
        }
        if (LoopFunc_) {
            LoopFunc_();
        }
        if (LoopSleepMs_ > 0) {
            std::this_thread::sleep_for(std::chrono::milliseconds(LoopSleepMs_));
        }
    }
}

void FLoop::SetLoopFunc(const std::function<void()>& Func) {
    LoopFunc_ = Func;
}

void FLoop::SetWaitFunc(const std::function<void()>& Func) {
    WaitFunc_ = Func;
}

void FLoop::SetLoopSleep(uint32_t Ms) {
    LoopSleepMs_ = Ms;
}

void FLoop::SetWaitSleep(uint32_t Ms) {
    WaitSleepMs_ = Ms;
}