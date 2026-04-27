#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include "Style.h"

struct TabItem
{
    const char* label;
    bool selected;
};

class NewTab
{
public:
    // 内部函数：获取文本宽度
    static float GetTextWidth(const char* text);

    // 计算所有标签的总宽度
    static float CalcTotalTabsWidth(const char** labels, int count);

    // 计算TabItem数组的总宽度
    static float CalcTotalTabsWidth(const TabItem* items, int count);

    // 渲染TabGroup背景
    static void RenderTabGroupBackground(const ImVec2& min, const ImVec2& max);

    // 开始一个标签组（仅为了绘制和布局，不创建子窗口）
    static void BeginTabGroupLayout();

    // 结束标签组（绘制背景并结束组）
    static void EndTabGroupLayout();

    // 单个标签按钮
    static bool TabButton(const char* label, bool selected);

    // 绘制一组标签并处理选择逻辑 - TabItem版本
    static int DrawTabs(const TabItem* items, int count, int selected_index);
    
    // 重载版本，接受字符串数组
    static int DrawTabs(const char** labels, int count, int selected_index);
};