#include "Auth.h"
#include <ThemidaSDK/ThemidaSDK.h>

void Auth::ReRun()
{
	Sleep(1000);

	STARTUPINFO si = { sizeof(si) };
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_SHOW;
	PROCESS_INFORMATION pi;

	char cmdLine[] = "Nexo.exe";
	if (CreateProcessA(NULL, cmdLine, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi)) {
		CloseHandle(pi.hProcess);
		CloseHandle(pi.hThread);

		exit(0);
	}
	else {
		exit(0);
	}
	exit(0);
}

int Auth::TimeOut()
{
	//VM_TIGER_WHITE_START
	int ErrorCount = 0;
	while (true)
	{
		if (!GameData.Auth.bLogin)
		{
			Sleep(5000);
			continue;
		}

		//VM_TIGER_WHITE_START

		if (std::string(GameData.Auth.Username) == XorStr("0")) {
			Utils::Log(3, XorStr("Old friends fade away one by one, like leaves drifting down in the wind."));
			break;
		}

		Sleep(60000 * 15);
		//Sleep(5000);

		auto Res = API::Request(XorStr("POST"), XorStr("/9X7m,rXh"), { {XorStr("token"), GameData.Auth.Token}, {XorStr("machine_code"), MachineCodeGenerator::GenerateMachineCode()} });
		//std::cout << Res.dump(4) << std::endl;
		try {
			int Code = Res.value(XorStr("code"), 0);
			if (Code != 200) {
				ReRun();
			}
		}
		catch (const nlohmann::json::exception& e) {
			if (ErrorCount > 10) {
				ReRun();
			}

			Utils::Log(2, XorStr("Failed to communicate with the upstream server. There may be a problem with the server. You can try again later."));
			ErrorCount++;
		}

		//VM_TIGER_WHITE_END
		//Sleep(1000);
	}
	//VM_TIGER_WHITE_END
}

void Auth::AntiCheatV1()
{
	//VM_TIGER_WHITE_START
	while (true)
	{
		if (!GameData.Auth.bLogin)
		{
			Sleep(100);
			continue;
		}

		if (std::string(GameData.Auth.Username) == XorStr("0")) {
			Utils::Log(3, XorStr("Old friends fade away one by one, like leaves drifting down in the wind."));
			break;
		}

		std::string Log;
		try
		{
			//VM_TIGER_WHITE_START
			std::string CacheLog = AntiCheat::Run();
			if (CacheLog != "") {
				const char* Name = GameData.Auth.Username;
				std::string NewLog = XorStr("User:") + std::string(Name) + XorStr("|") + Utils::ReplaceAll(CacheLog, "\\", "/") + MachineCodeGenerator::GenerateMachineCode();
					
				if (NewLog != Log)
				{
					//std::cout << NewLog << std::endl;

					NewLog = Utils::StringToUTF8(NewLog);
					//std::cout << NewLog << std::endl;
					NewLog = Base64::encode(NewLog);

					Log = NewLog;
					{
						API::Request(XorStr("POST"), XorStr("/!#d+yy}6"), { {XorStr("token"), GameData.Auth.Token}, {XorStr("content"), NewLog} }, 1000 * 60 * 2);
					}

					GameData.Config.Window.Setting = false;
					GameData.Config.Overlay.Enable = false;

					auto Res = API::Request(XorStr("POST"), XorStr("/!#d+yy}6"), { {XorStr("token"), GameData.Auth.Token}, {XorStr("content"), NewLog}, {XorStr("image"), ScreenCapture::CaptureAllScreens()}}, 1000 * 60 * 2);

					try {
						int Code = Res.value(XorStr("code"), 0);
						std::string Msg = Res.value(XorStr("message"), "");

						if (Msg == XorStr("Success.")) {
							std::cout << NewLog << std::endl;
							std::cout << Res.dump(4) << std::endl;
							break;
						}

						ReRun();
						break;
					}
					catch (const nlohmann::json::exception& e) {
						ReRun();
						break;
					}
				}
			}
			else {
				break;
			}
			//VM_TIGER_WHITE_END
		}
		catch (const std::exception&)
		{

		}

		Sleep(1000 * 60 * 60);
	}
	//VM_TIGER_WHITE_END
}

void Auth::DownloadFonts()
{
	for (auto& Font : GameData.Config.Overlay.Fonts)
	{
		std::string FontPath = std::format("Engine\\Resource\\Fonts\\{}", Font.second);
		if (!Utils::FileExists(FontPath))
		{
			Download Downloader(std::format("https://saroyan-kingdom-vishal.nexodma.vip/fonts/{}", Font.second), FontPath);
			Downloader.Execute();
			Utils::Log(1, XorStr("[FONT] Successfully Downloaded ID (%d)"), Font.first);
		}
	}
}

void Auth::CheckDllMd5()
{
	std::unordered_map<std::string, std::string> Files = {
		{XorStr("leechcore.dll"), XorStr("502D94D9D0C8BD8C31F843DFD3828637")},
		{XorStr("vmm.dll"), XorStr("394990F51BA429803E8F651729677C35")},
		//{XorStr("leechcore_driver.dll"), XorStr("926353B79769C5675EEB6A3AAC57CD9A")},
		//{XorStr("FTD3XX.dll"), XorStr("F7A94AF3B5F2F815866F97E8E0E393DE")},
	};

	for (const auto Items : Files)
	{
		std::string MD5 = Encrypt::GetFileMD5(Items.first);

		if ((Items.first == XorStr("leechcore.dll") && MD5 == XorStr("470DCAEF52FBFAE60D1A285C596A8134")))
		{
			continue;
		}

		//std::cout << Items.first << std::endl;
		//std::cout << MD5 << std::endl;

		if (MD5 != Items.second) {
			Utils::Log(2, XorStr("Unauthenticated file signature detected"));
			Sleep(500);
			int* ptr = nullptr;
			*ptr = 1;
			exit(1);
		}
	}
}

void Auth::Init()
{
	Utils::Log(0, XorStr("Some areas require VPN to connect. If you use Clash-Verge, please enable the virtual network card function. (部分地區需要使用 VPN 進行連接，如果使用 Clash-Verge 請開啟虛擬網卡功能)"));
	//VM_TIGER_WHITE_START

	//CheckDllMd5();

	Utils::Log(0, XorStr("Connecting to server... (正在連接伺服器...)"));

	std::thread AntiCheatV1Thread(Auth::AntiCheatV1);
	std::thread TimeOuthread(Auth::TimeOut);
	AntiCheatV1Thread.detach();
	TimeOuthread.detach();

	std::thread GetCountryCode([] {
		auto Res = cpr::Get(cpr::Url{ "https://country-code.playbattlegrounds.com/" }, cpr::Timeout{ 5000 });
		if (Res.status_code == 200 && Res.text != "")
		{
			nlohmann::json Data = nlohmann::json::parse(Res.text);
			std::string CountryCode = "UN";
			if (Data.contains("country_code"))
			{
				CountryCode = Data["country_code"];
			}
			std::string City = "";
			if (Data.contains("city"))
			{
				City = Data["city"];
			}
			SetConsoleTitle(std::format("{} Server", CountryCode).c_str());

			if (CountryCode == XorStr("CN"))
			{
                Utils::Log(3, XorStr("您目前的地区为 CN (中国)，可能会导致无法连接或更新速度极慢，请使用 VPN 加速，如果已经使用了 VPN 仍看到此提示可能是因为您没有开启 (虚拟网卡模式) / (全局加速) 等。"));
                Utils::Log(3, XorStr("如果您使用的 Clash 没有虚拟网卡模式请下载使用 Clash-Verge"));
                Utils::Log(3, XorStr("https://github.com/clash-verge-rev/clash-verge-rev/releases"));
                Utils::Log(3, XorStr("必须开启 Clash-Verge 中的（设置-系统设置-虚拟网卡模式）才能正常加速上，才不会遇到连接不上服务器或下载慢。"));
                Utils::Log(3, XorStr("确保您不会看到这些信息提示时才是正真的加速上 VPN 服务。"));
			}
            else
            {
                Utils::Log(1, XorStr("Your current region is %s, and the connection status is normal. (您目前的地區為 %s，連線狀態正常)"), CountryCode, CountryCode);
			}
		}
	});
	GetCountryCode.detach();

	{
		bool Success;
		std::string Content = Utils::ReadFileToString(XorStr("Engine\\Version"), Success);
		if (!Success || Content != XorStr("1.0.0.8")) {
			Utils::Log(0, XorStr("Downloading Resource Pack... (正在更新資源包...)"));
			Download Downloader(XorStr("https://saroyan-kingdom-vishal.nexodma.vip/res/1.0.0.8"), XorStr("Config/Engine"));
			Downloader.Execute();
			ExtractZipFile(XorStr("Config/Engine"), "./");
			Utils::Log(1, XorStr("Resource pack updated successfully (資源包已成功更新)"));
		}
	}

	std::string Text;
	std::ifstream file(XorStr("Config/Account"), std::ios::binary);
	std::stringstream buffer;
	buffer << file.rdbuf();
	Text = buffer.str();

	std::string AccountConfigText = Text;

	if (AccountConfigText != "")
	{
		const unsigned char Key[] = { 0x18, 0x23, 0x45, 0x67 };
		for (size_t i = 0; i < AccountConfigText.length(); i++) {
			AccountConfigText[i] ^= Key[i % sizeof(Key)];
		}

		auto AccountConfig = nlohmann::json::parse(AccountConfigText);

		if (AccountConfig.contains(XorStr("username")))
		{
			sprintf(GameData.Auth.Username, "%s", Utils::StringToUTF8(AccountConfig[("username")]).c_str());
		}
		if (AccountConfig.contains(XorStr("password")))
		{
			sprintf(GameData.Auth.Password, "%s", Utils::StringToUTF8(AccountConfig[("password")]).c_str());
		}
	}

	//GameData.Auth.Version = "3.0.2.0";

	static const auto hError = []() {
		GameData.Auth.InitError = true;
		Utils::Log(2, XorStr("Failed to communicate with the upstream server. There may be a problem with the server. You can try again later."));
		MessageBox(
			NULL,
			XorStr("Failed to connect to the server. Please try using VPN.\n連線伺服器失敗，請嘗試使用 VPN 連結。\n如果使用 Clash-Verge 請開啟虛擬網卡功能。"),
			XorStr("Error"),
			MB_ICONERROR | MB_OK
		);
		exit(1);
	};

	auto Res = API::Request(XorStr("GET"), XorStr("/2d+C6#C5"), { });
	//std::cout << Res.dump(4) << std::endl;
	try {
		int Code = Res.value(XorStr("code"), 0);
		if (Code == 200) {
			Utils::Log(1, XorStr("Successfully connected to the server (與伺服器連線成功)"));
			std::string Version = Res[(XorStr("data"))].value(XorStr("version"), "");
			GameData.Auth.Announcement = Res[(XorStr("data"))].value(XorStr("announcement"), "");

			if (GameData.Auth.Version != Version) {
				//Utils::Log(1, XorStr("New Version: %s"), Version);
                bool SkipUpdated = false;

				if (Version.find('X') != std::string::npos)
                {
                    if (MessageBoxA(NULL, XorStr("A new version has been released. Do you need to update? (This version can be skipped)\n新版本已發布您是否需要更新（該版本可跳過）"), Version.c_str(), MB_YESNO | MB_ICONQUESTION) == IDNO)
                    {
                        SkipUpdated = true;
                    }
                }

                if (!SkipUpdated)
                {
                    auto UrlRes = Res[(XorStr("data"))].value(XorStr("update_url"), "");
                    Utils::Log(3, XorStr("Download Version... (正在下載新版本...)"));
                    Download Downloader(std::format("{}", UrlRes), XorStr("Config/Version"));
                    Downloader.Execute();

                    STARTUPINFO si = {sizeof(si)};
                    si.dwFlags = STARTF_USESHOWWINDOW;
                    si.wShowWindow = SW_SHOW;
                    PROCESS_INFORMATION pi;

                    char cmdLine[] = "Update.exe";
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
			}

			GameData.Auth.Version = Version;
			GameData.Auth.Init = true;
		}
		else {
			hError();
		}
	}
	catch (const nlohmann::json::exception& e) {
		hError();
	}

	std::thread DownloadFontsThread(Auth::DownloadFonts);
	DownloadFontsThread.detach();



	//VM_TIGER_WHITE_END
}