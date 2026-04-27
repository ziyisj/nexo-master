#pragma once

namespace NewItem
{
    struct RealItemDataTableOrder
    {
        uint64_t ID{};
        ItemDataTableInfo Info{};
    };

    static inline void CleanName(std::string& name) {
        name.erase(std::remove_if(name.begin(), name.end(), [](char c) {
            return (c == '\n') || (c == '\r') || (c == '\t');
        }), name.end());
    }

    static inline bool RenderItem(const NewItem::RealItemDataTableOrder& item, bool selected)  // 注意这里改为引用
    {
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, { 6.f, 3.f });
        std::string IconUrl = std::format("Engine/Resource/Icon/Hub/{}.png", item.ID);
        std::string name = Utils::StringToUTF8(GetItemTranslate(item.ID));
        const auto info = item.Info;
        CleanName(name);

        if (info.InitialGuidePrice == 0) name = std::format("{}", item.ID);

        struct GradientColor {
            ImVec4 top;
            ImVec4 bottom;
        };

        static const std::string Rarity[] = {
            "Engine/Resource/Icon/1.png",
            "Engine/Resource/Icon/2.png",
            "Engine/Resource/Icon/3.png",
            "Engine/Resource/Icon/4.png",
            "Engine/Resource/Icon/5.png",
            "Engine/Resource/Icon/6.png"
        };

        static const GradientColor gradients[] = {
            { ImVec4(72.f / 255.f, 72.f / 255.f, 72.f / 255.f, 1.0f), ImVec4(40.f / 255.f, 40.f / 255.f, 40.f / 255.f, 1.0f) },   // 1
            { ImVec4(12.f / 255.f, 87.f / 255.f, 62.f / 255.f, 1.0f), ImVec4(5.f / 255.f, 38.f / 255.f, 27.f / 255.f, 1.0f) },    // 2
            { ImVec4(18.f / 255.f, 57.f / 255.f, 92.f / 255.f, 1.0f), ImVec4(10.f / 255.f, 34.f / 255.f, 56.f / 255.f, 1.0f) },   // 3
            { ImVec4(37.f / 255.f, 9.f / 255.f, 80.f / 255.f, 1.0f), ImVec4(19.f / 255.f, 4.f / 255.f, 43.f / 255.f, 1.0f) },     // 4
            { ImVec4(105.f / 255.f, 67.f / 255.f, 41.f / 255.f, 1.0f), ImVec4(63.f / 255.f, 40.f / 255.f, 25.f / 255.f, 1.0f) },  // 5
            { ImVec4(94.f / 255.f, 37.f / 255.f, 38.f / 255.f, 1.0f), ImVec4(51.f / 255.f, 21.f / 255.f, 21.f / 255.f, 1.0f) },   // 6
        };
        const int gradientCount = sizeof(gradients) / sizeof(gradients[0]);

        static const std::string Background = "Engine/Resource/Icon/Background.png";
        static const std::string BackgroundPattern = "Engine/Resource/Icon/Background_Pattern.png";

        float width = 154.0f;
        float height = 154.0f;

        ImU32 bgColor = IM_COL32(40, 40, 40, 255);
        ImU32 hoverColor = IM_COL32(90, 90, 90, 255);
        ImU32 selectColor = IM_COL32(31, 3, 121, 255);

        ImGui::BeginGroup();

        ImVec2 itemSize(width, height);

        ImGui::InvisibleButton(("##ContainerItem" + name).c_str(), itemSize);
        bool hovered = ImGui::IsItemHovered();
        bool clicked = ImGui::IsItemClicked(ImGuiMouseButton_Left);    // 明确指定左键
        bool rightClicked = ImGui::IsItemClicked(ImGuiMouseButton_Right); // 右键点击

        // 处理右键点击改变force状态
        if (rightClicked) {
            GameData.Config.Item.ItemsForce[item.Info.Index] = !GameData.Config.Item.ItemsForce[item.Info.Index];
        }

        ImVec2 cursorPos = ImGui::GetItemRectMin();

        ImU32 color = bgColor;
        if (selected) color = selectColor;
        else if (hovered) color = hoverColor;

        ImDrawList* draw_list = ImGui::GetWindowDrawList();

        // 1. 绘制圆角背景色
        float rounding = 5.0f;

        ImVec4 colorTop = gradients[info.Quality - 1].top;
        if (!selected) colorTop = gradients[0].top;
        if (info.Quality == 0) colorTop = gradients[0].top;

        int rarityLevel = info.Quality;
        if (rarityLevel == 0) rarityLevel = 1;
        std::string rarityIcon = Rarity[rarityLevel - 1];

        draw_list->AddRectFilled(cursorPos, ImVec2(cursorPos.x + width, cursorPos.y + height), ImGui::ColorConvertFloat4ToU32(colorTop), rounding);

        // 2. 绘制背景图案（居中放大，clip到圆角矩形）
        if (GImGuiTextureMap[BackgroundPattern].Width > 0 && GImGuiTextureMap[BackgroundPattern].Height > 0) {
            float bgW = static_cast<float>(GImGuiTextureMap[BackgroundPattern].Width);
            float bgH = static_cast<float>(GImGuiTextureMap[BackgroundPattern].Height);

            // 计算缩放比例（以较大的为准，保证图片能覆盖整个区域）
            float scaleW = width / bgW;
            float scaleH = height / bgH;
            float scale = (scaleW > scaleH) ? scaleW : scaleH;
            scale = scale * 1.5f; // 放大倍数

            float drawW = bgW * scale;
            float drawH = bgH * scale;

            // 计算居中位置
            ImVec2 bgPos = ImVec2(
                cursorPos.x + (width - drawW) * 0.5f,
                cursorPos.y + (height - drawH) * 0.5f
            );

            {
                // 先裁剪到卡片区域
                draw_list->PushClipRect(cursorPos, ImVec2(cursorPos.x + width, cursorPos.y + height), true);
                // 居中放大绘制背景图
                draw_list->AddImage(
                    GImGuiTextureMap[BackgroundPattern].Texture,
                    bgPos,
                    ImVec2(bgPos.x + drawW, bgPos.y + drawH),
                    ImVec2(0, 0), ImVec2(1, 1)
                );
                draw_list->PopClipRect();
            }
        }

        if (GImGuiTextureMap[Background].Width > 0 && GImGuiTextureMap[Background].Height > 0) {
            float bgW = static_cast<float>(GImGuiTextureMap[Background].Width);
            float bgH = static_cast<float>(GImGuiTextureMap[Background].Height);

            // 计算缩放比例（以较大的为准，保证图片能覆盖整个区域）
            float scaleW = width / bgW;
            float scaleH = height / bgH;
            float scale = (scaleW > scaleH) ? scaleW : scaleH;
            scale = scale * 1.f; // 放大倍数

            float drawW = bgW * scale;
            float drawH = bgH * scale;

            // 计算居中位置
            ImVec2 bgPos = ImVec2(
                cursorPos.x + (width - drawW) * 0.5f,
                cursorPos.y + (height - drawH) * 0.5f
            );

            draw_list->AddImageRounded(
                GImGuiTextureMap[Background].Texture,
                bgPos,
                ImVec2(bgPos.x + drawW, bgPos.y + drawH),
                ImVec2(0, 0), ImVec2(1, 1),
                IM_COL32_WHITE,
                rounding,
                ImDrawFlags_RoundCornersAll
            );
        }

        // 3. 绘制物品图标（保持原有比例缩放）
        if (GImGuiTextureMap[IconUrl].Width > 0 && GImGuiTextureMap[IconUrl].Height > 0) {
            float iconMaxWidth = width * 0.5f;    // 最大宽度限制
            float iconMaxHeight = height * 0.5f;  // 统一高度
            float imgW = static_cast<float>(GImGuiTextureMap[IconUrl].Width);
            float imgH = static_cast<float>(GImGuiTextureMap[IconUrl].Height);

            // 先按高度统一
            float drawH = iconMaxHeight;
            float drawW = imgW * (iconMaxHeight / imgH);

            // 如果宽度超出最大宽度，再按宽度缩放
            if (drawW > iconMaxWidth) {
                float scale = iconMaxWidth / drawW;
                drawW = drawW * scale;
                drawH = drawH * scale;
            }

            // 居中
            ImVec2 iconPos = ImVec2(
                cursorPos.x + (width - drawW) * 0.5f,
                cursorPos.y + (height - drawH) * 0.5f
            );
            draw_list->AddImage(
                GImGuiTextureMap[IconUrl].Texture,
                iconPos,
                ImVec2(iconPos.x + drawW, iconPos.y + drawH),
                ImVec2(0, 0), ImVec2(1, 1)
            );
        }

        {
            float topBarHeight = 25.0f;
            std::string amountText = std::format("${}", FormatMoney(info.InitialGuidePrice)); // 或你自己的金额字符串
            ImVec2 amountTextSize = ImGui::CalcTextSize(amountText.c_str());

            ImVec2 amountTextPos = ImVec2(
                cursorPos.x + width - amountTextSize.x - 6,
                cursorPos.y + (topBarHeight - amountTextSize.y) * 0.5f
            );

            ImU32 amountTextColor = IM_COL32(255, 255, 255, 200); // 金额用黄色，可自定义
            draw_list->AddText(amountTextPos, amountTextColor, amountText.c_str());
        }

        float rarityIconSize = 15.0f;
        if (GImGuiTextureMap[rarityIcon].Width > 0 && GImGuiTextureMap[rarityIcon].Height > 0) {
            float imgW = static_cast<float>(GImGuiTextureMap[rarityIcon].Width);
            float imgH = static_cast<float>(GImGuiTextureMap[rarityIcon].Height);

            float drawW, drawH;
            if (imgW > imgH) {
                drawW = rarityIconSize;
                drawH = imgH * (rarityIconSize / imgW);
            }
            else {
                drawH = rarityIconSize;
                drawW = imgW * (rarityIconSize / imgH);
            }

            ImVec2 rarityIconPos = ImVec2(
                cursorPos.x + 6, // 距左边6px
                cursorPos.y + 6  // 距上边6px
            );
            draw_list->AddImage(
                GImGuiTextureMap[rarityIcon].Texture,
                rarityIconPos,
                ImVec2(rarityIconPos.x + drawW, rarityIconPos.y + drawH),
                ImVec2(0, 0), ImVec2(1, 1)
            );

            // 绘制品质等级文字（在图标右侧，垂直居中）
            char rarityText[8];
            snprintf(rarityText, sizeof(rarityText), "Lv.%d", rarityLevel);

            ImVec2 rarityTextSize = ImGui::CalcTextSize(rarityText);
            ImVec2 rarityTextPos = ImVec2(
                rarityIconPos.x + drawW + 6, // 图标右侧6px
                rarityIconPos.y + (drawH - rarityTextSize.y) * 0.5f // 垂直居中
            );
            ImU32 rarityTextColor = IM_COL32(255, 255, 255, 200); // 你可以自定义颜色
            draw_list->AddText(rarityTextPos, rarityTextColor, rarityText);
        }

        // 4. 左下角文字+渐变背景
        ImU32 textColor = selected ? IM_COL32(230, 230, 230, 255) : IM_COL32(255, 255, 255, 200);

        std::string displayName = name;
        ImVec2 textSize = ImGui::CalcTextSize(displayName.c_str());
        const float maxTextWidth = width - 32.0f;

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
            textSize = ImGui::CalcTextSize(displayName.c_str());
        }

        // 渐变背景条
        float barHeight = textSize.y + 10.0f;
        ImVec2 barPosMin = ImVec2(cursorPos.x, cursorPos.y + height - barHeight);
        ImVec2 barPosMax = ImVec2(cursorPos.x + width, cursorPos.y + height);
        ImU32 colTop = IM_COL32(0, 0, 0, 50);

        // 左下角文字
        ImVec2 textPos = ImVec2(
            cursorPos.x + 8,
            cursorPos.y + height - textSize.y - 5
        );
        draw_list->AddText(textPos, textColor, displayName.c_str());
        bool currentForce = GameData.Config.Item.ItemsForce[item.Info.Index];
  
        if (selected && currentForce) {
            ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[0]);
            std::string forceText = I18N::T(XorStr("Force Display"));
            ImVec2 forceTextSize = ImGui::CalcTextSize(forceText.c_str());
            float forceRounding = 30.0f;  // 30px圆角
            float forcePaddingX = 12.0f;  // 左右padding更大
            float forcePaddingY = 4.0f;   // 上下padding

            // 计算"强制显示"背景框的位置和大小
            float forceBoxWidth = forceTextSize.x + forcePaddingX * 2;
            float forceBoxHeight = forceTextSize.y + forcePaddingY * 2;

            ImVec2 forceBoxPos = ImVec2(
                cursorPos.x + (width - forceBoxWidth) * 0.5f,  // 水平居中
                cursorPos.y + height - textSize.y - 13 - forceBoxHeight  // 在名字上方一点
            );

            // 绘制透明背景圆角矩形
            ImU32 forceBackgroundColor = IM_COL32(
                int(GameData.Config.Theme.Active[0] * 255.f),
                int(GameData.Config.Theme.Active[1] * 255.f),
                int(GameData.Config.Theme.Active[2] * 255.f),
                255
            ); // 白色半透明背景
            draw_list->AddRectFilled(
                forceBoxPos,
                ImVec2(forceBoxPos.x + forceBoxWidth, forceBoxPos.y + forceBoxHeight),
                forceBackgroundColor,
                forceRounding
            );

            // 绘制"强制显示"文字，确保在背景框中垂直居中
            ImVec2 forceTextPos = ImVec2(
                forceBoxPos.x + forcePaddingX,  // 水平居中
                forceBoxPos.y + (forceBoxHeight - forceTextSize.y) * 0.5f - 1.f
            );
            ImU32 forceTextColor = IM_COL32(0, 0, 0, 255); // 黑色文字
            draw_list->AddText(forceTextPos, forceTextColor, forceText.c_str());

            ImGui::PopFont();
        }

        // 右下角小白点+黑色对勾
        if (selected) {
            float checkRadius = 7.0f; // 更小的圆点
            ImVec2 checkCenter = ImVec2(
                cursorPos.x + width - checkRadius - 6, // 距右下角6px
                cursorPos.y + height - checkRadius - 6
            );

            // 画白色圆点
            draw_list->AddCircleFilled(
                checkCenter,
                checkRadius,
                IM_COL32(
                    int(GameData.Config.Theme.Active[0] * 255.f),
                    int(GameData.Config.Theme.Active[1] * 255.f),
                    int(GameData.Config.Theme.Active[2] * 255.f),
                    255
                ), 32);

            // 画黑色对勾
            ImU32 checkmarkColor = IM_COL32(0, 0, 0, 255);
            float checkmarkSize = checkRadius * 1.0f; // 对勾长度
            ImVec2 checkmarkPos = checkCenter - ImVec2(checkmarkSize * 0.5f, checkmarkSize * 0.5f);

            ImGui::RenderCheckMark(draw_list, checkmarkPos, checkmarkColor, checkmarkSize);
        }

        if (hovered) {
            ImGui::SetTooltip("*%s ($%d) %s", name.c_str(), item.Info.InitialGuidePrice, I18N::T(XorStr("\nLeft mouse button: Toggle the display of the item.\nRight mouse button: Toggle whether the item is forced to be displayed, regardless of the filter conditions.")).c_str());
        }

        ImGui::EndGroup();

        ImGui::PopStyleVar();

        return clicked;
    }

    static inline void Render()
    {
        ImGui::SetNextWindowSize({ Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83 });
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("ItemRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            ImGui::BeginChild("O", I18N::T(XorStr("Item Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 625));
            {
                ImGui::Keybind(I18N::T(XorStr("Show Hotkeys")).c_str(), &GameData.Config.Item.EnableKey, true);
                ImGui::NewCheckbox(I18N::T(XorStr("Show Item")).c_str(), &GameData.Config.Item.Enable);
                ImGui::NewCheckbox(I18N::T(XorStr("Show Price")).c_str(), &GameData.Config.Item.Price);
                ImGui::NewCheckbox(I18N::T(XorStr("Enable Name")).c_str(), &GameData.Config.Item.Name);
                ImGui::NewCheckbox(I18N::T(XorStr("Enable Distance")).c_str(), &GameData.Config.Item.Distance);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("Displays the initial value of the item.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                ImGui::Separator();

                {
                    std::string tabLabels[] = {
                        I18N::T(XorStr("CN")),
                        I18N::T(XorStr("INTL"))
                    };
                    const char* tabLabelsc[2];
                    for (int i = 0; i < 2; ++i)
                    {
                        tabLabelsc[i] = tabLabels[i].c_str();
                    }
                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Value Model")).c_str(), tabLabelsc, 2, GameData.Config.ESP.ValueModel);
                }

                ImGui::Separator();

                ImGui::NewCheckbox(I18N::T(XorStr("Enable Quality Filter")).c_str(), &GameData.Config.Item.EnableQualityFilter);
                ImGui::SliderInt(I18N::T(XorStr("Quality Greater Than")).c_str(), &GameData.Config.Item.QualityGreaterThan, 0, 6, "%d", 0, "LEVEL");
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                ImGui::NewCheckbox(I18N::T(XorStr("Enable Price Filter")).c_str(), &GameData.Config.Item.EnablePriceFilter);
                ImGui::SliderInt(I18N::T(XorStr("Price Greater Than")).c_str(), &GameData.Config.Item.PriceGreaterThan, 0, 20000, "%d", 0, "K");
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("You can drag to change the value, or hold down [Ctrl + Mouse Left] to enter the value.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }

                ImGui::Separator();

                ImGui::NewCheckbox(I18N::T(XorStr("Item List")).c_str(), &GameData.Config.Item.List);
                ImGui::NewCheckbox(I18N::T(XorStr("List On Left")).c_str(), &GameData.Config.Item.OnLeft);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("On the right side of the screen, items scattered on the ground are displayed.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                ImGui::SliderInt(I18N::T(XorStr("Item List Size")).c_str(), &GameData.Config.Item.ListSize, 1, 100, "%d", 0, "X");
                ImGui::NewCheckbox(I18N::T(XorStr("Item Indicator")).c_str(), &GameData.Config.Item.Indicator);
                if (ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(200.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("When an object is not on the screen, the direction of the object will be indicated around the screen.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
                ImGui::SliderInt(I18N::T(XorStr("Item Indicator Size")).c_str(), &GameData.Config.Item.IndicatorSize, 1, 100, "%d", 0, "X");

                ImGui::NewCheckbox(I18N::T(XorStr("Box of the Items")).c_str(), &GameData.Config.Item.ShowBoxItems);
                ImGui::NewCheckbox(I18N::T(XorStr("Container of the Items")).c_str(), &GameData.Config.Item.ShowConItems);
                ImGui::NewCheckbox(I18N::T(XorStr("Sort By Price")).c_str(), &GameData.Config.Item.bSortByPrice);
                ImGui::SliderInt(I18N::T(XorStr("Item Max Count")).c_str(), &GameData.Config.Item.ItemMaxCount, 1, 50, "%d", 0, "");

                ImGui::Separator();

                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Show Ray")).c_str(), &GameData.Config.Item.ShowLine);
                    ImGui::SliderFloat(I18N::T(XorStr("Ray Width")).c_str(), &GameData.Config.Item.LineWidth, 0, 50, "%.2f", 0, "PX");
                    ImGui::SliderFloat(I18N::T(XorStr("Ray Pos")).c_str(), &GameData.Config.Item.LinePosY, 0, 100, "%.2f", 0, "%");
                }

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

                    NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Item Render")).c_str(), tabLabelsc, 3, GameData.Config.Item.ItemRender);
                }

                ImGui::SliderInt(I18N::T(XorStr("Max Distance")).c_str(), &GameData.Config.Item.MaxDistance, 0, 1000, "%d", 0, "M");
                ImGui::SliderInt(I18N::T(XorStr("Font Size")).c_str(), &GameData.Config.Item.FontSize, 5, 30, "%d", 0, "PX");
                ImGui::SliderInt(I18N::T(XorStr("Icon Size")).c_str(), &GameData.Config.Item.IconSize, 5, 30, "%d", 0, "PX");

                ImGui::Separator();

                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv0 Color")).c_str(), GameData.Config.Item.QualityColor[0]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv1 Color")).c_str(), GameData.Config.Item.QualityColor[1]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv2 Color")).c_str(), GameData.Config.Item.QualityColor[2]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv3 Color")).c_str(), GameData.Config.Item.QualityColor[3]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv4 Color")).c_str(), GameData.Config.Item.QualityColor[4]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv5 Color")).c_str(), GameData.Config.Item.QualityColor[5]);
                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Quality Lv6 Color")).c_str(), GameData.Config.Item.QualityColor[6]);
            }
            ImGui::EndChild();

            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            ImGui::BeginChild("O", I18N::T(XorStr("Item Filter")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidthSM * 3 + 88, 625), false, 0, true);
            {

                std::string tabLabels[] = {
                     I18N::T(XorStr("All")),
                     I18N::T(XorStr("Electronic Product")),
                     I18N::T(XorStr("Medical Item")),
                     I18N::T(XorStr("Tool & Material")),
                     I18N::T(XorStr("Household Item")),
                     I18N::T(XorStr("Craftwork")),
                     I18N::T(XorStr("Intel")),
                     I18N::T(XorStr("Energy Fuel")),
                     I18N::T(XorStr("Consumables")),
                     I18N::T(XorStr("Equipment")),
                     I18N::T(XorStr("Guns")),
                     I18N::T(XorStr("Accessories")),
                     I18N::T(XorStr("Layali Grove Keycard")),
                     I18N::T(XorStr("Zero Dam Keycard")),
                     I18N::T(XorStr("Space City Keycard")),
                     I18N::T(XorStr("Brakkesh Keycard")),
                     I18N::T(XorStr("Prison Keycard")),
                };
                const int tabCount = sizeof(tabLabels) / sizeof(tabLabels[0]);
                const char* tabLabelsc[tabCount];
                for (int i = 0; i < tabCount; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                static int SubSelectedTab = 1;
                for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++) {
                    if (ImGui::SubTab(i == SubSelectedTab, tabLabelsc[i], Style::SubTab::Size)) SubSelectedTab = i;
                    if (!(GameData.CurrentLanguage != Language::English && i == 9) && !(GameData.CurrentLanguage == Language::English && i == 6) && !(GameData.CurrentLanguage == Language::English && i == 13)) {
                        if (i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1) ImGui::SameLine();
                    }
                }

                ImGui::Separator();
                static bool All = true;

                static bool bAll = All;
                static bool PushAll = false;
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 6.f);
                if (ImGui::NewCheckboxOnLeft(I18N::T(XorStr("Select All")).c_str(), &All))
                {
                    PushAll = true;
                    bAll = !bAll;
                }
                ImGui::SameLine();
                if (GameData.CurrentLanguage == Language::Chinese) {
                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 593.f);
                }
                else {
                    ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 561.f);
                }
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 4.f);

                static char searchBuf[512] = "";

                {
                    ImGui::PushStyleColor(ImGuiCol_FrameBg, IM_COL32(28, 28, 28, 220));
                    ImGui::PushStyleColor(ImGuiCol_FrameBgHovered, IM_COL32(28, 28, 28, 250));
                    ImGui::PushStyleColor(ImGuiCol_FrameBgActive, IM_COL32(28, 28, 28, 250));
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.0f);
                    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 8.f, 5.f });
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 5.f);

                    ImVec2 inputPos = ImGui::GetCursorScreenPos();
                    float inputWidth = 160.0f;
                    ImGui::SetNextItemWidth(inputWidth);
                    if (ImGui::InputTextWithHint("##search", I18N::T(XorStr("Search Items")).c_str(), searchBuf, sizeof(searchBuf)))
                    {
                    }
                    if (ImGui::IsItemHovered()) {
                        ImGui::BeginTooltip();
                        ImGui::PushTextWrapPos(200.0f);
                        ImGui::TextWrapped(I18N::T(XorStr("Items are collected manually by us. If there are items that cannot be found, please report them to us.")).c_str());
                        ImGui::PopTextWrapPos();
                        ImGui::EndTooltip();
                    }

                    ImGui::PopStyleVar(3);
                    ImGui::PopStyleColor(3);

                    /* ImVec2 p0 = inputPos;
                     ImVec2 p1 = ImVec2(inputPos.x + inputWidth, inputPos.y + ImGui::GetFrameHeight());
                     ImU32 lineColor = IM_COL32(47, 47, 47, 255);
                     ImGui::GetWindowDrawList()->AddLine(
                         ImVec2(p0.x, p1.y), ImVec2(p1.x, p1.y), lineColor, 1.0f
                     );*/
                }

                static std::vector<RealItemDataTableOrder> Items;

                if (Items.size() == 0) {
                    for (const auto& Item : GetItemDataTable())
                    {
                        Items.push_back({ Item.first, Item.second });
                    }

                    std::sort(Items.begin(), Items.end(), [](const RealItemDataTableOrder& a, const RealItemDataTableOrder& b) {
                        return a.Info.InitialGuidePrice > b.Info.InitialGuidePrice;
                        });
                }

                ImGui::SetNextWindowSize({ 823, GameData.CurrentLanguage != Language::English ? 475.f : 438.f });
                ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
                ImGui::Begin(XorStr("ItemFiRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

                int i = 0;
                bool haveFalse = false;
                for (auto& Item : Items)
                {
                    if (SubSelectedTab == 1)
                    {
                        if (Item.Info.TagFilterSub != 101) continue;
                    }

                    if (SubSelectedTab == 2)
                    {
                        if (Item.Info.TagFilterSub != 102) continue;
                    }

                    if (SubSelectedTab == 3)
                    {
                        if (Item.Info.TagFilterSub != 103) continue;
                    }

                    if (SubSelectedTab == 4)
                    {
                        if (Item.Info.TagFilterSub != 105) continue;
                    }

                    if (SubSelectedTab == 5)
                    {
                        if (Item.Info.TagFilterSub != 107) continue;
                    }

                    if (SubSelectedTab == 6)
                    {
                        if (Item.Info.TagFilterSub != 104) continue;
                    }

                    if (SubSelectedTab == 7)
                    {
                        if (Item.Info.TagFilterSub != 108) continue;
                    }

                    if (SubSelectedTab == 8)
                    {
                        if (
                            Item.Info.TagFilterSub != 701 &&
                            Item.Info.TagFilterSub != 702
                            ) continue;
                    }

                    if (SubSelectedTab == 9)
                    {
                        if (
                            Item.Info.TagFilterSub != 201 &&
                            Item.Info.TagFilterSub != 202 &&
                            Item.Info.TagFilterSub != 203 &&
                            Item.Info.TagFilterSub != 204
                            ) continue;
                    }

                    if (SubSelectedTab == 10)
                    {
                        if (
                            Item.Info.TagFilterSub != 307 &&
                            Item.Info.TagFilterSub != 306 &&
                            Item.Info.TagFilterSub != 305 &&
                            Item.Info.TagFilterSub != 304 &&
                            Item.Info.TagFilterSub != 303 &&
                            Item.Info.TagFilterSub != 302 &&
                            Item.Info.TagFilterSub != 301
                            ) continue;
                    }

                    if (SubSelectedTab == 11)
                    {
                        if (
                            Item.Info.TagFilterSub != 401 && Item.Info.TagFilterSub != 402 && Item.Info.TagFilterSub != 403
                            && Item.Info.TagFilterSub != 404 && Item.Info.TagFilterSub != 405 && Item.Info.TagFilterSub != 406
                            && Item.Info.TagFilterSub != 407 && Item.Info.TagFilterSub != 408 && Item.Info.TagFilterSub != 409
                            ) continue;
                    }

                    if (SubSelectedTab == 12)
                    {
                        if ((Item.Info.TagFilterSub != 801)) continue;
                    }

                    if (SubSelectedTab == 13)
                    {
                        if ((Item.Info.TagFilterSub != 802)) continue;
                    }

                    if (SubSelectedTab == 14)
                    {
                        if ((Item.Info.TagFilterSub != 803)) continue;
                    }

                    if (SubSelectedTab == 15)
                    {
                        if ((Item.Info.TagFilterSub != 1803)) continue;
                    }

                    if (SubSelectedTab == 16)
                    {
                        if ((Item.Info.TagFilterSub != 805)) continue;
                    }

                    static auto containsIgnoreCase = [](const std::string& str, const std::string& key) {
                        std::string s1 = str, s2 = key;
                        std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
                        std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
                        return s1.find(s2) != std::string::npos;
                        };

                    if (!strlen(searchBuf) == 0 && !containsIgnoreCase(Utils::StringToUTF8(GetItemTranslate(Item.ID)), searchBuf)) {
                        continue;
                    }


                    if (RenderItem(Item, GameData.Config.Item.Items[Item.Info.Index]))
                    {
                        GameData.Config.Item.Items[Item.Info.Index] = !GameData.Config.Item.Items[Item.Info.Index];
                    }

                    if ((i + 1) % 5 != 0) {
                        ImGui::SameLine();
                    }

                    i++;

                    if (PushAll) { GameData.Config.Item.Items[Item.Info.Index] = bAll; }
                    else {
                        if (!GameData.Config.Item.Items[Item.Info.Index])
                        {
                            haveFalse = true;
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

                ImGui::Dummy(ImVec2(0.f, 170.f));

                ImGui::End();

                /*bool AllTrue = true;
                for (const auto& Item : GameData.Config.Item.Items)
                {
                    if (!Item) {
                        AllTrue = false;
                        break;
                    }
                }*/
            }
            ImGui::EndChild();
        }
        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
};