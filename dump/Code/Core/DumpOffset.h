#pragma once

#include <windows.h>
#include <string>
#include <locale>
#include <codecvt>
#include <format>
#include <vector>
#include <vector>

#include <FPGA/Memory/Memory.h>

#include <Core/Data.h>
#include <Core/Offset.h>
#include <Core/Process.h>
#include <Core/Wrappers.h>
#include <Core/GName.h>
#include <Core/Engine.h>
#include <Core/Enums.h>

namespace DumpOffset
{
	inline void print4(const char* var_name, uint32_t offset)
	{
		printf("constexpr UINT32 %s = 0x%04X;\n", var_name, offset);
	}

	inline void print8(const char* var_name, uint32_t offset)
	{
		printf("constexpr UINT32 %s = 0x%08X;\n", var_name, offset);
	}

	inline void print4(const char* var_name, uint8_t offset)
	{
		printf("constexpr UINT32 %s = 0x%01X;\n", var_name, offset);
	}

	inline void print4(const char* var_name, uint64_t offset)
	{
		printf("constexpr UINT32 %s = 0x%016llX;\n", var_name, offset);
	}

	inline void Init()
	{
		printf("\n[Dump Offset]\n");

		//40.5 2943A40 找call函数进去 E8 ? ? ? ? 48 8B F0 48 85 C0 0F 84 ? ? ? ? 8B 68 ? 45 33 F6 3B 2D
		//{
		//	auto Results = Process::FindSignatureAll("8B 05 ? ? ? ? 0F A3 C8 73 ? 03 0D");
		//	auto DynamicDecryptFuncIndex = Process::CalcRelative(Results[0] + 13);
		//	print8("DynamicDecryptFuncIndex", (UINT32)DynamicDecryptFuncIndex);
		//	print8("DynamicDecryptKeyMask", (UINT32)DynamicDecryptFuncIndex + 4);
		//	print8("DynamicDecryptKey", (UINT32)DynamicDecryptFuncIndex + 8);
		//}

		//print8("DynamicDecryptFuns_GameState", (UINT32)0x11FBC6B0);
		////40.5 A52920
		////E8 ? ? ? ? 48 8B F0 B9 ? ? ? ? E8 ? ? ? ? 48 89 44 24 ? 48 8B 9C 24 call進去
		//print8("DynamicDecryptFuns_OwningGameInstance", (UINT32)0x11E3B110);
		////40.6 B9F88C0 6D096E0 BA10970
		////FF 54 C5 ? 48 8B D8 48 33 DF EB ? 48 8B DF 48 83 BB
		// E8 ? ? ? ? 84 C0 74 ? 48 8B CF FF 15 ? ? ? ? 48 8B 08是进去函数
		// Signature for C7D3493: 49 8B 95 ? ? ? ? 48 8B CA 48 C1 E9 ? 48 85 C9 75 ? 48 8B CF EB ? 8B 05 ? ? ? ? 83 E2 ? 0F A3 D0 48 89 4D ? 73 ? 83 3D ? ? ? ? ? 75 ? 44 8B CA 48 8D 0D ? ? ? ? 48 8D 55 ? 41 B8 ? ? ? ? E8 ? ? ? ? EB ? 66 89 55 ? 4C 8D 45 ? BA ? ? ? ? 40 88 7D ? 48 8D 4D ? FF 15 ? ? ? ? 48 8B 4D ? 48 83 E1 ? 83 65
		//print8("DynamicDecryptFuns_PlayerCameraManager", (UINT32)0x128219D0);
		////40.6 B31CC10
		////48 8B B9 ? ? ? ? 48 8B D9 48 85 FF 0F 84 ? ? ? ? 8B 89 ? ? ? ? 4C 8D 35
		// E8 ? ? ? ? 48 85 C0 74 ? 48 8B 84 24 ? ? ? ? 48 8B 80 ? ? ? ? 48 89 84 24 ? ? ? ? 48 8B 84 24 ? ? ? ? 48 05 call
		//print8("DynamicDecryptFuns_RootComponent", (UINT32)0x12813B30);

		//printf("\n");

		{
			//89 05 ? ? ? ? 48 8D 45 ? 89 75
			//auto Results = Process::FindSignatureAll("89 05 ? ? ? ? 48 8D 45 ? 89 75");
			//auto UPTRIndex = Process::CalcRelative(Results[0] + 2);
			//print4("UPTRIndex", (UINT32)UPTRIndex);
			//print4("UPTREnable", (UINT32)UPTRIndex + 4);
			//print4("UPTRKey", (UINT32)UPTRIndex + 8);
			
		}

		//{
		//	auto Results = Process::FindSignatureAll("4C 8D 0D ? ? ? ? 48 89 44 24 ? 4C 8D 05 ? ? ? ? 48 8D 15 ? ? ? ? 48 8D 8D ? ? ? ? E8 ? ? ? ? 48 8D 45 ? 4C 8D 0D ? ? ? ? 48 89 44 24 ? 4C 8D 05 ? ? ? ? 48 8D 15 ? ? ? ? 48 8D 8D ? ? ? ? E8 ? ? ? ? 44 39 2D");
		//	auto SwitchEncryptor = Process::CalcRelative(Results[0] + 3);
		//	print4("SwitchEncryptor", (UINT32)SwitchEncryptor);
		//}

		//{
		//	auto Results = Process::FindSignatureAll("4C 8D 35 ? ? ? ? FF 15 ? ? ? ? 33 DB");
		//	auto EncBase0 = Process::CalcRelative(Results[0] + 3);
		//	print4("EncBase0", (UINT32)EncBase0);
		//}

		//{
		//	auto Results = Process::FindSignatureAll("4C 8D 3D ? ? ? ? 44 8B 74 24 ? 48 B9");
		//	auto EncBase1 = Process::CalcRelative(Results[0] + 3);
		//	print4("EncBase1", (UINT32)EncBase1);
		//}
		//exit(1);

		printf("\n");

		//PhysX3_x64.dll 48 89 05 ? ? ? ? EB
		print8("PhysXSDK", (UINT32)0x1F8878);

		{
			auto Results = Process::FindSignatureAll("48 8B 1D ? ? ? ? EB ? 45 32 FF");
			auto UWorld = Process::CalcRelative(Results[0] + 3);
			print4("UWorld", (UINT32)UWorld);
		}

		//End Hitch GPU Profile
		//48 8B 0D ? ? ? ? EB ? 48 8B 0D ? ? ? ? 0F B6 05 ? ? ? ? 48 89 4C 24 ? 34 ? 48 C1 E9 ? 80 F1 ? 88 44 24 ? 88 4C 24 ? 48 8B 4C 24 ? E8 ? ? ? ? 48 8D 4C 24
		print8("Engine", (UINT32)0x0);

		//48 8D 0D ? ? ? ? E8 ? ? ? ? 48 63 9C 24 ? ? ? ? 33 F6 83 FB ? 74 ? 48 8D 0D ? ? ? ? FF 15 ? ? ? ? 48 8D 14 5B
		print8("Matix", (UINT32)0x0);

		{
			auto Results = Process::FindSignatureAll("4C 8D 05 ? ? ? ? EB ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8B C0 C6 05 ? ? ? ? ? 48 8B 44 24 ? 48 8B D7 48 C1 E8 ? 8D 0C 00 49 03 4C D8 ? E8 ? ? ? ? 83 7E");
			auto GNames = Process::CalcRelative(Results[0] + 3);
			print8("GNames", (UINT32)GNames);
			Offset.GNames = GNames;
		}

		{
			auto Results = Process::FindSignatureAll("48 8B 04 D9 48 8D 0C D0 EB ? 33 F6");
			auto GObjects = Process::CalcRelative(Results[0] - 4);
			print8("GObjects", (UINT32)GObjects);

			Offset.GObjects = GObjects;
		}

		{
			auto Results = Process::FindSignatureAll("41 B8 ? ? ? ? 99 41 F7 F8 C3");
			auto NumElementsPerChunk = Process::Read<UINT32>(Results[0] + 2);
			print4("NumElementsPerChunk", (UINT32)NumElementsPerChunk);

			Offset.NumElementsPerChunk = NumElementsPerChunk;
		}

		//Object array index or name index is invalid
		//8B 4B ? E8 ? ? ? ? 84 C0 74 ? B0 ? 48 83 C4 ? 5B C3 80 3D ? ? ? ? ? 72 ? 48 8D 05 ? ? ? ? BA
		{
			auto Results = Process::FindSignatureAll("8B 4B ? E8 ? ? ? ? 84 C0 74 ? B0 ? 48 83 C4 ? 5B C3 80 3D ? ? ? ? ? 72 ? 48 8D 05 ? ? ? ? BA");
			auto ObjID = Process::Read<UINT8>(Results[0] + 2);
			print4("ObjID", (UINT32)ObjID);

			print4("UObject_Name", (UINT32)ObjID);
			print4("UObject_Number", (UINT32)ObjID + 4);

			Offset.UObject.Name = ObjID;

			Results = Process::FindSignatureAll("8B 43 ? 3B 05 ? ? ? ? 7D ? 85 C0");
			auto UObject_Index = Process::Read<UINT8>(Results[0] + 2);
			print4("UObject_Index", UObject_Index);
			Offset.UObject.Index = UObject_Index;

			Results = Process::FindSignatureAll("4C 8B 41 ? 48 63 49");
			auto UObject_Class = Process::Read<UINT8>(Results[0] + 3);
			print4("UObject_Class", (UINT32)UObject_Class);
			Offset.UObject.Class = UObject_Class;

			Results = Process::FindSignatureAll("48 0B 43 ? 48 81 E1");
			auto UObject_Outer = Process::Read<UINT8>(Results[0] + 3);
			print4("UObject_Outer", (UINT32)UObject_Outer);
			Offset.UObject.Outer = UObject_Outer;

			//48 8D 0C D0 EB ? 33 F6 8B CE 81 49
			print4("UObject_Size", (UINT32)0x18);

			print4("UObject_Inherit", (UINT32)0x50);
		}

		{
			auto Results = Process::FindSignatureAll("49 63 9D ? ? ? ? 8D 43 ? 41 89 85 ? ? ? ? 41 3B 85 ? ? ? ? 7E ? 8B D3 49 8D 8D ? ? ? ? E8 ? ? ? ? 49 8D 8D ? ? ? ? FF 15 ? ? ? ? 4C 89 34 D8");
			auto Actor = Process::Read<UINT8>(Results[0] + 3) - 8;
			print4("Actor", (UINT32)Actor);
		}

		{
			//0F 11 BB ? ? ? ? 45 8B C6
			//0F 11 81 ? ? ? ? 0F 10 4A ? 0F 11 89 ? ? ? ? 0F 10 42 ? 0F 11 81 ? ? ? ? 45 84 C0
			//0F 11 81 ? ? ? ? 4C 8D 81
			auto Results = Process::FindSignatureAll("0F 11 81 ? ? ? ? 4C 8D 81");
			auto ComponentToWorld = Process::Read<UINT32>(Results[0] + 3);
			print4("ComponentToWorld", (UINT32)ComponentToWorld);
			print4("ComponentLocation", (UINT32)ComponentToWorld + 0x10);
			print4("ComponentRotation", (UINT32)ComponentToWorld + 0x20);
		}

		//UWorldTick
		//15.5 A040080 a1+0x65c
		//8B 87 ? ? ? ? 39 87 ? ? ? ? 75 ? 8B 87 ? ? ? ? 39 87 ? ? ? ? 75 ? 8B 87 ? ? ? ? 39 87 ? ? ? ? 75 ? F2 0F 10 05
		//40.1 8B 83 ? ? ? ? 39 83 ? ? ? ? 75 ? 8B 83 ? ? ? ? 39 83 ? ? ? ? 75 ? 8B 83 ? ? ? ? 39 83 ? ? ? ? 75 ? F2 0F 10 05
		// E8 ? ? ? ? 84 C0 74 ? F3 0F 10 15 ? ? ? ? B2
		// E8 ? ? ? ? 48 8B 9E ? ? ? ? E8 ? ? ? ? 4C 8B 8E 找call
		//print4("WorldToMap", (UINT32)0x674);
		{
			auto Results = Process::FindSignatureAll("8B 86 ? ? ? ? 39 86 ? ? ? ? 75 ? 8B 86 ? ? ? ? 39 86 ? ? ? ? 75 ? 8B 86");
			auto WorldToMap = Process::Read<UINT32>(Results[0] + 2);
			print4("WorldToMap", (UINT32)WorldToMap);
		}

		{
			auto Results = Process::FindSignatureAll("48 89 3D ? ? ? ? C7 05 ? ? ? ? ? ? ? ? 89 05");
			auto GLocalPlayer = Process::CalcRelative(Results[0] + 3);
			print4("GLocalPlayer", (UINT32)GLocalPlayer);
		}

		printf("\n");

		//现在相机不加密了，所以只取bEnableCameraEncrypt就好
		//相机加密看 15.7 a0680d5 我下段得到A2456E0
		//{
		//	auto Results = Process::FindSignatureAll("75 ? 48 8D 81 ? ? ? ? C3 8B 05");
		//	auto bEnableCameraEncrypt = Process::CalcRelative(Results[0] - 8);
		//	print4("bEnableCameraEncrypt", (UINT32)bEnableCameraEncrypt);

		//	Results = Process::FindSignatureAll("75 ? 8B 15 ? ? ? ? 03 15 ? ? ? ? 0F AF 15 ? ? ? ? 48 63 C2 48 69 C0 ? ? ? ? 48 05 ? ? ? ? 49 03 C0 C3 83 F8 ? 0F 84");
		//	print4("CameraEncryptIndex", (UINT32)Process::CalcRelative(Results[0] - 6));

		//	Results = Process::FindSignatureAll("0F AF 15 ? ? ? ? 48 63 C2 48 69 C0 ? ? ? ? 48 05 ? ? ? ? 49 03 C0 C3 83 F8 ? 0F 84 ? ? ? ? 83 F8 ? 0F 84");
		//	print4("CameraKey1", (UINT32)Process::CalcRelative(Results[0] + 3));
		//	print8("CameraKey2", (UINT32)Process::CalcRelative(Results[0] + 3) + 4);

		//	Results = Process::FindSignatureAll("48 8D 81 ? ? ? ? C3 8B 05");
		//	print4("CameraOffset1", (UINT32)Process::Read<UINT32>(Results[0] + 3));

		//	Results = Process::FindSignatureAll("48 69 C0 ? ? ? ? 48 05 ? ? ? ? 49 03 C0 C3 83 F8 ? 0F 84 ? ? ? ? 83 F8 ? 0F 84 ? ? ? ? 83 F8 ? 75");
		//	print4("CameraOffset2", (UINT32)Process::Read<UINT32>(Results[0] + 3));

		//	Results = Process::FindSignatureAll("48 05 ? ? ? ? 49 03 C0 C3 83 F8 ? 0F 84 ? ? ? ? 83 F8 ? 0F 84 ? ? ? ? 83 F8 ? 75");
		//	print4("CameraOffset3", (UINT32)Process::Read<UINT32>(Results[0] + 2));
		//}

		//printf("\n");

		//15.6 8858840 引用的一个指针可能是
		//48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 89 05 ? ? ? ? 48 89 05 ? ? ? ? 89 05 ? ? ? ? 48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 48 89 05 ? ? ? ? 89 05 ? ? ? ? 48 89 05 ? ? ? ? 89 05 ? ? ? ? C7 05
		//15.6 83BF40
		//UINT32 EncryptArrayCount = mem.Read<UINT32>(GameData.Process.Base + 0x10B085B8 + 8);
		//UINT64 EncryptArrayStart = mem.Read<UINT64>(GameData.Process.Base + 0x10B085B8) + 0x10;
		print8("EncryptArray", (UINT32)0x0);
		print8("EncryptArrayActor", (UINT32)0x0);

		{
			//15.5 653610f 652f5a0 48 89 81 ? ? ? ? 48 8B 84 24 ? ? ? ? 48 83 B8 ? ? ? ? ? 0F 85 ? ? ? ? 48 8B 84 24 ? ? ? ? 48 05 ? ? ? ? 48 8B D0
			auto Results = Process::FindSignatureAll("48 89 81 ? ? ? ? 48 8B 84 24 ? ? ? ? 48 83 B8 ? ? ? ? ? 0F 85 ? ? ? ? 48 8B 84 24 ? ? ? ? 48 05 ? ? ? ? 48 8B D0");
			auto InventoryItemInfo = Process::Read<UINT32>(Results[0] + 3);
			print4("InventoryItemInfo", (UINT32)InventoryItemInfo);
		}

		//Engine.SkinnedMeshComponent.GetNumBones() 找到函数地址进去看结果函数里读了SkeletalMesh后再读的数量的偏移 - 8
		print4("FinalRefBoneInfo", (UINT32)0x1D8);

		//48 8D B8 ? ? ? ? 48 8B B4 24 ? ? ? ? B9 ? ? ? ? F3 A4 C7 84 24 ? ? ? ? ? ? ? ? B8 ? ? ? ? 48 6B C0 ? 48 8D 0D ? ? ? ? 0F BE 04 01 85 C0 74 ? B8 ? ? ? ? 48 69 C0 ? ? ? ? 48 8D 0D ? ? ? ? 0F BE 04 01 85 C0 74 ? 48 8B 84 24 ? ? ? ? 48 89 84 24 ? ? ? ? 48 8D 05 ? ? ? ? 48 89 84 24 ? ? ? ? E8 ? ? ? ? 88 44 24 ? 4C 8D 4C 24 ? 4C 8D 84 24 ? ? ? ? 48 8D 94 24 ? ? ? ? B9 ? ? ? ? E8 ? ? ? ? 90 B8 ? ? ? ? 48 69 C0 ? ? ? ? 48 8D 0D ? ? ? ? 0F BE 04 01 48 8B 8C 24 ? ? ? ? 48 33 CC E8 ? ? ? ? 48 81 C4 ? ? ? ? 5F 5E C3 CC CC CC CC CC CC CC CC CC CC CC 48 89 4C 24
		print4("FireRecoil", (uint32_t)0x2940);

		print4("UnencryptedObjects", (uint32_t)0x131b43e0);

		//print4("ItemActors", (uint32_t)0x6F0);

		//print4("PickupActor", (uint32_t)0x6D0);

		/*
		
				//15.5 6539440 48 83 BB ? ? ? ? ? 48 89 7C 24 ? 74 ? 48 8D 54 24 or string: AInteractor_DecipherDevice::CheckHasBlueprintWeapon InitConfig PickupItemInfo!
		
			L"[jayjzchen] AInteractor_DecipherDevice::CheckHasBlueprintWeapon InitConfig PickupItemInfo!");
			}
			sub_6539440(a1 + 3056); //这个函数进去
			也可以是DFMGameplay.InventoryItemInfo.BindPlayerId + 8 = 0x540
		
		print4("ItemRow", GameData.Offset.NameToOffset["DFMGameplay.InventoryItemInfo.BindPlayerId"] + 8);
		*/

		printf("\n");
	}

	inline void SDK()
	{
		printf("\n[SDK Dump Offset]\n");

		// 基础引擎组件
		print4("GameViewport", GameData.Offset.NameToOffset["Engine.Engine.GameViewport"]);
		print4("World", GameData.Offset.NameToOffset["Engine.GameViewportClient.World"]);
		print4("OwningGameInstance", GameData.Offset.NameToOffset["Engine.World.OwningGameInstance"]);
		print4("LocalPlayers", GameData.Offset.NameToOffset["Engine.GameInstance.LocalPlayers"]);
		// 网络相关
		print4("NetDriver", GameData.Offset.NameToOffset["Engine.World.NetDriver"]);
		print4("NetDriverLevels", GameData.Offset.NameToOffset["Engine.NetDriver.Time"] + 0x308);
		// 关卡系统
		print4("PersistentLevel", GameData.Offset.NameToOffset["Engine.World.PersistentLevel"]);
		print4("Levels", GameData.Offset.NameToOffset["Engine.World.Levels"]);
		printf("\n");

		// 游戏状态
		print4("GameState", GameData.Offset.NameToOffset["Engine.World.GameState"]);
		// 游戏状态 - 基础
		print4("InteractSystemComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.InteractSystemComponent"]);
		// 游戏状态 - 门系统
		print4("MapDoorInfoArray", GameData.Offset.NameToOffset["DFMGameplay.InteractSystem.MapDoorInfoArray"]);
		print4("KeyID", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMMapDoorInfoRow.KeyID"]);
		print4("KeyLocation", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMMapDoorInfoRow.Location"]);
		print4("DFMGamePlayerMode", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.DFMGamePlayerMode"]);
		print4("DisplayName", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.MapConfig"] + GameData.Offset.NameToOffset["DFMGlobalDefines.MapConfig.DisplayName"]);
		print4("LevelName", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.MapConfig"] + GameData.Offset.NameToOffset["DFMGlobalDefines.MapConfig.LevelName"]);

		printf("\n");

		// 玩家控制器
		print4("PlayerController", GameData.Offset.NameToOffset["Engine.Player.PlayerController"]);
		print4("ControlRotation", GameData.Offset.NameToOffset["Engine.Controller.ControlRotation"]);
		print4("bShowMouseCursor", GameData.Offset.NameToOffset["Engine.PlayerController.bShowMouseCursor"]);
		print4("AcknowledgedPawn", GameData.Offset.NameToOffset["Engine.PlayerController.AcknowledgedPawn"]);

		printf("\n");

		// UI系统
		print4("MyHUD", GameData.Offset.NameToOffset["Engine.PlayerController.MyHUD"]);
		print4("Controllers", GameData.Offset.NameToOffset["GPGameHud.BaseHUD.Controllers"]);
		print4("ChildControllers", GameData.Offset.NameToOffset["GPGameHud.BatchUIController.ChildControllers"]);
		print4("View", GameData.Offset.NameToOffset["GPGameHud.BaseUIController.View"]);
		print4("Visibility", GameData.Offset.NameToOffset["UMG.Widget.Visibility"]);

		printf("\n");

		// 地图UI
		print4("CurrentScale", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.CurrentScale"]);
		print4("CurrentMapUVPos", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.CurrentMapUVPos"]);
		print4("WorldCenter", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.WorldCenter"]);
		print4("WorldExtent", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.WorldExtent"]);
		print4("MapSize", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.MapSize"]);

		printf("\n");

		// 相机系统
		print4("PlayerCameraManager", GameData.Offset.NameToOffset["Engine.PlayerController.PlayerCameraManager"]);
		print4("ViewTarget", GameData.Offset.NameToOffset["Engine.PlayerCameraManager.ViewTarget"]);
		print4("CameraCachePrivate", GameData.Offset.NameToOffset["Engine.PlayerCameraManager.CameraCachePrivate"]);
		print4("GPCameraModeComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMPlayerCharacter.GPCameraModeComponent"]);
		print4("PlayerViewPitch", GameData.Offset.NameToOffset["GPGameplay.GPCameraModeComponent.PlayerViewPitch"]);
		print4("PlayerViewYaw", GameData.Offset.NameToOffset["GPGameplay.GPCameraModeComponent.PlayerViewYaw"]);
		print4("DefaultFOV", GameData.Offset.NameToOffset["Engine.PlayerCameraManager.DefaultFOV"]);

		printf("\n");

		// 角色组件
		//print4("bHidden", GameData.Offset.NameToOffset["Engine.Actor.bHidden"]);
		print4("bActorIsBeingDestroyed", GameData.Offset.NameToOffset["Engine.Actor.bActorIsBeingDestroyed"]);
		print4("RootComponent", GameData.Offset.NameToOffset["Engine.Actor.RootComponent"]);
		print4("ComponentVelocity", GameData.Offset.NameToOffset["Engine.SceneComponent.ComponentVelocity"]);
		print4("Mesh", GameData.Offset.NameToOffset["Engine.CHARACTER.Mesh"]);
		print4("BoneArray", GameData.Offset.NameToOffset["Engine.SkinnedMeshComponent.MasterPoseComponent"] + 8);
		print4("SkeletalMesh", GameData.Offset.NameToOffset["Engine.SkinnedMeshComponent.SkeletalMesh"]);
		print4("bAlwaysCreatePhysicsState", GameData.Offset.NameToOffset["Engine.PrimitiveComponent.bAlwaysCreatePhysicsState"]);

		printf("\n");

		// 动画系统
		print4("AnimScriptInstance", GameData.Offset.NameToOffset["Engine.SkeletalMeshComponent.AnimScriptInstance"]);
		print4("LocalProxy", GameData.Offset.NameToOffset["GPGameplay.GPAnimInstance.LocalProxy"]);
		print4("LogicADSPercent", GameData.Offset.NameToOffset["GPGameplay.GPAnimInstanceProxy.LogicADSPercent"]);

		printf("\n");

		// 角色状态
		print4("DeadInfo", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.DeadInfo"]);
		print4("KillerUin", GameData.Offset.NameToOffset["GPGameplay.DeadInfo.KillerUin"]);
		print4("LookingRotation", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.LookingRotation"]);
		print4("LastIsDead", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.LastIsDead"]);
		print4("bFighting", GameData.Offset.NameToOffset["DFMGameplay.DFMAICharacter.bFighting"]);

		printf("\n");

		// 健康系统
		print4("HealthComp", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.HealthComp"]);
		print4("HealthSet", GameData.Offset.NameToOffset["GPGameplay.GPHealthDataComponent.HealthSet"]);
		print4("Health", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.Health"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("ImpendingDeathHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.ImpendingDeathHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxImpendingDeathHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxImpendingDeathHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("ArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.ArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("HelmetArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.HelmetArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxHelmetArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxHelmetArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);

		printf("\n");

		// 装备系统
		print4("CharacterEquipComponentCache", GameData.Offset.NameToOffset["DFMGameplay.DFMCharacter.CharacterEquipComponentCache"]);
		print4("EquipmentInfoArray", GameData.Offset.NameToOffset["DFMGameplay.CharacterEquipComponent.EquipmentInfoArray"]);
		print4("EquipedArmorInfoArray", GameData.Offset.NameToOffset["DFMGameplay.CharacterEquipComponent.EquipedArmorInfoArray"]);
		printf("\n");


		print4("InteractorComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMCharacter.InteractorComponent"]);
		/*
			struct TArray<struct AActor*> MovableGridInteractorArr; // 0x6e0(0x10)
			char pad_6F0[0x20]; // 0x6f0(0x20)
		*/
		print4("ItemActors", GameData.Offset.NameToOffset["DFMGameplay.DFMInteractorComponentBase.MovableGridInteractorArr"] + 0x10);
		print4("PickupActor", GameData.Offset.NameToOffset["DFMGameplay.DFMInteractorComponentBase.MovableGridInteractorArr"] + 0x20);
		printf("\n");

		// 玩家武器列表
		print4("WeaponManagerComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMPlayerCharacter.WeaponManagerComponent"]); // 0x2d50
		print4("WeaponIDList", GameData.Offset.NameToOffset["GPGameplay.WeaponManagerComponent.WeaponIDList"]); // 0x1c8
		// 这两个只能本人
		print4("WeaponList", GameData.Offset.NameToOffset["GPGameplay.WeaponManagerComponent.WeaponList"]); // 0x1a8
		print4("AssetFallBackPartNodes", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.AssetFallBackPartNodes"]); // 0xaa0

		printf("\n");

		// 武器系统
		print4("CacheCurWeapon", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.CacheCurWeapon"]);
		print4("WeaponID", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.WeaponID"]);
		print4("CachedAttributeSetWeaponAmmo", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.CachedAttributeSetWeaponAmmo"]);
		print4("WeaponAmmoCount", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.WeaponAmmoCount"]);
		print4("CachedAttributeSetFireMode", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.CachedAttributeSetFireMode"]);
		print4("FiringMode", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponAttributeSetFireMode.FiringMode"]);
		print4("WeaponMesh", GameData.Offset.NameToOffset["GPGameplay.GPWeaponBase.WeaponMesh"]);
		print4("WeaponDataComponentState", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.bAllow1pWeaponMeshTick"] - 0x400);
		print4("Rep_CurStateType", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponDataComponentState.Rep_CurStateType"]);
		print4("WeaponFuncComponentFireShakeCache", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.WeaponFuncComponentFireShakeCache"]);
		print4("RecoilPitch", GameData.Offset.NameToOffset["GPGameplay.WeaponFuncComponentFireShake.CameraRollData"] - 0xA8);
		print4("AllBlueprintCreatedComponents", GameData.Offset.NameToOffset["Engine.Actor.BlueprintCreatedComponents"] - 0x60);
		//E8 ? ? ? ? 48 8B 84 24 ? ? ? ? C6 80 ? ? ? ? ? 48 8B 84 24 ? ? ? ? C6 80 ? ? ? ? ? 48 8B 8C 24 ? ? ? ? E8 ? ? ? ? 48 89 84 24
		//UWeaponFuncComponentFiringAnim
		//40.6 3af9817
		//40.7 3ed40e8 0x2940
		//DFMGameplay.DFMSceneWeapon

		print4("WeaponDataComponentFiring", GameData.Offset.NameToOffset["DFMGameplay.DFMSceneWeapon.WeaponRecId"] - 0x10 - 8);
		print4("ContinueFireCount", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponDataComponentFiring.ContinueFireCount"]);
		print4("FireRecoilMethod", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponDataComponentFiring.FireRecoilMethod"]);
		print4("RecoilModifierConfigForAiming", GameData.Offset.NameToOffset["GPGameplay.WeaponFireRecoilDFM.RecoilModifierConfigForAiming"]);
		print4("ContinueShotRecoil", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilModifierConfig.ContinueShotRecoil"]);
		print4("ContinueShotRecoilLoop", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilModifierConfig.ContinueShotRecoilLoop"]);
		print4("HorizontalRecoil", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilState.HorizontalRecoil"]);
		print4("VerticalRecoil", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilState.VerticalRecoil"]);
		print4("WeaponRecoilPairScale", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilPair.Scale"]);
		print4("WeaponRecoilPairRecoils", GameData.Offset.NameToOffset["GPGameplay.WeaponRecoilPair.Scale"] + 8);
		print4("FCFiring", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponFireRecoilBase.FCFiring"]);
		print4("CurrentFireMode", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponFuncComponentFiring.CurrentFireMode"]);
		print4("Params", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponFireModeBase.Params"]);
		print4("BulletBaseParam", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponFireModeParamsBase.BulletBaseParam"]);
		print4("InitSpeed", GameData.Offset.NameToOffset["GPWeaponRuntime.WeaponBulletBaseInitParam.InitSpeed"]);

		printf("\n");

		// 玩家状态
		print4("PlayerState", GameData.Offset.NameToOffset["Engine.Pawn.PlayerState"]);
		print4("PlayerArray", GameData.Offset.NameToOffset["Engine.GameStateBase.PlayerArray"]);
		print4("PlayerNamePrivate", GameData.Offset.NameToOffset["Engine.PlayerState.PlayerNamePrivate"]);
		print4("Uin", GameData.Offset.NameToOffset["GPGameplay.BasePlayerState.Uin"]);
		print4("bFinishGame", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.bFinishGame"]);
		print4("bDead", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.bDead"]);
		print4("TeamId", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.TeamID"]);
		print4("InnerTeamIndex", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.InnerTeamIndex"]);
		print4("Camp", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.Camp"]);
		print4("bIsDeadBox", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.bIsDeadBox"]);
		print4("HeroID", GameData.Offset.NameToOffset["DFMGameplay.DFMPlayerState.HeroID"]);

		printf("\n");

		// 交互系统 - 箱子状态
		print4("bIsOpened", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_OpenBox.bIsOpened"]);
		print4("OpeningPlayerId", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_OpenBox.OpeningPlayerId"]);
		print4("bFirstOpened", GameData.Offset.NameToOffset["DFMGameplay.Interactor_SingleItemContainer.bFirstOpened"]);

		// 交互系统 - 物品信息
		print4("RepItemArrayItems", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_Container.RepItemArray"] + GameData.Offset.NameToOffset["DFMGameplay.ItemArray.Items"]);
		print4("ItemID", GameData.Offset.NameToOffset["DFMGameplay.InventoryItemInfo.ItemID"]);
		print4("ItemRow", GameData.Offset.NameToOffset["DFMGameplay.InventoryItemInfo.OwnerPlayerId"] + 8);
		print4("Quality", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMCommonItemRow.Quality"]);
		print4("InitialGuidePrice", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMCommonItemRow.InitialGuidePrice"]);
		print4("PickupItemInfo", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup.PickupItemInfo"]);

		// 交互系统 - 尸体拾取
		print4("bLooted", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_DeadBody.bLooted"]);
		print4("PlayerName_Buffer", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_DeadBody.PlayerName_Buffer"]);
		print4("CurrentLootingPlayers", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_Container.CurrentLootingPlayers"]);

		// 交互系统 - 密码系统
		print4("PwdSum", GameData.Offset.NameToOffset["DFMGameplay.Interactor_CodedLock.PwdSum"]);
		print4("Password", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.Password"]);
		print4("MorseCodeSuccessInfo", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.MorseCodeSuccessInfo"]);
		print4("HackPcMiniGameType", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.HackPcMiniGameType"]);
		print4("FingerprintInfo", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.FingerprintInfo"]);

		printf("\n");

		// 技能相关
		print4("bStopFly", GameData.Offset.NameToOffset["DFMGameplay.AbilityWeaponThrowableFlashDrone.bStopFly"]);
		print4("bIsPreDestroyed", GameData.Offset.NameToOffset["DFMAbility.DFMAbilitySuppressionMine.bIsPreDestroyed"]);


		/*print4("InteractSystemComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.InteractSystemComponent"]);
		print4("MapDoorInfoArray", GameData.Offset.NameToOffset["DFMGameplay.InteractSystem.MapDoorInfoArray"]);
		print4("KeyID", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMMapDoorInfoRow.KeyID"]);
		print4("KeyLocation", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMMapDoorInfoRow.Location"]);


		print4("GameViewport", GameData.Offset.NameToOffset["Engine.Engine.GameViewport"]);
		print4("World", GameData.Offset.NameToOffset["Engine.GameViewportClient.World"]);

		print4("OwningGameInstance", GameData.Offset.NameToOffset["Engine.World.OwningGameInstance"]);
		print4("LocalPlayers", GameData.Offset.NameToOffset["Engine.GameInstance.LocalPlayers"]);

		print4("GPCameraModeComponent", GameData.Offset.NameToOffset["DFMGameplay.DFMPlayerCharacter.GPCameraModeComponent"]);
		print4("PlayerViewPitch", GameData.Offset.NameToOffset["GPGameplay.GPCameraModeComponent.PlayerViewPitch"]);
		print4("PlayerViewYaw", GameData.Offset.NameToOffset["GPGameplay.GPCameraModeComponent.PlayerViewYaw"]);

		print4("NetDriver", GameData.Offset.NameToOffset["Engine.World.NetDriver"]);
		print4("NetDriverLevels", GameData.Offset.NameToOffset["Engine.NetDriver.Time"] + 0x308);

		print4("GameState", GameData.Offset.NameToOffset["Engine.World.GameState"]);
		print4("DFMGamePlayerMode", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.DFMGamePlayerMode"]);
		print4("DisplayName", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.MapConfig"] + GameData.Offset.NameToOffset["DFMGlobalDefines.MapConfig.DisplayName"]);
		print4("LevelName", GameData.Offset.NameToOffset["DFMGameplay.DFMGameState.MapConfig"] + GameData.Offset.NameToOffset["DFMGlobalDefines.MapConfig.LevelName"]);
		
		print4("PersistentLevel", GameData.Offset.NameToOffset["Engine.World.PersistentLevel"]);
		print4("Levels", GameData.Offset.NameToOffset["Engine.World.Levels"]);

		print4("PlayerController", GameData.Offset.NameToOffset["Engine.Player.PlayerController"]);
		print4("ControlRotation", GameData.Offset.NameToOffset["Engine.Controller.ControlRotation"]);
		print4("bShowMouseCursor", GameData.Offset.NameToOffset["Engine.PlayerController.bShowMouseCursor"]);
		print4("AcknowledgedPawn", GameData.Offset.NameToOffset["Engine.PlayerController.AcknowledgedPawn"]);

		print4("MyHUD", GameData.Offset.NameToOffset["Engine.PlayerController.MyHUD"]);
		print4("Controllers", GameData.Offset.NameToOffset["GPGameHud.BaseHUD.Controllers"]);
		print4("ChildControllers", GameData.Offset.NameToOffset["GPGameHud.BatchUIController.ChildControllers"]);
		print4("View", GameData.Offset.NameToOffset["GPGameHud.BaseUIController.View"]);
		print4("Visibility", GameData.Offset.NameToOffset["UMG.Widget.Visibility"]);
		print4("CurrentScale", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.CurrentScale"]);
		print4("CurrentMapUVPos", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.CurrentMapUVPos"]);
		print4("WorldCenter", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.WorldCenter"]);
		print4("WorldExtent", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.WorldExtent"]);
		print4("MapSize", GameData.Offset.NameToOffset["DFMGameHud.MapBaseHUDView.MapSize"]);

		print4("PlayerCameraManager", GameData.Offset.NameToOffset["Engine.PlayerController.PlayerCameraManager"]);
		print4("ViewTarget", GameData.Offset.NameToOffset["Engine.PlayerCameraManager.ViewTarget"]);
		print4("CameraCachePrivate", GameData.Offset.NameToOffset["Engine.PlayerCameraManager.CameraCachePrivate"]);

		print4("RootComponent", GameData.Offset.NameToOffset["Engine.Actor.RootComponent"]);
		print4("ComponentVelocity", GameData.Offset.NameToOffset["Engine.SceneComponent.ComponentVelocity"]);
		print4("Mesh", GameData.Offset.NameToOffset["Engine.CHARACTER.Mesh"]);
		print4("BoneArray", GameData.Offset.NameToOffset["Engine.SkinnedMeshComponent.MasterPoseComponent"] + 8);
		print4("SkeletalMesh", GameData.Offset.NameToOffset["Engine.SkinnedMeshComponent.SkeletalMesh"]);
		print4("bAlwaysCreatePhysicsState", GameData.Offset.NameToOffset["Engine.PrimitiveComponent.bAlwaysCreatePhysicsState"]);

		print4("AnimScriptInstance", GameData.Offset.NameToOffset["Engine.SkeletalMeshComponent.AnimScriptInstance"]);
		print4("LocalProxy", GameData.Offset.NameToOffset["GPGameplay.GPAnimInstance.LocalProxy"]);
		print4("LogicADSPercent", GameData.Offset.NameToOffset["GPGameplay.GPAnimInstanceProxy.LogicADSPercent"]);

		print4("DeadInfo", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.DeadInfo"]);
		print4("KillerUin", GameData.Offset.NameToOffset["GPGameplay.DeadInfo.KillerUin"]);

		print4("LookingRotation", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.LookingRotation"]);
		print4("LastIsDead", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.LastIsDead"]);
		print4("bFighting", GameData.Offset.NameToOffset["DFMGameplay.DFMAICharacter.bFighting"]);
		print4("HealthComp", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.HealthComp"]);
		print4("HealthSet", GameData.Offset.NameToOffset["GPGameplay.GPHealthDataComponent.HealthSet"]);
		print4("Health", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.Health"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("ImpendingDeathHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.ImpendingDeathHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxImpendingDeathHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxImpendingDeathHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("ArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.ArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("HelmetArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.HelmetArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		print4("MaxHelmetArmorHealth", GameData.Offset.NameToOffset["GPGameplay.GPAttributeSetHealth.MaxHelmetArmorHealth"] + GameData.Offset.NameToOffset["GPGameplay.GPGameplayAttributeData.BaseValue"]);
		
		print4("CharacterEquipComponentCache", GameData.Offset.NameToOffset["DFMGameplay.DFMCharacter.CharacterEquipComponentCache"]);
		print4("EquipmentInfoArray", GameData.Offset.NameToOffset["DFMGameplay.CharacterEquipComponent.EquipmentInfoArray"]);
		print4("EquipedArmorInfoArray", GameData.Offset.NameToOffset["DFMGameplay.CharacterEquipComponent.EquipedArmorInfoArray"]);
		
		print4("CacheCurWeapon", GameData.Offset.NameToOffset["GPGameplay.GPCharacterBase.CacheCurWeapon"]);
		print4("WeaponID", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.WeaponID"]);
		print4("CachedAttributeSetWeaponAmmo", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.CachedAttributeSetWeaponAmmo"]);
		print4("WeaponAmmoCount", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponAttributeSetWeaponAmmo.WeaponAmmoCount"]);
		print4("WeaponMesh", GameData.Offset.NameToOffset["GPGameplay.GPWeaponBase.WeaponMesh"]);
		print4("WeaponDataComponentState", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.bAllow1pWeaponMeshTick"] - 0x400);
		print4("Rep_CurStateType", GameData.Offset.NameToOffset["GPWeaponRuntime.GPWeaponDataComponentState.Rep_CurStateType"]);
		print4("WeaponFuncComponentFireShakeCache", GameData.Offset.NameToOffset["GPGameplay.WeaponBase.WeaponFuncComponentFireShakeCache"]);
		print4("RecoilPitch", GameData.Offset.NameToOffset["GPGameplay.WeaponFuncComponentFireShake.CameraRollData"] - 0xA8);

		print4("PlayerState", GameData.Offset.NameToOffset["Engine.Pawn.PlayerState"]);
		print4("PlayerArray", GameData.Offset.NameToOffset["Engine.GameStateBase.PlayerArray"]);
		print4("PlayerNamePrivate", GameData.Offset.NameToOffset["Engine.PlayerState.PlayerNamePrivate"]);
		print4("Uin", GameData.Offset.NameToOffset["GPGameplay.BasePlayerState.Uin"]);
		print4("bFinishGame", GameData.Offset.NameToOffset["GPGameplay.BasePlayerState.bFinishGame"]);
		print4("bDead", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.bDead"]);
		print4("TeamId", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.TeamId"]);
		print4("InnerTeamIndex", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.InnerTeamIndex"]);
		print4("Camp", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.Camp"]);
		print4("bIsDeadBox", GameData.Offset.NameToOffset["GPGameplay.GPPlayerState.bIsDeadBox"]);
		print4("HeroID", GameData.Offset.NameToOffset["DFMGameplay.DFMPlayerState.HeroID"]);

		print4("bIsOpened", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_OpenBox.bIsOpened"]);
		print4("OpeningPlayerId", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_OpenBox.OpeningPlayerId"]);
		print4("RepItemArrayItems", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_Container.RepItemArray"] + GameData.Offset.NameToOffset["DFMGameplay.ItemArray.Items"]);
		print4("ItemID", GameData.Offset.NameToOffset["DFMGameplay.InventoryItemInfo.ItemID"]);


		print4("ItemRow", GameData.Offset.NameToOffset["DFMGameplay.InventoryItemInfo.BindPlayerId"] + 8);

		print4("Quality", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMCommonItemRow.Quality"]);
		print4("InitialGuidePrice", GameData.Offset.NameToOffset["DFMGlobalDefines.DFMCommonItemRow.InitialGuidePrice"]);

		print4("PickupItemInfo", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup.PickupItemInfo"]);
		print4("bLooted", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_DeadBody.bLooted"]);
		print4("PlayerName_Buffer", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_DeadBody.PlayerName_Buffer"]);
		print4("CurrentLootingPlayers", GameData.Offset.NameToOffset["DFMGameplay.InventoryPickup_Container.CurrentLootingPlayers"]);
		print4("PwdSum", GameData.Offset.NameToOffset["DFMGameplay.Interactor_CodedLock.PwdSum"]);
		print4("Password", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.Password"]);
		print4("MorseCodeSuccessInfo", GameData.Offset.NameToOffset["DFMGameplay.Interactor_HackPC.MorseCodeSuccessInfo"]);
		print4("bFirstOpened", GameData.Offset.NameToOffset["DFMGameplay.Interactor_SingleItemContainer.bFirstOpened"]);*/

		printf("\n");
	}
}