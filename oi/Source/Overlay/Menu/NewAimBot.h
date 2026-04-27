#pragma once

namespace NewAimBot
{
    static inline void Weapon(const UINT8& Index)
    {
        auto& Config = GameData.Config.AimBot.Configs.at(GameData.Config.AimBot.ConfigIndex).Weapon.at((EWeaponItemType)Index);

        static float H = 360.f;
        static float HA = 15.f;

        ImGui::BeginChild("O", I18N::T(XorStr("Base")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + 2.f, H));
        {
            ImGui::Keybind(I18N::T(XorStr("Primary Hotkey")).c_str(), &Config.First.Key, true);
            ImGui::Keybind(I18N::T(XorStr("Secondary Hotkey")).c_str(), &Config.Second.Key, true);
            ImGui::NewCheckbox(I18N::T(XorStr("Merge Primary and Secondary")).c_str(), &Config.HotkeyMerge);
            ImGui::Keybind(I18N::T(XorStr("Knock Down Hotkey")).c_str(), &Config.Groggy.Key, true);

            ImGui::Separator();

            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Crosshair")),
                    I18N::T(XorStr("Closests")),
                };
                const char* tabLabelsc[2];
                for (int i = 0; i < 2; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Selected Mode")).c_str(), tabLabelsc, 2, Config.UseClosest);
            }

            ImGui::Separator();

            ImGui::NewCheckbox(I18N::T(XorStr("Smart Target")).c_str(), &Config.RayCast);
            ImGui::NewCheckbox(I18N::T(XorStr("Visible Check")).c_str(), &Config.VisibleCheck);
            ImGui::NewCheckbox(I18N::T(XorStr("Skip Knock Down")).c_str(), &Config.IgnoreGroggy);
            ImGui::NewCheckbox(I18N::T(XorStr("ADS Aimbot")).c_str(), &Config.ADS);
            //ImGui::NewCheckbox(I18N::T(XorStr("Legit Mode")).c_str(), &Config.LegitMode);
            ImGui::NewCheckbox(I18N::T(XorStr("Sway Control")).c_str(), &Config.Sway);
            ImGui::NewCheckbox(I18N::T(XorStr("Recoil Control")).c_str(), &Config.Recoil);
            ImGui::NewCheckbox(I18N::T(XorStr("Kill Switch")).c_str(), &Config.AutoSwitch);
            ImGui::NewCheckbox(I18N::T(XorStr("No Bullet Not Aim")).c_str(), &Config.NoBulletNotAim);
            ImGui::NewCheckbox(I18N::T(XorStr("Dont Aim AI")).c_str(), &Config.DontAimAI);

            if (Config.UseClosest != 1) {
                ImGui::Separator();
                ImGui::NewCheckbox(I18N::T(XorStr("Magnetic Switch")).c_str(), &Config.AutoSwitchPlayer);
                ImGui::SliderInt(I18N::T(XorStr("Magnetic Switch FOV")).c_str(), &Config.AutoSwitchPlayerFOV, 0, 360, "%d", 0, "PX");
                //ImGui::SliderInt(I18N::T(XorStr("Switching Delay")).c_str(), &Config.SwitchingDelay, 0, 100, "%d", 0, "MS");
            }
            ImGui::Separator();
            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Default Algorithm")),
                    I18N::T(XorStr("Simulation Speed")),
                };
                const char* tabLabelsc[2];
                for (int i = 0; i < 2; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }
                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Prediction Mode")).c_str(), tabLabelsc, 2, Config.VelocityMode);
            }
        }
        ImGui::EndChild();

        ImGui::SetCursorPosY(ImGui::GetCursorPos().y + 7.f);
        ImGui::BeginChild("O", I18N::T(XorStr("Throws AimBot")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + 2.f, 158));
        {
            ImGui::NewCheckbox(I18N::T(XorStr("Enable Throws AimBot")).c_str(), &Config.Throw.Enable);
            ImGui::Keybind(I18N::T(XorStr("Throws HotKey")).c_str(), &Config.Throw.Key, true);

            ImGui::SliderInt(I18N::T(XorStr("Throws Max Distance")).c_str(), &Config.Throw.MaxDistance, 0, 1000, "%d", 0, "M");
            ImGui::SliderFloat(I18N::T(XorStr("Throws Speed")).c_str(), &Config.Throw.Speed, 0, 100, "%.2f", 0, "%");

            ImGui::Separator();

            for (auto& Enable : Config.Throw.Enables)
            {
                ImGui::NewCheckbox(Utils::StringToUTF8(I18N::T(Enable.first, true)).c_str(), &Enable.second);
            }
        }
        ImGui::EndChild();

        ImGui::SameLine();
        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30 - H - HA));
        ImGui::BeginChild("O", I18N::T(XorStr("Adjustment")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + 2.f, 532));
        {
            ImGui::SliderFloat(I18N::T(XorStr("X Axis Smoothing")).c_str(), &Config.XSpeed, 0.f, 100.f, "%.2f", 0, "%");
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }
            ImGui::SliderFloat(I18N::T(XorStr("Y Axis Smoothing")).c_str(), &Config.YSpeed, 0.f, 100.f, "%.2f", 0, "%");
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::SliderFloat(I18N::T(XorStr("Move Strength")).c_str(), &Config.AimSpeedMaxFactor, 0.f, 100.f, "%.2f", 0, "%");
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("Refers to the percentage of pixels moved each time, which can also be understood as the adsorption strength.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::Separator();

            {
                ImGui::NewCheckbox(I18N::T(XorStr("Loop Curve")).c_str(), &Config.PowerfulCurve);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("After turning on the circular curve, the auto-aim will become very soft.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                ImGui::NewCheckbox(I18N::T(XorStr("Curve Aim")).c_str(), &Config.Curve);
                if (NewCubicBezierEditor::CubicBezierEditor("#Curve Aim", Config.Curves, ImVec2(0, 90))) {

                }
                ImGui::Spacing();
            }

            ImGui::Dummy({ 0.f, 0.f });

            ImGui::SliderInt(I18N::T(XorStr("Curve Time")).c_str(), &Config.NewCurveTime, 100, 10000, "%d", 0, "MS");

            ImGui::Separator();

            ImGui::NewCheckbox(I18N::T(XorStr("Enable Trigger")).c_str(), &Config.Trigger.Enable);
            ImGui::Keybind(std::format("{} #{}", I18N::T(XorStr("Trigger Hotkey")), 1).c_str(), &Config.Trigger.Key, true);
            ImGui::Keybind(std::format("{} #{}", I18N::T(XorStr("Trigger Hotkey")), 2).c_str(), &Config.Trigger.Key1, true);
            ImGui::NewCheckbox(I18N::T(XorStr("Independent Trigger")).c_str(), &Config.Trigger.Independent);
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("After turning on this function, just press and hold the trigger hotkey.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::SliderFloat(I18N::T(XorStr("Trigger Smooth")).c_str(), &Config.Trigger.Smooth, 0, 100, "%.2f", 0, "%");
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("When trigger smoothing is not 0, this trigger smoothing will be used for moving auto aiming when you hold down the trigger hotkey. If you do not need separate smoothing, please set it to 0")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }
            ImGui::SliderInt(I18N::T(XorStr("Trigger Delay")).c_str(), &Config.Trigger.Sleep, 0, 1000, "%d", 0, "MS");
            ImGui::SliderInt(I18N::T(XorStr("Trigger Distance")).c_str(), &Config.Trigger.MaxDistance, 0, 1000, "%d", 0, "M");
            ImGui::SliderFloat(I18N::T(XorStr("Trigger Range")).c_str(), &Config.Trigger.TriggerRange, 0, 100, "%.2f", 0, "PX");

            //ImGui::NewCheckbox(I18N::T(XorStr("Dynamic Scaling")).c_str(), &Config.Trigger.bMaxMin);
            //if (ImGui::IsItemHovered()) {
            //    ImGui::BeginTooltip();
            //    ImGui::PushTextWrapPos(200.0f);
            //    ImGui::TextWrapped(I18N::T(XorStr("It means that the longer the dynamic adjustment distance is, the smaller the trigger error will be.")).c_str());
            //    ImGui::PopTextWrapPos();
            //    ImGui::EndTooltip();
            //}
            //ImGui::SliderInt(I18N::T(XorStr("Scaling Distance")).c_str(), &Config.Trigger.MaxMinDistance, 0, 1000, "%d", 0, "M");
            //if (ImGui::IsItemHovered()) {
            //    ImGui::BeginTooltip();
            //    ImGui::PushTextWrapPos(200.0f);
            //    ImGui::TextWrapped(I18N::T(XorStr("Refers to the distance from which dynamic scaling begins.")).c_str());
            //    ImGui::PopTextWrapPos();
            //    ImGui::EndTooltip();
            //}
            ImGui::NewCheckbox(I18N::T(XorStr("Auto Visibility")).c_str(), &Config.Trigger.AutoVisibility);
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("If the trigger position is not in a visible state, it will automatically switch to a visible position to lock the flight.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            /*ImGui::NewCheckbox(I18N::T(XorStr("Long Press Mode")).c_str(), &Config.Trigger.Long);
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("Change each single click of the left button to a long press until you stop aiming or are out of trigger range.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }*/

            ImGui::Separator();

            ImGui::SliderFloat(I18N::T(XorStr("Hit Probability")).c_str(), &Config.RandomValue, 0, 100, "%.2f", 0, "%");
            ImGui::SliderInt(I18N::T(XorStr("FOV")).c_str(), &Config.FOV, 0, 360, "%d", 0, "PX");
            ImGui::SliderInt(I18N::T(XorStr("Max Distance")).c_str(), &Config.AimDistance, 0, 1000, "%d", 0, "M");

            ImGui::Separator();

            ImGui::NewCheckbox(I18N::T(XorStr("Fire Only Random Bone")).c_str(), &Config.FireOnlyRandomBone);
            ImGui::SliderInt(I18N::T(XorStr("Random Delay")).c_str(), &Config.RandomDelay, 0, 1000, "%d", 0, "MS");

            ImGui::Separator();

            ImGui::NewCheckbox(I18N::T(XorStr("Enable Close Range Smooth")).c_str(), &Config.bCloseRangeSpeed);
            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("When enabled, smoothing is applied based on the near range.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::SliderInt(I18N::T(XorStr("Close Range Distance")).c_str(), &Config.CloseRangeDistance, 0, 1000, "%d", 0, "M");
            ImGui::SliderFloat(I18N::T(XorStr("Close Range Smooth")).c_str(), &Config.CloseRangeSpeed, 0, 100, "%.2f", 0, "%");
        }
        ImGui::EndChild();

        static int BoneSubSelectedTab = 0;
        auto* BoneConfig = Config.First.Bones;

        ImGui::SameLine();
        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30 - H - HA));
        ImGui::BeginChild("O", I18N::T(XorStr("Aim Bone")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM + 20.f, 532), false, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse, false);
        {
            std::string tabLabels[] = {
                I18N::T(XorStr("Main")),
                I18N::T(XorStr("Scnd")),
                I18N::T(XorStr("Down")),
                I18N::T(XorStr("Trig")),
            };
            const char* tabLabelsc[4];
            for (int i = 0; i < 4; ++i) {
                tabLabelsc[i] = tabLabels[i].c_str();
            }

            for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++) {
                if (ImGui::SubTab(i == BoneSubSelectedTab, tabLabelsc[i], { 28, 25 }, true)) BoneSubSelectedTab = i;
                if (i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1) ImGui::SameLine();
            }

            std::string IconUrl = "Engine/Resource/Icon/T_Healthy_De_57_0.png";
            ImGui::Image(GImGuiTextureMap[IconUrl].Texture, ImVec2(1174 * 0.205f, 1853 * 0.22f));

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + (GameData.CurrentLanguage != Language::English ? 88 : 68), ImGui::GetCursorPos().y - 7));

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 0));
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30.f);

            bool bRandomBone = false;
            if (BoneSubSelectedTab == 1) {
                BoneConfig = Config.Second.Bones;
            }
            if (BoneSubSelectedTab == 2) {
                BoneConfig = Config.Groggy.Bones;
            }
            if (BoneSubSelectedTab == 3) {
                BoneConfig = Config.Trigger.Bones;
            }

            if (BoneConfig[17]) bRandomBone = true;

            if (!bRandomBone) {
                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
            }

            if (bRandomBone) ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
            if (ImGui::Button(I18N::T(XorStr("Random Bone")).c_str(), ImVec2(0, 28))) {
                BoneConfig[17] = !BoneConfig[17];
            }
            if (bRandomBone) ImGui::PopStyleColor(1);

            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("After locking the target, the position will be randomly switched in real time. Please select at least one position as the target filter calculation point.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }
            if (!bRandomBone) ImGui::PopStyleColor(4);

            ImGui::PopStyleVar(2);

            static float CheckboxSize = 16.f / 2;

            auto OldPos = ImGui::GetCursorPos();

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - CheckboxSize, ImGui::GetCursorPos().y - 445));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone0")).c_str(), &BoneConfig[0]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - CheckboxSize, ImGui::GetCursorPos().y - 420));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone1")).c_str(), &BoneConfig[1]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - CheckboxSize, ImGui::GetCursorPos().y - 380));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone2")).c_str(), &BoneConfig[2]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - CheckboxSize, ImGui::GetCursorPos().y - 350));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone3")).c_str(), &BoneConfig[3]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - CheckboxSize, ImGui::GetCursorPos().y - 275));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone4")).c_str(), &BoneConfig[4]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 80.f - CheckboxSize, ImGui::GetCursorPos().y - 365));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone5")).c_str(), &BoneConfig[5]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 56.f - CheckboxSize, ImGui::GetCursorPos().y - 325));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone6")).c_str(), &BoneConfig[6]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 30.f - CheckboxSize, ImGui::GetCursorPos().y - 285));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone7")).c_str(), &BoneConfig[7]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 80.f + 83.f - CheckboxSize, ImGui::GetCursorPos().y - 365));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone8")).c_str(), &BoneConfig[8]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 56.f + 130.f - CheckboxSize, ImGui::GetCursorPos().y - 325));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone9")).c_str(), &BoneConfig[9]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 30.f + 180.f - CheckboxSize, ImGui::GetCursorPos().y - 285));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone10")).c_str(), &BoneConfig[10]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - 25.f - CheckboxSize, ImGui::GetCursorPos().y - 240));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone11")).c_str(), &BoneConfig[11]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - 28.f - CheckboxSize, ImGui::GetCursorPos().y - 180));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone12")).c_str(), &BoneConfig[12]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f - 31.f - CheckboxSize, ImGui::GetCursorPos().y - 120));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone13")).c_str(), &BoneConfig[13]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f + 25.f - CheckboxSize, ImGui::GetCursorPos().y - 240));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone14")).c_str(), &BoneConfig[14]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f + 28.f - CheckboxSize, ImGui::GetCursorPos().y - 180));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone15")).c_str(), &BoneConfig[15]);
            ImGui::SetCursorPos(OldPos);

            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 121.f + 31.f - CheckboxSize, ImGui::GetCursorPos().y - 120));
            ImGui::NewCheckboxType(I18N::T(XorStr("Bone16")).c_str(), &BoneConfig[16]);
            ImGui::SetCursorPos(OldPos);

        }
        ImGui::EndChild();

        ImGui::SameLine();
        {
            static bool All = true;

            static bool bAll = All;
            static bool PushAll = false;
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + (GameData.CurrentLanguage != Language::English ? -72 : -100), ImGui::GetCursorPos().y - 16 - H - HA));
            if (ImGui::NewCheckboxOnLeft(I18N::T(XorStr("Select All")).c_str(), &All))
            {
                PushAll = true;
                bAll = !bAll;
            }
            bool haveFalse = false;
            for (size_t i = 0; i < 17; i++)
            {
                if (PushAll) {
                    BoneConfig[i] = bAll;
                }
                else {
                    if (BoneConfig[i] == false)
                    {
                        haveFalse = true;
                        break;
                    }
                }
            }

            if (haveFalse)
            {
                All = false;
                bAll = false;
            }
            else {
                All = true;
                bAll = true;
            }

            PushAll = false;
        }
    }

    static inline void Render()
    {
        ImGui::SetNextWindowSize({ Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83 });
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("ESPRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            ImGui::BeginChild("O", I18N::T(XorStr("Main Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 280));
            {
                ImGui::NewCheckbox(I18N::T(XorStr("Enable AimBot")).c_str(), &GameData.Config.AimBot.Enable);
                ImGui::NewCheckbox(I18N::T(XorStr("Hide Bone")).c_str(), &GameData.Config.AimBot.HideBone);
                ImGui::NewCheckbox(I18N::T(XorStr("Show FOV")).c_str(), &GameData.Config.AimBot.FOV);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("FOV Color")).c_str(), GameData.Config.AimBot.FOVColor);
                {
                    std::string tabLabels[] = {
                        I18N::T(XorStr("Main Config")),
                        I18N::T(XorStr("Second Config")),
                    };
                    const char* tabLabelsc[2];
                    for (int i = 0; i < 2; ++i) {
                        tabLabelsc[i] = tabLabels[i].c_str();
                    }
                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("AimBot Config")).c_str(), tabLabelsc, 2, GameData.Config.AimBot.ConfigIndex);
                }
                ImGui::Keybind(I18N::T(XorStr("Config Hotkey")).c_str(), &GameData.Config.AimBot.Configs[GameData.Config.AimBot.ConfigIndex].Key, true);
            }
            ImGui::EndChild();

            ImGui::Dummy({ 1.f, 1.f });

            NewBox::AimBot(328.f);

            static int SubSelectedTab = 0;

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30 - 298));
            ImGui::BeginChild("O", I18N::T(XorStr("Weapon Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM * 3 + 88, 625), false, 0, true);
            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("Rifle")),
                    I18N::T(XorStr("Submachine")),
                    I18N::T(XorStr("Shotgun")),
                    I18N::T(XorStr("Light Machine")),
                    I18N::T(XorStr("Precision Shooting Rifle")),
                    I18N::T(XorStr("Sniper Rifle")),
                    I18N::T(XorStr("Pistol")),
                };
                const int tabCount = sizeof(tabLabels) / sizeof(tabLabels[0]);
                const char* tabLabelsc[tabCount];
                for (int i = 0; i < tabCount; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++) {
                    if (ImGui::SubTab(i == SubSelectedTab, tabLabelsc[i], Style::SubTab::Size)) SubSelectedTab = i;
                    {
                        if (i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1) ImGui::SameLine();
                    }
                }

                Weapon(SubSelectedTab + 1);
            }
            ImGui::EndChild();

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x - (GameData.CurrentLanguage != Language::English ? 90 : 123), ImGui::GetCursorPos().y - 30 - 295 + 22 / 2.f));

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 0));
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30.f);
            ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(10, 10));

            ImGui::PushStyleColor(ImGuiCol_Button, Style::SubTab::DefBackground);
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));

            if (ImGui::Button(I18N::T(XorStr("Sync Settings")).c_str(), ImVec2(0, 22))) {
                for (size_t i = 1; i < 8; i++)
                {
                    GameData.Config.AimBot.Configs[GameData.Config.AimBot.ConfigIndex].Weapon[(EWeaponItemType)i] = GameData.Config.AimBot.Configs[GameData.Config.AimBot.ConfigIndex].Weapon[(EWeaponItemType)(SubSelectedTab + 1)];
                }
            }

            ImGui::PopStyleColor(4);

            if (ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("Sync this type setting to other weapon settings.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            ImGui::PopStyleVar(3);
        }
        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
};