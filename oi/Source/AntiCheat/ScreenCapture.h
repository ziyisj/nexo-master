#pragma once

#include <Windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <gdiplus.h>
#pragma comment(lib, "gdiplus.lib")

class ScreenCapture {
private:
    static BOOL CALLBACK MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, LPRECT lprcMonitor, LPARAM dwData) {
        std::vector<RECT>* monitors = reinterpret_cast<std::vector<RECT>*>(dwData);
        monitors->push_back(*lprcMonitor);
        return TRUE;
    }

    static std::vector<RECT> GetAllMonitors() {
        std::vector<RECT> monitors;
        EnumDisplayMonitors(NULL, NULL, MonitorEnumProc, reinterpret_cast<LPARAM>(&monitors));
        return monitors;
    }

    static void SaveImage(HBITMAP hBitmap, const std::wstring& filename) {
        // 初始化GDI+
        Gdiplus::GdiplusStartupInput gdiplusStartupInput;
        ULONG_PTR gdiplusToken;
        Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

        // 创建Bitmap对象
        Gdiplus::Bitmap* bitmap = Gdiplus::Bitmap::FromHBITMAP(hBitmap, NULL);

        // 获取编码器CLSID
        CLSID encoderClsid;
        GetEncoderClsid(L"image/png", &encoderClsid);

        // 保存图片
        bitmap->Save(filename.c_str(), &encoderClsid, NULL);

        // 清理
        delete bitmap;
        Gdiplus::GdiplusShutdown(gdiplusToken);
    }

    static int GetEncoderClsid(const WCHAR* format, CLSID* pClsid) {
        UINT num = 0;
        UINT size = 0;

        Gdiplus::GetImageEncodersSize(&num, &size);
        if (size == 0) return -1;

        Gdiplus::ImageCodecInfo* pImageCodecInfo = (Gdiplus::ImageCodecInfo*)(malloc(size));
        if (pImageCodecInfo == NULL) return -1;

        Gdiplus::GetImageEncoders(num, size, pImageCodecInfo);

        for (UINT j = 0; j < num; ++j) {
            if (wcscmp(pImageCodecInfo[j].MimeType, format) == 0) {
                *pClsid = pImageCodecInfo[j].Clsid;
                free(pImageCodecInfo);
                return j;
            }
        }

        free(pImageCodecInfo);
        return -1;
    }

    // 添加新的Base64编码方法
    static std::string Base64Encode(const BYTE* data, ULONG size) {
        static const char base64_chars[] =
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz"
            "0123456789+/";

        std::string ret;
        ret.reserve(((size + 2) / 3) * 4);

        for (ULONG i = 0; i < size; i += 3) {
            BYTE b1 = data[i];
            BYTE b2 = (i + 1 < size) ? data[i + 1] : 0;
            BYTE b3 = (i + 2 < size) ? data[i + 2] : 0;

            ret.push_back(base64_chars[(b1 & 0xfc) >> 2]);
            ret.push_back(base64_chars[((b1 & 0x03) << 4) | ((b2 & 0xf0) >> 4)]);
            ret.push_back((i + 1 < size) ? base64_chars[((b2 & 0x0f) << 2) | ((b3 & 0xc0) >> 6)] : '=');
            ret.push_back((i + 2 < size) ? base64_chars[b3 & 0x3f] : '=');
        }

        return ret;
    }

    // 将HBITMAP转换为PNG格式的内存数据
    static std::string BitmapToPNGBase64(HBITMAP hBitmap) {
        // 初始化GDI+
        Gdiplus::GdiplusStartupInput gdiplusStartupInput;
        ULONG_PTR gdiplusToken;
        Gdiplus::GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

        // 创建内存流
        IStream* istream = nullptr;
        CreateStreamOnHGlobal(NULL, TRUE, &istream);

        // 创建Bitmap对象
        Gdiplus::Bitmap* bitmap = Gdiplus::Bitmap::FromHBITMAP(hBitmap, NULL);

        // 获取PNG编码器CLSID
        CLSID pngClsid;
        GetEncoderClsid(L"image/png", &pngClsid);

        // 将图像保存到内存流
        bitmap->Save(istream, &pngClsid, NULL);

        // 获取流的大小
        LARGE_INTEGER li = { 0 };
        ULARGE_INTEGER uli = { 0 };
        istream->Seek(li, STREAM_SEEK_SET, NULL);
        istream->Seek(li, STREAM_SEEK_END, &uli);
        istream->Seek(li, STREAM_SEEK_SET, NULL);

        // 读取数据
        BYTE* buffer = new BYTE[uli.LowPart];
        ULONG bytesRead;
        istream->Read(buffer, uli.LowPart, &bytesRead);

        // 转换为Base64
        std::string base64 = Base64Encode(buffer, bytesRead);

        // 清理
        delete[] buffer;
        istream->Release();
        delete bitmap;
        Gdiplus::GdiplusShutdown(gdiplusToken);

        return base64;
    }

public:
    static std::string CaptureAllScreens() {
        std::vector<RECT> monitors = GetAllMonitors();
        if (monitors.empty()) {
            return "";
        }

        // 计算所有显示器的总边界
        int minX = INT_MAX, minY = INT_MAX;
        int maxX = INT_MIN, maxY = INT_MIN;

        for (const auto& rect : monitors) {
            minX = std::min<int>(minX, rect.left);
            minY = std::min<int>(minY, rect.top);
            maxX = std::max<int>(maxX, rect.right);
            maxY = std::max<int>(maxY, rect.bottom);
        }

        int totalWidth = maxX - minX;
        int totalHeight = maxY - minY;

        // 创建兼容DC和位图
        HDC hdcScreen = GetDC(NULL);
        HDC hdcMemory = CreateCompatibleDC(hdcScreen);
        HBITMAP hBitmap = CreateCompatibleBitmap(hdcScreen, totalWidth, totalHeight);
        HBITMAP hOldBitmap = (HBITMAP)SelectObject(hdcMemory, hBitmap);

        // 设置白色背景
        RECT totalRect = { 0, 0, totalWidth, totalHeight };
        FillRect(hdcMemory, &totalRect, (HBRUSH)GetStockObject(WHITE_BRUSH));

        // 复制每个显示器的内容
        for (const auto& rect : monitors) {
            int x = rect.left - minX;
            int y = rect.top - minY;
            int width = rect.right - rect.left;
            int height = rect.bottom - rect.top;

            BitBlt(hdcMemory, x, y, width, height,
                hdcScreen, rect.left, rect.top, SRCCOPY);
        }

        // 转换为Base64
        std::string base64Data = BitmapToPNGBase64(hBitmap);

        // 清理
        SelectObject(hdcMemory, hOldBitmap);
        DeleteObject(hBitmap);
        DeleteDC(hdcMemory);
        ReleaseDC(NULL, hdcScreen);

        // 返回Base64编码的PNG数据
        //return XorStr("data:image/png;base64,") + base64Data;
        return base64Data;
    }
};