#include "NewCubicBezierEditor.h"

bool NewCubicBezierEditor::CubicBezierEditor(const char* label, float control_points[4], ImVec2 size)
{
    ImGuiWindow* window = ImGui::GetCurrentWindow();
    if (window->SkipItems)
        return false;

    ImGuiContext& g = *GImGui;
    const ImGuiStyle& style = g.Style;
    const ImGuiID id = window->GetID(label);

    bool modified = false;

    // 计算编辑区域
    ImVec2 canvas_size = size;

    // 如果宽度为0，则使用可用宽度
    if (canvas_size.x <= 0.0f) {
        canvas_size.x = ImGui::GetContentRegionAvail().x;
    }

    // 如果高度为0，则使用默认高度
    if (canvas_size.y <= 0.0f) {
        canvas_size.y = 200.0f;
    }

    // 确保最小尺寸
    canvas_size.x = ImMax(canvas_size.x, 50.0f);
    canvas_size.y = ImMax(canvas_size.y, 50.0f);

    ImVec2 canvas_pos = ImGui::GetCursorScreenPos();

    // 视觉参数
    const float visual_radius = 6.0f;       // 视觉上的控制点半径
    const float hit_radius = 15.0f;         // 点击检测半径
    const float hit_radius_sq = hit_radius * hit_radius;
    const float drag_margin = visual_radius * 2.0f; // 拖拽边缘容错范围，至少是视觉半径的两倍

    // 创建一个比实际画布稍大的交互区域，以便在边缘处理点击
    ImVec2 interaction_min = ImVec2(canvas_pos.x - drag_margin, canvas_pos.y - drag_margin);
    ImVec2 interaction_max = ImVec2(canvas_pos.x + canvas_size.x + drag_margin, canvas_pos.y + canvas_size.y + drag_margin);
    ImVec2 interaction_size = ImVec2(canvas_size.x + 2 * drag_margin, canvas_size.y + 2 * drag_margin);

    // 使用一个更大的不可见按钮来捕获边缘外的交互
    ImGui::SetCursorScreenPos(ImVec2(canvas_pos.x - drag_margin, canvas_pos.y - drag_margin));
    ImGui::InvisibleButton(label, interaction_size);
    bool is_hovered = ImGui::IsItemHovered();
    bool is_active = ImGui::IsItemActive();

    // 重置光标位置
    ImGui::SetCursorScreenPos(ImVec2(canvas_pos.x, canvas_pos.y + canvas_size.y));

    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    draw_list->AddRectFilled(canvas_pos, ImVec2(canvas_pos.x + canvas_size.x, canvas_pos.y + canvas_size.y),
        NewGUIStyle::Window::ChildBackground, NewGUIStyle::Global::Rounding);
    /* draw_list->AddRect(canvas_pos, ImVec2(canvas_pos.x + canvas_size.x, canvas_pos.y + canvas_size.y),
         NewGUIStyle::Global::Border, NewGUIStyle::Global::Rounding);*/

         // 绘制网格点而不是线
    const float grid_step_x = canvas_size.x / 10.0f;
    const float grid_step_y = canvas_size.y / 4.0f;
    const float dot_size = 1.5f; // 点的大小
    const ImU32 dot_color = IM_COL32(100, 100, 100, 200); // 点的颜色

    // 绘制网格点
    for (float x = grid_step_x; x < canvas_size.x; x += grid_step_x) {
        for (float y = grid_step_y; y < canvas_size.y; y += grid_step_y) {
            draw_list->AddCircleFilled(
                ImVec2(canvas_pos.x + x, canvas_pos.y + y),
                dot_size,
                dot_color
            );
        }
    }

    // 固定点
    ImVec2 p0 = ImVec2(canvas_pos.x, canvas_pos.y + canvas_size.y); // (0,0) 在左下角
    ImVec2 p3 = ImVec2(canvas_pos.x + canvas_size.x, canvas_pos.y); // (1,1) 在右上角

    // 控制点 (转换为屏幕坐标)
    ImVec2 p1 = ImVec2(
        canvas_pos.x + control_points[0] * canvas_size.x,
        canvas_pos.y + canvas_size.y - control_points[1] * canvas_size.y
    );
    ImVec2 p2 = ImVec2(
        canvas_pos.x + control_points[2] * canvas_size.x,
        canvas_pos.y + canvas_size.y - control_points[3] * canvas_size.y
    );

    // 处理拖拽控制点
    ImVec2 mouse_pos = ImGui::GetIO().MousePos;
    static int dragging_point = -1;
    static ImGuiID active_id = 0;

    // 检查是否点击了控制点 - 现在可以检测边缘外的点击
    if (is_hovered && ImGui::IsMouseClicked(0)) {
        // 优先检查第二个控制点（绘制在上层）
        if (ImLengthSqr(p2 - mouse_pos) < hit_radius_sq) {
            dragging_point = 1;
            active_id = id;
            ImGui::SetActiveID(id, window);
        }
        // 然后检查第一个控制点
        else if (ImLengthSqr(p1 - mouse_pos) < hit_radius_sq) {
            dragging_point = 0;
            active_id = id;
            ImGui::SetActiveID(id, window);
        }
    }

    // 拖拽控制点 - 改进边缘处理
    if (ImGui::IsMouseDown(0) && dragging_point >= 0 && (active_id == id || g.ActiveId == id)) {
        // 计算控制点的实际位置（限制在画布内）
        ImVec2 clamped_pos;
        clamped_pos.x = ImClamp(mouse_pos.x, canvas_pos.x, canvas_pos.x + canvas_size.x);
        clamped_pos.y = ImClamp(mouse_pos.y, canvas_pos.y, canvas_pos.y + canvas_size.y);

        if (dragging_point == 0) {
            // 更新第一个控制点
            control_points[0] = (clamped_pos.x - canvas_pos.x) / canvas_size.x;
            control_points[1] = 1.0f - (clamped_pos.y - canvas_pos.y) / canvas_size.y;
            p1 = clamped_pos;
            modified = true;
        }
        else if (dragging_point == 1) {
            // 更新第二个控制点
            control_points[2] = (clamped_pos.x - canvas_pos.x) / canvas_size.x;
            control_points[3] = 1.0f - (clamped_pos.y - canvas_pos.y) / canvas_size.y;
            p2 = clamped_pos;
            modified = true;
        }
    }

    // 释放鼠标时重置拖拽状态
    if (ImGui::IsMouseReleased(0) && active_id == id) {
        dragging_point = -1;
        active_id = 0;
        ImGui::ClearActiveID();
    }

    // 绘制控制线
    draw_list->AddLine(p0, p1, IM_COL32(100, 100, 100, 200), 1.0f);
    draw_list->AddLine(p1, p2, IM_COL32(100, 100, 100, 200), 1.0f);
    draw_list->AddLine(p2, p3, IM_COL32(100, 100, 100, 200), 1.0f);

    // 绘制贝塞尔曲线
    const int segments = 50;
    std::vector<ImVec2> curve_points;

    for (int i = 0; i <= segments; i++) {
        float t = (float)i / (float)segments;
        float u = 1.0f - t;
        float w1 = u * u * u;
        float w2 = 3 * u * u * t;
        float w3 = 3 * u * t * t;
        float w4 = t * t * t;

        ImVec2 point = ImVec2(
            w1 * p0.x + w2 * p1.x + w3 * p2.x + w4 * p3.x,
            w1 * p0.y + w2 * p1.y + w3 * p2.y + w4 * p3.y
        );

        curve_points.push_back(point);
    }

    for (size_t i = 0; i < curve_points.size() - 1; i++) {
        draw_list->AddLine(curve_points[i], curve_points[i + 1], IM_COL32(255, 255, 255, 200), 3.0f);
    }

    // 绘制控制点
    draw_list->AddCircleFilled(p1, visual_radius, IM_COL32(235, 235, 235, 255));
    //draw_list->AddCircle(p1, visual_radius, IM_COL32(0, 0, 0, 255));

    draw_list->AddCircleFilled(p2, visual_radius, IM_COL32(235, 235, 235, 255));
    //draw_list->AddCircle(p2, visual_radius, IM_COL32(0, 0, 0, 255));

    return modified;
}
