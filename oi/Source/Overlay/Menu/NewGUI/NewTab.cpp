#include "NewTab.h"

// 内部函数：获取文本宽度
float NewTab::GetTextWidth(const char* text)
{
    return ImGui::CalcTextSize(text).x;
}

// 计算所有标签的总宽度
float NewTab::CalcTotalTabsWidth(const char** labels, int count)
{
    float total_width = 0.0f;
    for (int i = 0; i < count; i++) {
        float text_width = GetTextWidth(labels[i]);
        float tab_width = text_width + NewGUIStyle::Tab::Padding * 2.0f;
        total_width += tab_width;
        if (i < count - 1) {
            total_width += NewGUIStyle::Tab::Spacing;
        }
    }
    return total_width;
}

// 计算TabItem数组的总宽度
float NewTab::CalcTotalTabsWidth(const TabItem* items, int count)
{
    float total_width = 0.0f;
    for (int i = 0; i < count; i++) {
        float text_width = GetTextWidth(items[i].label);
        float tab_width = text_width + NewGUIStyle::Tab::Padding * 2.0f;
        total_width += tab_width;
        if (i < count - 1) {
            total_width += NewGUIStyle::Tab::Spacing;
        }
    }
    return total_width;
}

// 渲染TabGroup背景
void NewTab::RenderTabGroupBackground(const ImVec2& min, const ImVec2& max)
{
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    draw_list->AddRectFilled(min, max, NewGUIStyle::Tab::GroupBackground, NewGUIStyle::Tab::Rounding);
}

// 开始一个标签组（仅为了绘制和布局，不创建子窗口）
void NewTab::BeginTabGroupLayout()
{
    // 保存当前光标位置，用于绘制背景
    ImGui::BeginGroup();
}

// 结束标签组（绘制背景并结束组）
void NewTab::EndTabGroupLayout()
{
    ImGui::EndGroup();
}

// 单个标签按钮
bool NewTab::TabButton(const char* label, bool selected)
{
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiID id = window->GetID(label);
    float textWidth = GetTextWidth(label);
    float tabWidth = textWidth + NewGUIStyle::Tab::Padding * 2.0f;

    ImVec2 pos = window->DC.CursorPos;
    ImVec2 size(tabWidth, NewGUIStyle::Tab::Height);
    ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));

    // 移动光标位置用于下一项
    ImGui::ItemSize(size, 0);

    if (!ImGui::ItemAdd(bb, id))
        return false;

    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    // 渲染标签背景和文本
    if (selected) {
        // 绘制文本
        window->DrawList->AddText(
            ImVec2(bb.Min.x + (size.x - textWidth) * 0.5f,
                bb.Min.y + (size.y - ImGui::GetFontSize()) * 0.5f),
            NewGUIStyle::Tab::ActiveText, label);

        // 如果被选中，绘制底部指示线
        float lineWidth = size.x * NewGUIStyle::Tab::LineWidth;
        float lineX = bb.Min.x + (size.x - lineWidth) * 0.5f;
        window->DrawList->AddRectFilled(
            ImVec2(lineX, bb.Max.y - NewGUIStyle::Tab::LineThickness),
            ImVec2(lineX + lineWidth, bb.Max.y),
            NewGUIStyle::Tab::Background);
    }
    else {
        // 如果悬停，绘制背景
        if (hovered) {
            window->DrawList->AddRectFilled(bb.Min, bb.Max,
                NewGUIStyle::Tab::Hover,
                NewGUIStyle::Tab::Rounding);
        }

        // 绘制文本
        window->DrawList->AddText(
            ImVec2(bb.Min.x + (size.x - textWidth) * 0.5f,
                bb.Min.y + (size.y - ImGui::GetFontSize()) * 0.5f),
            NewGUIStyle::Tab::Text, label);
    }

    return pressed;
}

// 绘制一组标签并处理选择逻辑 - TabItem版本
int NewTab::DrawTabs(const TabItem* items, int count, int selected_index)
{
    int result = selected_index;

    // 第一步：计算所有标签的总宽度并确定背景区域
    float totalWidth = CalcTotalTabsWidth(items, count);
    ImVec2 startPos = ImGui::GetCursorPos();
    ImVec2 endPos(startPos.x + totalWidth, startPos.y + NewGUIStyle::Tab::Height);

    // 第二步：绘制背景（整个标签组的背景）
    ImDrawList* drawList = ImGui::GetWindowDrawList();
    ImVec2 windowPos = ImGui::GetWindowPos();
    ImVec2 bgMin(windowPos.x + startPos.x, windowPos.y + startPos.y);
    ImVec2 bgMax(windowPos.x + endPos.x, windowPos.y + endPos.y);

    // 使用较大的圆角值，确保两端是完全圆角
    float fullRounding = NewGUIStyle::Tab::Height / 2.0f;

    // 设置圆角标志，使第一个和最后一个标签左右两端完全圆角
    ImDrawFlags roundingFlags = ImDrawFlags_RoundCornersAll;
    drawList->AddRectFilled(bgMin, bgMax, NewGUIStyle::Tab::GroupBackground, fullRounding, roundingFlags);

    // 第三步：绘制所有标签
    ImGui::BeginGroup();

    float xOffset = 0.0f;
    for (int i = 0; i < count; i++) {
        ImGui::SetCursorPos(ImVec2(startPos.x + xOffset, startPos.y));

        // 获取当前标签的宽度
        float textWidth = GetTextWidth(items[i].label);
        float tabWidth = textWidth + NewGUIStyle::Tab::Padding * 2.0f;

        // 创建标签矩形区域
        ImVec2 pos = ImGui::GetCursorPos();
        ImVec2 size(tabWidth, NewGUIStyle::Tab::Height);
        ImRect bb(
            ImVec2(windowPos.x + pos.x, windowPos.y + pos.y),
            ImVec2(windowPos.x + pos.x + size.x, windowPos.y + pos.y + size.y)
        );

        // 创建并获取ID
        ImGuiID id = ImGui::GetID(items[i].label);
        ImGui::ItemSize(size, 0);

        bool isActive = ImGui::ItemAdd(bb, id);
        if (isActive) {
            bool hovered, held;
            bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

            if (pressed) {
                result = i;  // 更新选中的标签
            }

            bool selected = (i == selected_index);

            // 渲染悬停背景，考虑位置来确定圆角
            if (hovered && !selected) {
                ImDrawFlags cornerFlags = ImDrawFlags_RoundCornersNone;
                float hoverRounding = NewGUIStyle::Tab::Rounding;

                if (i == 0) { // 第一个标签
                    cornerFlags = ImDrawFlags_RoundCornersLeft;
                    hoverRounding = fullRounding;
                }
                else if (i == count - 1) { // 最后一个标签
                    cornerFlags = ImDrawFlags_RoundCornersRight;
                    hoverRounding = fullRounding;
                }

                drawList->AddRectFilled(bb.Min, bb.Max, NewGUIStyle::Tab::Hover, hoverRounding, cornerFlags);
            }

            // 渲染文本 - 添加悬停文本颜色效果
            ImColor textColor;
            if (selected) {
                textColor = NewGUIStyle::Tab::ActiveText;
            }
            else if (hovered) {
                textColor = NewGUIStyle::Tab::HoverText;
            }
            else {
                textColor = NewGUIStyle::Tab::Text;
            }

            drawList->AddText(
                ImVec2(bb.Min.x + (size.x - textWidth) * 0.5f,
                    bb.Min.y + (size.y - ImGui::GetFontSize()) * 0.5f),
                textColor, items[i].label);

            // 如果选中，绘制底部指示线
            if (selected) {
                float lineWidth = size.x * NewGUIStyle::Tab::LineWidth;
                float lineX = bb.Min.x + (size.x - lineWidth) * 0.5f;
                drawList->AddRectFilled(
                    ImVec2(lineX, bb.Max.y - NewGUIStyle::Tab::LineThickness),
                    ImVec2(lineX + lineWidth, bb.Max.y),
                    NewGUIStyle::Tab::Background);
            }
        }

        // 更新X偏移量
        xOffset += tabWidth + NewGUIStyle::Tab::Spacing;
    }

    ImGui::EndGroup();

    // 最后设置光标位置到标签组之后
    ImGui::SetCursorPos(ImVec2(startPos.x, endPos.y));

    return result;
}

// 重载版本，接受字符串数组
int NewTab::DrawTabs(const char** labels, int count, int selected_index)
{
    // 转换为TabItem数组，然后调用TabItem版本的函数
    TabItem* items = new TabItem[count];
    for (int i = 0; i < count; i++) {
        items[i].label = labels[i];
        items[i].selected = (i == selected_index);
    }

    int result = DrawTabs(items, count, selected_index);

    delete[] items;
    return result;
}