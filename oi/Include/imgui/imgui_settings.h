#pragma once

#include "imgui.h"
#include "imgui_internal.h"

#include <Common/Data.h>

namespace Style
{
	// inline ImVec4 AccentColor = ImVec4(
	// 	GameData.Config.Theme.Active[0],
	// 	GameData.Config.Theme.Active[1],
	// 	GameData.Config.Theme.Active[2],
	// 	1.f
	// );
	inline ImVec4 AccentColor = ImVec4{
		1.f,
		1.f,
		1.f,
		1.f
	};
	inline ImVec4 AccentLowColor = ImColor(245, 245, 255, 255);
	inline ImVec4 AccentLow = ImColor(245, 245, 255, 255);

	inline ImVec4 AccentTextColor = ImColor(245, 245, 255);

	inline ImVec4 BlackTextColor = ImColor(10, 10, 10);

	inline ImVec4 WhiteTextColor = ImColor(255, 255, 255);

	inline ImVec4 AccentTextLowColor = ImColor(150, 150, 150, 255);

	inline ImVec4 Notify = ImColor(43, 48, 54);

	inline float Padding = 18;

	namespace Text
	{
		inline ImVec4 TextHov = ImColor(200, 200, 200);
		inline ImVec4 Text = ImColor(150, 150, 150);
		inline ImVec4 Text2 = ImColor(90, 93, 100, 0);
		inline ImVec4 HideText = ImColor(43, 48, 54, 255);
	}

	namespace Window
	{
		inline ImVec2 Size = ImVec2(1160, 750);
		//inline ImVec2 PlayerListsSize = ImVec2(1120, 473);
		inline ImVec2 PlayerListsSize = ImVec2(1160, 600);
		//inline ImVec4 Background = ImColor(18, 18, 18, 250);
		inline ImVec4 Background = ImColor(22, 22, 22, 253);
		inline ImVec4 BaseBackground = ImColor(26, 26, 26, 255);
		inline ImVec4 OutlineBackground = ImColor(45, 45, 45, 255);
		/*inline ImVec4 Background = ImColor(25, 23, 28, 250);
		inline ImVec4 OutlineBackground = ImColor(25, 23, 28, 255);*/
		inline float Rounding = 10;
	}

	namespace Keybind
	{
		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 3;
	}

	namespace Tab
	{
		inline ImVec2 Size = ImVec2(150, 32);
		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		//inline ImVec4 Background = ImColor(0, 87, 255, 255);
		inline float Rounding = 8.f;
	}

	namespace SubTab
	{
		inline ImVec2 Size = ImVec2(25, 25);
		//inline ImVec4 Background = ImColor(255, 255, 255, 255);
		inline ImVec4 Background = ImVec4(		
            1.f,
			1.f,
			1.f,
			1.f
		);
		inline ImVec4 DefBackground = ImColor(28, 28, 28, 250);
		inline ImVec4 BaseBackground = ImColor(34, 34, 34, 250);
		inline float Rounding = 5;
		inline ImVec4 AccentTextColor = ImColor(16, 16, 16, 255);
	}

	namespace Layout
	{
		inline ImVec4 Background = ImColor(25, 25, 25, 255);
	}

	namespace Input
	{
		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 4;
	}

	namespace Child
	{
		inline ImVec4 Background = ImColor(28, 28, 28, 250);
		inline ImVec4 BaseBackground = ImColor(32, 32, 32, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);;
		inline float Rounding = 6;
	}

	namespace Checkbox
	{
		inline ImVec4 CircleInactive = ImColor(35, 35, 35, 255);
		inline ImVec4 CircleInactiveType = ImColor(230, 230, 230, 70);

		inline ImVec4 Background = ImColor(32, 32, 32, 255);
		inline ImVec4 BackgroundType = ImColor(230, 230, 230, 30);
		inline ImVec4 BaseBackground = ImColor(70, 70, 70, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 2;
	}

	namespace Slider
	{
		inline ImVec4 CircleInactive = ImColor(230, 230, 230, 255);

		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 30;
	}

	namespace Combo
	{
		/*inline ImVec4 Background = ImColor(27, 29, 32, 255);
		inline ImVec4 OutlineBackground = ImColor(30, 32, 36, 255);*/
		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 3;
	}

	namespace Picker
	{
		/*inline ImVec4 Background = ImColor(27, 29, 32, 255);
		inline ImVec4 OutlineBackground = ImColor(30, 32, 36, 255);*/
		inline ImVec4 Background = ImColor(35, 35, 35, 255);
		inline ImVec4 OutlineBackground = ImColor(0, 0, 0, 0);
		inline float Rounding = 2;
	}

}