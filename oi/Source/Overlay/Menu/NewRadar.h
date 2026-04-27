#pragma once
#include <Utils/ExtractZipFile.h>
#include <Utils/Download.h>
#include <cpr/cpr.h>

static bool CheckVersion = false;

namespace NewRadar
{
    static inline void Render()
    {
        if (!CheckVersion)
        {
            bool Success;
            std::string Content = Utils::ReadFileToString(XorStr("Engine\\RadarServer\\Version"), Success);
            if (!Success || Content != XorStr("1.1.6"))
            {
                Utils::ForceDeleteFile(XorStr("Engine\\RadarServer\\Version"));
                std::thread DownVersion([] {
                    Utils::Log(0, XorStr("Downloading Radar Server... (正在更新雷達服務端...)"));
                    Download Downloader(XorStr("http://saroyan-kingdom-vishal.nexodma.vip/rds/1.1.6"), XorStr("Config/Radar"));
                    Downloader.Execute();
                    ExtractZipFile(XorStr("Config/Radar"), "./");
                    Utils::Log(1, XorStr("Radar server has been updated (雷達服務端已更新完成)"));
                    Utils::Log(3, XorStr("Please manually update the radar server software on the shared server (请记得手动更新共享服务器的雷达服务端软件)"));
                });
                DownVersion.detach();
            }
            CheckVersion = true;
        }

        bool Success;
        Utils::ReadFileToString(XorStr("Engine\\RadarServer\\Version"), Success);

        ImGui::SetNextWindowSize({Style::Window::Size.x - NewGUIStyle::Window::Padding, Style::Window::Size.y - NewGUIStyle::Window::Padding - 83});
        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 2));
        ImGui::Begin(XorStr("WebRadarRender"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground);

        ImGui::BeginGroup();
        {
            if (!Success)
            {
                ImGui::SetCursorPos(ImVec2(450, 270));
                ImGui::TextDisabled(U8("雷達服務端正在下載，請留意控制台進度"));
                ImGui::SetCursorPos(ImVec2(300, 285));
                ImGui::TextDisabled(U8("The radar server is downloading, please pay attention to the progress of the console"));
            }
            else
            {
                ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + NewGUIStyle::Global::ChildWidth / 2 - 50, ImGui::GetCursorPos().y));
                ImGui::BeginChild("O", I18N::T(XorStr("Share Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth + 100, 525));
                {
                    if (GameData.CurrentLanguage == Language::Chinese)
                    {
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("1. 购买推荐的流畅服务器"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("产品：腾讯云轻量应用服务器"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("系统：Windows Server 2012"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("配置：锐驰型"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("• 2核CPU / 2GB内存 / 200Mbps (共享带宽)"));
                        // ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("价格：45/月"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("2. 进入服务器面板-防火墙-添加规则"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("来源：选择\"全部IPv4地址\""));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("协议：TCP"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("端口：9000-9001"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("3. 将 RadarServer.exe 上传服务器并运行"));
                        ImGui::Indent();
                        if (ImGui::Selectable(U8("* 点击我找到服务端文件")))
                        {
                            ShellExecuteA(NULL, "open", "Engine\\RadarServer", NULL, NULL, SW_SHOWDEFAULT);
                        }
                        /*ImGui::SameLine();
                        ImGui::TextColored(ImVec4(0.0f, 0.4f, 1.0f, 1.0f), U8("- 点我找到服务端文件"));*/
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 使用电脑远程桌面工具连接服务器"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 在本地电脑复制 RadarServer.exe"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 在远程桌面窗口中粘贴"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 运行服务器中的 RadarServer.exe"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("4. 连接共享服务端"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 在软件雷达页面选择共享模式"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 找到服务器软件提供的端口和密码"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- 输入服务器IP、端口、密码进行连接"));
                        ImGui::Unindent();
                    }
                    else
                    {
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("1. Recommended Server Configuration:"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Product: Tencent Cloud Lightweight Server"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("System: Windows Server 2012"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Configuration: Swift Type"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("• 2 Core CPU"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("• 2GB RAM"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("• 200Mbps Bandwidth"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Region: Choose Nearest"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Price: ~45/month"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("2. Configure Lightweight Server Firewall Rules"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Source: Select \"All IPv4 Addresses\""));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Protocol: TCP"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("Port: 9000-9001"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("3. Upload and Run RadarServer.exe"));
                        ImGui::Indent();
                        if (ImGui::Selectable(U8("* Click I found the server file")))
                        {
                            ShellExecuteA(NULL, "open", "Engine\\RadarServer", NULL, NULL, SW_SHOWDEFAULT);
                        }
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Connect to server using Remote Desktop"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Copy RadarServer.exe from local PC"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Paste in Remote Desktop window"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Run RadarServer.exe on server"));
                        ImGui::Unindent();

                        ImGui::Spacing();
                        ImGui::TextColored(ImVec4(1.0f, 1.0f, 1.0f, 1.0f), U8("4. Connect to Shared Server"));
                        ImGui::Indent();
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Select Share Mode in radar software"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Find port and password provided by server"));
                        ImGui::TextColored(ImVec4(0.80f, 0.80f, 0.80f, 1.0f), U8("- Enter server IP, port and password to connect"));
                        ImGui::Unindent();
                    }
                }
                ImGui::EndChild();

                // ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + NewGUIStyle::Global::ChildWidth / 2, ImGui::GetCursorPos().y));
                ImGui::SameLine();
                ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                ImGui::BeginChild("O", I18N::T(XorStr("Radar Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, GameData.Config.WebRadar.Mode == 0 ? GameData.Config.WebRadar.Connected ? 265 : 230 : GameData.Config.WebRadar.Connected ? 450 + 35 * 2 : 450));
                {
                    {
                        static int LastValue = GameData.Config.WebRadar.Mode;

                        std::string tabLabels[] = {
                            I18N::T(XorStr("Local")),
                            I18N::T(XorStr("Share")),
                        };
                        const char* tabLabelsc[2];
                        for (int i = 0; i < 2; ++i)
                        {
                            tabLabelsc[i] = tabLabels[i].c_str();
                        }

                        NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("Radar Mode")).c_str(), tabLabelsc, 2, GameData.Config.WebRadar.Mode);

                        if (GameData.Config.WebRadar.Connected)
                        {
                            GameData.Config.WebRadar.Mode = LastValue;
                        }
                        else
                        {
                            LastValue = GameData.Config.WebRadar.Mode;
                        }
                    }

                    float InputItemWidth = 240.f;
                    bool ConnectedNeedPushStyleColor = false;

                    ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 5));
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, NewGUIStyle::Global::Rounding);
                    ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                    ImGui::PushStyleColor(ImGuiCol_FrameBg, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));

                    if (GameData.Config.WebRadar.Mode == 1)
                    {
                        ImGui::TextDisabled(I18N::T(XorStr("IP")).c_str());
                        ImGui::SetNextItemWidth(InputItemWidth);
                        ImGui::InputText("##IP", GameData.Config.WebRadar.IP, IM_ARRAYSIZE(GameData.Config.WebRadar.IP));

                        ImGui::TextDisabled(I18N::T(XorStr("Port")).c_str());
                        ImGui::SetNextItemWidth(InputItemWidth);
                        ImGui::InputText(U8("##PORT"), GameData.Config.WebRadar.Port, IM_ARRAYSIZE(GameData.Config.WebRadar.Port));

                        ImGui::TextDisabled(I18N::T(XorStr("Password")).c_str());
                        ImGui::SetNextItemWidth(InputItemWidth);
                        ImGui::InputText("##Password", GameData.Config.WebRadar.Password, IM_ARRAYSIZE(GameData.Config.WebRadar.Password));
                    }

                    ImGui::PopStyleColor(1);
                    ImGui::PopStyleVar(3);

                    ImGui::SliderInt(I18N::T(XorStr("Send Delay")).c_str(), &GameData.Config.WebRadar.Delay, 4, 40, "%d", 0, "MS");
                    if (ImGui::IsItemHovered())
                    {
                        ImGui::BeginTooltip();
                        ImGui::PushTextWrapPos(200.0f);
                        ImGui::TextWrapped(I18N::T(XorStr("The sending delay is selected based on the server bandwidth configuration. The larger the bandwidth, the lower the delay. If the server is a few megabytes, it is recommended not to modify the default. Here we recommend using a server with 100M bandwidth or above to enjoy a smooth radar sharing experience.")).c_str());
                        ImGui::PopTextWrapPos();
                        ImGui::EndTooltip();
                    }

                    ImGui::Dummy(ImVec2(0.0f, 0.0f));

                    if (GameData.Config.WebRadar.Connected)
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

                    static bool RestartServerWhenConnecting = false;

                    if (GameData.Config.WebRadar.Mode == 1)
                    {
                        ImGui::NewCheckbox(I18N::T(XorStr("Restart on connect")).c_str(), &RestartServerWhenConnecting);
                    }

                    if (ImGui::Button(GameData.Config.WebRadar.Connected ? I18N::T(XorStr("Disconnect")).c_str() : I18N::T(XorStr("Connect")).c_str(), ImVec2(InputItemWidth, 28)))
                    {
                        if (GameData.Config.WebRadar.Mode == 0)
                        {
                            GameData.Config.WebRadar.Connected = !GameData.Config.WebRadar.Connected;
                        }
                        else
                        {
                            if (!GameData.Config.WebRadar.Connected && GameData.Config.WebRadar.IP[0] && GameData.Config.WebRadar.Port[0] && GameData.Config.WebRadar.Password[0])
                            {
                                if (RestartServerWhenConnecting)
                                {
                                    std::string Url = std::format("http://{}:{}/api/restart?pwd={}", GameData.Config.WebRadar.IP, GameData.Config.WebRadar.Port, GameData.Config.WebRadar.Password);
                                    cpr::Post(cpr::Url{Url}, cpr::Header{{XorStr("Content-Type"), XorStr("application/octet-stream")}}, cpr::Body{}, cpr::Timeout{1000});
                                    Sleep(2000);
                                }

                                GameData.Config.WebRadar.Connected = true;
                            }
                            else
                            {
                                GameData.Config.WebRadar.Connected = false;
                            }
                        }
                    }

                    if (GameData.Config.WebRadar.Connected || ConnectedNeedPushStyleColor)
                    {
                        ImGui::PopStyleColor(4);
                    }
                    else
                    {
                        ImGui::PopStyleColor(1);
                    }

                    if (GameData.Config.WebRadar.Connected)
                    {
                        ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                        if (ImGui::Button(I18N::T(XorStr("Open Web")).c_str(), ImVec2(InputItemWidth, 28)))
                        {
                            if (GameData.Config.WebRadar.Mode == 0)
                            {
                                ShellExecuteA(NULL, "open", "http://127.0.0.1:9000/?port=9001&pwd=1000", NULL, NULL, SW_SHOWNORMAL);
                            }
                            else
                            {
                                ShellExecuteA(NULL, "open", std::format("http://{}:{}/?port={}&pwd={}", GameData.Config.WebRadar.IP, std::stoi(GameData.Config.WebRadar.Port) - 1, GameData.Config.WebRadar.Port, GameData.Config.WebRadar.Password).c_str(), NULL, NULL, SW_SHOWNORMAL);
                            }
                        }

                        if (GameData.Config.WebRadar.Mode == 1)
                        {
                            if (ImGui::Button(I18N::T(XorStr("Copy Link")).c_str(), ImVec2(InputItemWidth, 28)))
                            {
                                ImGui::SetClipboardText(std::format("http://{}:{}/?port={}&pwd={}", GameData.Config.WebRadar.IP, std::stoi(GameData.Config.WebRadar.Port) - 1, GameData.Config.WebRadar.Port, GameData.Config.WebRadar.Password).c_str());
                            }
                        }
                        else
                        {
                        }

                        ImGui::PopStyleColor(1);
                    }
                }
                ImGui::EndChild();

                ImGui::SameLine();
                ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x + 7, ImGui::GetCursorPos().y - 30));
                ImGui::BeginChild("O", I18N::T(XorStr("Send Setting")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, 420));
                {
                    ImGui::NewCheckbox(I18N::T(XorStr("Encrypted Nickname")).c_str(), &GameData.Config.WebRadar.EncryptedNickname);

                    ImGui::NewCheckbox(I18N::T(XorStr("Players Data")).c_str(), &GameData.Config.WebRadar.SendPlayers);
                    ImGui::NewCheckbox(I18N::T(XorStr("BOSS Data")).c_str(), &GameData.Config.WebRadar.SendBOSS);
                    ImGui::NewCheckbox(I18N::T(XorStr("AI Data")).c_str(), &GameData.Config.WebRadar.SendAI);
                    ImGui::NewCheckbox(I18N::T(XorStr("Items Data")).c_str(), &GameData.Config.WebRadar.SendItems);
                    ImGui::NewCheckbox(I18N::T(XorStr("Containers Data")).c_str(), &GameData.Config.WebRadar.SendContainers);
                    ImGui::NewCheckbox(I18N::T(XorStr("Players Dead Boxs Data")).c_str(), &GameData.Config.WebRadar.SendPlayersDeadBoxs);
                    ImGui::NewCheckbox(I18N::T(XorStr("AI Dead Boxs Data")).c_str(), &GameData.Config.WebRadar.SendAIDeadBoxs);
                    ImGui::NewCheckbox(I18N::T(XorStr("Key Room Data")).c_str(), &GameData.Config.WebRadar.SendKeyRoom);
                    ImGui::NewCheckbox(I18N::T(XorStr("Player Exit Data")).c_str(), &GameData.Config.WebRadar.SendPlayerExit);
                    ImGui::NewCheckbox(I18N::T(XorStr("Exit Trigger Data")).c_str(), &GameData.Config.WebRadar.SendExitTrigger);
                    ImGui::NewCheckbox(I18N::T(XorStr("Coded Lock Data")).c_str(), &GameData.Config.WebRadar.SendCodedLock);
                }
                ImGui::EndChild();
            }
        }
        ImGui::EndGroup();

        ImGui::Dummy(ImVec2(0, NewGUIStyle::Window::Padding / 2));
        ImGui::PopStyleVar();
        ImGui::End();
    }
}; // namespace NewRadar