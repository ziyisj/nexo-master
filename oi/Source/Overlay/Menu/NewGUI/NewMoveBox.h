#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include "Style.h"

class NewMoveBox
{
public:
    // 绘制网格背景
    static void DrawGridBackground(ImDrawList* drawList, const ImVec2& min, const ImVec2& max, float gridSize = 20.0f);

    // 移动盒子组件
    // 参数：
    // - label: 组件标签
    // - pos_x, pos_y: 窗口位置（引用，会被修改）
    // - window_width, window_height: 实际窗口的大小
    // - screen_width, screen_height: 屏幕的最大宽度和高度
    // - box_height: 移动盒子的高度
    // - preview_scale: 预览窗口的缩放比例（默认0.2，即实际大小的20%）
    // 返回值：位置是否被修改
    static bool DrawMoveBox(const char* label, float& pos_x, float& pos_y,
        float window_width, float window_height,
        float screen_width, float screen_height,
        float box_height,
        float preview_scale = 0.2f);
};