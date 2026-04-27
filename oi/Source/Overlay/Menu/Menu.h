#pragma once

#include <string>
#include <vector>
#include <Windows.h>

#include <imgui/imgui.h>
#include <imgui/imgui_settings.h>
#include <imgui/imgui_internal.h>

#include <Common/Data.h>
#include <Common/Constant.h>
#include <Common/Config.h>
#include <Utils/Utils.h>
#include <Utils/XorString.h>
#include <Utils/I18N.h>
#include <Common/ItemTranslate.h>

#include <Overlay/Menu/NewGUI/Style.h>
#include <Overlay/Menu/NewGUI/NewTab.h>
#include <Overlay/Menu/NewGUI/NewSelectTab.h>
#include <Overlay/Menu/NewGUI/NewColorPicker.h>
#include <Overlay/Menu/NewGUI/NewCubicBezierEditor.h>
#include <Overlay/Menu/NewGUI/NewSelect.h>
#include <Overlay/Menu/NewGUI/NewMoveBox.h>

#include <Overlay/Texture.h>

#include <Overlay/Menu/NewAuth.h>
#include <Overlay/Menu/NewBox.h>
#include <Overlay/Menu/NewHome.h>
#include <Overlay/Menu/NewESP.h>
#include <Overlay/Menu/NewAimBot.h>
#include <Overlay/Menu/NewRadar.h>
#include <Overlay/Menu/NewContainer.h> //引入这个就会导致索引失效
#include <Overlay/Menu/NewItem.h> //引入这个就会导致索引失效

namespace Menu
{
    static inline void DrawMain(const ImFontAtlas* FontAtlas)
    {
        static bool bApplyColor = false;
        if (!bApplyColor) {
            NewGUIStyle::Global::Active = ImGui::ColorConvertFloat4ToU32(
                ImVec4(
                    GameData.Config.Theme.Active[0],
                    GameData.Config.Theme.Active[1],
                    GameData.Config.Theme.Active[2], 
                    1.f
                )
            );
            NewGUIStyle::Tab::Background = NewGUIStyle::Global::Active;
            NewGUIStyle::Checkbox::Active = NewGUIStyle::Global::Active;
            NewGUIStyle::Slider::Active = NewGUIStyle::Global::Active;
            NewGUIStyle::Slider::Active = NewGUIStyle::Global::Active;

            {
                Style::AccentColor = ImVec4{
                    GameData.Config.Theme.Active[0],
                    GameData.Config.Theme.Active[1],
                    GameData.Config.Theme.Active[2],
                    1.f
                };
                Style::SubTab::Background = Style::AccentColor;
            }
            bApplyColor = true;
        }

        if (GameData.Config.Window.Setting)
        {
            ImGui::PushFont(FontAtlas->Fonts[2]);
            const ImVec2 Spacing = ImGui::GetStyle().ItemSpacing;
            ImGuiWindowFlags WindowClassFlags = ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoDocking | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize;
            ImGuiWindowClass WindowClass;
            WindowClass.ViewportFlagsOverrideSet = ImGuiViewportFlags_NoAutoMerge | ImGuiViewportFlags_IsPlatformWindow | ImGuiViewportFlags_CanHostOtherWindows;
            ImGui::SetNextWindowClass(&WindowClass);
            ImGui::SetNextWindowSize({ Style::Window::Size.x + Spacing.x, Style::Window::Size.y + Spacing.y });
            //ImGui::SetNextWindowFocus();
            ImGui::Begin(XorStr("Setting"), &GameData.Config.Window.Setting, WindowClassFlags);
            {
                ImVec2 Pos = ImGui::GetWindowPos();
                ImVec2 OPos = Pos;
                Pos.x += Spacing.x / 2;
                Pos.y += Spacing.y / 2;

                ImGui::GetWindowDrawList()->AddRectFilled(Pos, ImVec2(Pos.x + Style::Window::Size.x, Pos.y + Style::Window::Size.y), ImGui::GetColorU32(Style::Window::Background), Style::Window::Rounding);
                ImGui::GetWindowDrawList()->AddRect(Pos, ImVec2(Pos.x + Style::Window::Size.x, Pos.y + Style::Window::Size.y), ImGui::GetColorU32(Style::Window::OutlineBackground), Style::Window::Rounding);

                if (GameData.Auth.bLogin) {
                    ImGui::SetCursorPos(ImVec2(NewGUIStyle::Window::Padding, NewGUIStyle::Window::Padding));
                    const std::string IconUrl = "Engine/Resource/Logo.png";

                    //ImGui::Image(GImGuiTextureMap[IconUrl].Texture, ImVec2(28, 28));
                    ImGui::Image(GImGuiTextureMap[IconUrl].Texture, ImVec2(28, 28), ImVec2(0, 0), ImVec2(1, 1), ImVec4(GameData.Config.Theme.Active[0], GameData.Config.Theme.Active[1], GameData.Config.Theme.Active[2], GameData.Config.Theme.Active[3]));
                    
                    ImGui::SameLine();
                    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5.f);
                    ImGui::Text(XorStr("NEXO TEAM"));

                    ImGui::SameLine();
                    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(3, 1));
                    ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                    ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5.f);
                    //ImGui::Button(I18N::T(XorStr("Delta Force")).c_str(), ImVec2(0, 17));
                    auto Version = "China Game";
                    if (GameData.Config.Window.Server == 1) Version = "Global Game";
                    if (GameData.Config.Window.Server == 2) Version = "Garena Game";
                    ImGui::Button(Version, ImVec2(0, 17));
                    ImGui::PopStyleColor(4);
                    ImGui::PopStyleVar(1);
                    ImGui::SameLine();
                }

                if (GameData.CurrentLanguage == Language::Chinese || GameData.CurrentLanguage == Language::ChineseTraditional)
                {
                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 205.f);
                }
                else {
                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 135.f);
                }

                if (GameData.Config.Window.IsGarena)
                {
                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 8.f);
                }

                static int selectedTab = 5;
                std::string tabLabels[] = {
                     I18N::T(XorStr("VISUAL")),
                     I18N::T(XorStr("AIMBOT")),
                     I18N::T(XorStr("CONTAINER")),
                     I18N::T(XorStr("ITEM")),
                     I18N::T(XorStr("RADAR")),
                     I18N::T(XorStr("SETTING"))
                };

                const char* tabLabelsc[6];
                for (int i = 0; i < 6; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                if (GameData.Auth.bLogin) {
                    selectedTab = NewTab::DrawTabs(tabLabelsc, 6, selectedTab);

                    ImGui::SameLine();
                    if (GameData.CurrentLanguage == Language::Chinese || GameData.CurrentLanguage == Language::ChineseTraditional)
                    {
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 290.f);
                    }
                    else {
                        ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 175.f);
                    }

                    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 0));
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30.f);

                    ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                    if (ImGui::Button(I18N::T(XorStr("Load Config")).c_str(), ImVec2(0, 28))) {
                        Config::Load();
                    }
                    ImGui::PopStyleColor(4);

                    ImGui::SameLine();
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                    if (ImGui::Button(I18N::T(XorStr("Save")).c_str(), ImVec2(0, 28)))
                    {
                        Config::Save();
                    }
                    ImGui::PopStyleColor(2);

                    ImGui::PopStyleVar(2);
                }

                ImGui::SetCursorPosX(NewGUIStyle::Window::Padding);
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + NewGUIStyle::Window::Padding - 10.f);

                if (GameData.Auth.bLogin) {
                    switch (selectedTab) {
                    case 0:
                        NewESP::Render();
                        break;
                    case 1:
                        NewAimBot::Render();
                        break;
                    case 2:
                        NewContainer::Render();
                        break;
                    case 3:
                        NewItem::Render();
                        break;
                    case 4:
                        NewRadar::Render();
                        break;
                    case 5:
                        NewHome::Render();
                        break;
                    }
                }
                else {
                    selectedTab = 5;
                    NewAuth::Render();
                }
            }

            {
                ImGui::SetCursorPosX(0);
                ImGui::SetCursorPosY(715);
                ImVec2 Pos = ImGui::GetWindowPos();
                Pos.x += Spacing.x / 2;
                Pos.y += Spacing.y / 2;
                Pos.x += 1;
                Pos.y -= 1;
                Pos.y += ImGui::GetCursorPosY();
                ImGui::GetWindowDrawList()->AddRectFilled(Pos, ImVec2(Pos.x - 2 + Style::Window::Size.x, Pos.y + 35), ImGui::GetColorU32(Style::Window::BaseBackground), Style::Window::Rounding);
                Pos.y -= 5;
                ImGui::GetWindowDrawList()->AddRectFilled(Pos, ImVec2(Pos.x - 2 + Style::Window::Size.x, Pos.y + 35), ImGui::GetColorU32(Style::Window::BaseBackground), 0);
            }

            ImGui::SetCursorPosX(NewGUIStyle::Window::Padding);
            ImGui::SetCursorPosY(725);
            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
            ImGui::Text(std::format("Version: {}", GameData.Auth.Version).c_str());
            ImGui::PopStyleColor();
            ImGui::SameLine();
            ImGui::SetCursorPosY(725);
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 385.f - 5.f);

            {
                ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));

                if (GameData.CurrentLanguage == Language::ChineseTraditional) {
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::White));
                }

                if (ImGui::Button(I18N::T(U8("繁体")).c_str(), ImVec2(0, 17)))
                {
                    Config::Save();
                    GameData.CurrentLanguage = Language::ChineseTraditional;
                }

                if (GameData.CurrentLanguage == Language::ChineseTraditional) {
                    ImGui::PopStyleColor(1);
                }

                ImGui::SameLine();
                ImGui::GetWindowDrawList()->AddLine(ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 6), ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 12), ImGui::GetColorU32(ImGuiCol_Separator), 1.0f);
                ImGui::SameLine();
                ImGui::Dummy(ImVec2(4, 0));
                ImGui::SameLine();

                if (GameData.CurrentLanguage == Language::Chinese) {
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::White));
                }

                if (ImGui::Button(I18N::T(U8("简体")).c_str(), ImVec2(0, 17)))
                {
                    Config::Save();
                    GameData.CurrentLanguage = Language::Chinese;
                }

                if (GameData.CurrentLanguage == Language::Chinese) {
                    ImGui::PopStyleColor(1);
                }

                ImGui::SameLine();
                ImGui::GetWindowDrawList()->AddLine(ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 6), ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 12), ImGui::GetColorU32(ImGuiCol_Separator), 1.0f);
                ImGui::SameLine();
                ImGui::Dummy(ImVec2(4, 0));
                ImGui::SameLine();

                if (GameData.CurrentLanguage == Language::English) {
                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::White));
                }

                if (ImGui::Button(I18N::T(XorStr("English")).c_str(), ImVec2(0, 17)))
                {
                    Config::Save();
                    GameData.CurrentLanguage = Language::English;
                }

                if (GameData.CurrentLanguage == Language::English) {
                    ImGui::PopStyleColor(1);
                }

                ImGui::PopStyleColor(4);
                ImGui::PopStyleVar(1);
            }

            ImGui::SetCursorPosY(720);
            ImGui::SameLine();
            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
            if (GameData.Auth.bLogin) ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 283.f);
            if (!GameData.Auth.bLogin) ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 405.f);
            ImGui::Text(GameData.Auth.bLogin ? std::format("{}: {}", I18N::T(XorStr("Expires")), GameData.Auth.Ex).c_str() : "No Login");
            ImGui::PopStyleColor();

            {
                ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(0, 0));
                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Transparent));
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));

                ImGui::SameLine();
                ImGui::GetWindowDrawList()->AddLine(ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 6), ImVec2(ImGui::GetCursorScreenPos().x, ImGui::GetCursorScreenPos().y + 12), ImGui::GetColorU32(ImGuiCol_Separator), 1.0f);
                ImGui::SameLine();
                ImGui::Dummy(ImVec2(4, 0));
                ImGui::SameLine();

                if (ImGui::Button(I18N::T(XorStr("Exit")).c_str(), ImVec2(0, 17)))
                {
                    GameData.Config.Overlay.Enable = false;
                    Sleep(100);
                    exit(1);
                }

                ImGui::PopStyleColor(4);
                ImGui::PopStyleVar(1);
            }

            ImGui::End();
            ImGui::PopFont();
        }
    }
};