#pragma once

namespace NewESP
{
    static inline void RenderESP(PlayerConfig& Config, int& SubSelectedTab)
    {
        static float AddX = 7.f;
        ImGui::BeginChild("O", I18N::T(XorStr("Show")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + AddX, 532));
        {
            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Show Player")).c_str(), &Config.Enable);
            if (SubSelectedTab == 1) ImGui::NewCheckbox(I18N::T(XorStr("Show AI")).c_str(), &Config.Enable);
            if (SubSelectedTab == 1) {
                ImGui::NewCheckbox(I18N::T(XorStr("Smart Display")).c_str(), &Config.bFighting);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Shows when the AI ​​may be a threat to you, otherwise hides the AI.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
            }
            if (SubSelectedTab == 2) ImGui::NewCheckbox(I18N::T(XorStr("Show BOSS")).c_str(), &Config.Enable);
            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Team Number")).c_str(), &Config.TeamNumber);
            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Hero Avatar")).c_str(), &Config.ShowHeroAvatar);
            if (SubSelectedTab == 1) ImGui::NewCheckbox(I18N::T(XorStr("AI Mark")).c_str(), &Config.TeamNumber);
            if (SubSelectedTab == 2) ImGui::NewCheckbox(I18N::T(XorStr("BOSS Mark")).c_str(), &Config.TeamNumber);

            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Hero Name")).c_str(), &Config.HeroName);
            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Player Name")).c_str(), &Config.Name);
            if (SubSelectedTab == 1) ImGui::NewCheckbox(I18N::T(XorStr("AI Name")).c_str(), &Config.Name);
            if (SubSelectedTab == 2) ImGui::NewCheckbox(I18N::T(XorStr("BOSS Name")).c_str(), &Config.Name);

            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Kill Players")).c_str(), &Config.KillCount);
            if (SubSelectedTab == 0) ImGui::NewCheckbox(I18N::T(XorStr("Equipment Price")).c_str(), &Config.EquipmentPrice);

            ImGui::NewCheckbox(I18N::T(XorStr("Show Distance")).c_str(), &Config.Distance);
            ImGui::NewCheckbox(I18N::T(XorStr("Show Skeleton")).c_str(), &Config.Skeleton);
            ImGui::NewCheckbox(I18N::T(XorStr("Show Head")).c_str(), &Config.ShowHead);
            //ImGui::NewCheckbox(I18N::T(XorStr("Float Head")).c_str(), &Config.FloatHead);
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("If you feel that the head bones of distant players are too large, you can turn this feature off.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }
            ImGui::NewCheckbox(I18N::T(XorStr("Hide Body")).c_str(), &Config.HideBody);

            ImGui::NewCheckbox(I18N::T(XorStr("Show Health")).c_str(), &Config.Health);
            ImGui::NewCheckbox(I18N::T(XorStr("Current Weapon")).c_str(), &Config.Weapon);
            ImGui::NewCheckbox(I18N::T(XorStr("Helmet Armor")).c_str(), &Config.HelmetArmor);

            ImGui::NewCheckbox(I18N::T(XorStr("Aiming Ray")).c_str(), &Config.AimingRay);
            ImGui::NewCheckbox(I18N::T(XorStr("Bottom Info Color")).c_str(), &Config.BottomInfoColor);

            ImGui::Separator();

            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Overhead")),
                    I18N::T(XorStr("Underfoot")),
                };
                const char* tabLabelsc[2];
                for (int i = 0; i < 2; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Distance Render")).c_str(), tabLabelsc, 2, Config.DistanceRender);
            }

            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Top")),
                    I18N::T(XorStr("Bottom")),
                    I18N::T(XorStr("Left")),
                    I18N::T(XorStr("Right")),
                };
                const char* tabLabelsc[4];
                for (int i = 0; i < 4; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Health Render")).c_str(), tabLabelsc, 4, Config.HealthRender);
            }

        }
        ImGui::EndChild();

        ImGui::SameLine();
        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
        ImGui::BeginChild("O", I18N::T(XorStr("Adjustment")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + AddX, 532));
        {
            ImGui::SliderInt(I18N::T(XorStr("Max Distance")).c_str(), &Config.MaxDistance, 0, 1000, "%d", 0, "M");
            ImGui::SliderInt(I18N::T(XorStr("Info Distance")).c_str(), &Config.InfoMaxDistance, 0, 1000, "%d", 0, "M");
            ImGui::SliderInt(I18N::T(XorStr("Show Size")).c_str(), &Config.FontSize, 5, 30, "%d", 0, "PX");
            ImGui::SliderFloat(I18N::T(XorStr("Skeleton Width")).c_str(), &Config.SkeletonWidth, 0, 3, "%.2f", 0, "PX");
            ImGui::SliderFloat(I18N::T(XorStr("Aiming Ray Width")).c_str(), &Config.AimingRayWidth, 0, 3, "%.2f", 0, "PX");
            ImGui::SliderFloat(I18N::T(XorStr("Health Width")).c_str(), &Config.HealthWidth, 10, 500, "%.2f", 0, "PX");
            ImGui::SliderInt(I18N::T(XorStr("Health Rounded")).c_str(), &Config.HealthRounded, 0, 5, "%d", 0, "PX");

            ImGui::Separator();


            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Icon")),
                    I18N::T(XorStr("Text")),
                    I18N::T(XorStr("All")),
                };
                const char* tabLabelsc[3];
                for (int i = 0; i < 3; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Team Number Render")).c_str(), tabLabelsc, 3, Config.TeamNumberRender);
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Helmet Armor Render")).c_str(), tabLabelsc, 3, Config.HelmetArmorRender);
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Current Weapon Render")).c_str(), tabLabelsc, 3, Config.WeaponRender);
                {
                    std::string tabLabels[] = {
                        I18N::T(XorStr("Top")),
                        I18N::T(XorStr("Bottom"))
                    };
                    const char* tabLabelsc[2];
                    for (int i = 0; i < 2; ++i) {
                        tabLabelsc[i] = tabLabels[i].c_str();
                    }
                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Weapon Render")).c_str(), tabLabelsc, 2, Config.WeaponRenderPos);
                }
            }
        }
        ImGui::EndChild();

        ImGui::SameLine();
        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
        ImGui::BeginChild("O", I18N::T(XorStr("Color")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + AddX, 532));
        {
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Default Info Color")).c_str(), Config.DefaultInfoColor);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Default Skeleton Color")).c_str(), Config.DefaultSkeletonColor);
            ImGui::Separator();
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Visible Info Color")).c_str(), Config.VisibleInfoColor);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Visible Skeleton Color")).c_str(), Config.VisibleSkeletonColor);
            ImGui::Separator();
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Impending Death Info Color")).c_str(), Config.ImpendingDeathInfoColor);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Impending Death Skeleton Color")).c_str(), Config.ImpendingDeathSkeletonColor);
            ImGui::Separator();
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Weapon Info Color")).c_str(), Config.WeaponInfoColor);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Aiming Ray Color")).c_str(), Config.AimingRayColor);
            ImGui::Separator();
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv1 Color")).c_str(), Config.ArmorLv1Color);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv2 Color")).c_str(), Config.ArmorLv2Color);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv3 Color")).c_str(), Config.ArmorLv3Color);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv4 Color")).c_str(), Config.ArmorLv4Color);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv5 Color")).c_str(), Config.ArmorLv5Color);
            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Armor Lv6 Color")).c_str(), Config.ArmorLv6Color);
        }
        ImGui::EndChild();
    }

    static inline void Render()
    {
        ImGui::SetNextWindowSize({ Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83 });
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("ESPRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            ImGui::BeginChild("O", I18N::T(XorStr("World Settings")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625), false, 0, false);
            {
                static int selectedTab = 0;
                std::string tabLabels[] = {
                     I18N::T(XorStr("Location")),
                     I18N::T(XorStr("Throws")),
                     I18N::T(XorStr("Battle Mode")),
                     I18N::T(XorStr("Early Warning")),
                     I18N::T(XorStr("Main Radar")),
                     I18N::T(XorStr("Mini Radar")),
                     I18N::T(XorStr("Team Color")),
                     I18N::T(XorStr("Key Doors")),
                };
                const char* tabLabelsc[8];
                for (int i = 0; i < 8; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                static int SubSelectedTab = 0;
                for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++) {
                    if (ImGui::SubTab(i == SubSelectedTab, tabLabelsc[i], Style::SubTab::Size, true)) SubSelectedTab = i;
                    if ((i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1))
                    {
                        if (GameData.CurrentLanguage == Language::English && i == 1) continue;
                        if (GameData.CurrentLanguage != Language::English && i == 2) continue;
                        if (GameData.CurrentLanguage == Language::English && i == 3) continue;
                        if (i == 5) continue;
                        ImGui::SameLine();
                    }
                }

                ImGui::Separator();

                if (SubSelectedTab == 0)
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Coded Lock")).c_str(), &GameData.Config.CodedLock.Enable);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Pwd")).c_str(), &GameData.Config.CodedLock.PWD);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Coded Lock Info Color")).c_str(), GameData.Config.CodedLock.InfoColor);

                    ImGui::SliderInt(I18N::T(XorStr("Coded Lock Max Distance")).c_str(), &GameData.Config.CodedLock.MaxDistance, 0, 1000, "%d", 0, "M", false);

                    ImGui::Separator();

                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Exit Trigger")).c_str(), &GameData.Config.CodedLock.EnableExitTrigger);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Exit Trigger Color")).c_str(), GameData.Config.CodedLock.ExitTriggerInfoColor);
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Player Exit")).c_str(), &GameData.Config.CodedLock.EnablePlayerExit);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Player Exit Color")).c_str(), GameData.Config.CodedLock.PlayerExitInfoColor);
                    ImGui::SliderInt(I18N::T(XorStr("Show Max Distance")).c_str(), &GameData.Config.CodedLock.OtherMaxDistance, 0, 1000, "%d", 0, "M", false);

                    ImGui::Separator();


                    ImGui::Keybind(I18N::T(XorStr("Enable Hotkeys")).c_str(), &GameData.Config.CodedLock.EnableKey, true);
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Name")).c_str(), &GameData.Config.CodedLock.Name);
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Distance")).c_str(), &GameData.Config.CodedLock.Distance);
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Icon")).c_str(), &GameData.Config.CodedLock.Icon);
                    ImGui::SliderInt(I18N::T(XorStr("Show Icon Size")).c_str(), &GameData.Config.CodedLock.InfoIconSize, 5, 30, "%d", 0, "PX", false);
                    ImGui::SliderInt(I18N::T(XorStr("Show Font Size")).c_str(), &GameData.Config.CodedLock.InfoFontSize, 5, 30, "%d", 0, "PX", false);
                }

                if (SubSelectedTab == 1)
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Throws")).c_str(), &GameData.Config.Throw.Enable);
                    ImGui::SliderInt(I18N::T(XorStr("Throws Max Distance")).c_str(), &GameData.Config.Throw.MaxDistance, 0, 1000, "%d", 0, "M", false);
                    ImGui::SliderInt(I18N::T(XorStr("Throws Font Size")).c_str(), &GameData.Config.Throw.InfoFontSize, 5, 30, "%d", 0, "PX", false);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Throws Default Color")).c_str(), GameData.Config.Throw.OffInfoColor);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Throws Visible Color")).c_str(), GameData.Config.Throw.InfoColor);

                    ImGui::Separator();

                    for (auto& Enable : GameData.Config.Throw.Throws)
                    {
                        ImGui::NewCheckbox(Utils::StringToUTF8(I18N::T(Enable.first, true)).c_str(), &Enable.second);
                    }
                }

                if (SubSelectedTab == 2)
                {
                    ImGui::Keybind(I18N::T(XorStr("Battle Mode Hotkeys")).c_str(), &GameData.Config.ESP.BattleModeKey, true);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Container")).c_str(), &GameData.Config.ESP.HideContainer);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Box")).c_str(), &GameData.Config.ESP.HideBox);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Item")).c_str(), &GameData.Config.ESP.HideItem);
                    ImGui::Separator();
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide AI")).c_str(), &GameData.Config.ESP.HideAI);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide BOSS")).c_str(), &GameData.Config.ESP.HideBOSS);
                    ImGui::Separator();
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Item List")).c_str(), &GameData.Config.ESP.HideItemList);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Offscreen Item")).c_str(), &GameData.Config.ESP.HideOffscreenItem);
                    ImGui::Separator();
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Key Door")).c_str(), &GameData.Config.ESP.HideKeyDoor);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Exit Trigger")).c_str(), &GameData.Config.ESP.HideExitTrigger);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Exit")).c_str(), &GameData.Config.ESP.HidePlayerExit);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Coded Lock")).c_str(), &GameData.Config.ESP.HideCodedLock);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Throw")).c_str(), &GameData.Config.ESP.HideThrow);
                    ImGui::Separator();

                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Armor")).c_str(), &GameData.Config.ESP.HidePlayerArmor);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Team")).c_str(), &GameData.Config.ESP.HidePlayerTeam);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Health")).c_str(), &GameData.Config.ESP.HidePlayerHealth);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Name")).c_str(), &GameData.Config.ESP.HidePlayerName);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Player Weapon")).c_str(), &GameData.Config.ESP.HidePlayerWeapon);
                }

                if (SubSelectedTab == 3)
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Early Warning")).c_str(), &GameData.Config.ESP.EarlyWarning);
                    ImGui::NewCheckbox(I18N::T(XorStr("Hide Alive")).c_str(), &GameData.Config.ESP.EarlyWarningHideAlive);

                    ImGui::NewCheckbox(I18N::T(XorStr("Early Warning Stage Color")).c_str(), &GameData.Config.ESP.EarlyWarningStageColor);
                    NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Early Warning Info Color")).c_str(), GameData.Config.ESP.EarlyWarningColor);
                    ImGui::SliderInt(I18N::T(XorStr("Early Warning Max Distance")).c_str(), &GameData.Config.ESP.EarlyWarningMaxDistance, 0, 1000, "%d", 0, "M", false);
                    ImGui::SliderInt(I18N::T(XorStr("Early Warning Pos Y")).c_str(), &GameData.Config.ESP.EarlyWarningPosY, 0, 100, "%d", 0, "%", false);
                    ImGui::SliderInt(I18N::T(XorStr("Early Warning Font Size")).c_str(), &GameData.Config.ESP.EarlyWarningFontSize, 5, 30, "%d", 0, "PX", false);

                    ImGui::Separator();
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Player Indicator")).c_str(), &GameData.Config.ESP.Indicator);
                    ImGui::SliderInt(I18N::T(XorStr("Player Indicator Max Distance")).c_str(), &GameData.Config.ESP.IndicatorMax, 0, 1000, "%d", 0, "M", false);
                    ImGui::SliderInt(I18N::T(XorStr("Player Indicator Size")).c_str(), &GameData.Config.ESP.IndicatorSize, 1, 100, "%d", 0, "PX", false);

                }

                if (SubSelectedTab == 4)
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Main Radar")).c_str(), &GameData.Config.MainRadar.Enable);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Player")).c_str(), &GameData.Config.MainRadar.ShowPlayer);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Hero Avatar")).c_str(), &GameData.Config.MainRadar.ShowHeroAvatar);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show AI")).c_str(), &GameData.Config.MainRadar.ShowAI);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show BOSS")).c_str(), &GameData.Config.MainRadar.ShowBOSS);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Self")).c_str(), &GameData.Config.MainRadar.ShowSelf);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Teammate")).c_str(), &GameData.Config.MainRadar.ShowTeammate);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Armor")).c_str(), &GameData.Config.MainRadar.ShowArmor);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Team")).c_str(), &GameData.Config.MainRadar.ShowTeam);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Direction")).c_str(), &GameData.Config.MainRadar.ShowDirection);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Key Door")).c_str(), &GameData.Config.MainRadar.ShowKeyDoor);
                    ImGui::SliderInt(I18N::T(XorStr("Show Size")).c_str(), &GameData.Config.MainRadar.Size, 5, 30, "%d", 0, "PX");
                    ImGui::SliderFloat(I18N::T(XorStr("Radar Offset (?)")).c_str(), &GameData.Config.MainRadar.RatioY, 0, 3, "%f", 0, "%");
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::PushTextWrapPos(200.0f);
                        ImGui::TextWrapped(I18N::T(XorStr("If your large map radar position is not mapped correctly, try dragging this value to adjust it.")).c_str());
                        ImGui::PopTextWrapPos();
                        ImGui::EndTooltip();
                    }
                    /*                    ImGui::SliderFloat(I18N::T(XorStr("Radar Offset")).c_str(), &GameData.Config.MainRadar.RatioY, 0, 2, "%f", 0, "%");
                    ImGui::SliderFloat(I18N::T(XorStr("Radar Offset 2")).c_str(), &GameData.Global.Data.Radar.Debug2, -1000, 1000, "%f", 0, "PX");
                    ImGui::SliderFloat(I18N::T(XorStr("Radar Offset 3")).c_str(), &GameData.Global.Data.Radar.Debug3, -1000, 1000, "%f", 0, "PX");*/
                }

                if (SubSelectedTab == 5)
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Enable Mini Radar")).c_str(), &GameData.Config.MiniRadar.Enable);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Player")).c_str(), &GameData.Config.MiniRadar.ShowPlayer);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Hero Avatar")).c_str(), &GameData.Config.MiniRadar.ShowHeroAvatar);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show AI")).c_str(), &GameData.Config.MiniRadar.ShowAI);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show BOSS")).c_str(), &GameData.Config.MiniRadar.ShowBOSS);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Self")).c_str(), &GameData.Config.MiniRadar.ShowSelf);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Teammate")).c_str(), &GameData.Config.MiniRadar.ShowTeammate);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Armor")).c_str(), &GameData.Config.MiniRadar.ShowArmor);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Team")).c_str(), &GameData.Config.MiniRadar.ShowTeam);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Direction")).c_str(), &GameData.Config.MiniRadar.ShowDirection);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Key Door")).c_str(), &GameData.Config.MiniRadar.ShowKeyDoor);
                    ImGui::SliderInt(I18N::T(XorStr("Show Size")).c_str(), &GameData.Config.MiniRadar.Size, 5, 30, "%d", 0, "PX");
                }

                if (SubSelectedTab == 6)
                {
                    for (int i = 0; i < 4; i++)
                    {
                        NewColorPicker::DrawLabeledColorPickerFloat4(std::format("{} {}", I18N::T("Inner Team Color"), i).c_str(), GameData.Config.ESP.InnerTeamColor[i]);
                    }
                    ImGui::Separator();
                    for (int i = 0; i < 17; i++)
                    {
                        NewColorPicker::DrawLabeledColorPickerFloat4(std::format("{} {}", I18N::T("Team Color"), i).c_str(), GameData.Config.ESP.TeamColor[i]);
                    }
                }

                if (SubSelectedTab == 7)
                {
                    ImGui::Keybind(I18N::T(XorStr("Key Door Hotkeys")).c_str(), &GameData.Config.ESP.KeyDoorKey, true);
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Key Door")).c_str(), &GameData.Config.ESP.ShowKeyDoor);


                    ImGui::SliderInt(I18N::T(XorStr("Key Door Max Distance")).c_str(), &GameData.Config.ESP.KeyDoorMaxDistance, 0, 2000, "%d", 0, "M");
                    ImGui::SliderInt(I18N::T(XorStr("Key Door Size")).c_str(), &GameData.Config.ESP.KeyDoorFontSize, 5, 30, "%d", 0, "PX");
                }
            }
            ImGui::EndChild();

            // ImGui::SameLine();
            // ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            // ImGui::BeginChild("O", I18N::T(XorStr("Main Game Radar")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625 / 2.f - 7.f));
            // {
            //     /*ImGui::SliderFloat(I18N::T(XorStr("1")).c_str(), &GameData.Global.Data.Radar.Debug2, -1000, 1000, "%f", 0, "PX");
            //     ImGui::SliderFloat(I18N::T(XorStr("2")).c_str(), &GameData.Global.Data.Radar.Debug3, -1000, 1000, "%f", 0, "PX");*/

            //     ImGui::NewCheckbox(I18N::T(XorStr("Enable Main Radar")).c_str(), &GameData.Config.MainRadar.Enable);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Player")).c_str(), &GameData.Config.MainRadar.ShowPlayer);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show AI")).c_str(), &GameData.Config.MainRadar.ShowAI);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show BOSS")).c_str(), &GameData.Config.MainRadar.ShowBOSS);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Self")).c_str(), &GameData.Config.MainRadar.ShowSelf);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Teammate")).c_str(), &GameData.Config.MainRadar.ShowTeammate);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Armor")).c_str(), &GameData.Config.MainRadar.ShowArmor);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Team")).c_str(), &GameData.Config.MainRadar.ShowTeam);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Direction")).c_str(), &GameData.Config.MainRadar.ShowDirection);
            //     ImGui::SliderInt(I18N::T(XorStr("Show Size")).c_str(), &GameData.Config.MainRadar.Size, 5, 30, "%d", 0, "PX");
            //     ImGui::SliderFloat(I18N::T(XorStr("Radar Offset")).c_str(), &GameData.Config.MainRadar.RatioY, 0, 2, "%f", 0, "%");
            // }
            // ImGui::EndChild();

            // ImGui::SameLine();
            // ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x - NewGUIStyle::Global::ChildWidth - 7.f, ImGui::GetCursorPos().y + 625 / 2.f - 30.f + 7.f));
            // ImGui::BeginChild("O", I18N::T(XorStr("Mini Game Radar")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625 / 2.f - 7.f));
            // {
            //     ImGui::NewCheckbox(I18N::T(XorStr("Enable Mini Radar")).c_str(), &GameData.Config.MiniRadar.Enable);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Player")).c_str(), &GameData.Config.MiniRadar.ShowPlayer);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show AI")).c_str(), &GameData.Config.MiniRadar.ShowAI);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show BOSS")).c_str(), &GameData.Config.MiniRadar.ShowBOSS);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Self")).c_str(), &GameData.Config.MiniRadar.ShowSelf);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Teammate")).c_str(), &GameData.Config.MiniRadar.ShowTeammate);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Armor")).c_str(), &GameData.Config.MiniRadar.ShowArmor);

            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Team")).c_str(), &GameData.Config.MiniRadar.ShowTeam);
            //     ImGui::NewCheckbox(I18N::T(XorStr("Show Direction")).c_str(), &GameData.Config.MiniRadar.ShowDirection);
            //     ImGui::SliderInt(I18N::T(XorStr("Show Size")).c_str(), &GameData.Config.MiniRadar.Size, 5, 30, "%d", 0, "PX");
            // }
            // ImGui::EndChild();

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            ImGui::BeginChild("O", I18N::T(XorStr("Character ESP")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM * 3 + 85, 625), false, 0, true);
            {
                static int selectedTab = 0;
                std::string tabLabels[] = {
                     I18N::T(XorStr("Player")),
                     I18N::T(XorStr("AI")),
                     I18N::T(XorStr("BOSS")),
                };
                const char* tabLabelsc[3];
                for (int i = 0; i < 3; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                static int SubSelectedTab = 0;
                for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++) {
                    if (ImGui::SubTab(i == SubSelectedTab, tabLabelsc[i], Style::SubTab::Size)) SubSelectedTab = i;
                    if (i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1) ImGui::SameLine();
                }

                if (SubSelectedTab == 0) {
                    RenderESP(GameData.Config.ESP.Configs["Player"], SubSelectedTab);
                }
                else if (SubSelectedTab == 1) {
                    RenderESP(GameData.Config.ESP.Configs["AI"], SubSelectedTab);
                }
                else if (SubSelectedTab == 2) {
                    RenderESP(GameData.Config.ESP.Configs["BOSS"], SubSelectedTab);
                }
            }
            ImGui::EndChild();
        }
        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
};