#pragma once

namespace NewContainer
{
    static inline bool RenderItem(std::string name, bool selected, float boxColor[4])
    {
        std::string IconUrl = "Engine/Resource/Icon/Box/White/" + name + ".png";
        if (GameData.Config.Container.ContainerIconRender == 1) {
            IconUrl = "Engine/Resource/Icon/Box/" + name + ".png";
        }
        const float size = 78.4f;
        ImU32 bgColor = IM_COL32(60, 60, 60, 30);
        ImU32 hoverColor = IM_COL32(90, 90, 90, 255);
        ImU32 selectColor = ImGui::ColorConvertFloat4ToU32(ImVec4(boxColor[0], boxColor[1], boxColor[2], 50.f / 255.f));

        ImGui::BeginGroup();

        ImVec2 itemSize(size, size);

        name = Utils::StringToUTF8(I18N::T(name, true));

        ImGui::InvisibleButton(("##ContainerItem" + name).c_str(), itemSize);
        bool hovered = ImGui::IsItemHovered();
        bool clicked = ImGui::IsItemClicked();

        ImVec2 cursorPos = ImGui::GetItemRectMin();

        ImU32 color = bgColor;
        if (selected) color = selectColor;
        else if (hovered) color = hoverColor;

        ImDrawList* draw_list = ImGui::GetWindowDrawList();
        draw_list->AddRectFilled(cursorPos, ImVec2(cursorPos.x + size, cursorPos.y + size), color, 5.0f);

        if (GImGuiTextureMap[IconUrl].Width > 0) {
            //float iconSize = 48.0f;
            float iconSize = 40.0f;
            ImVec2 iconPos = ImVec2(
                cursorPos.x + (size - iconSize) * 0.5f,
                cursorPos.y + (size - iconSize) * 0.5f
            );
            // 选中为不透明，未选中为半透明
            auto tint = selected ? GameData.Config.Container.ContainerIconRender == 1 ? IM_COL32(255, 255, 255, 255) : ImGui::ColorConvertFloat4ToU32(ImVec4(boxColor[0], boxColor[1], boxColor[2], boxColor[3])) : IM_COL32(255, 255, 255, 180);
            draw_list->AddImage(
                GImGuiTextureMap[IconUrl].Texture,
                iconPos,
                ImVec2(iconPos.x + iconSize, iconPos.y + iconSize),
                ImVec2(0, 0), ImVec2(1, 1),
                tint
            );
        }

        // 文字颜色
        ImU32 textColor = selected ? IM_COL32(230, 230, 230, 255) : IM_COL32(180, 180, 180, 255);

        // 文字省略处理
        std::string displayName = name;
        ImVec2 textSize = ImGui::CalcTextSize(displayName.c_str());
        const float maxTextWidth = size - 8.0f; // 两边留点边距

        if (textSize.x > maxTextWidth) {
            ImVec2 ellipsisSize = ImGui::CalcTextSize("...");
            int charCount = displayName.size();
            while (charCount > 0) {
                std::string sub = displayName.substr(0, charCount) + "...";
                if (ImGui::CalcTextSize(sub.c_str()).x <= maxTextWidth) {
                    displayName = sub;
                    break;
                }
                --charCount;
            }
        }

        // hover时显示完整tips（无论是否省略）
        if (hovered) {
            ImGui::SetTooltip("%s", name.c_str());
        }

        // 文字居中
        textSize = ImGui::CalcTextSize(displayName.c_str());
        ImVec2 textPos = ImVec2(
            cursorPos.x + (size - textSize.x) * 0.5f,
            cursorPos.y + size + 4
        );
        draw_list->AddText(textPos, textColor, displayName.c_str());

        ImGui::Dummy(ImVec2(size, textSize.y - 4));

        ImGui::EndGroup();

        {
            // 计算圆形位置（右下角，稍微内缩）
            ImVec2 circleCenter = ImVec2(cursorPos.x + size - 12, cursorPos.y + size - 12);
            float circleRadius = 7.0f;

            // 绘制颜色圆点
            ImU32 circleColor = ImGui::ColorConvertFloat4ToU32(ImVec4(boxColor[0], boxColor[1], boxColor[2], boxColor[3]));
            draw_list->AddCircleFilled(circleCenter, circleRadius, circleColor);

            // 检测圆点是否被点击
            ImRect circleRect(
                ImVec2(circleCenter.x - circleRadius, circleCenter.y - circleRadius),
                ImVec2(circleCenter.x + circleRadius, circleCenter.y + circleRadius)
            );
            bool colorHovered = ImGui::IsMouseHoveringRect(circleRect.Min, circleRect.Max);
            bool colorClicked = colorHovered && ImGui::IsMouseClicked(0);

            if (colorHovered) {
                clicked = false;
            }

            // 弹出颜色选择器
            if (colorClicked) {
                ImGui::OpenPopup(("ColorPicker" + name).c_str());
            }

            if (ImGui::BeginPopup(("ColorPicker" + name).c_str())) {
                ImGui::ColorPicker4("##picker", boxColor, 0);
                ImGui::EndPopup();
            }
        }

        return clicked;
    }

    static inline void Render()
    {
        ImGui::SetNextWindowSize({ Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83 });
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("ESPRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            ImGui::BeginChild("O", I18N::T(XorStr("Box Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625));
            {
                ImGui::Keybind(I18N::T(XorStr("Box Hotkeys")).c_str(), &GameData.Config.Container.BoxEnableKey, true);
                ImGui::NewCheckbox(I18N::T(XorStr("Show Box")).c_str(), &GameData.Config.Container.BoxEnable);
                ImGui::NewCheckbox(I18N::T(XorStr("AI Box")).c_str(), &GameData.Config.Container.AI);
                ImGui::NewCheckbox(I18N::T(XorStr("Player Box")).c_str(), &GameData.Config.Container.Player);
                ImGui::NewCheckbox(I18N::T(XorStr("Box Price")).c_str(), &GameData.Config.Container.Price);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Displays the total value of the boxes after opening.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                ImGui::NewCheckbox(I18N::T(XorStr("Hide Opened Box")).c_str(), &GameData.Config.Container.BoxHideOpened);

                ImGui::NewCheckbox(I18N::T(XorStr("Box Item")).c_str(), &GameData.Config.Container.BoxItem);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Displays a list of items when a container or box has been opened.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                ImGui::NewCheckbox(I18N::T(XorStr("Container Item")).c_str(), &GameData.Config.Container.ContainerItem);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Displays a list of items when a container or box has been opened.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                ImGui::NewCheckbox(I18N::T(XorStr("Enable Name")).c_str(), &GameData.Config.Container.Name);
                ImGui::NewCheckbox(I18N::T(XorStr("Enable Distance")).c_str(), &GameData.Config.Container.Distance);

                ImGui::Separator();

                {
                    std::string tabLabels[] = {
                        I18N::T(XorStr("Icon + Text")),
                        I18N::T(XorStr("Text")),
                    };
                    const char* tabLabelsc[2];
                    for (int i = 0; i < 2; ++i) {
                        tabLabelsc[i] = tabLabels[i].c_str();
                    }

                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Box Item Render")).c_str(), tabLabelsc, 2, GameData.Config.Container.BoxItemRender);
                }

                ImGui::NewCheckbox(I18N::T(XorStr("Auto Show")).c_str(), &GameData.Config.Item.AutoShow);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("When there are items in a box or container that meet the filter criteria, they will be displayed regardless of whether they are opened or not.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                /*ImGui::SliderInt(I18N::T(XorStr("Quality Greater Than")).c_str(), &GameData.Config.Container.QualityGreaterThan, 0, 6, "%d", 0, "LEVEL");
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                ImGui::SliderInt(I18N::T(XorStr("Price Greater Than")).c_str(), &GameData.Config.Container.PriceGreaterThan, 0, 20000, "%d", 0, "K");
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }*/

                ImGui::Separator();

                //ImGui::NewCheckbox(I18N::T(XorStr("Multicolor Container")).c_str(), &GameData.Config.Container.RandColor);
                //NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Container Color")).c_str(), GameData.Config.Container.InfoColor);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("AI Color")).c_str(), GameData.Config.Container.AIDeadBoxInfoColor);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Player Color")).c_str(), GameData.Config.Container.PlayerDeadBoxInfoColor);

                ImGui::Separator();

                ImGui::SliderInt(I18N::T(XorStr("Box Max Distance")).c_str(), &GameData.Config.Container.BoxMaxDistance, 0, 1000, "%d", 0, "M");
                ImGui::SliderInt(I18N::T(XorStr("Box Item Max Distance")).c_str(), &GameData.Config.Container.BoxItemMaxDistance, 0, 1000, "%d", 0, "M");
                ImGui::SliderInt(I18N::T(XorStr("Box Font Size")).c_str(), &GameData.Config.Container.BoxFontSize, 5, 30, "%d", 0, "PX");
                //ImGui::SliderInt(I18N::T(XorStr("Box Icon Size")).c_str(), &GameData.Config.Container.BoxIconSize, 5, 30, "%d", 0, "PX");
            }
            ImGui::EndChild();

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            ImGui::BeginChild("O", I18N::T(XorStr("Container Filter")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM * 2 + 50, 625), false, 0, false);
            {
                static bool All = true;

                static bool bAll = All;
                static bool PushAll = false;

                if (ImGui::NewCheckboxOnLeft(I18N::T(XorStr("Select All")).c_str(), &All))
                {
                    PushAll = true;
                    bAll = !bAll;

                   /* for (const auto& Name : GameData.Config.Container.BoxNameToIndex)
                    {
                        auto& Switch = GameData.Config.Container.Boxs[Name.second];
                        Switch = All;
                    }*/
                    //Sleep(100);
                }

                int i = 0;
                bool haveFalse = false;
                // for (const auto& Name : GameData.Config.Container.BoxNameToIndex)

                std::vector<std::pair<std::string, int>> sortedNames(GameData.Config.Container.BoxNameToIndex.begin(),
                    GameData.Config.Container.BoxNameToIndex.end());

                std::sort(sortedNames.begin(), sortedNames.end(),
                    [](const auto& a, const auto& b) { return a.second < b.second; });

                for (const auto& Name : sortedNames)
                {
                    auto& Switch = GameData.Config.Container.Boxs[Name.second];
                    if (RenderItem(Name.first, Switch, GameData.Config.Container.BoxsColor[Name.second]))
                    {
                        Switch = !Switch;
                    }

                    if (PushAll) { Switch = bAll; }
                    else {
                        if (!Switch)
                        {
                            haveFalse = true;
                        }
                    }

                    if ((i + 1) % 6 != 0) {
                        ImGui::SameLine();
                    }

                    i++;
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
            ImGui::EndChild();

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            ImGui::BeginChild("O", I18N::T(XorStr("Container Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625));
            {
                ImGui::Keybind(I18N::T(XorStr("Container Hotkeys")).c_str(), &GameData.Config.Container.EnableKey, true);
                ImGui::NewCheckbox(I18N::T(XorStr("Show Container")).c_str(), &GameData.Config.Container.Enable);
                ImGui::NewCheckbox(I18N::T(XorStr("Container Price")).c_str(), &GameData.Config.Container.ContainerPrice);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Displays the total value of the contents of the opened container.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }


                ImGui::NewCheckbox(I18N::T(XorStr("Hide Opened")).c_str(), &GameData.Config.Container.HideOpened);

                {
                    std::string tabLabels[] = {
                        I18N::T(XorStr("2D")),
                        I18N::T(XorStr("3D")),
                        I18N::T(XorStr("Hide")),
                    };
                    const char* tabLabelsc[3];
                    for (int i = 0; i < 3; ++i) {
                        tabLabelsc[i] = tabLabels[i].c_str();
                    }

                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Container Icon Render")).c_str(), tabLabelsc, 3, GameData.Config.Container.ContainerIconRender);
                }

                ImGui::Separator();

                ImGui::SliderInt(I18N::T(XorStr("Max Distance")).c_str(), &GameData.Config.Container.MaxDistance, 0, 1000, "%d", 0, "M");
                ImGui::SliderInt(I18N::T(XorStr("Font Size")).c_str(), &GameData.Config.Container.FontSize, 5, 30, "%d", 0, "PX");
                ImGui::SliderInt(I18N::T(XorStr("Icon Size")).c_str(), &GameData.Config.Container.IconSize, 5, 30, "%d", 0, "PX");
                ImGui::Separator();

                ImGui::SliderInt(I18N::T(XorStr("Fast Items Size")).c_str(), &GameData.Config.Container.FastItemsSize, 1, 100, "%d", 0, "X");

                ImGui::NewCheckbox(I18N::T(XorStr("Fast Items")).c_str(), &GameData.Config.Container.FastItems);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("When you open a container, the list of items in the container will be quickly displayed on the left, without having to wait for the game to search for the container.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                const float window_width = 150.0f;
                const float window_height = 180.0f;
                const float box_height = 128.0f;

                //ImGui::TextDisabled(I18N::T(XorStr("Item List Axis")).c_str());

                if (NewMoveBox::DrawMoveBox(XorStr("ItemListX"), GameData.Config.Container.ItemListX, GameData.Config.Container.ItemListY,
                    window_width, window_height,
                    GameData.Config.Overlay.ScreenWidth, GameData.Config.Overlay.ScreenHeight,
                    box_height))
                {
                    // 位置已更新，可以在这里处理更新逻辑
                }
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("*Drag here to reposition the item list window.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                //ImGui::TextDisabled(I18N::T(XorStr("*Drag here to reposition the item list window.")).c_str());

                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                if (ImGui::Button(I18N::T(XorStr("Default Location")).c_str(), ImVec2(232, 28))) {
                    GameData.Config.Container.ItemListX = 35.f;
                    GameData.Config.Container.ItemListY = 95.f;
                }
                ImGui::PopStyleColor(3);

                //ImGui::SliderInt(I18N::T(XorStr("Item List X Axis")).c_str(), &GameData.Config.Container.ItemListX, 0, GameData.Config.Overlay.ScreenWidth, "%d", 0, "PX");
                //ImGui::SliderInt(I18N::T(XorStr("Item List Y Axis")).c_str(), &GameData.Config.Container.ItemListY, 0, GameData.Config.Overlay.ScreenHeight, "%d", 0, "PX");
            }
            ImGui::EndChild();
        }
        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
};