#include "NewSelect.h"

bool NewSelect::Combo(const char* label, int* current_item, const char* const items[], int items_count, float spacing)
{
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGui::PushStyleColor(ImGuiCol_Border, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Border));
    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));

    const float w = ImGui::GetContentRegionAvail().x;
    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);
    ImVec2 label_size = ImGui::CalcTextSize(label, NULL, true);
    label_size.y += 8;

    // 计算下拉框的高度
    const float combo_height = NewGUIStyle::Combo::Height;
    const float total_height = label_size.y + spacing + combo_height;

    // 计算总边界框（包含上下间距）
    const ImRect total_bb(
        window->DC.CursorPos,
        window->DC.CursorPos + ImVec2(w, total_height + spacing * 2)
    );

    ImGui::ItemSize(total_bb, style.FramePadding.y);
    if (!ImGui::ItemAdd(total_bb, id))
    {
        ImGui::PopStyleVar();
        ImGui::PopStyleColor();
        return false;
    }

    bool value_changed = false;

    if (label[0] != '#' && label[0] != '\0')
    {
        // 绘制标签
        window->DrawList->AddText(
            ImVec2(total_bb.Min.x, total_bb.Min.y + spacing),
            NewGUIStyle::Combo::LabelText,  // 使用标题文本颜色
            label
        );
    }

    // 计算下拉框区域
    const ImRect combo_bb(
        ImVec2(total_bb.Min.x, total_bb.Min.y + spacing + label_size.y + NewGUIStyle::Combo::LabelSpacing),
        ImVec2(total_bb.Max.x, total_bb.Min.y + spacing + label_size.y + NewGUIStyle::Combo::LabelSpacing + combo_height)
    );

    // 绘制下拉框背景
    window->DrawList->AddRectFilled(
        combo_bb.Min,
        combo_bb.Max,
        NewGUIStyle::Combo::Background,
        NewGUIStyle::Global::Rounding
    );

    //// 绘制边框
    //window->DrawList->AddRect(
    //    combo_bb.Min,
    //    combo_bb.Max,
    //    NewGUIStyle::Combo::Border,
    //    NewGUIStyle::Global::Rounding,
    //    0,
    //    NewGUIStyle::Combo::BorderThickness
    //);

    // 绘制当前选中项
    if (*current_item >= 0 && *current_item < items_count)
    {
        window->DrawList->AddText(
            ImVec2(combo_bb.Min.x + NewGUIStyle::Combo::TextPadding, combo_bb.Min.y + (combo_height - label_size.y + 5) * 0.5f),
            NewGUIStyle::Combo::ItemText,  // 使用选项文本颜色
            items[*current_item]
        );
    }

    // 绘制箭头（V形，确保完全对称）
    const float arrow_size = NewGUIStyle::Combo::ArrowSize;     // 使用样式中定义的尺寸
    const float arrow_width = NewGUIStyle::Combo::ArrowWidth;
    const float arrow_thickness = NewGUIStyle::Combo::ArrowThickness;

    // 计算箭头的中心位置
    const ImVec2 arrow_center(
        combo_bb.Max.x - arrow_width - NewGUIStyle::Combo::TextPadding + (arrow_width * 0.5f),
        combo_bb.Min.y + combo_height * 0.5f - 2.0f  // 向上移动2像素
    );

    // 计算三个点的位置（完全对称）
    ImVec2 top_left(arrow_center.x - arrow_width * 0.5f, arrow_center.y - arrow_size * 0.3f);   // 左上点
    ImVec2 top_right(arrow_center.x + arrow_width * 0.5f, arrow_center.y - arrow_size * 0.3f);  // 右上点
    ImVec2 bottom_point(arrow_center.x, arrow_center.y + arrow_size * 0.7f);                    // 底部中点

    // 绘制V形箭头的两条线
    window->DrawList->AddLine(
        top_left,       // 左上点
        bottom_point,   // 底部中点
        NewGUIStyle::Combo::Arrow,
        arrow_thickness
    );
    window->DrawList->AddLine(
        bottom_point,   // 底部中点
        top_right,      // 右上点
        NewGUIStyle::Combo::Arrow,
        arrow_thickness
    );

    // 处理点击
    bool hovered = ImGui::ItemHoverable(combo_bb, id, ImGuiItemFlags_None);
    bool clicked = hovered && ImGui::IsMouseClicked(0);
    if (clicked)
    {
        // 使用唯一的弹出框ID
        ImGui::OpenPopup(label);
    }

    // 弹出选择框
    ImGui::SetNextWindowPos(ImVec2(combo_bb.Min.x, combo_bb.Max.y + 1), ImGuiCond_Always);

    // 计算弹出框的最大高度（最多显示8个项目，或者所有项目如果少于8个）
    const float popup_max_height = ImMin(items_count * ImGui::GetTextLineHeightWithSpacing() + 8, 8 * ImGui::GetTextLineHeightWithSpacing() + 8);
    ImGui::SetNextWindowSize(ImVec2(combo_bb.GetWidth(), popup_max_height), ImGuiCond_Always);

    if (ImGui::BeginPopup(label))  // 使用标签作为弹出框ID
    {
        // 设置弹出框样式
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(4, 4));
        ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, NewGUIStyle::Global::Rounding);
        ImGui::PushStyleColor(ImGuiCol_PopupBg, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::Background));
        ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::PopupItemText));
        ImGui::PushStyleColor(ImGuiCol_Header, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::Background));
        ImGui::PushStyleColor(ImGuiCol_HeaderHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::Background));
        ImGui::PushStyleColor(ImGuiCol_HeaderActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::Background));

        // 显示选项
        for (int i = 0; i < items_count; i++)
        {
            const bool is_selected = (*current_item == i);
            if (is_selected)
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Combo::PopupItemSelectedText));

            if (ImGui::Selectable(items[i], is_selected, 0, ImVec2(combo_bb.GetWidth() - 8, 0)))
            {
                *current_item = i;
                value_changed = true;
            }

            if (is_selected)
                ImGui::PopStyleColor();
        }

        ImGui::PopStyleColor(5);
        ImGui::PopStyleVar(2);
        ImGui::EndPopup();
    }
    ImGui::PopStyleVar();
    ImGui::PopStyleColor();

    return value_changed;
}