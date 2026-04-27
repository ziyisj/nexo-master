#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>

#include "Style.h"

class NewColorPicker
{
public:
    // 内部辅助函数：生成唯一ID
    static ImGuiID GenerateID(const char* label, const char* context = nullptr);

    // 带标签的颜色选择器 - 在点击时显示颜色选择弹窗
    // 参数：
    // - label: 显示的标签文本
    // - color: 颜色值（引用，会被修改）
    // - size: 颜色预览方块的大小，默认(30, 20)
    // - flags: ImGui颜色选择器的标志
    // 返回值：颜色是否被修改
    static bool DrawLabeledColorPicker(const char* label, ImVec4& color, const ImVec2& preview_size = ImVec2(30, 20),
        ImGuiColorEditFlags flags = ImGuiColorEditFlags_DefaultOptions_);

    // 修复后的带标签的颜色选择器，用于float[4]类型的颜色数组
    // 参数：
    // - label: 显示的标签文本
    // - color: 颜色数组（引用，会被修改）
    // - preview_size: 颜色预览方块的大小，默认(30, 20)
    // - flags: ImGui颜色选择器的标志
    // 返回值：颜色是否被修改
    static bool DrawLabeledColorPickerFloat4(const char* label, float color[4], const ImVec2& preview_size = ImVec2(30, 16),
        ImGuiColorEditFlags flags = ImGuiColorEditFlags_DefaultOptions_);

    // 简单的颜色选择器 - 只有颜色方块，没有标签
    static bool DrawColorPicker(const char* label, ImVec4& color, const ImVec2& size = ImVec2(30, 30),
        ImGuiColorEditFlags flags = 0);

    // 简单的颜色选择器，用于float[4]类型的颜色数组
    static bool DrawColorPickerFloat4(const char* label, float color[4], const ImVec2& size = ImVec2(30, 30),
        ImGuiColorEditFlags flags = ImGuiColorEditFlags_DefaultOptions_);
};