#pragma once

#include <future>
#include <atomic>
#include <functional>
#include <imgui/imgui.h>
#include <Common/API.h>
#include <Common/Offset.h>
#include <Utils/MachineCodeGenerator.h>
#include <ThemidaSDK/ThemidaSDK.h>

namespace NewAuth
{
    static inline std::atomic<bool> isRequesting{false};
    static inline std::future<void> requestFuture;
    static inline std::string Announcement;
    static inline void AsyncRequest(std::function<void()> requestFunc)
    {
        if (isRequesting.load())
            return;

        // 确保之前的异步任务已完成
        if (requestFuture.valid())
        {
            try
            {
                requestFuture.wait();
            }
            catch (...)
            {
                // 如果之前的任务出现异常，重置状态
                isRequesting.store(false);
            }
        }

        isRequesting.store(true);
        requestFuture = std::async(std::launch::async, [requestFunc]() {
            try
            {
                requestFunc();
            }
            catch (...)
            {
                // 捕获所有异常，确保状态能被重置
            }
            isRequesting.store(false);
        });
    }

    static inline void Render()
    {
        float InputItemWidth = 320.f - 32.f;
        static int CurTab = 0;
        static bool ShowAnnouncement = true;
        static float AnnouncementY = 150.f;

        ImGui::SetCursorPos(ImVec2(510.f, 20));
        const std::string IconUrl = "Engine/Resource/Logo.png";

        ImGui::Image(GImGuiTextureMap[IconUrl].Texture, ImVec2(28, 28));
        ImGui::SameLine();
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5.f);
        ImGui::Text(XorStr("NEXO TEAM"));

        if (Announcement == "")
        {
            ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 130.f);
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 25.f);
            ImGui::BeginChild("O", I18N::T(XorStr(" ")).c_str(), ImVec2(850, 570), false, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse, false);
            {
                ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10.f);
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 10.f);
                ImGui::BeginGroup();
                {
                    ImGui::BeginChild("O", I18N::T(XorStr("Notice")).c_str(), ImVec2(490, 512), false, 0, true);
                    {
                        ImGui::PushTextWrapPos(700.f);
                        ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(ImColor(255, 255, 255, 190)));
                        ImGui::TextWrapped(GameData.Auth.Announcement.c_str());
                        ImGui::PopStyleColor();
                        ImGui::PopTextWrapPos();
                    }
                    ImGui::EndChild();

                    ImGui::SameLine();

                    ImGui::SetCursorPosX(ImGui::GetCursorPosX());
                    ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 70.f);
                    ImGui::BeginChild("O", I18N::T(XorStr("Auth")).c_str(), ImVec2(320, 800), false, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse, false, false);
                    {
                        {
                            ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPos().x, ImGui::GetCursorPos().y - 29));
                            std::string tabLabels[] = {
                                I18N::T(XorStr("Sign In")),
                                I18N::T(XorStr("Sign Up")),
                                I18N::T(XorStr("Renewal")),
                                I18N::T(XorStr("Re HWID")),
                                I18N::T(XorStr("Re PWD")),
                            };
                            const char* tabLabelsc[5];
                            for (int i = 0; i < 5; ++i)
                            {
                                tabLabelsc[i] = tabLabels[i].c_str();
                            }

                            NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr("         ")).c_str(), tabLabelsc, 5, CurTab);
                        }

                        //{
                        //    std::string tabLabels[] = {
                        //        I18N::T(XorStr("Sign In")),
                        //        I18N::T(XorStr("Sign Up")),
                        //        I18N::T(XorStr("Renewal")),
                        //        I18N::T(XorStr("Re HWID")),
                        //    };
                        //    const int tabCount = sizeof(tabLabels) / sizeof(tabLabels[0]);
                        //    const char* tabLabelsc[tabCount];
                        //    for (int i = 0; i < tabCount; ++i)
                        //    {
                        //        tabLabelsc[i] = tabLabels[i].c_str();
                        //    }

                        //    for (int i = 0; i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]); i++)
                        //    {
                        //        if (ImGui::SubTab(i == CurTab, tabLabelsc[i], {40, 28}, true))
                        //            CurTab = i;
                        //        {
                        //            if (i < sizeof(tabLabelsc) / sizeof(tabLabelsc[0]) - 1)
                        //                ImGui::SameLine();
                        //        }
                        //    }

                        //    // ImGui::Dummy(ImVec2(0.0f, 10.0f));
                        //}

                        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(15, 8));
                        ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, NewGUIStyle::Global::Rounding);
                        ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 1.f);
                        ImGui::PushStyleColor(ImGuiCol_FrameBg, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));

                        {
                            ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 5.f);

                            if (CurTab == 0)
                            {
                                ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
                                ImGui::Text(I18N::T(XorStr("Login")).c_str());
                                ImGui::PopFont();
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5.f);
                                ImGui::TextDisabled(I18N::T(XorStr("Pls login your account")).c_str());
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10.f);

                                ImGui::TextDisabled(I18N::T(XorStr("Username")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##Username"), GameData.Auth.Username, IM_ARRAYSIZE(GameData.Auth.Username));

                                ImGui::TextDisabled(I18N::T(XorStr("Password")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##Password"), GameData.Auth.Password, IM_ARRAYSIZE(GameData.Auth.Password), ImGuiInputTextFlags_Password);

                                {
                                    std::string tabLabels[] = {
                                        I18N::T(XorStr("China")),
                                        I18N::T(XorStr("Global")),
                                        I18N::T(XorStr("Garena")),
                                    };
                                    const char* tabLabelsc[3];
                                    for (int i = 0; i < 3; ++i)
                                    {
                                        tabLabelsc[i] = tabLabels[i].c_str();
                                    }
                                    ImGui::TextDisabled(I18N::T(XorStr("Game Version (?)")).c_str());
                                    if (ImGui::IsItemHovered())
                                    {
                                        ImGui::BeginTooltip();
                                        ImGui::PushTextWrapPos(230.0f);
                                        // clang-format off
                            			ImGui::TextWrapped(I18N::T(XorStr("How to choose the game version:\nChina: WeGame and CN Steam\nGlobal: Steam Global International\nGarena: Garena SEA")).c_str());
                                        // clang-format on
                                        ImGui::PopTextWrapPos();
                                        ImGui::EndTooltip();
                                    }
                                    ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 30.f);
                                    if (NewSelectTab::DrawLabeledSelectTabs(I18N::T(XorStr(" ")).c_str(), tabLabelsc, 3, GameData.Config.Window.Server))
                                    {
                                        Config::Save();
                                    }
                                }

                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                                std::string buttonText = isRequesting ? I18N::T(XorStr("Processing data...")) : I18N::T(XorStr("Login"));
                                if (ImGui::Button(buttonText.c_str(), ImVec2(InputItemWidth, 32)) && !isRequesting)
                                {
                                    if (GameData.Auth.Username != "" && GameData.Auth.Password != "")
                                    {
                                        AsyncRequest([=]() {
                                            auto Res = API::Request(XorStr("POST"), XorStr("/=@@GwJG+xC]K5pU_@k_c"), {{XorStr("version"), GameData.Auth.Version}, {XorStr("username"), GameData.Auth.Username}, {XorStr("password"), GameData.Auth.Password}, {XorStr("info"), MachineCodeGenerator::Info()}, {XorStr("machine_code"), MachineCodeGenerator::GenerateMachineCode()}});
                                            try
                                            {
                                                int Code = Res.value(XorStr("code"), 0);
                                                if (Code != 200)
                                                {
                                                    Announcement = Res.value(XorStr("message"), XorStr("Error"));
                                                    ShowAnnouncement = true;
                                                }
                                                else
                                                {
                                                    GameData.Auth.Ex = Res[(XorStr("data"))].value(XorStr("expired"), "");
                                                    GameData.Auth.Token = Res[(XorStr("data"))].value(XorStr("token"), "");
                                                    nlohmann::json json;
                                                    json[(XorStr("username"))] = GameData.Auth.Username;
                                                    json[(XorStr("password"))] = GameData.Auth.Password;
                                                    auto Text = json.dump();
                                                    const unsigned char Key[] = {0x18, 0x23, 0x45, 0x67};
                                                    for (size_t i = 0; i < Text.length(); i++)
                                                    {
                                                        Text[i] ^= Key[i % sizeof(Key)];
                                                    }
                                                    std::ofstream file(XorStr("Config/Account"), std::ios::binary);
                                                    file.write(Text.c_str(), Text.length());
                                                    file.close();
                                                    auto Url = XorStr("/X0HxYcPr");
                                                    if (GameData.Config.Window.Server == 1)
                                                        Url = XorStr("/user/validate2");
                                                    if (GameData.Config.Window.Server == 2)
                                                        Url = XorStr("/user/validate3");
                                                    auto Res2 = API::Request(XorStr("POST"), Url, {{XorStr("token"), GameData.Auth.Token}, {XorStr("machine_code"), MachineCodeGenerator::GenerateMachineCode()}});
                                                    try
                                                    {
                                                        int Code2 = Res2.value(XorStr("code"), 0);
                                                        if (Code2 != 200)
                                                        {
                                                            Announcement = Res2.value(XorStr("message"), XorStr("Error"));
                                                            ShowAnnouncement = true;
                                                        }
                                                        else
                                                        {
                                                            VM_TIGER_WHITE_START
                                                            GameData.Remote.VerifyData = nlohmann::json::parse(Offset::UnLoadRemote(Res2[(XorStr("data"))].value(XorStr("validate_data"), "")));
                                                            Offset::LoadRemoteOffset();
                                                            // Utils::Log(1, "%p", Offset::GetEncryptedOffset(XorStr("UWorld")));
                                                            if (Offset::GetEncryptedOffset(XorStr("UWorld")) > 0x100000000)
                                                            {
                                                                Announcement = U8("Unknown Error\n可能是伺服器人數目前較多，請您再嘗試一次登入。");
                                                                ShowAnnouncement = true;
                                                            }
                                                            else
                                                            {
                                                                GameData.Auth.bLogin = true;
                                                            }
                                                            VM_TIGER_WHITE_END
                                                        }
                                                    }
                                                    catch (const nlohmann::json::exception& e)
                                                    {
                                                        Announcement = U8("Unknown Error\n可能是伺服器人數目前較多，請您再嘗試一次登入。");
                                                        ShowAnnouncement = true;
                                                    }
                                                }
                                            }
                                            catch (const std::exception&)
                                            {
                                                Announcement = U8("Unknown Error\n可能是伺服器開小差了，不妨重新操作一次。");
                                                ShowAnnouncement = true;
                                            }
                                        });
                                    }
                                }
                                ImGui::PopStyleVar(1);
                                ImGui::PopStyleColor(1);
                            }

                            if (CurTab == 1)
                            {
                                ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
                                ImGui::Text(I18N::T(XorStr("Sign Up")).c_str());
                                ImGui::PopFont();
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5.f);
                                ImGui::TextDisabled(I18N::T(XorStr("Please enter the account password and card password to register")).c_str());
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10.f);

                                ImGui::TextDisabled(I18N::T(XorStr("Username")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##ReUsername"), GameData.Auth.ReUsername, IM_ARRAYSIZE(GameData.Auth.ReUsername));

                                ImGui::TextDisabled(I18N::T(XorStr("Password")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##RePassword"), GameData.Auth.RePassword, IM_ARRAYSIZE(GameData.Auth.RePassword));

                                ImGui::TextDisabled(I18N::T(XorStr("Key")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##ReKey"), GameData.Auth.ReKey, IM_ARRAYSIZE(GameData.Auth.ReKey));

                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                                std::string buttonText = isRequesting ? I18N::T(XorStr("Processing data...")) : I18N::T(XorStr("Sign Up"));
                                if (ImGui::Button(buttonText.c_str(), ImVec2(InputItemWidth, 32)) && !isRequesting)
                                {
                                    if (GameData.Auth.ReUsername != "" && GameData.Auth.RePassword != "")
                                    {
                                        AsyncRequest([=]() {
                                            auto Res = API::Request(XorStr("POST"), XorStr("/A2THE,-^"), {{XorStr("card_no"), GameData.Auth.ReKey}, {XorStr("username"), GameData.Auth.ReUsername}, {XorStr("password"), GameData.Auth.RePassword}, {XorStr("machine_code"), MachineCodeGenerator::GenerateMachineCode()}});
                                            try
                                            {
                                                int Code = Res.value(XorStr("code"), 0);
                                                Announcement = Res.value(XorStr("message"), XorStr("Error"));
                                                ShowAnnouncement = true;
                                            }
                                            catch (const nlohmann::json::exception& e)
                                            {
                                                Announcement = XorStr("Unknown Error");
                                                ShowAnnouncement = true;
                                            }
                                        });
                                    }
                                }
                                ImGui::PopStyleVar(1);
                                ImGui::PopStyleColor(1);
                            }

                            if (CurTab == 2)
                            {
                                ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
                                ImGui::Text(I18N::T(XorStr("Renewal")).c_str());
                                ImGui::PopFont();
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5.f);
                                ImGui::TextDisabled(I18N::T(XorStr("Please enter your account and card password to renew activation")).c_str());
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10.f);

                                ImGui::TextDisabled(I18N::T(XorStr("Username")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##Username"), GameData.Auth.Username, IM_ARRAYSIZE(GameData.Auth.Username));

                                ImGui::TextDisabled(I18N::T(XorStr("Key")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##Key"), GameData.Auth.Key, IM_ARRAYSIZE(GameData.Auth.Key));

                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                                std::string buttonText = isRequesting ? I18N::T(XorStr("Processing data...")) : I18N::T(XorStr("Renewal"));
                                if (ImGui::Button(buttonText.c_str(), ImVec2(InputItemWidth, 32)) && !isRequesting)
                                {
                                    AsyncRequest([=]() {
                                        auto Res = API::Request(XorStr("POST"), XorStr("/R%@4ysJw"), {{XorStr("card_no"), GameData.Auth.Key}, {XorStr("username"), GameData.Auth.Username}});
                                        try
                                        {
                                            Announcement = "";
                                            int Code = Res.value(XorStr("code"), 0);
                                            if (Code == 200)
                                            {
                                                Announcement = std::format("New Expired: {}\n", Res[(XorStr("data"))].value(XorStr("expire_at"), ""));
                                            }
                                            Announcement += Res.value(XorStr("message"), XorStr("Error"));
                                            ShowAnnouncement = true;
                                        }
                                        catch (const nlohmann::json::exception& e)
                                        {
                                            Announcement = XorStr("Unknown Error");
                                            ShowAnnouncement = true;
                                        }
                                    });
                                }
                                ImGui::PopStyleVar(1);
                                ImGui::PopStyleColor(1);
                            }

                            if (CurTab == 3)
                            {
                                ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
                                ImGui::Text(I18N::T(XorStr("Re HWID")).c_str());
                                ImGui::PopFont();
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5.f);
                                ImGui::TextDisabled(I18N::T(XorStr("Unbinding will deduct the corresponding time")).c_str());
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10.f);

                                ImGui::TextDisabled(I18N::T(XorStr("Username")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##UnUsername"), GameData.Auth.Username, IM_ARRAYSIZE(GameData.Auth.Username));

                                ImGui::TextDisabled(I18N::T(XorStr("Password")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##UnPassword"), GameData.Auth.UnPassword, IM_ARRAYSIZE(GameData.Auth.UnPassword), ImGuiInputTextFlags_Password);

                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                                std::string buttonText = isRequesting ? I18N::T(XorStr("Processing data...")) : I18N::T(XorStr("Re HWID"));
                                if (ImGui::Button(buttonText.c_str(), ImVec2(InputItemWidth, 32)) && !isRequesting)
                                {
                                    AsyncRequest([=]() {
                                        auto Res = API::Request(XorStr("POST"), XorStr("/7yq%E#8vTgLByd)9M~*4"), {{XorStr("password"), GameData.Auth.UnPassword}, {XorStr("username"), GameData.Auth.Username}});
                                        try
                                        {
                                            Announcement = "";
                                            int Code = Res.value(XorStr("code"), 0);
                                            if (Code == 200)
                                            {
                                                Announcement = std::format("New Expired: {}\n", Res[(XorStr("data"))].value(XorStr("expired"), ""));
                                            }
                                            Announcement += Res.value(XorStr("message"), XorStr("Error"));
                                            ShowAnnouncement = true;
                                        }
                                        catch (const nlohmann::json::exception& e)
                                        {
                                            Announcement = XorStr("Unknown Error");
                                            ShowAnnouncement = true;
                                        }
                                    });
                                }
                                ImGui::PopStyleVar(1);
                                ImGui::PopStyleColor(1);
                            }

                            if (CurTab == 4)
                            {
                                ImGui::PushFont(ImGui::GetIO().Fonts->Fonts[1]);
                                ImGui::Text(I18N::T(XorStr("Re Password")).c_str());
                                ImGui::PopFont();
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5.f);
                                ImGui::TextDisabled(I18N::T(XorStr("Enter your account number and new password as well as the most recent recharge card code for your account.")).c_str());
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 10.f);

                                ImGui::TextDisabled(I18N::T(XorStr("Username")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##RePWDUsername"), GameData.Auth.RePWDUsername, IM_ARRAYSIZE(GameData.Auth.RePWDUsername));

                                ImGui::TextDisabled(I18N::T(XorStr("New Password")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##RePWDPassword"), GameData.Auth.RePWDPassword, IM_ARRAYSIZE(GameData.Auth.RePWDPassword));

                                ImGui::TextDisabled(I18N::T(XorStr("Key (Recently recharged)")).c_str());
                                ImGui::SetNextItemWidth(InputItemWidth);
                                ImGui::InputText(U8("##RePWDKey"), GameData.Auth.RePWDKey, IM_ARRAYSIZE(GameData.Auth.RePWDKey));

                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
                                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
                                std::string buttonText = isRequesting ? I18N::T(XorStr("Processing data...")) : I18N::T(XorStr("Re Password"));
                                if (ImGui::Button(buttonText.c_str(), ImVec2(InputItemWidth, 32)) && !isRequesting)
                                {
                                    if (GameData.Auth.RePWDUsername != "" && GameData.Auth.RePWDPassword != "" && GameData.Auth.RePWDKey != "")
                                    {
                                        AsyncRequest([=]() {
                                            auto Res = API::Request(XorStr("POST"), XorStr("/9msh._v@"), {{XorStr("card_no"), GameData.Auth.RePWDKey}, {XorStr("username"), GameData.Auth.RePWDUsername}, {XorStr("new_password"), GameData.Auth.RePWDPassword}, {XorStr("machine_code"), MachineCodeGenerator::GenerateMachineCode()}});
                                            try
                                            {
                                                int Code = Res.value(XorStr("code"), 0);
                                                Announcement = Res.value(XorStr("message"), XorStr("Error"));
                                                ShowAnnouncement = true;
                                            }
                                            catch (const nlohmann::json::exception& e)
                                            {
                                                Announcement = XorStr("Unknown Error");
                                                ShowAnnouncement = true;
                                            }
                                        });
                                    }
                                }
                                if (ImGui::IsItemHovered())
                                {
                                    ImGui::BeginTooltip();
                                    ImGui::PushTextWrapPos(230.0f);
                                    // clang-format off
                                    ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::White));
                                    ImGui::TextWrapped(I18N::T(XorStr("You must enter the card code used to activate the account last time and the device associated with the current account to change the password. If you are unable to change the password, please contact your dealer.")).c_str());
                                    ImGui::PopStyleColor(1);
                                    // clang-format on
                                    ImGui::PopTextWrapPos();
                                    ImGui::EndTooltip();
                                }
                                ImGui::PopStyleVar(1);
                                ImGui::PopStyleColor(1);
                            }

                            {
                                ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 15.f);
                                ImGui::BeginChild("O", I18N::T(XorStr("Setting")).c_str(), ImVec2(288, 110), false, 0, true);
                                {
                                    if (ImGui::NewCheckbox(I18N::T(XorStr("Heino Mode")).c_str(), &GameData.Config.Window.IsHeino))
                                    {
                                        Config::Save();
                                        Utils::RenameFile(XorStr("leechcore.dll"), XorStr("8a15ea5f.cache"));
                                        Sleep(50);

                                        if (GameData.Config.Window.IsHeino)
                                        {
                                            Utils::NCopyFile(XorStr("Engine\\Resource\\Files\\c32c29eb.nexo"), XorStr("leechcore.dll"));
                                        }
                                        else
                                        {
                                            Utils::NCopyFile(XorStr("Engine\\Resource\\Files\\75f4b223.nexo"), XorStr("leechcore.dll"));
                                        }

                                        Sleep(50);

                                        STARTUPINFO si = {sizeof(si)};
                                        si.dwFlags = STARTF_USESHOWWINDOW;
                                        si.wShowWindow = SW_SHOW;
                                        PROCESS_INFORMATION pi;

                                        char cmdLine[] = "Nexo.exe";
                                        if (CreateProcessA(NULL, cmdLine, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi))
                                        {
                                            CloseHandle(pi.hProcess);
                                            CloseHandle(pi.hThread);

                                            exit(0);
                                        }
                                        else
                                        {
                                            exit(0);
                                        }
                                        exit(0);
                                    }

                                    if (ImGui::NewCheckbox(I18N::T(XorStr("Auto Connect Controller")).c_str(), &GameData.Config.Window.Auto))
                                    {
                                        if (GameData.Config.AimBot.Connected && !GameData.Config.Window.Auto)
                                        {
                                            GameData.Config.AimBot.Connected = false;
                                        }

                                        if (GameData.Config.AimBot.Connected && GameData.Config.Window.Auto)
                                        {
                                            GameData.Config.AimBot.Connected = true;
                                        }
                                    }

                                    if (ImGui::NewCheckbox(I18N::T(XorStr("Auto Mem Map")).c_str(), &GameData.Config.Window.MemMap))
                                    {
                                        Config::Save();
                                    }
                                }
                                ImGui::EndChild();
                            }
                        }

                        ImGui::PopStyleColor(1);
                        ImGui::PopStyleVar(2);
                    }
                    ImGui::EndChild();
                }
                ImGui::EndGroup();
            }
            ImGui::EndChild();
        }
        else
        {
            if (ShowAnnouncement)
            {
                ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(10, 10));
                ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(10, 10));
                static float w = 420.f;
                // 计算居中位置
                float windowHeight = 758.f;                                        // 主窗口高度
                float messageWindowHeight = AnnouncementY + 15.f * 2;              // 消息窗口总高度
                float centerY = (windowHeight - messageWindowHeight) / 2.f - 10.f; // 垂直居中位置

                ImGui::SetNextWindowSize({w + 15.f * 2, messageWindowHeight});
                ImGui::SetCursorPos(ImVec2(370.f - 15.f, centerY)); // 使用计算出的居中位置

                if (ImGui::Begin("Message", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoScrollbar))
                {
                    const ImVec2 Spacing = ImGui::GetStyle().ItemSpacing;
                    ImVec2 Pos = ImGui::GetWindowPos();
                    ImVec2 OPos = Pos;
                    Pos.x += 15.f;
                    Pos.y += 15.f;

                    ImGui::GetWindowDrawList()->AddRectFilled(Pos, ImVec2(Pos.x + w, Pos.y + AnnouncementY), ImColor(35, 35, 35, 255), Style::Window::Rounding);
                    ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() + 15.f, ImGui::GetCursorPosY() + 15.f));
                    ImGui::BeginGroup();
                    {
                        ImGui::TextDisabled(I18N::T(XorStr("Message")).c_str());

                        // 获取当前光标位置作为起始点
                        float startY = ImGui::GetCursorPosY();
                        float contentStartY = startY - 5.f;

                        ImGui::SetCursorPos(ImVec2(ImGui::GetCursorPosX() - 15.f / 2.f, contentStartY));

                        // 为文本内容预留足够空间，底部留出按钮空间
                        float buttonAreaHeight = 45.f; // 按钮 + 间距
                        float textAreaHeight = AnnouncementY - (contentStartY - 15.f) - buttonAreaHeight;

                        ImGui::SetNextWindowSize({w - 15.f * 2 + 15.f + 15.f / 2.f, textAreaHeight});

                        if (ImGui::Begin("MessageValue", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_ChildWindow | ImGuiWindowFlags_NoBackground))
                        {
                            ImGui::PushTextWrapPos(w - 15.f);
                            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(ImColor(255, 255, 255, 230)));
                            ImGui::TextWrapped(Announcement.c_str());
                            ImGui::PopStyleColor();
                            ImGui::PopTextWrapPos();
                        }
                        ImGui::End();

                        // 按钮样式
                        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 5));
                        ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, 30);
                        ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));

                        // 将按钮放在底部中央
                        float buttonX = w - 55.f;             // 水平居中
                        float buttonY = AnnouncementY - 25.f; // 距离底部5像素
                        ImGui::SetCursorPos(ImVec2(buttonX, buttonY));

                        if (ImGui::Button(I18N::T(XorStr("OK")).c_str(), ImVec2(60, 28)))
                        {
                            ShowAnnouncement = false;
                            AnnouncementY = 150.f;
                            Announcement = "";
                        }

                        ImGui::PopStyleColor(1);
                        ImGui::PopStyleVar(2);
                    }

                    ImGui::End();
                }
                ImGui::PopStyleVar(2);
            }
        }
    }
}; // namespace NewAuth