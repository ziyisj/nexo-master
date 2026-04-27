#pragma once

#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include "Style.h"

class NewSelect
{
public:
    static bool Combo(const char* label, int* current_item, const char* const items[], int items_count, float spacing = NewGUIStyle::Checkbox::DefaultSpacing);
};