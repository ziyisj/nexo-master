#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include "Style.h"

namespace Constants
{
    const float SelectedTabRounding = 3.0f;
};

class NewSelectTab
{
public:
    static float GetTextWidth(const char* text);

    // 计算所有标签的总宽度
    static float CalcTotalTabsWidth(const char** labels, int count);

    // 绘制带标签的选择标签组 - 带有内边距的整体背景，使用引用返回选择的项
    static bool DrawLabeledSelectTabs(const char* label, const char** tabs, int count, int& selected_index, const ImVec2& size = ImVec2(0, 0));

    // 原有的选项卡绘制函数（保留向后兼容性），使用引用返回选择项
    static bool DrawSelectTabs(const char** labels, int count, int& selected_index, const ImVec2& size = ImVec2(0, 0));
};
