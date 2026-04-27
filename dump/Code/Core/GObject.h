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

namespace GObject
{
	struct
	{
		UINT64 ObjectArray;
		UINT64 MaxElements;
		UINT64 NumElements;
		UINT64 MaxChunks;
		UINT64 NumChunks;
	} UObjectArray;

	inline UE_UClass FindObject(const std::string& Name)
	{
		if (GameData.GObject.NameToAddress.count(Name))
		{
			UE_UClass Object = UE_UClass(GameData.GObject.NameToAddress[Name]);
			//std::cout << Name << std::endl;
			return Object;
		}
		return (UINT64)nullptr;
	}

	inline void DumpName()
	{
		File ObjectsDumpFile(GameData.Directory / "ObjectsDump.txt", "w");

		//UINT64 ObjectChunks = (UObjectArray.MaxElements / Offset.NumElementsPerChunk) + 1;
		int ObjectsCount = 0;
		//UObjectArray.NumChunks
		for (size_t ChunkIndex = 0; ChunkIndex < 1; ChunkIndex++)
		{
			UINT64 ObjectArrayBase = mem.ReadUseCache<UINT64>(UObjectArray.ObjectArray + ChunkIndex * 8);

			printf("\nObjectArrayBase[%d]: 0x%llx\n", ChunkIndex, ObjectArrayBase);

			UINT64 ObjectCount = Offset.NumElementsPerChunk;

			if (ChunkIndex == UObjectArray.NumChunks - 1)
			{
				ObjectCount = UObjectArray.MaxElements % Offset.NumElementsPerChunk;
			}

			//ObjectCount
			for (size_t ObjectIndex = 0; ObjectIndex < ObjectCount; ObjectIndex++)
			{
				const UINT64 Index = ObjectIndex;

				auto ObjectItem = mem.ReadUseCache<UINT64>(ObjectArrayBase + (Index * Offset.UObject.Size));
				UE_UObject Object(ObjectItem);

				auto Name = Object.GetName();

				printf("%p\n", ObjectItem);

				//std::cout << Name << std::endl;
				////exit(1);
				//if (ObjectIndex > 1000) exit(1);

				if (Object) {
					const auto Index = Object.GetIndex();
					const auto Address = Object.GetAddress();
					const auto FullName = Object.GetFullName();

					ObjectsDumpFile.WriteFormat("[{:09d}] ({}/{}) <0x{:011X}> {}\n", ObjectsCount, ChunkIndex, Index, Address, FullName);
					ObjectsDumpFile.Flush();

					ObjectsCount++;

					GameData.GObject.NameToAddress[FullName] = Address;

					GameData.GObject.Array.push_back(Address);

					printf("\rObjects: %d %d/%d", ObjectsCount, ObjectIndex, ObjectCount);

				}
				else {
					printf("\rObjects: %d %d/%d", ObjectsCount, ObjectIndex, ObjectCount);
				}
			}
		}

		printf("\nObjects Done.\n");

		//printf("Objects: %d\n", ObjectsCount);
	}

	inline void DumpPackage()
	{
		printf("\n[Package]\n");

		std::unordered_map<UINT64, std::vector<UE_UObject>> Packages;
		int Count = 0;
		for (const auto& Item : GameData.GObject.Array)
		{
			UE_UObject Object(Item);
			if (Object.IsA<UE_UStruct>() || Object.IsA<UE_UEnum>())
			{
				/*if (Packages.size() >= 315)
				{
					break;
				}*/

				Count++;
				auto packageObj = Object.GetPackageObject();
				Packages[packageObj.GetAddress()].push_back(Object);
				printf("\rPackage: %d %d/%d", Packages.size(), Count, GameData.GObject.Array.size());
			}
		}

		printf("\n");

		UINT32 Index = 1; 
		UINT32 Saved = 0;

		auto path = GameData.Directory / "DUMP";
		std::filesystem::create_directories(path);

		std::string Unsaved{};
		for (UE_UPackage Package : Packages) {
			printf("\rProcessing: %d/%d", Index++, Packages.size());

			Package.Process();
			if (Package.Save(path)) { Saved++; }
		}

		printf("\nSaved packages: %d", Saved);

		printf("\n");
	}

	inline void FindUStructAllOffset()
	{
		printf("\n[UEStructOffset]\n");

		// UStruct
		{
			// SuperStruct
			{
				std::vector<std::pair<UINT64, UINT64>> Infos;
				Infos.push_back({ FindObject("Class CoreUObject.Struct").GetAddress(), FindObject("Class CoreUObject.Field").GetAddress() });
				Infos.push_back({ FindObject("Class CoreUObject.Class").GetAddress(), FindObject("Class CoreUObject.Struct").GetAddress() });

				Offset.UStruct.SuperStruct = OffsetUtils::FindOffset(Infos);

				printf("Offset.UStruct.SuperStruct: 0x%01X\n", Offset.UStruct.SuperStruct);
			}

			// Children
			{
				std::vector<std::pair<UINT64, UINT64>> Infos;
				Infos.push_back({ FindObject("Class Engine.PlayerController").GetAddress(), FindObject("Function Engine.PlayerController.WasInputKeyJustReleased").GetAddress() });
				Infos.push_back({ FindObject("Class Engine.Controller").GetAddress(), FindObject("Function Engine.Controller.UnPossess").GetAddress() });

				Offset.UStruct.Children = OffsetUtils::FindOffset(Infos);

				printf("Offset.UStruct.Children: 0x%01X\n", Offset.UStruct.Children);
			}

			// ChildPropertie
			{
				const auto ObjA = FindObject("ScriptStruct CoreUObject.Color").GetAddress();
				const auto ObjB = FindObject("ScriptStruct CoreUObject.Guid").GetAddress();

				Offset.UStruct.ChildProperties = OffsetUtils::GetValidPointerOffset(ObjA, ObjB, Offset.UStruct.Children + 0x08, 0x80);

				printf("Offset.UStruct.ChildProperties: 0x%01X\n", Offset.UStruct.ChildProperties);
			}

			// PropertiesSize
			{
				std::vector<std::pair<UINT64, INT32>> Infos;
				Infos.push_back({ FindObject("ScriptStruct CoreUObject.Color").GetAddress(), 0x04 });
				Infos.push_back({ FindObject("ScriptStruct CoreUObject.Guid").GetAddress(), 0x10 });

				Offset.UStruct.PropertiesSize = OffsetUtils::FindOffset(Infos);

				printf("Offset.UStruct.PropertiesSize: 0x%01X\n", Offset.UStruct.PropertiesSize);
			}

			// MinAlignemnt
			{
				std::vector<std::pair<UINT64, INT32>> Infos;
				Infos.push_back({ FindObject("ScriptStruct CoreUObject.Transform").GetAddress(), 0x10 });
				Infos.push_back({ FindObject("Class Engine.PlayerController").GetAddress(), 0x8 });

				Offset.UStruct.MinAlignemnt = OffsetUtils::FindOffset(Infos);

				printf("Offset.UStruct.MinAlignemnt: 0x%01X\n", Offset.UStruct.MinAlignemnt);
			}
		}

		// UField
		{
			// Next
			{
				const auto KismetSystemLibraryChild = FindObject("Class Engine.KismetSystemLibrary").GetChildren().GetAddress();
				const auto KismetStringLibraryChild = FindObject("Class Engine.KismetStringLibrary").GetChildren().GetAddress();

#undef max
				const auto HighestUObjectOffset = std::max({ Offset.UObject.Index, Offset.UObject.Name, Offset.UObject.Flags, Offset.UObject.Outer, Offset.UObject.Class });
#define max(a,b)            (((a) > (b)) ? (a) : (b))

				Offset.UField.Next = OffsetUtils::GetValidPointerOffset(KismetSystemLibraryChild, KismetStringLibraryChild, OffsetUtils::Align(HighestUObjectOffset + 0x4, 0x8), 0x60);
				printf("Offset.UField.Next: 0x%01X (HighestUObjectOffset: 0x%01X)\n", Offset.UField.Next, HighestUObjectOffset);
			}
		}

		// UEnum
		{
			// Names
			{
				std::vector<std::pair<UINT64, INT32>> EnumNames;
				EnumNames.push_back({ FindObject("Enum Engine.ENetRole").GetAddress(), 0x5 });
				EnumNames.push_back({ FindObject("Enum Engine.ETraceTypeQuery").GetAddress(), 0x5 });

				Offset.UEnum.Names = OffsetUtils::FindOffset(EnumNames) - 0x8;

				printf("Offset.UEnum.Names: 0x%01X\n", Offset.UEnum.Names);
			}
		}

		// UFunction
		{
			// FunctionFlags
			{
				std::vector<std::pair<UINT64, EFunctionFlags>> Infos;
				Infos.push_back({ FindObject("Function Engine.PlayerController.WasInputKeyJustPressed").GetAddress(), EFunctionFlags::Final | EFunctionFlags::Native | EFunctionFlags::Public | EFunctionFlags::BlueprintCallable | EFunctionFlags::BlueprintPure | EFunctionFlags::Const });
				Infos.push_back({ FindObject("Function Engine.PlayerController.ToggleSpeaking").GetAddress(), EFunctionFlags::Exec | EFunctionFlags::Native | EFunctionFlags::Public });
				Infos.push_back({ FindObject("Function Engine.PlayerController.FOV").GetAddress(), EFunctionFlags::Exec | EFunctionFlags::Native | EFunctionFlags::Public });

				Offset.UFunction.FunctionFlags = OffsetUtils::FindOffset(Infos);

				printf("Offset.UFunction.FunctionFlags: 0x%01X\n", Offset.UFunction.FunctionFlags);
			}

			// Func
			{
				auto WasInputKeyJustPressed = FindObject("Function Engine.PlayerController.WasInputKeyJustPressed").GetAddress();
				auto ToggleSpeaking = FindObject("Function Engine.PlayerController.ToggleSpeaking").GetAddress();
				auto SwitchLevel = FindObject("Function Engine.PlayerController.SwitchLevel").GetAddress();

				for (int i = 0x40; i < 0x140; i += 8)
				{
					UINT64 WasInputKeyJustPressedAddr = 0;
					UINT64 ToggleSpeakingAddr = 0;
					UINT64 SwitchLevelAddr = 0;

					mem.ReadUseCache((WasInputKeyJustPressed + i), &WasInputKeyJustPressedAddr, sizeof(UINT64));
					mem.ReadUseCache((ToggleSpeaking + i), &ToggleSpeakingAddr, sizeof(UINT64));
					mem.ReadUseCache((SwitchLevel + i), &SwitchLevelAddr, sizeof(UINT64));

					if (OffsetUtils::IsInProcessRange(WasInputKeyJustPressedAddr) &&
						OffsetUtils::IsInProcessRange(ToggleSpeakingAddr) &&
						OffsetUtils::IsInProcessRange(SwitchLevelAddr))
					{
						Offset.UFunction.Func = i;

						printf("Offset.UFunction.Func: 0x%01X\n", Offset.UFunction.Func);
						break;
					}

				}
			}
		}

		// FField
		{
			// Class
			{
				Offset.FField.Class = 0x20;
				printf("Offset.FField.Class: 0x%01X\n", Offset.FField.Class);
			}

			// FFieldClass
			{
				// CastFlags
				{
					//Offset.FFieldClass.CastFlags = 0x8;
					printf("Offset.FFieldClass.CastFlags: 0x%01X\n", Offset.FFieldClass.CastFlags);
				}
			}

			// Next
			{
				const auto GuidChildren = FindObject("ScriptStruct CoreUObject.Guid").GetChildProperties().GetAddress();
				const auto VectorChildren = FindObject("ScriptStruct CoreUObject.Vector").GetChildProperties().GetAddress();
				Offset.FField.Next = OffsetUtils::GetValidPointerOffset(GuidChildren, VectorChildren, Offset.FField.Owner + 0x8, 0x48);
				printf("Offset.FField.Next: 0x%01X\n", Offset.FField.Next);
			}

			// Name
			{
				UE_FField GuidChild = FindObject("ScriptStruct CoreUObject.Guid").GetChildProperties();
				UE_FField VectorChild = FindObject("ScriptStruct CoreUObject.Vector").GetChildProperties();

				std::string GuidChildName = GuidChild.GetName();
				std::string VectorChildName = VectorChild.GetName();

				if ((GuidChildName == "A" || GuidChildName == "D") && (VectorChildName == "X" || VectorChildName == "Z"))
				{
					Offset.FField.Name = Offset.FField.Name;
					printf("Offset.FField.Name: 0x%01X\n", Offset.FField.Name);
				}
				else {
					for (Offset.FField.Name = Offset.FField.Owner; Offset.FField.Name < 0x40; Offset.FField.Name += 4)
					{
						GuidChildName = GuidChild.GetName();
						VectorChildName = VectorChild.GetName();

						if ((GuidChildName == "A" || GuidChildName == "D") && (VectorChildName == "X" || VectorChildName == "Z"))
						{
							Offset.FField.Name = Offset.FField.Name;
							printf("Offset.FField.Name: 0x%01X\n", Offset.FField.Name);
							continue;
						}
					}
				}
			}

			//Flags
			{
				Offset.FField.Flags = Offset.FField.Name + 4;
				printf("Offset.FField.Flags: 0x%01X\n", Offset.FField.Flags);
			}
		}

		// UProperty
		{
			// ElementSize
			{
				std::vector<std::pair<UINT64, INT32>> Infos;

				UE_UStruct Guid = FindObject("ScriptStruct CoreUObject.Guid");
				Infos.push_back({ Guid.FindMember("A").GetAddress(), 0x04 });
				Infos.push_back({ Guid.FindMember("C").GetAddress(), 0x04 });
				Infos.push_back({ Guid.FindMember("D").GetAddress(), 0x04 });
				Offset.UProperty.ElementSize = OffsetUtils::FindOffset(Infos);

				printf("Offset.UProperty.ElementSize: 0x%01X\n", Offset.UProperty.ElementSize);
			}

			// ArrayDim
			{
				std::vector<std::pair<UINT64, INT32>> Infos;

				UE_UStruct Guid = FindObject("ScriptStruct CoreUObject.Guid");
				Infos.push_back({ Guid.FindMember("A").GetAddress(), 0x01 });
				Infos.push_back({ Guid.FindMember("C").GetAddress(), 0x01 });
				Infos.push_back({ Guid.FindMember("D").GetAddress(), 0x01 });

				const int32_t MinOffset = Offset.UProperty.ElementSize - 0x10;
				const int32_t MaxOffset = Offset.UProperty.ElementSize + 0x10;

				Offset.UProperty.ArrayDim = OffsetUtils::FindOffset(Infos);

				printf("Offset.UProperty.ArrayDim: 0x%01X\n", Offset.UProperty.ArrayDim);
			}

			// Offset
			{
				std::vector<std::pair<UINT64, INT32>> Infos;

				UE_UStruct Color = FindObject("ScriptStruct CoreUObject.Color");
				Infos.push_back({ Color.FindMember("B").GetAddress(), 0x00 });
				Infos.push_back({ Color.FindMember("G").GetAddress(), 0x01 });
				Infos.push_back({ Color.FindMember("R").GetAddress(), 0x02 });

				if (Infos[2].first == (UINT64)nullptr) [[unlikely]]
					Infos[2].first = Color.FindMember("r").GetAddress();

				Offset.UProperty.Offset = OffsetUtils::FindOffset(Infos);

				printf("Offset.UProperty.Offset: 0x%01X\n", Offset.UProperty.Offset);
			}

			// PropertyFlags
			//{
			//	std::vector<std::pair<UINT64, EPropertyFlags>> Infos;

			//	UE_UStruct Guid = FindObject("ScriptStruct CoreUObject.Guid");
			//	UE_UStruct Color = FindObject("ScriptStruct CoreUObject.Color");

			//	constexpr EPropertyFlags GuidMemberFlags = EPropertyFlags::Edit | EPropertyFlags::ZeroConstructor | EPropertyFlags::SaveGame | EPropertyFlags::IsPlainOldData | EPropertyFlags::NoDestructor | EPropertyFlags::HasGetValueTypeHash;
			//	constexpr EPropertyFlags ColorMemberFlags = EPropertyFlags::Edit | EPropertyFlags::BlueprintVisible | EPropertyFlags::ZeroConstructor | EPropertyFlags::SaveGame | EPropertyFlags::IsPlainOldData | EPropertyFlags::NoDestructor | EPropertyFlags::HasGetValueTypeHash;

			//	Infos.push_back({ Guid.FindMember("A").GetAddress(), GuidMemberFlags });
			//	Infos.push_back({ Color.FindMember("R").GetAddress(), ColorMemberFlags });

			//	int FlagsOffset = 0x28;

			//	if (Infos[1].first == (UINT64)nullptr) [[unlikely]]
			//		Infos[1].first = Color.FindMember("r").GetAddress();

			//	FlagsOffset = OffsetUtils::FindOffset(Infos);

			//	// Same flags without AccessSpecifier
			//	if (FlagsOffset == -1)
			//	{
			//		Infos[0].second |= EPropertyFlags::NativeAccessSpecifierPublic;
			//		Infos[1].second |= EPropertyFlags::NativeAccessSpecifierPublic;

			//		FlagsOffset = OffsetUtils::FindOffset(Infos);
			//	}

			//	Offset.UProperty.PropertyFlags = FlagsOffset;

			//	printf("Offset.UProperty.PropertyFlags: 0x%01X\n", Offset.UProperty.PropertyFlags);
			//}

			// Size
			{
				std::vector<std::pair<UINT64, uint8_t>> Infos;

				UE_UStruct Engine = FindObject("Class Engine.Engine");
				Infos.push_back({ Engine.FindMember("bIsOverridingSelectedColor").GetAddress(), 0xFF });
				Infos.push_back({ Engine.FindMember("bEnableOnScreenDebugMessagesDisplay").GetAddress(), 0b00000010 });
				Infos.push_back({ FindObject("Class Engine.PlayerController").FindMember("bAutoManageActiveCameraTarget").GetAddress(), 0xFF });
				Offset.UProperty.Size = OffsetUtils::FindOffset<1>(Infos, Offset.UProperty.Size) - 0x4;

				if (UE_UProperty Property = FindObject("Class Engine.GameViewportClient").FindMember("DebugProperties", EClassCastFlags::ArrayProperty))
				{
					if (mem.Read<UINT64>(mem.Read<UINT64>(Property.GetAddress()) + Offset.UProperty.Size))
					{
						Offset.UProperty.Size += 8;
					}
				}

				printf("Offset.UProperty.Size: 0x%01X\n", Offset.UProperty.Size);
			}
		}
	}

	inline void Init()
	{
		/*auto D = mem.Read<uint32_t>(GameData.Global.Base + 0x12F4C380);
		auto A = mem.Read<uint32_t>(GameData.Global.Base + 0x12F4C3A8);*/

		UObjectArray.ObjectArray = mem.Read<UINT64>(GameData.Global.Base + Offset.GObjects);
		UObjectArray.MaxElements = mem.Read<UINT64>(GameData.Global.Base + Offset.GObjects - 0xC);
		UObjectArray.NumElements = mem.Read<UINT64>(GameData.Global.Base + Offset.GObjects - 0x18);
		UObjectArray.MaxChunks = mem.Read<UINT64>(GameData.Global.Base + Offset.GObjects - 0x10);
		UObjectArray.NumChunks = mem.Read<UINT64>(GameData.Global.Base + Offset.GObjects - 0x8);


		//UObjectArray.ObjectArray = UObjectArray.ObjectArray ^ 0xDFC0D1E8243;

		//48 8B 05 ? ? ? ? 48 8B 0C C8 48 8D 04 D1 EB 06
		//AGPCharacterBase::OnCharacterOwnerStopObserved
		//15.1 843df7
		/*
			MaxElements: 235488
			NumElements: 67231
			MaxChunks: 13
			NumChunks: 4
		*/

		printf("\n[GObject]\n");
		
		printf("ObjectArray: 0x%llX\n", UObjectArray.ObjectArray);
		printf("MaxElements: %d\n", UObjectArray.MaxElements);
		printf("NumElements: %d\n", UObjectArray.NumElements);
		printf("MaxChunks: %d\n", UObjectArray.MaxChunks);
		printf("NumChunks: %d\n", UObjectArray.NumChunks);

		DumpName();

		FindUStructAllOffset();

		DumpPackage();
	}
}