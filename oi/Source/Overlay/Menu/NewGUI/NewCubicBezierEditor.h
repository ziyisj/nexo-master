#pragma once

#include <imgui/imgui.h>
#include <vector>
#include <imgui/imgui_internal.h>
#include "Style.h"

class NewCubicBezierEditor
{
public:
    static bool CubicBezierEditor(const char* label, float control_points[4], ImVec2 size = ImVec2(0, 200));
};