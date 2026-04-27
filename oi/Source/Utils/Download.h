#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <string>
#include <fstream>
#include <curl/curl.h>
#include <iostream>
#include <iomanip>
#include "Utils.h"

class Download {
public:
    Download(const std::string& url, const std::string& savePath)
        : url(url), savePath(savePath), lastProgress(0) {
    };

    bool Execute() {
        CURL* curl;
        CURLcode res;

        std::ofstream outputFile(savePath, std::ios::binary);

        if (!outputFile.is_open()) {
            return false;
        }

        curl = curl_easy_init();
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_FRESH_CONNECT, 1L);
            curl_easy_setopt(curl, CURLOPT_FORBID_REUSE, 1L);
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &outputFile);

            // 添加进度回调
            curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 0L);
            curl_easy_setopt(curl, CURLOPT_PROGRESSFUNCTION, ProgressCallback);
            curl_easy_setopt(curl, CURLOPT_PROGRESSDATA, this);

            res = curl_easy_perform(curl);

            std::cout << std::endl; // 完成后换行

            if (res != CURLE_OK) {
                return false;
            }

            curl_easy_cleanup(curl);
            outputFile.close();
            return true;
        }
        else {
            return false;
        }
    };

private:
    std::string url;
    std::string savePath;
    double lastProgress;  // 用于存储上次显示的进度

    static size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
        size_t totalSize = size * nmemb;
        std::ofstream* fileStream = static_cast<std::ofstream*>(userp);
        fileStream->write(static_cast<char*>(contents), totalSize);
        return totalSize;
    };

    // 进度条回调函数
    static int ProgressCallback(void* clientp, double dltotal, double dlnow, double ultotal, double ulnow) {
        Download* download = static_cast<Download*>(clientp);
        return download->ShowProgress(dltotal, dlnow);
    };

    // 显示进度条
    int ShowProgress(double dltotal, double dlnow) {
        if (dltotal <= 0) return 0;

        double progress = (dlnow / dltotal) * 100;

        // 只在进度变化超过1%时更新显示
        if (progress - lastProgress >= 1.0 || progress == 100) {
            lastProgress = progress;

            // 清除当前行
            std::cout << "\r";

            // 显示进度条
            std::cout << XorStr("[");
            int barWidth = 50;
            int pos = barWidth * progress / 100;

            for (int i = 0; i < barWidth; ++i) {
                if (i < pos) std::cout << "=";
                else if (i == pos) std::cout << ">";
                else std::cout << " ";
            }

            std::cout << "] " << std::fixed << std::setprecision(1) << progress << "%" << std::flush;
        }
        return 0;
    };
};

#endif // DOWNLOAD_H