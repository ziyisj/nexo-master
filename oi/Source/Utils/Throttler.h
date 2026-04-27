// Throttler.h

#ifndef THROTTLER_H
#define THROTTLER_H

#include <unordered_map>
#include <chrono>
#include <functional>
#include <mutex>
#include <Windows.h>
#include <string>
#include <iostream>
#include <unordered_map>
#include <condition_variable>

class Throttler {
public:
	Throttler();

	void executeTask(std::string taskName, std::chrono::duration<double> interval, std::function<void()> task);
	void executeTaskWithSleep(std::string taskName, std::chrono::microseconds interval, std::function<void()> task);

private:
	std::unordered_map<std::string, std::chrono::steady_clock::time_point> lastExecuted_;
	
	std::mutex mutex_;
	std::unordered_map<std::string, std::chrono::high_resolution_clock::time_point> lastExecuted__;

	std::condition_variable condition__;
};

#endif // THROTTLER_H
