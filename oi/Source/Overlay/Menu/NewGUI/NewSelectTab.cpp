#include "NewSelectTab.h"

float NewSelectTab::GetTextWidth(const char* text)
{
    return ImGui::CalcTextSize(text).x;
}

float NewSelectTab::CalcTotalTabsWidth(const char** labels, int count)
{
    float total_width = 0.0f;
    for (int i = 0; i < count; i++) {
        float text_width = GetTextWidth(labels[i]);
        float tab_width = text_width + NewGUIStyle::SelectTab::Padding * 2.0f;
        total_width += tab_width;
        if (i < count - 1) {
            total_width += NewGUIStyle::SelectTab::Spacing;
        }
    }
    return total_width;
}

bool NewSelectTab::DrawLabeledSelectTabs(const char* label, const char** tabs, int count, int& selected_index, const ImVec2& size)
{
    bool value_changed = false;

    // 内边距
    const float PADDING = 5.0f;

    // 获取起始位置和窗口信息
    ImVec2 startPos = ImGui::GetCursorScreenPos();
    ImVec2 cursorPos = ImGui::GetCursorPos();
    ImGuiWindow* window = ImGui::GetCurrentWindow();

    // 计算尺寸
    ImVec2 contentRegion = ImGui::GetContentRegionAvail();
    float totalWidth = size.x > 0 ? size.x : contentRegion.x;
    float labelHeight = ImGui::GetTextLineHeightWithSpacing();
    float tabHeight = NewGUIStyle::SelectTab::Height;

    // 创建一个组
    ImGui::BeginGroup();

    // 为当前选择标签组创建唯一ID
    ImGuiID group_id = window->GetID(label);
    ImGui::PushID(group_id);

    // 绘制标签文本
    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
    ImGui::Text("%s", label);
    ImGui::PopStyleColor();
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 2.0f); // 增加一些间距

    // 计算选项卡的起始位置
    ImVec2 tabScreenPos = ImGui::GetCursorScreenPos();
    ImVec2 tabCursorPos = ImGui::GetCursorPos();

    // 绘制选项卡背景
    ImDrawList* drawList = ImGui::GetCurrentWindow()->DrawList;

    // 外部背景 - 整个选择标签背景
    ImVec2 outerBgMin = tabScreenPos;
    ImVec2 outerBgMax(tabScreenPos.x + totalWidth, tabScreenPos.y + tabHeight);

    // 绘制整体背景
    drawList->AddRectFilled(outerBgMin, outerBgMax, ImColor(33, 33, 33, 255), 3.0f);

    // 内部可用区域（考虑padding）
    float innerWidth = totalWidth - (PADDING * 2);
    float innerHeight = tabHeight - (PADDING * 2);
    ImVec2 innerScreenPos(tabScreenPos.x + PADDING, tabScreenPos.y + PADDING);

    // 计算单个标签宽度
    float tabWidth = innerWidth / count;

    // 设置光标到内部选项卡位置
    ImGui::SetCursorScreenPos(innerScreenPos);

    // 绘制选项卡
    for (int i = 0; i < count; i++) {
        // 计算当前标签的位置和大小
        ImVec2 tabPos = ImGui::GetCursorScreenPos();
        ImVec2 tabMin = tabPos;
        ImVec2 tabMax(tabMin.x + tabWidth, tabMin.y + innerHeight);

        // 获取标签ID - 为每个标签创建唯一ID，包含组ID和标签索引
        ImGuiID id = window->GetID((void*)(intptr_t)(i + 1));

        // 设置标签区域作为可交互项
        ImRect bb(tabMin, tabMax);
        ImGui::ItemSize(ImVec2(tabWidth, innerHeight));
        bool isActive = ImGui::ItemAdd(bb, id);

        bool hovered = false;
        bool held = false;
        bool pressed = false;

        if (isActive) {
            pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

            if (pressed && i != selected_index) {
                selected_index = i;
                value_changed = true;
            }

            // 根据图片，选中的标签背景更暗
            if (i == selected_index) {
                // 为选中的标签添加圆角
                drawList->AddRectFilled(
                    tabMin,
                    tabMax,
                    NewGUIStyle::SelectTab::ActiveBackground,
                    Constants::SelectedTabRounding
                );
            }

            // 绘制标签文本
            float textWidth = GetTextWidth(tabs[i]);
            ImColor textColor = (i == selected_index) ?
                NewGUIStyle::SelectTab::ActiveText :
                (hovered ? NewGUIStyle::SelectTab::HoverText : NewGUIStyle::SelectTab::Text);

            drawList->AddText(
                ImVec2(tabMin.x + (tabWidth - textWidth) * 0.5f,
                    tabMin.y + (innerHeight - ImGui::GetFontSize()) * 0.5f),
                textColor, tabs[i]);

            // 如果启用分隔线且不是最后一个标签
            if (NewGUIStyle::SelectTab::ShowSeparator && i < count - 1) {
                float sepX = tabMin.x + tabWidth;
                drawList->AddLine(
                    ImVec2(sepX, tabMin.y + 4),
                    ImVec2(sepX, tabMax.y - 4),
                    NewGUIStyle::SelectTab::SeparatorColor);
            }
        }

        if (i < count - 1) {
            ImGui::SameLine(0, 0);
        }
    }

    ImGui::PopID(); // 弹出组ID
    ImGui::EndGroup();

    // 更新光标位置
    ImGui::SetCursorPosY(tabCursorPos.y + tabHeight + 5.0f);

    ImGui::Dummy(ImVec2(0, 1));

    return value_changed;
}

bool NewSelectTab::DrawSelectTabs(const char** labels, int count, int& selected_index, const ImVec2& size)
{
    bool value_changed = false;

    // 获取起始位置和窗口信息
    ImVec2 startPos = ImGui::GetCursorScreenPos();
    ImVec2 cursorPos = ImGui::GetCursorPos();
    ImGuiWindow* window = ImGui::GetCurrentWindow();

    // 为当前选择标签组创建唯一ID
    ImGuiID group_id = window->GetID((void*)(labels));
    ImGui::PushID(group_id);

    // 计算尺寸
    float totalWidth = size.x > 0 ? size.x : ImGui::GetContentRegionAvail().x;
    float tabHeight = NewGUIStyle::SelectTab::Height;

    // 绘制背景矩形
    ImDrawList* drawList = window->DrawList;
    ImVec2 bgMin = startPos;
    ImVec2 bgMax(startPos.x + totalWidth, startPos.y + tabHeight);

    // 绘制整体背景
    drawList->AddRectFilled(bgMin, bgMax, NewGUIStyle::SelectTab::Background, NewGUIStyle::SelectTab::Rounding);

    // 如果有边框
    if (NewGUIStyle::SelectTab::BorderThickness > 0.0f) {
        drawList->AddRect(bgMin, bgMax, NewGUIStyle::SelectTab::Border,
            NewGUIStyle::SelectTab::Rounding, ImDrawFlags_RoundCornersAll,
            NewGUIStyle::SelectTab::BorderThickness);
    }

    // 计算单个标签宽度
    float tabWidth = totalWidth / count;

    // 绘制标签
    for (int i = 0; i < count; i++) {
        // 计算当前标签的位置和大小
        ImVec2 tabMin(bgMin.x + i * tabWidth, bgMin.y);
        ImVec2 tabMax(tabMin.x + tabWidth, bgMin.y + tabHeight);

        // 获取标签ID - 为每个标签创建唯一ID，包含组ID和标签索引
        ImGuiID id = window->GetID((void*)(intptr_t)(i + 1));

        // 设置标签区域作为可交互项
        ImRect bb(tabMin, tabMax);
        ImGui::SetCursorScreenPos(tabMin);
        ImGui::ItemSize(ImVec2(tabWidth, tabHeight));
        bool isActive = ImGui::ItemAdd(bb, id);

        bool hovered = false;
        bool held = false;
        bool pressed = false;

        if (isActive) {
            pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

            if (pressed && i != selected_index) {
                selected_index = i;
                value_changed = true;
            }

            // 根据图片，选中的标签背景更暗，添加圆角
            if (i == selected_index) {
                drawList->AddRectFilled(
                    tabMin,
                    tabMax,
                    NewGUIStyle::SelectTab::ActiveBackground,
                    Constants::SelectedTabRounding
                );
            }

            // 绘制标签文本
            float textWidth = GetTextWidth(labels[i]);
            ImColor textColor = (i == selected_index) ?
                NewGUIStyle::SelectTab::ActiveText :
                (hovered ? NewGUIStyle::SelectTab::HoverText : NewGUIStyle::SelectTab::Text);

            drawList->AddText(
                ImVec2(tabMin.x + (tabWidth - textWidth) * 0.5f,
                    tabMin.y + (tabHeight - ImGui::GetFontSize()) * 0.5f),
                textColor, labels[i]);

            // 如果启用分隔线且不是最后一个标签
            if (NewGUIStyle::SelectTab::ShowSeparator && i < count - 1) {
                float sepX = tabMin.x + tabWidth;
                drawList->AddLine(
                    ImVec2(sepX, tabMin.y + 4),
                    ImVec2(sepX, tabMax.y - 4),
                    NewGUIStyle::SelectTab::SeparatorColor);
            }
        }
    }

    ImGui::PopID(); // 弹出组ID

    // 更新光标位置
    ImGui::SetCursorPosY(cursorPos.y + tabHeight);

    return value_changed;
}