#include "NewColorPicker.h"

ImGuiID NewColorPicker::GenerateID(const char* label, const char* context)
{
    if (context != nullptr) {
        ImGuiID id = ImGui::GetID(context);
        ImGui::PushID(id);
        ImGuiID result = ImGui::GetID(label);
        ImGui::PopID();
        return result;
    }
    return ImGui::GetID(label);
}

bool NewColorPicker::DrawLabeledColorPicker(const char* label, ImVec4& color, const ImVec2& preview_size,
    ImGuiColorEditFlags flags)
{
    bool value_changed = false;
    const float item_spacing = ImGui::GetStyle().ItemSpacing.x;
    const float text_width = ImGui::CalcTextSize(label).x;
    const float available_width = ImGui::GetContentRegionAvail().x;
    const float total_width = text_width + item_spacing + preview_size.x;

    // 开始一个组
    ImGui::BeginGroup();

    // 获取当前窗口和ID
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    const ImGuiID id = GenerateID(label);

    // 计算整个项目的区域
    const ImVec2 start_pos = ImGui::GetCursorScreenPos();
    const float item_height = ImGui::GetFrameHeight();
    const ImVec2 item_size(available_width, preview_size.y > item_height ? preview_size.y : item_height);

    // 计算预览区域的位置
    const ImVec2 preview_pos(
        window->DC.CursorPos.x + available_width - preview_size.x,
        window->DC.CursorPos.y + (item_height - preview_size.y) * 0.5f
    );

    // 添加整个区域为可交互项
    ImRect bb(window->DC.CursorPos, ImVec2(window->DC.CursorPos.x + item_size.x, window->DC.CursorPos.y + item_size.y));
    ImGui::ItemSize(item_size);
    if (!ImGui::ItemAdd(bb, id))
    {
        ImGui::EndGroup();
        return false;
    }

    // 检测交互状态
    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    // 绘制标签文本
    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
    ImGui::RenderText(ImVec2(window->DC.CursorPos.x, window->DC.CursorPos.y + (item_height - ImGui::GetFontSize()) * 0.5f), label);
    ImGui::PopStyleColor();

    // 绘制预览方块
    ImDrawList* draw_list = window->DrawList;
    const ImU32 color_u32 = ImGui::ColorConvertFloat4ToU32(color);
    const ImVec2 preview_rect_min = preview_pos;
    const ImVec2 preview_rect_max(preview_rect_min.x + preview_size.x, preview_rect_min.y + preview_size.y);

    // 绘制颜色矩形（稍微添加一些圆角）
    draw_list->AddRectFilled(preview_rect_min, preview_rect_max, color_u32, 2.0f);

    // 如果颜色很暗，添加一个轮廓以便更好地可见
    if (color.w < 0.5f || (color.x < 0.2f && color.y < 0.2f && color.z < 0.2f))
    {
        draw_list->AddRect(preview_rect_min, preview_rect_max, IM_COL32(100, 100, 100, 150), 2.0f);
    }

    // 如果点击，显示颜色选择器弹出窗口
    if (pressed)
    {
        ImGui::OpenPopup(label);
    }

    // 颜色选择器弹出窗口
    if (ImGui::BeginPopup(label))
    {
        // 添加一个标题
        ImGui::Text("%s", label);
        ImGui::Separator();

        // 添加颜色选择器
        ImGuiColorEditFlags picker_flags = ImGuiColorEditFlags_DisplayRGB | ImGuiColorEditFlags_DisplayHSV | ImGuiColorEditFlags_PickerHueWheel;
        if (ImGui::ColorPicker4("##picker", (float*)&color, picker_flags | flags))
        {
            value_changed = true;
        }

        // 添加预设颜色
        ImGui::Separator();
        ImGui::Text("预设颜色");
        static const ImVec4 preset_colors[] = {
            ImVec4(1.0f, 0.0f, 0.0f, 1.0f),   // 红色
            ImVec4(1.0f, 0.5f, 0.0f, 1.0f),   // 橙色
            ImVec4(1.0f, 1.0f, 0.0f, 1.0f),   // 黄色
            ImVec4(0.0f, 1.0f, 0.0f, 1.0f),   // 绿色
            ImVec4(0.0f, 1.0f, 1.0f, 1.0f),   // 青色
            ImVec4(0.0f, 0.0f, 1.0f, 1.0f),   // 蓝色
            ImVec4(1.0f, 0.0f, 1.0f, 1.0f),   // 紫色
            ImVec4(1.0f, 1.0f, 1.0f, 1.0f),   // 白色
            ImVec4(0.0f, 0.0f, 0.0f, 1.0f),   // 黑色
        };

        // 显示预设颜色按钮
        ImGui::BeginGroup();
        for (int i = 0; i < IM_ARRAYSIZE(preset_colors); i++)
        {
            ImGui::PushID(i);
            if ((i % 3) != 0)
                ImGui::SameLine(0.0f, ImGui::GetStyle().ItemSpacing.y);

            if (ImGui::ColorButton("##preset", preset_colors[i], ImGuiColorEditFlags_NoAlpha, ImVec2(20, 20)))
            {
                color = preset_colors[i];
                value_changed = true;
            }
            ImGui::PopID();
        }
        ImGui::EndGroup();

        ImGui::EndPopup();
    }

    ImGui::EndGroup();
    return value_changed;
}

bool NewColorPicker::DrawLabeledColorPickerFloat4(const char* label, float color[4], const ImVec2& preview_size,
    ImGuiColorEditFlags flags)
{
    bool value_changed = false;

    // 获取当前窗口和ID
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    const ImGuiID id = GenerateID(label);

    // 获取标签文本的宽度和高度
    const ImVec2 label_size = ImGui::CalcTextSize(label);
    const float frame_height = ImGui::GetFrameHeight();
    const float item_height = preview_size.y > frame_height ? preview_size.y : frame_height;

    // 计算布局
    const float spacing = ImGui::GetStyle().ItemInnerSpacing.x;
    const float available_width = ImGui::GetContentRegionAvail().x;
    const float label_width = label_size.x;

    // 开始绘制组件
    const ImVec2 pos = window->DC.CursorPos;
    const ImVec2 total_size(available_width, item_height);

    // 添加整个区域为可交互项
    ImRect bb(pos, ImVec2(pos.x + total_size.x, pos.y + total_size.y));
    ImGui::ItemSize(total_size);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    // 检测交互状态
    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    // 计算标签和预览的位置
    const float centered_y = pos.y + (item_height - label_size.y) * 0.5f;
    const ImVec2 label_pos(pos.x, centered_y);
    const ImVec2 preview_pos(pos.x + available_width - preview_size.x, pos.y + (item_height - preview_size.y) * 0.5f);

    // 绘制标签文本
    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
    window->DrawList->AddText(label_pos, ImGui::GetColorU32(ImGuiCol_Text), label);
    ImGui::PopStyleColor();

    // 绘制预览方块
    const ImU32 color_u32 = ImGui::ColorConvertFloat4ToU32(ImVec4(color[0], color[1], color[2], color[3]));
    const ImVec2 preview_rect_min = preview_pos;
    const ImVec2 preview_rect_max(preview_rect_min.x + preview_size.x, preview_rect_min.y + preview_size.y);

    // 绘制颜色矩形（稍微添加一些圆角）
    window->DrawList->AddRectFilled(preview_rect_min, preview_rect_max, color_u32, 1.0f);

    // 如果颜色很暗，添加一个轮廓以便更好地可见
    if (color[3] < 0.5f || (color[0] < 0.2f && color[1] < 0.2f && color[2] < 0.2f))
    {
        window->DrawList->AddRect(preview_rect_min, preview_rect_max, IM_COL32(100, 100, 100, 150), 2.0f);
    }

    // 如果点击，显示颜色选择器弹出窗口
    if (pressed)
    {
        ImGui::OpenPopup(label);
    }

    // 颜色选择器弹出窗口
    if (ImGui::BeginPopup(label))
    {
        // 添加一个标题
        ImGui::Text("%s", label);
        ImGui::Separator();

        // 添加颜色选择器
        if (ImGui::ColorPicker4("##picker", color))
        {
            value_changed = true;
        }

        ImGui::EndPopup();
    }

    return value_changed;
}

bool NewColorPicker::DrawColorPicker(const char* label, ImVec4& color, const ImVec2& size,
    ImGuiColorEditFlags flags)
{
    bool value_changed = false;

    // 获取ID和窗口
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    const ImGuiID id = GenerateID(label);

    // 计算位置
    const ImVec2 pos = ImGui::GetCursorScreenPos();
    const ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));

    // 添加为可交互项
    ImGui::ItemSize(size);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    // 检测交互
    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    // 绘制预览方块
    const ImU32 color_u32 = ImGui::ColorConvertFloat4ToU32(color);
    window->DrawList->AddRectFilled(bb.Min, bb.Max, color_u32, 3.0f);

    // 如果颜色很暗，添加轮廓
    if (color.w < 0.5f || (color.x < 0.2f && color.y < 0.2f && color.z < 0.2f))
    {
        window->DrawList->AddRect(bb.Min, bb.Max, IM_COL32(100, 100, 100, 150), 3.0f);
    }

    // 显示颜色选择器弹出窗口
    if (pressed)
    {
        ImGui::OpenPopup(label);
    }

    if (ImGui::BeginPopup(label))
    {
        if (ImGui::ColorPicker4("##picker", (float*)&color))
        {
            value_changed = true;
        }
        ImGui::EndPopup();
    }

    return value_changed;
}

bool NewColorPicker::DrawColorPickerFloat4(const char* label, float color[4], const ImVec2& size,
    ImGuiColorEditFlags flags)
{
    bool value_changed = false;

    // 获取ID和窗口
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    const ImGuiID id = GenerateID(label);

    // 计算位置
    const ImVec2 pos = ImGui::GetCursorScreenPos();
    const ImRect bb(pos, ImVec2(pos.x + size.x, pos.y + size.y));

    // 添加为可交互项
    ImGui::ItemSize(size);
    if (!ImGui::ItemAdd(bb, id))
        return false;

    // 检测交互
    bool hovered, held;
    bool pressed = ImGui::ButtonBehavior(bb, id, &hovered, &held);

    // 绘制预览方块
    const ImU32 color_u32 = ImGui::ColorConvertFloat4ToU32(ImVec4(color[0], color[1], color[2], color[3]));
    window->DrawList->AddRectFilled(bb.Min, bb.Max, color_u32, 3.0f);

    // 如果颜色很暗，添加轮廓
    if (color[3] < 0.5f || (color[0] < 0.2f && color[1] < 0.2f && color[2] < 0.2f))
    {
        window->DrawList->AddRect(bb.Min, bb.Max, IM_COL32(100, 100, 100, 150), 3.0f);
    }

    // 显示颜色选择器弹出窗口
    if (pressed)
    {
        ImGui::OpenPopup(label);
    }

    if (ImGui::BeginPopup(label))
    {
        if (ImGui::ColorPicker4("##picker", color, flags))
        {
            value_changed = true;
        }
        ImGui::EndPopup();
    }

    return value_changed;
}