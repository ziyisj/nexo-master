#include "NewPlayerLists.h"
#include "imgui/imgui_settings.h"
#include <imgui/imgui.h>
#include <Utils/Utils.h>
#include <Common/Data.h>

void NewPlayerLists::Render()
{
	return;
	static ImVec2 Size = {800.f, 600.f};
	const ImVec2 Spacing = ImGui::GetStyle().ItemSpacing;
	ImGui::SetNextWindowSize({ Size.x + Spacing.x, Size.y + Spacing.y });
	ImGuiWindowFlags WindowClassFlags = ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoDocking | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize;
	ImGuiWindowClass WindowClass;
	WindowClass.ViewportFlagsOverrideSet = ImGuiViewportFlags_NoAutoMerge | ImGuiViewportFlags_IsPlatformWindow | ImGuiViewportFlags_CanHostOtherWindows;
	ImGui::SetNextWindowClass(&WindowClass);

	if (ImGui::Begin(U8("Player Lists"), nullptr, WindowClassFlags))
	{
		ImVec2 Pos = ImGui::GetWindowPos();
		ImVec2 OPos = Pos;
		Pos.x += Spacing.x / 2;
		Pos.y += Spacing.y / 2;

		ImGui::GetWindowDrawList()->AddRectFilled(Pos, ImVec2(Pos.x + Size.x, Pos.y + Size.y), ImGui::GetColorU32(Style::Window::Background), 8);
		ImGui::GetWindowDrawList()->AddRect(Pos, ImVec2(Pos.x + Size.x, Pos.y + Size.y), ImGui::GetColorU32(Style::Window::OutlineBackground), 8);

		{
			GameData.Global.Data.Entitys.PlayerStates.GetReadLock();
			const auto& PlayerStates = GameData.Global.Data.Entitys.PlayerStates.Map();

			for (const auto& [Key, PlayerState] : *PlayerStates) {
				ImGui::Text(std::format("0x{:0X}", PlayerState.Address).c_str());
			}

			GameData.Global.Data.Entitys.PlayerStates.ReleaseReadLock();
		}

		ImGui::End();
	}
}