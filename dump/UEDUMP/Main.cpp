#include <windows.h>
#include <iostream>
#include <filesystem>

#include <Core/Data.h>

#include <FPGA/Memory/Memory.h>

#include <Core/Offset.h>
#include <Core/Process.h>
#include <Core/GName.h>
#include <Core/GObject.h>
#include <Core/DumpOffset.h>
#include <Core/Aes.h>

FGameData GameData;
FOffset Offset;


int main(int argc, char* argv[])
{
	//Aes::XorAesKey();

	auto start = std::chrono::high_resolution_clock::now();

	{
		//std::string gameName;
		//std::cout << ": ";
		//std::getline(std::cin, gameName);
		//GameData.Name = gameName;

		std::cout << "[" << GameData.Name << "]" << " SDK + Offset Dump" << std::endl;

		if (!mem.Init(GameData.Name + ".exe", false, false))
		{
			std::cout << "Failed to initilize DMA" << std::endl;
			return 1;
		}

		std::cout << "Initilize DMA Success" << std::endl;

		VMMDLL_ConfigSet(mem.vHandle, VMMDLL_OPT_REFRESH_ALL, NULL);

		mem.DumpMemory(mem.GetBaseDaddy(GameData.Name + ".exe"), GameData.Name + "-Dump.exe");
		//exit(1);

		{
			auto Root = std::filesystem::path(argv[0]);
			Root.remove_filename();
			GameData.Directory = Root / "Games" / GameData.Name;
			std::filesystem::create_directories(GameData.Directory);
		}

		GameData.Global.Base = mem.GetBaseDaddy(GameData.Name + ".exe");
		GameData.Global.Size = mem.GetBaseSize(GameData.Name + ".exe");

		printf("GameBase: 0x%llX - 0x%llX\n", GameData.Global.Base, GameData.Global.Base + GameData.Global.Size);

		//Aes::XorAesKey();

		//return 1;

		Process::Init();

		DumpOffset::Init();

		GName::Init();

		GObject::Init();

		DumpOffset::SDK();
	}

	auto end = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	double seconds = duration.count() / 1000.0;

	printf("\nDone. %fs\n", seconds);

	//mem.DumpMemory(mem.GetBaseDaddy(GameName + ".exe"), GameName + "-Dump.exe");
}