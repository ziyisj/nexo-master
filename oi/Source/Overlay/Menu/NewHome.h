#pragma once

namespace NewHome
{
    static inline void Render()
    {
        ImGui::SetNextWindowSize({Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83});
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("ESPRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            // ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + NewGUIStyle::Global::ChildWidth / 2, ImGui::GetCursorPos().y));
            static int SelectedTab = 0;
            const char* NameTabs[] = {"Main Setting", "Visual Model", "Global Recoil", "Account Encryption", "Other Setting"};

            ImGui::BeginChild("O", I18N::T(XorStr("Setting Menu")).c_str(), ImVec2(250, 625));
            {
                // ImGui::SetCursorPos(ImVec2(Style::Padding + Spacing.x / 2, 60));
                ImGui::BeginGroup();
                {
                    for (int i = 0; i < sizeof(NameTabs) / sizeof(NameTabs[0]); i++)
                    {
                        // if (i == 4)
                        // {
                        //     ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 150);
                        // }
                        if (ImGui::Tab(i == SelectedTab, std::format("{}    ", I18N::T(NameTabs[i])).c_str(), {220, 36}))
                        {
                            SelectedTab = i;
                        }
                    }
                }
                ImGui::EndGroup();
            }
            ImGui::EndChild();
            ImGui::SameLine();
            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
            ImGui::BeginChild("O", std::format("{}   ", I18N::T(NameTabs[SelectedTab])).c_str(), ImVec2(860, 625), false, 0, true);
            {
                ImGui::BeginGroup();
                {
                    if (SelectedTab == 0)
                    {
                        ImGui::BeginChild("O", I18N::T(XorStr("Miscellaneous Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 435));
                        {
                            ImGui::Keybind(I18N::T(XorStr("Menu Hotkeys")).c_str(), &GameData.Config.Window.SettingKey, true);
                            ImGui::Keybind(I18N::T(XorStr("Clear Hotkeys")).c_str(), &GameData.Config.Window.ClearKey, true);
                            ImGui::Keybind(I18N::T(XorStr("Battle Mode Hotkeys")).c_str(), &GameData.Config.ESP.BattleModeKey, true);
                            ImGui::Separator();
                            ImGui::NewCheckbox(I18N::T(XorStr("Enable Debug")).c_str(), &GameData.Config.ESP.Debug);
                            ImGui::Keybind(I18N::T(XorStr("Debug Hotkeys")).c_str(), &GameData.Config.ESP.DebugKey, true);
                            ImGui::SliderInt(I18N::T(XorStr("Debug Max Distance")).c_str(), &GameData.Config.ESP.DebugMaxDistance, 0, 1000, "%d", 0, "M");
        
                            ImGui::Separator();
                            {
                                std::string tabLabels[] = {
                                    I18N::T(XorStr("Default")), I18N::T(XorStr("Beautiful")), I18N::T(XorStr("Square")), I18N::T(XorStr("SC")), I18N::T(XorStr("Game")), I18N::T(XorStr("NotoSans")), I18N::T(XorStr("Inclusive")), I18N::T(XorStr("ZiTiQuanWeiJunHei")), I18N::T(XorStr("PangMenZhengDaoXiXianTi")), I18N::T(XorStr("DingTalk")),
                                };
                                const char* tabLabelsc[10];
                                for (int i = 0; i < 10; ++i)
                                {
                                    tabLabelsc[i] = tabLabels[i].c_str();
                                }
        
                                if (NewSelect::Combo(I18N::T(XorStr("Render Font")).c_str(), &GameData.Config.Overlay.FontIndex, &tabLabelsc[0], 10))
                                {
                                }
        
                                // ImGui::Dummy({0.f, 0.f});
                                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Outline Color")).c_str(), GameData.Config.ESP.OutlineColor);
                                // ImGui::NewCheckbox(I18N::T(XorStr("Font Bold")).c_str(), &GameData.Config.Overlay.FontBold);
                                ImGui::Separator();
                                ImGui::SliderInt(I18N::T(XorStr("Menu FPS")).c_str(), &GameData.Config.ESP.TargetFPS, 30, 1000, "%d", 0, "FPS");
                                
                            }
                        }
                        ImGui::EndChild();

                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        ImGui::BeginChild("O", I18N::T(XorStr("Render Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 565));
                        {
                            ImGui::NewCheckbox(I18N::T(XorStr("Enable Render")).c_str(), &GameData.Config.Overlay.Enable);
                            ImGui::Keybind(I18N::T(XorStr("Render Hotkeys")).c_str(), &GameData.Config.Window.CloseESPKey, true);
                            if (ImGui::NewCheckbox(I18N::T(XorStr("VSync")).c_str(), &GameData.Config.Overlay.VSync))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }
                            if (ImGui::NewCheckbox(I18N::T(XorStr("sRgb Capable")).c_str(), &GameData.Config.Overlay.sRgbCapable))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }

                            {
                                std::string tabLabels[] = {
                                    I18N::T(XorStr("Streaming")),
                                    I18N::T(XorStr("Fusion")),
                                };
                                const char* tabLabelsc[2];
                                for (int i = 0; i < 2; ++i)
                                {
                                    tabLabelsc[i] = tabLabels[i].c_str();
                                }

                                if (NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Render Mode")).c_str(), tabLabelsc, 2, GameData.Config.Overlay.FusionMode))
                                {
                                    GameData.Config.Overlay.Enable = false;
                                    Sleep(100);
                                    GameData.Config.Overlay.Enable = true;
                                }
                            }

                            {
                                std::vector<Utils::DisplayInfo> displays;
                                EnumDisplayMonitors(NULL, NULL, Utils::MonitorEnumProc, reinterpret_cast<LPARAM>(&displays));

                                int selectedDisplay = GameData.Config.Overlay.MonitorCurrentIdx;
                                if (selectedDisplay >= displays.size())
                                {
                                    selectedDisplay = 0;
                                    const auto& display = displays[0];
                                    GameData.Config.Overlay.MonitorCurrentIdx = 0;
                                    GameData.Config.Overlay.ScreenWidth = display.width;
                                    GameData.Config.Overlay.ScreenHeight = display.height;
                                    GameData.Config.Overlay.ScreenX = display.x;
                                    GameData.Config.Overlay.ScreenY = display.y;
                                }

                                if (displays.size() > 0 && GameData.Config.Overlay.MonitorCurrentIdx < displays.size())
                                {
                                    const auto& display = displays[GameData.Config.Overlay.MonitorCurrentIdx];
                                    GameData.Config.Overlay.ScreenWidth = display.width;
                                    GameData.Config.Overlay.ScreenHeight = display.height;
                                    GameData.Config.Overlay.ScreenX = display.x;
                                    GameData.Config.Overlay.ScreenY = display.y;
                                }

                                // 方法1：将变量移到函数外部或类成员变量
                                static std::vector<std::string> allTabLabels;
                                static std::vector<const char*> allTabLabelsCStr;

                                // 每次使用前清空
                                allTabLabels.clear();
                                allTabLabelsCStr.clear();

                                for (size_t i = 0; i < displays.size(); i++)
                                {
                                    // 为每个显示器创建标签
                                    std::string label = I18N::T(XorStr("Screen")) + " " + std::to_string(i + 1);
                                    allTabLabels.push_back(label);
                                    allTabLabelsCStr.push_back(allTabLabels.back().c_str());
                                }

                                // 使用所有显示器的标签绘制选项卡
                                if (NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Render Screen")).c_str(), allTabLabelsCStr.data(), static_cast<int>(displays.size()), GameData.Config.Overlay.MonitorCurrentIdx))
                                {
                                    const auto& display = displays[GameData.Config.Overlay.MonitorCurrentIdx];
                                    GameData.Config.Overlay.ScreenWidth = display.width;
                                    GameData.Config.Overlay.ScreenHeight = display.height;
                                    GameData.Config.Overlay.ScreenX = display.x;
                                    GameData.Config.Overlay.ScreenY = display.y;

                                    GameData.Config.Overlay.Enable = false;
                                    Sleep(100);
                                    GameData.Config.Overlay.Enable = true;
                                }

                                // 显示当前选中显示器的信息
                                // if (displays.size() > 0 && GameData.Config.Overlay.MonitorCurrentIdx < displays.size())
                                // {
                                //     const auto& currentDisplay = displays[GameData.Config.Overlay.MonitorCurrentIdx];
                                //     ImGui::SameLine();
                                //     ImGui::Text("%dx%d %d %d", GameData.Config.Overlay.ScreenWidth, GameData.Config.Overlay.ScreenHeight, GameData.Config.Overlay.ScreenX, GameData.Config.Overlay.ScreenY);
                                // }
                            }

                            if (!GameData.Config.Overlay.Init && GameData.Config.Overlay.ScreenWidth != 0 && GameData.Config.Overlay.ScreenHeight != 0)
                                GameData.Config.Overlay.Init = true;
                            

                            if (ImGui::NewCheckbox(I18N::T(XorStr("Limit FPS")).c_str(), &GameData.Config.ESP.LimitFPSStatus))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }

                            if (ImGui::SliderInt(I18N::T(XorStr("FPS")).c_str(), &GameData.Config.ESP.LimitFPS, 60, 1000, "%d", 0, "FPS"))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }

                            if (ImGui::SliderInt(I18N::T(XorStr("Anti Aliasing")).c_str(), &GameData.Config.ESP.AntiAliasing, 0, 16, "%d", 0, "X"))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }

                            if (ImGui::SliderInt(I18N::T(XorStr("Depth Bits")).c_str(), &GameData.Config.ESP.DepthBits, 0, 32, "%d", 0, "X"))
                            {
                                GameData.Config.Overlay.Enable = false;
                                Sleep(10);
                                GameData.Config.Overlay.Enable = true;
                            }

                            ImGui::Separator();

                            if (GameData.Config.Overlay.Enable)
                            {
                                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                                ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));
                                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));
                            }
                            else
                            {
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                            }

                            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 8);

                            if (ImGui::Button(!GameData.Config.Overlay.Enable ? std::format(" {} ", I18N::T(XorStr("Enable Render"))).c_str() : std::format(" {} ", I18N::T(XorStr("Close Render"))).c_str(), ImVec2(240.f - 8.f, 28)))
                            {
                                GameData.Config.Overlay.Enable = !GameData.Config.Overlay.Enable;
                            }

                            if (GameData.Config.Overlay.Enable)
                            {
                                ImGui::PopStyleColor(4);
                            }
                            else
                            {
                                ImGui::PopStyleColor(1);
                            }
                        }
                        ImGui::EndChild();

                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        NewBox::AimBot();
                    }

                    if (SelectedTab == 1)
                    {
                        ImGui::BeginChild("O", I18N::T(XorStr("Real Time Model")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 265));
                        {
                            ImGui::NewCheckbox(I18N::T(XorStr("Physical Model")).c_str(), &GameData.Config.PhysX.Enable);
                            ImGui::SliderInt(I18N::T(XorStr("Update Frequency")).c_str(), &GameData.Config.PhysX.ReDistance, 100, 1000, "%d", 0, "M");
        
                            ImGui::NewCheckbox(I18N::T(XorStr("No Cache Mode")).c_str(), &GameData.Config.PhysX.NoCache);
                            if (ImGui::IsItemHovered())
                            {
                                ImGui::BeginTooltip();
                                ImGui::PushTextWrapPos(200.0f);
                                ImGui::TextWrapped(I18N::T(XorStr("If model inaccuracies occur frequently, you can try turning on this option.")).c_str());
                                ImGui::PopTextWrapPos();
                                ImGui::EndTooltip();
                            }
        
                            {
                                ImGui::Separator();
                                ImGui::NewCheckbox(I18N::T(XorStr("Draw Model")).c_str(), &GameData.Config.PhysX.DeBug);
                                ImGui::Keybind(I18N::T(XorStr("Draw Model Hotkeys")).c_str(), &GameData.Config.PhysX.DeBugKey, true);
                                ImGui::Keybind(I18N::T(XorStr("Update Model")).c_str(), &GameData.Config.PhysX.ClearKey, true);
                                if (ImGui::IsItemHovered())
                                {
                                    ImGui::BeginTooltip();
                                    ImGui::PushTextWrapPos(200.0f);
                                    ImGui::TextWrapped(I18N::T(XorStr("If the visual inspection status is inaccurate, please try pressing this shortcut key to refresh the model. If it is still abnormal after refreshing, please feedback the map and the exact location to us for repair.")).c_str());
                                    ImGui::PopTextWrapPos();
                                    ImGui::EndTooltip();
                                }
                            }
                        }
                        ImGui::EndChild();

                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        ImGui::BeginChild("O", I18N::T(XorStr("Local Model")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 125));
                        {
                            ImGui::NewCheckbox(I18N::T(XorStr("Load Local Model")).c_str(), &GameData.Physics.bCanLoadLocalModel);
                            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                            if (ImGui::Button(I18N::T(XorStr("Open Model Directory")).c_str(), ImVec2(240.f - 8.f, 28)))
                            {                                
                                if (!std::filesystem::exists("Engine\\Map"))
                                {
                                    std::filesystem::create_directory("Engine\\Map");
                                }
                                ShellExecuteA(NULL, "open", "Engine\\Map", NULL, NULL, SW_SHOWNORMAL);
                            }
                            ImGui::PopStyleColor(1);
                            if (std::string(GameData.Auth.Username) == XorStr("0") || std::string(GameData.Auth.Username) == "")
                                ImGui::NewCheckbox(I18N::T(XorStr("Auto Save Local Model")).c_str(), &GameData.Physics.SaveLocalModelUpdate);
                        }
                        ImGui::EndChild();

                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        ImGui::BeginChild("O", I18N::T(XorStr("Map Model")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 565));
                        {
                            // 地图文件列表和显示名称
                            struct MapInfo {
                                std::string filename;
                                std::string displayName;
                            };
                            
                            std::vector<MapInfo> MapFiles = {
                                {XorStr("Dam_Iris.npak"), I18N::T(XorStr("Dam Iris"))},
                                {XorStr("Forrest.npak"), I18N::T(XorStr("Forrest"))},
                                {XorStr("Brakkesh.npak"), I18N::T(XorStr("Brakkesh"))},
                                {XorStr("SpaceCenter.npak"), I18N::T(XorStr("Space Center"))},
                                {XorStr("Tide.npak"), I18N::T(XorStr("Tide"))},
                                {XorStr("SecretService.npak"), I18N::T(XorStr("Secret Service"))}
                            };
                            
                            // 检查每个地图文件是否存在
                            for (const auto& mapInfo : MapFiles)
                            {
                                 std::string mapPath = XorStr("Engine/Map/") + mapInfo.filename;
                                 bool fileExists = std::filesystem::exists(mapPath);
                                 
                                 ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(0.0f, 5.0f));
                                 
                                 // 创建一个带背景的区域
                                 ImVec2 cursorPos = ImGui::GetCursorPos();
                                 ImVec2 itemSize = ImVec2(NewGUIStyle::Global::ChildWidth - 30.0f, 60.0f);
                                 
                                 // 绘制背景
                                 ImDrawList* drawList = ImGui::GetWindowDrawList();
                                 ImVec2 windowPos = ImGui::GetWindowPos();
                                 ImVec2 rectMin = ImVec2(windowPos.x + cursorPos.x, windowPos.y + cursorPos.y);
                                 ImVec2 rectMax = ImVec2(rectMin.x + itemSize.x, rectMin.y + itemSize.y);
                                 
                                 // 根据文件存在状态选择颜色
                                 ImU32 bgColor = fileExists ? 
                                     NewGUIStyle::Global::Base :      // 激活颜色（存在）
                                     NewGUIStyle::Global::Base;         // 灰色（不存在）
                                 
                                 // 绘制背景
                                 drawList->AddRectFilled(rectMin, rectMax, bgColor, 4.0f);
                                 
                                 // 显示地图名称（左上角）
                                 ImGui::SetCursorPos(ImVec2(cursorPos.x + 20, cursorPos.y + 8 + 5));
                                 ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 1.0f, 1.0f));
                                 ImGui::Text("%s", mapInfo.displayName.c_str());
                                 ImGui::PopStyleColor();
                                 
                                  // 显示状态文本（左下角）
                                  ImGui::SetCursorPos(ImVec2(cursorPos.x + 20, cursorPos.y + 22 + 8));
                                  ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.7f, 0.7f, 0.7f, 1.0f));
                                  if (fileExists)
                                  {
                                     auto fileSize = std::filesystem::file_size(mapPath);
                                     std::string sizeStr;
                                     if (fileSize > 1024 * 1024) {
                                         sizeStr = std::format("{:.1f} MB", fileSize / (1024.0 * 1024.0));
                                     } else if (fileSize > 1024) {
                                         sizeStr = std::format("{:.1f} KB", fileSize / 1024.0);
                                     } else {
                                         sizeStr = std::format("{} B", fileSize);
                                     }
                                     ImGui::Text(std::format("{} ({})", I18N::T(XorStr("Model Available")), sizeStr).c_str());
                                  }
                                  else
                                  {
                                      ImGui::Text(I18N::T(XorStr("Model Missing")).c_str());
                                  }
                                  ImGui::PopStyleColor();
                                  
                                  // 在右边显示打勾图标（如果文件存在）
                                  if (fileExists)
                                  {
                                      // 计算圆形图标的位置（右边上下居中）
                                      float iconRadius = 8.0f;
                                      ImVec2 iconCenter = ImVec2(
                                          windowPos.x + cursorPos.x + itemSize.x - iconRadius - 12 - 6, 
                                          windowPos.y + cursorPos.y + itemSize.y / 2
                                      );
                                      
                                      // 绘制圆形背景（主色）
                                      drawList->AddCircleFilled(iconCenter, iconRadius, NewGUIStyle::Global::Active);
                                      
                                      // 绘制黑色打勾
                                      ImVec2 checkStart = ImVec2(iconCenter.x - 4, iconCenter.y - 1);
                                      ImVec2 checkMid = ImVec2(iconCenter.x - 1, iconCenter.y + 2);
                                      ImVec2 checkEnd = ImVec2(iconCenter.x + 4, iconCenter.y - 3);
                                      
                                      drawList->AddLine(checkStart, checkMid, IM_COL32(0, 0, 0, 255), 1.5f);
                                      drawList->AddLine(checkMid, checkEnd, IM_COL32(0, 0, 0, 255), 1.5f);
                                  }

                                 // 移动到下一行
                                 ImGui::SetCursorPos(ImVec2(cursorPos.x, cursorPos.y + itemSize.y + 16));
                                 
                                 ImGui::PopStyleVar(); // ItemSpacing
                            }
                        }
                        ImGui::EndChild();
                    }

                    if (SelectedTab == 2)
                    {
                        ImGui::BeginChild("O", I18N::T(XorStr("Global Recoil")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 240));
                        {
                            ImGui::NewCheckbox(I18N::T(XorStr("Enable Global Recoil")).c_str(), &GameData.Config.Recoil.Enable);
                            if (ImGui::IsItemHovered())
                            {
                                ImGui::BeginTooltip();
                                ImGui::PushTextWrapPos(200.0f);
                                ImGui::TextWrapped(I18N::T(XorStr("Read the current firearm recoil data and use the hardware controller to simulate the mouse to control the gun")).c_str());
                                ImGui::PopTextWrapPos();
                                ImGui::EndTooltip();
                            }
                            ImGui::NewCheckbox(I18N::T(XorStr("Continue One")).c_str(), &GameData.Config.Recoil.ContinueOne);
        
                            ImGui::Keybind(I18N::T(XorStr("Quick Switch")).c_str(), &GameData.Config.Recoil.Key, true);
        
                            ImGui::SliderFloat(I18N::T(XorStr("Recoil Strength")).c_str(), &GameData.Config.Recoil.Speed, 0.00f, 200.f, "%.2f", 0, "%");
                            ImGui::SliderFloat(I18N::T(XorStr("Recoil Scale")).c_str(), &GameData.Config.Recoil.X, 0.f, 0.1f, "%.2f", 0, "PX");
                            if (ImGui::IsItemHovered())
                            {
                                ImGui::BeginTooltip();
                                ImGui::PushTextWrapPos(200.0f);
                                ImGui::TextWrapped(I18N::T(XorStr("The gun control ratio refers to the value of the screen movement pixels corresponding to the game camera rotation. Do not adjust it easily.")).c_str());
                                ImGui::PopTextWrapPos();
                                ImGui::EndTooltip();
                            }
                        }
                        ImGui::EndChild();
                    }

                    if (SelectedTab == 3)
                    {
                        ImGui::BeginChild("O", I18N::T(XorStr("Account Encryption")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 85));
                        {
                            ImGui::NewCheckbox(I18N::T(XorStr("Auto Collect Decrypt")).c_str(), &GameData.Config.Window.AutoCollectDecrypt);
                        }
                        ImGui::EndChild();
                    }

                    if (SelectedTab == 4)
                    {
                        ImGui::BeginChild("O", I18N::T(XorStr("Info Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, GameData.Config.ESP.InfoType == 0 ? 588 + 35 : 335));
                        {
                            {
                                std::string tabLabels[] = {
                                    I18N::T(XorStr("Card")),
                                    I18N::T(XorStr("Text")),
                                    I18N::T(XorStr("Hide")),
                                };
                                const char* tabLabelsc[3];
                                for (int i = 0; i < 3; ++i)
                                {
                                    tabLabelsc[i] = tabLabels[i].c_str();
                                }
        
                                NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Info Style")).c_str(), tabLabelsc, 3, GameData.Config.ESP.InfoType);
                            }
                            // ImGui::NewCheckbox(I18N::T(XorStr("Upper left Info")).c_str(), &GameData.Config.Overlay.ShowFPS);
                            ImGui::NewCheckbox(I18N::T(XorStr("Show Account Status")).c_str(), &GameData.Config.Overlay.ShowAccount);
                            ImGui::NewCheckbox(I18N::T(XorStr("Show AimBot Config")).c_str(), &GameData.Config.Overlay.ShowAimBotConfig);
                            ImGui::NewCheckbox(I18N::T(XorStr("Show Player Alive")).c_str(), &GameData.Config.Overlay.ShowPlayerAlive);
                            ImGui::NewCheckbox(I18N::T(XorStr("Show Enable Global Recoil State")).c_str(), &GameData.Config.Recoil.ShowEnableType);
                            ImGui::SliderInt(I18N::T(XorStr("Info Font Size")).c_str(), &GameData.Config.ESP.InfoFontSize, 5, 30, "%d", 0, "PX");
                            NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Info Font Color")).c_str(), GameData.Config.ESP.InfoColor);
        
                            if (GameData.Config.ESP.InfoType == 0)
                            {
                                ImGui::Separator();
                                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Card Header Color")).c_str(), GameData.Config.ESP.InfoHeaderColor);
                                NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Card Background Color")).c_str(), GameData.Config.ESP.InfoBgColor);
        
                                const float box_height = 128.0f;
                                if (NewMoveBox::DrawMoveBox(XorStr("Card Pos"), GameData.Config.ESP.InfoX, GameData.Config.ESP.InfoY, GameData.Config.Window.InfoWidth, GameData.Config.Window.InfoHeight, GameData.Config.Overlay.ScreenWidth - GameData.Config.Window.InfoWidth, GameData.Config.Overlay.ScreenHeight - GameData.Config.Window.InfoHeight, box_height))
                                {
                                    // 位置已更新，可以在这里处理更新逻辑
                                }
                                if (ImGui::IsItemHovered())
                                {
                                    ImGui::BeginTooltip();
                                    ImGui::PushTextWrapPos(200.0f);
                                    ImGui::TextWrapped(I18N::T(XorStr("*Drag here to reposition the window.")).c_str());
                                    ImGui::PopTextWrapPos();
                                    ImGui::EndTooltip();
                                }
                                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::Base));
                                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                                if (ImGui::Button(I18N::T(XorStr("Default Location")).c_str(), ImVec2(241, 28)))
                                {
                                    GameData.Config.ESP.InfoX = 5.f;
                                    GameData.Config.ESP.InfoY = 21.f;
                                }
                                if (ImGui::Button(I18N::T(XorStr("One Click Right")).c_str(), ImVec2(241, 28)))
                                {
                                    GameData.Config.ESP.InfoX = GameData.Config.Overlay.ScreenWidth - 24.f - GameData.Config.Window.InfoWidth;
                                    GameData.Config.ESP.InfoY = 50.f;
                                }
                                ImGui::PopStyleColor(3);
                            }
                        }
                        ImGui::EndChild();

                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        ImGui::BeginChild("O", I18N::T(XorStr("Miscellaneous Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 320));
                        {
                            if (ImGui::NewCheckbox(I18N::T(XorStr("Auto Mem Map")).c_str(), &GameData.Config.Window.MemMap))
                            {
                                Config::Save();
                            }
                            ImGui::NewCheckbox(I18N::T(XorStr("Auto Refresh Mem")).c_str(), &GameData.Config.Window.FreqMem);
                            ImGui::NewCheckbox(I18N::T(XorStr("Auto Refresh All")).c_str(), &GameData.Config.Window.FreqAll);
                            ImGui::NewCheckbox(I18N::T(XorStr("No Enc Cache")).c_str(), &GameData.Config.Window.NoEncCache);
                            ImGui::SliderInt(I18N::T(XorStr("Cache Update Frequency")).c_str(), &GameData.Config.Window.CacheSleep, 100, 2000, "%d", 0, "MS");
                            ImGui::SliderInt(I18N::T(XorStr("ESP Read Frequency")).c_str(), &GameData.Config.Window.ESPSleep, 0, 15, "%d", 0, "MS");
                            ImGui::SliderInt(I18N::T(XorStr("Camera Read Frequency")).c_str(), &GameData.Config.Window.CameraSleep, 0, 15, "%d", 0, "MS");
                        }
                        ImGui::EndChild();
                        ImGui::SameLine();
                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                        ImGui::BeginChild("O", I18N::T(XorStr("Theme Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth - 8.f, 120));
                        {
                            if (NewColorPicker::DrawLabeledColorPickerFloat4(I18N::T(XorStr("Active Color")).c_str(), GameData.Config.Theme.Active))
                            {
                                Config::Save();
                            }
                            ImGui::TextDisabled(I18N::T(XorStr("You need to restart the software after changing the theme color.")).c_str());
                        }
                        ImGui::EndChild();
                    }
                }
                ImGui::EndGroup();
            }
            ImGui::EndChild();
        }

        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
}; // namespace NewHome