#pragma once
#include <imgui/imgui.h>
#include <imgui/imgui_internal.h>
#include "Texture.h"

namespace RenderHelper {
	inline ImU32 GetColorForNumber(int number) {
		switch (number) {
		case 1:  return IM_COL32(247, 248, 19, 255);    // Yellow
		case 2:  return IM_COL32(250, 127, 73, 255);    // Orange
		case 3:  return IM_COL32(90, 198, 227, 255);    // Light Blue
		case 4:  return IM_COL32(90, 189, 77, 255);     // Green
			//case 5:  return IM_COL32(225, 99, 120, 255);    // Pink
		case 5:  return IM_COL32(0, 150, 136, 255);    // Pink
		case 6:  return IM_COL32(115, 129, 168, 255);   // Purple
		case 7:  return IM_COL32(159, 126, 105, 255);   // Indigo
		case 8:  return IM_COL32(255, 134, 200, 255);   // Light Cyan
		case 9:  return IM_COL32(210, 224, 191, 255);   // Pale Green
		case 10: return IM_COL32(154, 52, 142, 255);    // Violet
		case 11: return IM_COL32(98, 146, 158, 255);       // Red
		case 12: return IM_COL32(226, 214, 239, 255);       // Green
		case 13: return IM_COL32(4, 167, 119, 255);       // Blue
		case 14: return IM_COL32(115, 113, 252, 255);     // Yellow
		case 15: return IM_COL32(255, 0, 255, 255);     // Magenta
		case 16: return IM_COL32(93, 46, 140, 255);     // Cyan
		case 17: return IM_COL32(0, 255, 0, 255);       // Lime
		case 18: return IM_COL32(169, 0, 255, 255);       // Blue
		case 19: return IM_COL32(255, 165, 0, 255);     // Orange
		case 20: return IM_COL32(128, 0, 128, 255);     // Purple
		case 21: return IM_COL32(255, 192, 203, 255);   // Pink
		case 22: return IM_COL32(128, 128, 0, 255);     // Olive
		case 23: return IM_COL32(255, 215, 0, 255);     // Gold
		case 24: return IM_COL32(75, 0, 130, 255);      // Indigo
		case 25: return IM_COL32(0, 191, 255, 255);     // Deep Sky Blue
		case 26: return IM_COL32(255, 105, 180, 255);   // Hot Pink
		case 27: return IM_COL32(139, 69, 19, 255);     // Saddle Brown
		case 28: return IM_COL32(220, 20, 60, 255);     // Crimson
		case 29: return IM_COL32(0, 255, 127, 255);     // Spring Green
		case 30: return IM_COL32(0, 250, 154, 255);     // Medium Spring Green
		case 31: return IM_COL32(72, 61, 139, 255);     // Dark Slate Blue
		case 32: return IM_COL32(143, 188, 143, 255);   // Dark Sea Green
		case 33: return IM_COL32(178, 34, 34, 255);     // Firebrick
		case 34: return IM_COL32(153, 50, 204, 255);    // Dark Orchid
		case 35: return IM_COL32(233, 150, 122, 255);   // Dark Salmon
		case 36: return IM_COL32(148, 0, 211, 255);     // Dark Violet
		case 37: return IM_COL32(95, 158, 160, 255);    // Cadet Blue
		case 38: return IM_COL32(127, 255, 212, 255);   // Aquamarine
		case 39: return IM_COL32(218, 112, 214, 255);   // Orchid
		case 40: return IM_COL32(244, 164, 96, 255);    // Sandy Brown
		case 41: return IM_COL32(210, 105, 30, 255);    // Chocolate
		case 42: return IM_COL32(222, 184, 135, 255);   // Burlywood
		case 43: return IM_COL32(255, 228, 181, 255);   // Moccasin
		case 44: return IM_COL32(255, 239, 213, 255);   // Papaya Whip
		case 45: return IM_COL32(175, 238, 238, 255);   // Pale Turquoise
		case 46: return IM_COL32(100, 149, 237, 255);   // Cornflower Blue
		case 47: return IM_COL32(219, 112, 147, 255);   // Pale Violet Red
		case 48: return IM_COL32(173, 216, 230, 255);   // Light Blue
		case 49: return IM_COL32(240, 128, 128, 255);   // Light Coral
		case 50: return IM_COL32(255, 248, 220, 255);   // Cornsilk
		case 51: return IM_COL32(255, 69, 0, 255);       // Red-Orange
		case 52: return IM_COL32(0, 100, 0, 255);        // Dark Green
		case 53: return IM_COL32(65, 105, 225, 255);     // Royal Blue
		case 54: return IM_COL32(0, 206, 209, 255);      // Dark Turquoise
		case 55: return IM_COL32(148, 0, 211, 255);      // Dark Violet
		case 56: return IM_COL32(255, 20, 147, 255);     // Deep Pink
		case 57: return IM_COL32(47, 79, 79, 255);       // Dark Slate Gray
		case 58: return IM_COL32(72, 209, 204, 255);     // Medium Turquoise
		case 59: return IM_COL32(75, 0, 130, 255);       // Indigo
		case 60: return IM_COL32(70, 130, 180, 255);     // Steel Blue
		case 61: return IM_COL32(30, 144, 255, 255);     // Dodger Blue
		case 62: return IM_COL32(34, 139, 34, 255);      // Forest Green
		case 63: return IM_COL32(165, 42, 42, 255);      // Brown
		case 64: return IM_COL32(210, 180, 140, 255);    // Tan
		case 65: return IM_COL32(95, 158, 160, 255);     // Cadet Blue
		case 66: return IM_COL32(127, 255, 0, 255);      // Chartreuse
		case 67: return IM_COL32(64, 224, 208, 255);     // Turquoise
		case 68: return IM_COL32(244, 164, 96, 255);     // Sandy Brown
		case 69: return IM_COL32(255, 215, 0, 255);      // Gold
		case 70: return IM_COL32(218, 165, 32, 255);     // Golden Rod
		case 71: return IM_COL32(210, 105, 30, 255);     // Chocolate
		case 72: return IM_COL32(255, 127, 80, 255);     // Coral
		case 73: return IM_COL32(100, 149, 237, 255);    // Cornflower Blue
		case 74: return IM_COL32(220, 20, 60, 255);      // Crimson
		case 75: return IM_COL32(0, 255, 255, 255);      // Aqua
		case 76: return IM_COL32(0, 0, 139, 255);        // Dark Blue
		case 77: return IM_COL32(184, 134, 11, 255);     // Dark Golden Rod
		case 78: return IM_COL32(169, 169, 169, 255);    // Dark Gray
		case 79: return IM_COL32(0, 100, 0, 255);        // Dark Green
		case 80: return IM_COL32(189, 183, 107, 255);    // Dark Khaki
		case 81: return IM_COL32(139, 0, 139, 255);      // Dark Magenta
		case 82: return IM_COL32(85, 107, 47, 255);      // Dark Olive Green
		case 83: return IM_COL32(255, 140, 0, 255);      // Dark Orange
		case 84: return IM_COL32(153, 50, 204, 255);     // Dark Orchid
		case 85: return IM_COL32(233, 150, 122, 255);    // Dark Salmon
		case 86: return IM_COL32(143, 188, 143, 255);    // Dark Sea Green
		case 87: return IM_COL32(72, 61, 139, 255);      // Dark Slate Blue
		case 88: return IM_COL32(47, 79, 79, 255);       // Dark Slate Gray
		case 89: return IM_COL32(0, 206, 209, 255);      // Dark Turquoise
		case 90: return IM_COL32(148, 0, 211, 255);      // Dark Violet
		case 91: return IM_COL32(255, 20, 147, 255);     // Deep Pink
		case 92: return IM_COL32(0, 191, 255, 255);      // Deep Sky Blue
		case 93: return IM_COL32(105, 105, 105, 255);    // Dim Gray
		case 94: return IM_COL32(30, 144, 255, 255);     // Dodger Blue
		case 95: return IM_COL32(178, 34, 34, 255);      // Fire Brick
		case 96: return IM_COL32(255, 250, 240, 255);    // Floral White
		case 97: return IM_COL32(34, 139, 34, 255);      // Forest Green
		case 98: return IM_COL32(255, 0, 255, 255);      // Fuchsia
		case 99: return IM_COL32(220, 220, 220, 255);    // Gainsboro
		default: return IM_COL32(102, 102, 102, 255);   // Gray
		}
	}

	inline ImColor GetTeamColor(int TeamID)
	{
		switch (TeamID)
		{
		case 0:
			return ImColor(247, 174, 9);
		case 1:
			return ImColor(5, 179, 250);
		case 2:
			return ImColor(124, 4, 251);
		case 3:
			return ImColor(252, 61, 250);
		case 4:
			return ImColor(252, 63, 38);
		}
		return ImColor(0, 229, 255);
	}

	struct PlayerColor {
		ImColor infoUseColor;
		ImColor skeletonUseColor;
		bool isUseTeamNumberColor;
		ImColor teamNumberColor;
	};

	inline void Line(ImVec2 Pos1, ImVec2 Pos2, ImU32 Color, float Thickness)
	{
		auto DrawList = ImGui::GetWindowDrawList();
		auto CursorScreenPos = ImGui::GetCursorScreenPos();
		//CursorScreenPos.x -= 8;
		//CursorScreenPos.y -= 8;

		Pos1 = {
			CursorScreenPos.x + Pos1.x,
			CursorScreenPos.y + Pos1.y
		};

		Pos2 = {
			CursorScreenPos.x + Pos2.x,
			CursorScreenPos.y + Pos2.y
		};

		DrawList->AddLine(Pos1, Pos2, Color, Thickness);
	}

	inline void PolyLine(std::vector<ImVec2> Points, ImU32 Color, float Thickness)
	{
		if (Points.empty()) {
			return;
		}

		auto DrawList = ImGui::GetWindowDrawList();
		//DrawList->PathClear();

		auto CursorScreenPos = ImGui::GetCursorScreenPos();
		//CursorScreenPos.x -= 8;
		//CursorScreenPos.y -= 8;

		for (auto& Point : Points)
		{
			Point.x += CursorScreenPos.x;
			Point.y += CursorScreenPos.y;

			//DrawList->PathLineTo(Point);
		}

		//DrawList->PathStroke(Color, true, Thickness);
		DrawList->AddPolyline(Points.data(), Points.size(), Color, ImDrawFlags_None, Thickness);
	}

	inline void AddImageRotated(ImTextureID tex_id, ImVec2 center, ImVec2 size, float angle, bool isWindowDrawList = true) {
		ImDrawList* DrawList;

		if (!isWindowDrawList)
		{
			DrawList = ImGui::GetBackgroundDrawList();
		}
		else {
			DrawList = ImGui::GetWindowDrawList();
			auto CursorScreenPos = ImGui::GetCursorScreenPos();
			center = {
				CursorScreenPos.x + center.x,
				CursorScreenPos.y + center.y
			};
		}

		float sin_a = sinf(angle), cos_a = cosf(angle);  
		ImVec2 pos[4] = {
			ImRotate(ImVec2(-size.x * 0.5f, -size.y * 0.5f), cos_a, sin_a),
			ImRotate(ImVec2(+size.x * 0.5f, -size.y * 0.5f), cos_a, sin_a),
			ImRotate(ImVec2(+size.x * 0.5f, +size.y * 0.5f), cos_a, sin_a),
			ImRotate(ImVec2(-size.x * 0.5f, +size.y * 0.5f), cos_a, sin_a)
		};

		for (int n = 0; n < 4; n++) {
			pos[n].x += center.x;
			pos[n].y += center.y;
		}

		DrawList->AddImageQuad(tex_id, pos[0], pos[1], pos[2], pos[3]);
	}

	inline void Image(const ImTextureID& Texture, ImVec2 Pos, ImVec2 Size, bool UseColorOverlay = false, const ImU32& Color = IM_COL32(255, 255, 255, 255), bool isWindowDrawList = true)
	{
		ImDrawList* DrawList;

		if (!isWindowDrawList)
		{
			DrawList = ImGui::GetBackgroundDrawList();
		}
		else {
			DrawList = ImGui::GetWindowDrawList();
			auto CursorScreenPos = ImGui::GetCursorScreenPos();

			Pos = {
				CursorScreenPos.x + Pos.x,
				CursorScreenPos.y + Pos.y
			};
		}

		Size = ImVec2(Pos.x + Size.x, Pos.y + Size.y);
		if (UseColorOverlay)
		{
			DrawList->AddImage((void*)Texture, Pos, Size, ImVec2(0, 0), ImVec2(1, 1), Color);
		}
		else {
			DrawList->AddImage((void*)Texture, Pos, Size);
		}
	}

	inline void Circle(ImVec2 Pos, float Radius, ImColor Color, float Thickness, int Num)
	{
		auto DrawList = ImGui::GetForegroundDrawList();
		auto CursorScreenPos = ImGui::GetCursorScreenPos();
		//CursorScreenPos.x -= 8;
		//CursorScreenPos.y -= 8;

		Pos = {
			CursorScreenPos.x + Pos.x,
			CursorScreenPos.y + Pos.y
		};

		DrawList->AddCircle(Pos, Radius, Color, Num, Thickness);
	}

	inline void CircleFilled(ImVec2 Pos, float Radius, ImColor Color, int Num)
	{
		auto DrawList = ImGui::GetForegroundDrawList();
		auto CursorScreenPos = ImGui::GetCursorScreenPos();
		//CursorScreenPos.x -= 8;
		//CursorScreenPos.y -= 8;

		Pos = {
			CursorScreenPos.x + Pos.x,
			CursorScreenPos.y + Pos.y
		};

		DrawList->AddCircleFilled(Pos, Radius, Color, Num);
	}

	inline ImVec2 OSText(const char* Text, ImVec2 Pos, ImColor Color, float FontSize, bool Centered, bool AdjustHeight)
	{
		auto DrawList = ImGui::GetWindowDrawList();
		auto CursorScreenPos = ImGui::GetCursorScreenPos();
		//CursorScreenPos.x -= 8;
		//CursorScreenPos.y -= 8;

		Pos = {
			CursorScreenPos.x + Pos.x,
			CursorScreenPos.y + Pos.y
		};

		if (!Centered && !AdjustHeight)
		{
			const ImVec2 TextSize = ImGui::GetFont()->CalcTextSizeA(FontSize, FLT_MAX, 0.f, Text);
			DrawList->AddText(ImGui::GetFont(), FontSize, {Pos.x, Pos.y}, Color, Text);
			return TextSize;
		}
		else
		{
			float TextWidth = ImGui::GetFont()->CalcTextSizeA(FontSize, FLT_MAX, 0.f, Text).x;
			const ImVec2 TextSize = ImGui::GetFont()->CalcTextSizeA(FontSize, FLT_MAX, 0.f, Text);

			const auto HorizontalOffset = Centered ? TextSize.x / 2 : 0.0f;
			const auto VerticalOffset = AdjustHeight ? TextSize.y : 0.0f;

			ImVec2 Pos_ = { Pos.x - HorizontalOffset, Pos.y - VerticalOffset };
			DrawList->AddText(ImGui::GetFont(), FontSize, Pos_, Color, Text);
			return TextSize;
		}
	}

	inline ImVec2 StrokeText(const char* Text, ImVec2 Pos, ImColor Color, float FontSize, bool Centered = true, bool AdjustHeight = true)
	{
		if (GameData.Config.ESP.Stroke)
		{
			OSText(Text, ImVec2(Pos.x - 1, Pos.y + 1), ImColor(45, 45, 45, 220), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x - 1, Pos.y - 1), ImColor(45, 45, 45, 220), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x + 1, Pos.y + 1), ImColor(45, 45, 45, 220), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x + 1, Pos.y - 1), ImColor(45, 45, 45, 220), FontSize, Centered, AdjustHeight);
		}
		return OSText(Text, Pos, Color, FontSize, Centered, AdjustHeight);
	}

	inline ImVec2 StrokeWhiteText(const char* Text, ImVec2 Pos, ImColor Color, float FontSize, bool Centered = true, bool AdjustHeight = true)
	{
		if (GameData.Config.ESP.Stroke)
		{
			OSText(Text, ImVec2(Pos.x - 1, Pos.y + 1), ImColor(255, 255, 255, 255), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x - 1, Pos.y - 1), ImColor(255, 255, 255, 255), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x + 1, Pos.y + 1), ImColor(255, 255, 255, 255), FontSize, Centered, AdjustHeight);
			OSText(Text, ImVec2(Pos.x + 1, Pos.y - 1), ImColor(255, 255, 255, 255), FontSize, Centered, AdjustHeight);
		}
		return OSText(Text, Pos, Color, FontSize, Centered, AdjustHeight);
	}

	inline void DrawTriangle(ImVec2& p1, ImVec2& p2, ImVec2& p3, ImU32 col, bool filled = false) {
		ImDrawList* draw_list = ImGui::GetWindowDrawList();
		auto CursorScreenPos = ImGui::GetCursorScreenPos();

		p1.x += CursorScreenPos.x;
		p1.y += CursorScreenPos.y;

		p2.x += CursorScreenPos.x;
		p2.y += CursorScreenPos.y;

		p3.x += CursorScreenPos.x;
		p3.y += CursorScreenPos.y;

		if (filled) {
			draw_list->AddTriangleFilled(p1, p2, p3, col);
		}
		else {
			draw_list->AddTriangle(p1, p2, p3, col);
		}
	}

    inline ImVec2 Text(const char* text, ImVec2 pos, ImU32 color = IM_COL32(255, 255, 255, 255), int size = 14, bool centered = true, bool adjustHeight = true, bool isWindowDrawList = true) noexcept
    {
        //const auto textSize = ImGui::CalcTextSize(text);
		const ImVec2 textSize = ImGui::GetFont()->CalcTextSizeA(size, FLT_MAX, 0.f, text);

        const auto horizontalOffset = centered ? textSize.x / 2 : 0.0f;
        const auto verticalOffset = adjustHeight ? textSize.y : 0.0f;

        unsigned int uintColor = color;
        unsigned int alphaOnlyColor = uintColor & IM_COL32_A_MASK;

		ImDrawList* DrawList;
		if (!isWindowDrawList)
		{
			DrawList = ImGui::GetBackgroundDrawList();
		}
		else {
			DrawList = ImGui::GetWindowDrawList();
			auto CursorScreenPos = ImGui::GetCursorScreenPos();
			//CursorScreenPos.x -= 8;
			//CursorScreenPos.y -= 8;

			pos = {
				CursorScreenPos.x + pos.x,
				CursorScreenPos.y + pos.y,
			};
		}

		DrawList->AddText(ImGui::GetFont(), size, { pos.x - horizontalOffset + 1.0f, pos.y - verticalOffset + 1.0f }, uintColor & IM_COL32_A_MASK, text);
		DrawList->AddText(ImGui::GetFont(), size, { pos.x - horizontalOffset, pos.y - verticalOffset }, color, text);

        return textSize;
    }
};