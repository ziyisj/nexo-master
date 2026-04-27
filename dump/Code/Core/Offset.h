#pragma once

#include <iostream>
#include <FPGA/Memory/Memory.h>
#include <Core/Data.h>

/*
	AES密钥
	找到 FPakPlatformFile::GetPakEncryptionKey(FAES::FAESKey& OutKey, const FGuid& InEncryptionKeyGuid) 函数的位置，可以通过字符串：Failed to find requested encryption key
	然后给这个函数下断点，通过RCX知道第一个参数的地址，然后步过到最后面，看这个地址32字节
	9AD15C4

	//E8 ? ? ? ? 0F 57 C0 4C 8D 44 24 ? 33 C0

	49 8D 4F ? 0F 11 4D Call //这里下断点可以取aes密钥

	https://cs.rin.ru/forum/viewtopic.php?f=10&t=100672
	https://www.gildor.org/smf/index.php?topic=9048.0
	1WGY3B28CMYGU

	steam下载游戏旧版本
	steam://nav/console
	download_depot 2507950 2507952 2214352442578541448



	
	40.5 C831FB0 可能跟cpuid有关
	40.5 B22C8B0 计算动态aes
	40.5 BD68770 指针加密 ？ 48 8B B1 ? ? ? ? 33 DB 41 0F B6 E8

	
*/

struct FOffset
{
	//48 8B 1D ? ? ? ? EB ? 45 32 FF
	//UINT64 UWorld = 0x10249DD8;

	//NamePoolChunk
	//E8 ? ? ? ? 8B 57 08 41 8B C6
	//4C 8D 05 ? ? ? ? EB ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 4C 8B C0 C6 05 ? ? ? ? ? 48 8B 44 24 ? 48 8B D7 48 C1 E8 ? 8D 0C 00 49 03 4C D8 ? E8 ? ? ? ? 83 7E
	UINT64 GNames = 0x12F50400;

	UINT64 ChunkMask = 18;
	UINT64 NameMask = 0x3FFFF;
	//UINT64 FNameXorKey = 0xF78A35C;

	//AGPCharacterBase::OnCharacterOwnerStopObserved
	//48 33 15 ? ? ? ? 48 C1 E0 ? 4A 03 04 EA EB ? 33 C0 8B 40 ? C1 E8 ? A8 ? 75 ? 48 8B CB
	//NewObject with empty name can't be used to create default subobjects (inside of UObject derived class constructo
	//48 63 0D ? ? ? ? 48 8D 15 ? ? ? ? FF 14 CA 48 33 07

	//48 8B 0C D8 33 DB 48 8D 04 D1 EB ? 33 DB 8B C3 8B 40 ? C1 E8 ? A8 ? 75 ? 49 8B CF
	//48 8B 04 D9 48 8D 0C D0 EB ? 33 F6
	UINT64 GObjects = 0x12F69A50;
	//41 B8 ? ? ? ? 99 41 F7 F8 C3
	UINT64 NumElementsPerChunk = 0x19C00;

	struct
	{
		//15.5 883EAE0
		//Object flags are invalid or either Class or Outer is misaligned
		UINT16 Flags = 0x20;
		//8B 4B ? E8 ? ? ? ? 84 C0 74 ? B0 ? 48 83 C4 ? 5B C3 80 3D ? ? ? ? ? 72 ? 48 8D 05 ? ? ? ? BA
		//8B 4B ? E8 ? ? ? ? 84 C0 74 ? B0 ? 48 83 C4 ? 5B C3 80 3D
		UINT16 Name = 0x24; // == 1225 FNameID
		//8B 43 ? 3B 05 ? ? ? ? 7D ? 85 C0
		UINT16 Index = 0x2C; // 索引 || 序号
		//4C 8B 41 ? 48 63 49
		UINT16 Class = 0x10; // 看它 Name 是否等于 248
		//48 0B 43 ? 48 81 E1
		UINT16 Outer = 0x18; // == 1225 FNameID ？

		UINT16 Size = 0x18; // 看GObjects
	} UObject;

	struct
	{
		UINT16 Next{};
	} UField;

	struct
	{
		UINT16 Vft = 0x00;
		UINT16 Class = 0x8;
		UINT16 Owner = 0x10;
		UINT16 Next = 0x20;
		UINT16 Name = 0x28;
		UINT16 Flags = 0x30;
	} FField;

	struct
	{
		INT32 CastFlags = 0x10;
	} FFieldClass;

	struct
	{
		UINT16 SuperStruct{};
		UINT16 Children{};
		UINT16 ChildProperties{};
		UINT16 PropertiesSize{};
		UINT16 MinAlignemnt{};
	} UStruct;

	struct
	{
		UINT16 Names{};
	} UEnum;

	struct
	{
		UINT16 Size = 0x10;
	} FName;

	struct
	{
		UINT16 FunctionFlags{};
		UINT16 Func{}; // ExecFunction
	} UFunction;

	struct
	{
		UINT16 ElementSize = 0x40;
		UINT16 ArrayDim = 0x44;
		UINT16 PropertyFlags = 0x38; // 不需要
		UINT16 Offset = 0x60;
		UINT16 Size = 0x80;
	} UProperty;
};

extern FOffset Offset;

namespace OffsetUtils
{
	inline bool IsInProcessRange(uintptr_t Address)
	{
		IMAGE_DOS_HEADER dosHeader = {};
		IMAGE_NT_HEADERS ntHeader = {};

		uintptr_t ImageBase = GameData.Global.Base;

		// Read the DOS header
		if (!mem.Read((uintptr_t)ImageBase, &dosHeader, sizeof(dosHeader)))
		{
			// handle error
			return false;
		}

		uintptr_t ntHeadersAddr = ImageBase + dosHeader.e_lfanew;

		// Read the NT headers
		if (!mem.Read((uintptr_t)ntHeadersAddr, &ntHeader, sizeof(ntHeader)))
		{
			// handle error
			return false;
		}

		return Address > ImageBase && Address < (ntHeader.OptionalHeader.SizeOfImage + ImageBase);
	}

	template<typename T>
	constexpr T Align(T Size, T Alignment)
	{
		static_assert(std::is_integral_v<T>, "Align can only hanlde integral types!");
		//assert(Alignment != 0 && "Alignment was 0, division by zero exception.");

		const T RequiredAlign = Alignment - (Size % Alignment);

		return Size + (RequiredAlign != Alignment ? RequiredAlign : 0x0);
	}

	template<bool bCheckForVft = true>
	inline int32_t GetValidPointerOffset(UINT64 ObjAAddress, UINT64 ObjBAddress, int32_t StartingOffset, int32_t MaxOffset)
	{
		for (int j = StartingOffset; j <= MaxOffset; j += sizeof(UINT64))
		{
			UINT64 pointerValueA = 0;
			UINT64 pointerValueB = 0;

			if (!mem.ReadUseCache(ObjAAddress + j, &pointerValueA, sizeof(UINT64)))
				continue;

			if (!mem.ReadUseCache(ObjBAddress + j, &pointerValueB, sizeof(UINT64)))
				continue;

			bool bIsAValid = (pointerValueA != 0);
			bool bIsBValid = (pointerValueB != 0);

			if (bCheckForVft && bIsAValid)
			{
				UINT64 vftPointerValueA = 0;
				if (!mem.ReadUseCache(pointerValueA, &vftPointerValueA, sizeof(UINT64)))
					bIsAValid = false;
				else
					bIsAValid = (vftPointerValueA != 0);
			}

			if (bCheckForVft && bIsBValid)
			{
				UINT64 vftPointerValueB = 0;
				if (!mem.ReadUseCache(pointerValueB, &vftPointerValueB, sizeof(UINT64)))
					bIsBValid = false;
				else
					bIsBValid = (vftPointerValueB != 0);
			}

			if (bIsAValid && bIsBValid)
				return j;
		}

		return -1;
	}

	template<int Alignment = 4, typename T>
	inline int32_t FindOffset(std::vector<std::pair<UINT64, T>>& ObjectValuePair, int MinOffset = 0x28, int MaxOffset = 0x1A0)
	{
		int32_t HighestFoundOffset = MinOffset;

		for (int i = 0; i < ObjectValuePair.size(); i++)
		{
			UINT64 ObjectAddress = ObjectValuePair[i].first;
			T buffer;

			for (int j = HighestFoundOffset; j < MaxOffset; j += Alignment)
			{
				// 读取对象地址 + 偏移量 j 处的值
				if (!mem.ReadUseCache(ObjectAddress + j, &buffer, sizeof(T)))
					continue;

				if (buffer == ObjectValuePair[i].second && j >= HighestFoundOffset)
				{
					if (j > HighestFoundOffset)
					{
						HighestFoundOffset = j;
						i = 0;
					}
					break;
				}
			}
		}
		return HighestFoundOffset;
	}

}

////https://www.unknowncheats.me/forum/other-fps-games/653290-delta-force-hawk-ops-reversal-structs-offsets.html
//	/*
//	* 7CE9E40
//	Game runs on ACE
//	UObject members and other unreal classes have their offset shifted, you will need to fix it first before generating the sdk
//
//	process event is 69 (function is obfuscated)
//
//	uobject offset changes each update
//
//	// DFMCharacter
//	// DFMAICharacter
//	// InventoryPickup
//	Becareful with ace, it has some like 5 methods to take SS of you screen. Even on kernel (hello ace team, i see what you did, you sneaky, nice hook)
//
//	GetBoneMatrix
//	E8 ? ? ? ? 48 8B CB 0F 10 00 0F 11 83 ? ? ? ? 0F 10 48
//
//	FnameToString
//	E8 ? ? ? ? 8B 57 08 41 8B C6
//
//	FreeObject
//	E8 ? ? ? ? 44 38 35 ? ? ? ? 74 24
//	GetObjectName
//
//	E8 ? ? ? ? F6 C3 02 74 3D 48 8D 4C 24 ? 83 E3 FD FF 15 ? ? ? ? 33 D2 48 8D 4C 24 ? E8 ? ? ? ? 48 8D 4C 24 ? FF 15 ? ? ? ? 48 85 C0 74 13 48 8D 4C 24 ? FF 15 ? ? ? ? 48 8B C8 E8 ? ? ? ? F6 C3 01 74 3A 48 8D 4C 24 ? FF 15 ? ? ? ? 33 D2 48 8D 4C 24 ? E8 ? ? ? ? 48 8D 4C 24 ? FF 15 ? ? ? ? 48 85 C0 74 13 48 8D 4C 24 ? FF 15 ? ? ? ? 48 8B C8 E8 ? ? ? ? 48 8B 84 24
//
//	E8 ? ? ? ? 48 8B F0 49 3B C6
//	StaticFindObject
//
//	GEngine
//	48 8B 0D ? ? ? ? EB 29 48 8B 0D ? ? ? ? 0F B6 05 ? ? ? ? 48 89 4C 24 ? 34 37 48 C1 E9 08 80 F1 37 88 44 24 69 88 4C 24 6E 48 8B 4C 24 ? 41 B8 ? ? ? ? 48 8B D3 E8 ? ? ? ? 33 DB
//
//	GetUWorld
//	48 8B 35 ? ? ? ? EB 31
//	*/


/*


DeltaForceClient-Win64-Shipping.exe+8113C0 - 48 89 5C 24 08        - mov [rsp+08],rbx
DeltaForceClient-Win64-Shipping.exe+8113C5 - 57                    - push rdi
DeltaForceClient-Win64-Shipping.exe+8113C6 - 48 83 EC 20           - sub rsp,20 { 32 }
DeltaForceClient-Win64-Shipping.exe+8113CA - 48 83 39 00           - cmp qword ptr [rcx],00 { 0 }
DeltaForceClient-Win64-Shipping.exe+8113CE - 48 8B DA              - mov rbx,rdx
DeltaForceClient-Win64-Shipping.exe+8113D1 - 48 8B F9              - mov rdi,rcx
DeltaForceClient-Win64-Shipping.exe+8113D4 - 75 11                 - jne DeltaForceClient-Win64-Shipping.exe+8113E7
DeltaForceClient-Win64-Shipping.exe+8113D6 - 33 C0                 - xor eax,eax
DeltaForceClient-Win64-Shipping.exe+8113D8 - 48 8D 04 D0           - lea rax,[rax+rdx*8]
DeltaForceClient-Win64-Shipping.exe+8113DC - 48 8B 5C 24 30        - mov rbx,[rsp+30]
DeltaForceClient-Win64-Shipping.exe+8113E1 - 48 83 C4 20           - add rsp,20 { 32 }
DeltaForceClient-Win64-Shipping.exe+8113E5 - 5F                    - pop rdi
DeltaForceClient-Win64-Shipping.exe+8113E6 - C3                    - ret
DeltaForceClient-Win64-Shipping.exe+8113E7 - 48 63 0D AA992D10     - movsxd  rcx,dword ptr [DeltaForceClient-Win64-Shipping.exe+10AEAD98] { (1) }
DeltaForceClient-Win64-Shipping.exe+8113EE - 48 8D 15 3BCC140F     - lea rdx,[DeltaForceClient-Win64-Shipping.exe+F95E030] { (14080A9C0) }
DeltaForceClient-Win64-Shipping.exe+8113F5 - FF 14 CA              - call qword ptr [rdx+rcx*8]
DeltaForceClient-Win64-Shipping.exe+8113F8 - 48 33 07              - xor rax,[rdi]
DeltaForceClient-Win64-Shipping.exe+8113FB - 48 8D 04 D8           - lea rax,[rax+rbx*8]
DeltaForceClient-Win64-Shipping.exe+8113FF - 48 8B 5C 24 30        - mov rbx,[rsp+30]
DeltaForceClient-Win64-Shipping.exe+811404 - 48 83 C4 20           - add rsp,20 { 32 }
DeltaForceClient-Win64-Shipping.exe+811408 - 5F                    - pop rdi
DeltaForceClient-Win64-Shipping.exe+811409 - C3                    - ret
__int64 __fastcall sub_8113C0(_QWORD *a1, __int64 a2)
{
  if ( *a1 )
	return (*a1 ^ ((__int64 (*)(void))*(&loc_F95E030 + dword_10AEAD98))()) + 8 * a2;
  else
	return 8 * a2;
}

要获取真实的GUObjectArray指针：
在 FF 14 CA (call指令) 后下断点
观察：
rax 寄存器的值（函数返回值）
[rdi] 的值（应该是 0xDFC23E0DDF3）
这两个值异或后，再加上 rbx8 就是最终结果
您可以在CE中：
在 48 33 07 (xor指令) 处下断点
查看：
rax = 函数返回值
[rdi] = 0xDFC23E0DDF3
rbx = 传入的 a2 参数值

*/