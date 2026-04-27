#include "NewMoveBox.h"

void NewMoveBox::DrawGridBackground(ImDrawList* drawList, const ImVec2& min, const ImVec2& max, float gridSize)
{
    const ImU32 gridColor = ImGui::GetColorU32(ImVec4(1.0f, 1.0f, 1.0f, 0.008f)); // 非常淡的白色

    // 绘制垂直线
    for (float x = min.x; x <= max.x; x += gridSize)
    {
        drawList->AddLine(ImVec2(x, min.y), ImVec2(x, max.y), gridColor);
    }

    // 绘制水平线
    for (float y = min.y; y <= max.y; y += gridSize)
    {
        drawList->AddLine(ImVec2(min.x, y), ImVec2(max.x, y), gridColor);
    }
}

bool NewMoveBox::DrawMoveBox(const char* label, float& pos_x, float& pos_y,
    float window_width, float window_height,
    float screen_width, float screen_height,
    float box_height,
    float preview_scale)
{
    bool value_changed = false;

    // 获取当前窗口和ID
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    const ImGuiID id = ImGui::GetID(label);

    // 计算预览窗口的大小
    const float preview_width = window_width * preview_scale;
    const float preview_height = window_height * preview_scale;

    // 计算组件尺寸
    const float available_width = ImGui::GetContentRegionAvail().x;
    const float box_width = available_width;
    const ImVec2 box_size(box_width, box_height);

    // 获取起始位置
    const ImVec2 pos = window->DC.CursorPos;

    // 创建可交互区域
    ImRect bb(pos, ImVec2(pos.x + box_size.x, pos.y + box_size.y));
    ImGui::ItemSize(box_size);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    // 绘制背景
    const ImU32 bg_color = ImGui::GetColorU32(ImGui::ColorConvertU32ToFloat4(NewGUIStyle::MoveBox::Background));
    window->DrawList->AddRectFilled(bb.Min, bb.Max, bg_color, NewGUIStyle::MoveBox::Rounding);

    // 绘制网格背景
    DrawGridBackground(window->DrawList, bb.Min, bb.Max);

    // 绘制边框
    const ImU32 border_color = ImGui::GetColorU32(ImGui::ColorConvertU32ToFloat4(NewGUIStyle::MoveBox::Border));
    window->DrawList->AddRect(bb.Min, bb.Max, border_color, NewGUIStyle::MoveBox::Rounding, 0, NewGUIStyle::MoveBox::BorderThickness);

    // 计算可移动区域
    const ImVec2 move_area_min(pos.x, pos.y);
    const ImVec2 move_area_max(
        pos.x + box_width - preview_width,
        pos.y + box_height - preview_height
    );

    // 计算预览窗口的位置
    ImVec2 preview_pos(
        move_area_min.x + (pos_x / screen_width) * (move_area_max.x - move_area_min.x),
        move_area_min.y + (pos_y / screen_height) * (move_area_max.y - move_area_min.y)
    );

    // 创建预览窗口的可交互区域
    ImRect preview_bb(preview_pos, ImVec2(preview_pos.x + preview_width, preview_pos.y + preview_height));

    // 检测拖拽状态
    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(preview_bb, id, &hovered, &held);

    // 绘制预览窗口
    const ImU32 preview_bg_color = ImGui::GetColorU32(hovered ?
        ImGui::ColorConvertU32ToFloat4(NewGUIStyle::MoveBox::PreviewHoveredBackground) :
        ImGui::ColorConvertU32ToFloat4(NewGUIStyle::MoveBox::PreviewBackground));
    window->DrawList->AddRectFilled(preview_bb.Min, preview_bb.Max, preview_bg_color, NewGUIStyle::MoveBox::Rounding);

    // 处理拖拽
    if (held)
    {
        ImVec2 mouse_delta = ImGui::GetIO().MouseDelta;
        if (mouse_delta.x != 0.0f || mouse_delta.y != 0.0f)
        {
            // 计算新位置（考虑可移动区域）
            float new_x = preview_pos.x + mouse_delta.x;
            float new_y = preview_pos.y + mouse_delta.y;

            // 限制在可移动区域内
            new_x = ImClamp(new_x, move_area_min.x, move_area_max.x);
            new_y = ImClamp(new_y, move_area_min.y, move_area_max.y);

            // 转换回实际屏幕坐标
            float actual_x = ((new_x - move_area_min.x) / (move_area_max.x - move_area_min.x)) * screen_width;
            float actual_y = ((new_y - move_area_min.y) / (move_area_max.y - move_area_min.y)) * screen_height;

            // 更新位置
            if (actual_x != pos_x || actual_y != pos_y)
            {
                pos_x = actual_x;
                pos_y = actual_y;
                value_changed = true;
            }
        }
    }

    // 绘制文本信息
    const char* format = "位置: (%.0f, %.0f) | 窗口大小: %.0f x %.0f";
    char buffer[128];
    ImFormatString(buffer, IM_ARRAYSIZE(buffer), format, pos_x, pos_y, window_width, window_height);

    // 计算文本位置（在预览区域下方）
    const ImVec2 text_size = ImGui::CalcTextSize(buffer);
    const ImVec2 text_pos(
        pos.x + (box_size.x - text_size.x) * 0.5f,
        pos.y + box_size.y - text_size.y - 5.0f
    );

    // 绘制文本
    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::MoveBox::Text));
    //window->DrawList->AddText(text_pos, ImGui::GetColorU32(ImGuiCol_Text), buffer);
    ImGui::PopStyleColor();

    if (value_changed) {
        pos_x = (float)(int)(pos_x);
        pos_y = (float)(int)(pos_y);
    }

    return value_changed;
}