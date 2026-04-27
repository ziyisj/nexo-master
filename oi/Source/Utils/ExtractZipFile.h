#pragma once
#include <minizip/unzip.h>
#include <filesystem>
#include <string>

inline bool ExtractZipFile(const std::string& zipPath, const std::string& destPath) {
    try {
        // 打开zip文件
        unzFile zipFile = unzOpen(zipPath.c_str());
        if (!zipFile) {
            return false;
        }

        // 确保目标路径存在
        std::filesystem::create_directories(destPath);

        // 获取第一个文件
        if (unzGoToFirstFile(zipFile) != UNZ_OK) {
            unzClose(zipFile);
            return false;
        }

        char filename[512];
        unz_file_info fileInfo;

        do {
            // 获取当前文件信息
            if (unzGetCurrentFileInfo(zipFile, &fileInfo, filename, sizeof(filename), nullptr, 0, nullptr, 0) != UNZ_OK) {
                continue;
            }

            // 构建完整路径
            std::string fullPath = destPath + "/" + filename;

            // 如果是目录
            if (filename[strlen(filename) - 1] == '/') {
                std::filesystem::create_directories(fullPath);
                continue;
            }

            // 创建父目录
            std::filesystem::path filePath(fullPath);
            std::filesystem::create_directories(filePath.parent_path());

            // 打开当前zip中的文件
            if (unzOpenCurrentFile(zipFile) != UNZ_OK) {
                continue;
            }

            // 创建输出文件
            FILE* outFile = nullptr;
            fopen_s(&outFile, fullPath.c_str(), "wb");
            if (!outFile) {
                unzCloseCurrentFile(zipFile);
                continue;
            }

            // 读取并写入数据
            char buffer[8192];
            int readSize;
            while ((readSize = unzReadCurrentFile(zipFile, buffer, sizeof(buffer))) > 0) {
                fwrite(buffer, 1, readSize, outFile);
            }

            // 关闭文件
            fclose(outFile);
            unzCloseCurrentFile(zipFile);

        } while (unzGoToNextFile(zipFile) == UNZ_OK);

        // 关闭zip文件
        unzClose(zipFile);
        return true;
    }
    catch (const std::exception& e) {
        return false;
    }
};