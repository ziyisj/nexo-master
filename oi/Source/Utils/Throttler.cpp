// Throttler.cpp

#include "Throttler.h"

Throttler::Throttler() {}

void Throttler::executeTask(std::string taskName, std::chrono::duration<double> interval, std::function<void()> task) {
	auto lastExecuted = lastExecuted_[taskName];
	auto currentTime = std::chrono::steady_clock::now();
	auto elapsedTime = std::chrono::duration_cast<std::chrono::duration<double>>(currentTime - lastExecuted);

	if (elapsedTime >= interval) {
		lastExecuted_[taskName] = currentTime;
		task();
	}
}

void Throttler::executeTaskWithSleep(std::string taskName, std::chrono::microseconds interval, std::function<void()> task) {
	auto lastExecuted = lastExecuted__[taskName];

	std::unique_lock<std::mutex> lock(mutex_);

	auto currentTime = std::chrono::high_resolution_clock::now();
	auto elapsedMicroseconds = std::chrono::duration_cast<std::chrono::microseconds>(currentTime - lastExecuted);

	if (elapsedMicroseconds < interval) {
		auto sleepMicroseconds = interval - elapsedMicroseconds;
		condition__.wait_for(lock, sleepMicroseconds);
	}

	lastExecuted__[taskName] = std::chrono::high_resolution_clock::now();
	task();
}
