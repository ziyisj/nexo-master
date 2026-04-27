#pragma once

#include <Utils/Controller/NewKmBox.h>
#include <Utils/Controller/MoBox.h>
#include <Utils/Controller/DHZBox.h>
#include <Utils/Controller/KmBoxNet.h>
#include <Utils/Controller/CatBox/CatBox.h>

namespace NewBox
{
    static inline void AimBot(float MaxHeight = 0.f)
    {
        float InputItemWidth = 240.f;
        float Height = 390.f;
        if (GameData.Config.AimBot.Controller == 1) Height = 400.f;
        if (GameData.Config.AimBot.Controller == 2) Height = 280.f;
        if (GameData.Config.AimBot.Controller == 3) Height = 400.f;
        if (GameData.Config.AimBot.Controller == 4) Height = 400.f;
        if (GameData.Config.AimBot.Controller == 5) Height = 220.f;
        if (GameData.Config.AimBot.Connected) Height += 38.f;

        //Height += 58.f;

        if (MaxHeight != 0 && Height > MaxHeight) {
            Height = MaxHeight;
            InputItemWidth = 230.f;
        }

        ImGui::BeginChild("O", I18N::T(XorStr("AimBot Controller")).c_str(), ImVec2(NewGUIStyle::Global::ChildWidth, Height));
        {
            /*{
                ImGui::SliderFloat(I18N::T(XorStr("THROW_SPEED")).c_str(), &GameData.Config.SimulateGrenade.THROW_SPEED, 0, 5000, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("GRAVITY")).c_str(), &GameData.Config.SimulateGrenade.GRAVITY, 0, 2000, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("BOUNCE_ENERGY_LOSS")).c_str(), &GameData.Config.SimulateGrenade.BOUNCE_ENERGY_LOSS, 0, 2, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("SIMULATION_STEP")).c_str(), &GameData.Config.SimulateGrenade.SIMULATION_STEP, 0, 1, "%.3f", 0, "%");
                ImGui::SliderInt(I18N::T(XorStr("MAX_BOUNCES")).c_str(), &GameData.Config.SimulateGrenade.MAX_BOUNCES, 0, 5, "%d", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("MAX_SIMULATION_TIME")).c_str(), &GameData.Config.SimulateGrenade.MAX_SIMULATION_TIME, 0, 100, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("MIN_VELOCITY")).c_str(), &GameData.Config.SimulateGrenade.MIN_VELOCITY, 0, 100, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("GRENADE_RADIUS")).c_str(), &GameData.Config.SimulateGrenade.GRENADE_RADIUS, 0, 5, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("correctionFactorX")).c_str(), &GameData.Config.SimulateGrenade.correctionFactorX, 0, 10, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("correctionFactorY")).c_str(), &GameData.Config.SimulateGrenade.correctionFactorY, 0, 10, "%.3f", 0, "%");
                ImGui::SliderFloat(I18N::T(XorStr("correctionFactor")).c_str(), &GameData.Config.SimulateGrenade.correctionFactor, 0, 10, "%.3f", 0, "%");
            }*/
            {
                std::string tabLabels[] = {
                    I18N::T(XorStr("KMBOX / MAKCU / FERRUM")),
                    I18N::T(XorStr("KMNET")),
                    I18N::T(XorStr("MOBOX")),
                    I18N::T(XorStr("DHZBOX")), 
                    I18N::T(XorStr("CATBOX")), 
                    I18N::T(XorStr("Streaming AimBot")),
                };
                const char* tabLabelsc[6];
                for (int i = 0; i < 6; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                NewSelect::Combo(I18N::T(XorStr("Controller")).c_str(), &GameData.Config.AimBot.Controller, &tabLabelsc[0], 6);
                if ((GameData.Config.AimBot.Controller == 0 || GameData.Config.AimBot.Controller == 1) && ImGui::IsItemHovered()) {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(300.0f);
                    ImGui::TextWrapped(I18N::T(XorStr("It is not recommended to use the KM series controllers, as you may lose aiming at random during use.")).c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
            }

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 5));
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, NewGUIStyle::Global::Rounding);
            ImGui::PushStyleVar(ImGuiStyleVar_FrameBorderSize, 0.f);
            ImGui::PushStyleColor(ImGuiCol_FrameBg, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));


            if (GameData.Config.AimBot.Controller == 1)
            {
                ImGui::TextDisabled(U8("IP"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText("##IP", GameData.Config.AimBot.IP, IM_ARRAYSIZE(GameData.Config.AimBot.IP));

                ImGui::TextDisabled(U8("PORT"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText(U8("##PORT"), GameData.Config.AimBot.Port, IM_ARRAYSIZE(GameData.Config.AimBot.Port));

                ImGui::TextDisabled(U8("UUID"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText("##UUID", GameData.Config.AimBot.UUID, IM_ARRAYSIZE(GameData.Config.AimBot.UUID));
            }

            if (GameData.Config.AimBot.Controller == 3)
            {
                ImGui::TextDisabled(U8("IP"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText("##IP", GameData.Config.AimBot.DHZIP, IM_ARRAYSIZE(GameData.Config.AimBot.DHZIP));

                ImGui::TextDisabled(I18N::T(XorStr("RANDOM")).c_str());
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText(U8("##RANDOM"), GameData.Config.AimBot.DHZRANDOM, IM_ARRAYSIZE(GameData.Config.AimBot.DHZRANDOM));

                ImGui::TextDisabled(I18N::T(XorStr("PORT")).c_str());
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText(U8("##PROT"), GameData.Config.AimBot.DHZPort, IM_ARRAYSIZE(GameData.Config.AimBot.DHZPort));
            }

            if (GameData.Config.AimBot.Controller == 4)
            {
                ImGui::TextDisabled(U8("IP"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText("##IP", GameData.Config.AimBot.CATBOXIP, IM_ARRAYSIZE(GameData.Config.AimBot.CATBOXIP));

                ImGui::TextDisabled(U8("PORT"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText(U8("##PORT"), GameData.Config.AimBot.CATBOXPort, IM_ARRAYSIZE(GameData.Config.AimBot.CATBOXPort));

                ImGui::TextDisabled(U8("UUID"));
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText("##UUID", GameData.Config.AimBot.CATBOXUUID, IM_ARRAYSIZE(GameData.Config.AimBot.CATBOXUUID));
            }

            std::vector<std::string> ports = Utils::GetCOMPorts();

            if (GameData.Config.AimBot.Controller == 0 || GameData.Config.AimBot.Controller == 2)
            {
                std::vector<std::pair<std::string, std::string>> portVector;
                for (const auto& port : ports)
                {
                    portVector.push_back({ port, Utils::StringToUTF8(port) });
                }
                std::vector<const char*> items;
                for (const auto& port : portVector) {
                    items.push_back(port.second.c_str());
                }

                if (GameData.Config.AimBot.COM >= items.size()) {
                    GameData.Config.AimBot.COM = 0;
                }

                if (items.size() > 0)
                {
                    NewSelect::Combo(I18N::T(XorStr("Serial Port")).c_str(), &GameData.Config.AimBot.COM, &items[0], items.size());
                }
            }

            if (GameData.Config.AimBot.Controller == 0)
            {
                ImGui::TextDisabled(I18N::T(XorStr("Baud Rate")).c_str());
                ImGui::SetNextItemWidth(InputItemWidth);
                ImGui::InputText(U8("##BaudRate"), GameData.Config.AimBot.BaudRate, IM_ARRAYSIZE(GameData.Config.AimBot.BaudRate));
                ImGui::SliderInt(I18N::T(XorStr("Freq")).c_str(), &GameData.Config.AimBot.Freq, 100, 1000, "%d", 0, "HZ");
            }

            ImGui::SliderInt(I18N::T(XorStr("Aim Delay")).c_str(), &GameData.Config.AimBot.FPSLimit[GameData.Config.AimBot.Controller], 1, 20, "%d", 0, "MS");
            if ((GameData.Config.AimBot.Controller == 0 || GameData.Config.AimBot.Controller == 1) && ImGui::IsItemHovered()) {
                ImGui::BeginTooltip();
                ImGui::PushTextWrapPos(200.0f);
                ImGui::TextWrapped(I18N::T(XorStr("Since the underlying framework of the KM series uses a heavy design of Python interpreter with poor performance, a higher frequency of sending moves may cause the controller of this series to get stuck. Please increase the delay according to the actual situation to prevent the loss of auto-aim.")).c_str());
                ImGui::PopTextWrapPos();
                ImGui::EndTooltip();
            }

            /*{
                std::string tabLabels[] = {
                    I18N::T(XorStr("Sync")),
                    I18N::T(XorStr("ASync")),
                };
                const char* tabLabelsc[2];
                for (int i = 0; i < 2; ++i) {
                    tabLabelsc[i] = tabLabels[i].c_str();
                }

                if (NewSelect::Combo(I18N::T(XorStr("Move Mode")).c_str(), &GameData.Config.AimBot.Mode, &tabLabelsc[0], 2))
                {

                }
            }*/

            ImGui::PopStyleColor(1);
            ImGui::PopStyleVar(3);

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(8, 2));
            ImGui::PushStyleVar(ImGuiStyleVar_FrameRounding, NewGUIStyle::Global::Rounding);

            bool NeedPushStyleColor = false;
            bool ConnectedNeedPushStyleColor = false;
            if (GameData.Config.AimBot.Connected) {
                ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseHover));
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BaseText));
                ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));
                ImGui::PushStyleColor(ImGuiCol_Button, ImGui::ColorConvertFloat4ToU32(NewGUIStyle::Combo::Background));
            }
            else {
                ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));
            }

            ImGui::Dummy(ImVec2(0.0f, 0.0f));

            if (ImGui::Button(GameData.Config.AimBot.Connected ? I18N::T(XorStr("Disconnect")).c_str() : I18N::T(XorStr("Connect")).c_str(), ImVec2(InputItemWidth, 28))) {
                bool Connected = false;
                std::string extractedStr;
                if (ports.size() > 0)
                {
                    extractedStr = Utils::ExtractSubstring(ports[GameData.Config.AimBot.COM], R"(COM(\d+))");
                }
                int COM = 0;
                int number = 0;
                if (extractedStr != "")
                {
                    COM = std::stoi(extractedStr);
                    number = std::stoi(extractedStr);

                    GameData.Config.AimBot.COMNumber = COM;
                }

                switch (GameData.Config.AimBot.Controller)
                {
                case 0:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = NewKmBox::Init(COM);
                    }
                    else {
                        NewKmBox::Close();
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                case 1:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = KmBoxNet::Init(GameData.Config.AimBot.IP, GameData.Config.AimBot.Port, GameData.Config.AimBot.UUID);
                    }
                    else {
                        KmBoxNet::Close();
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                case 2:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = MoBox::Init(COM);
                    }
                    else {
                        MoBox::Close();
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                case 3:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = DHZBox::Init(GameData.Config.AimBot.DHZIP, std::stoi(GameData.Config.AimBot.DHZPort));
                    }
                    else {
                        DHZBox::Close();
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                case 4:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = CatBox::Init(GameData.Config.AimBot.CATBOXIP, GameData.Config.AimBot.CATBOXPort, GameData.Config.AimBot.CATBOXUUID);
                    }
                    else {
                        CatBox::Close();
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                case 5:
                    if (!GameData.Config.AimBot.Connected)
                    {
                        Connected = true;
                    }
                    else
                    {
                        ConnectedNeedPushStyleColor = true;
                        Connected = false;
                    }
                    break;
                default:
                    break;
                }

                GameData.Config.AimBot.Connected = Connected;
            }

            if (GameData.Config.AimBot.Connected || ConnectedNeedPushStyleColor) {
                ImGui::PopStyleColor(4);
            }
            else {
                ImGui::PopStyleColor(1);
            }

            ImGui::PushStyleColor(ImGuiCol_Text, ImGui::ColorConvertU32ToFloat4(NewGUIStyle::Global::BlackText));

            if ((GameData.Config.AimBot.Connected) && ImGui::Button(I18N::T(XorStr("Test Move")).c_str(), ImVec2(InputItemWidth, 28))) {
                if (GameData.Config.AimBot.Controller == 0) NewKmBox::Move(60, 0);
                if (GameData.Config.AimBot.Controller == 1) KmBoxNet::Move(60, 0);
                if (GameData.Config.AimBot.Controller == 2) MoBox::Move(60, 0);
                if (GameData.Config.AimBot.Controller == 3) DHZBox::Move(60, 0);
                if (GameData.Config.AimBot.Controller == 4) CatBox::Move(60, 0);
                if (GameData.Config.AimBot.Controller == 5) Utils::MoveMouseRelative(60, 0);
            }

            ImGui::PopStyleColor(1);

            ImGui::PopStyleVar(2);
        }
        ImGui::EndChild();
    }
};