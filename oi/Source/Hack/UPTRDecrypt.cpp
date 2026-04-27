#include "UPTRDecrypt.h"
#include "FuckEnc.h"
#include <Hack/ENC/ENC.h>
#include "MirrorProcess.h"
#include <IDA/ida_defs.h>

uint64_t UPTRDecrypt::Indicator(const FUPTRDecryptType Type, const uint64_t Address)
{
    // {
    //     uint64_t Index = HIWORD(Address) & 0x7FFF;
    //     uint8_t Enable0 = Address >> 0x3F;
    //     //UPTREnable
    //     uint8_t Enable1 = mem.Read<uint32_t>(GameData.Process.Base + 0x14AC6DEC) & (1 << SBYTE6(Address));
    //     uint64_t EncAddress = Address & 0xFFFFFFFFFFFFi64;

    //     if (Enable0 && Enable1)
    //     {
    //         unsigned int* PTREncAddress = (unsigned int*)&EncAddress;

    //         if ( GameData.UPTRDecrypt.SwitchEncryptor == 1 )
    //         {
    //             ENC::Decrypt(0, PTREncAddress, 4, (uint16_t)Index);
    //         } else {
    //             // 这个时候的 Index 其实是一个FEncHandler指针
    //             // sub_296D360
    //             // sub_296CBA0
    //             // 296E040
    //             // 新加密的核心是为了让Index的计算变得复杂
    //             // 所有的解密都是 sub_99D820
    //             // 它用 (*(_BYTE *)(a3 + 3) & 1) 的方式来判断是奇数还是偶数
    //             ENC::Decrypt(1, PTREncAddress, 4, (uint16_t)Index);
    //         }

    //         uint64_t CacheEncAddress = EncAddress;
    //         EncAddress = CacheEncAddress & 0xFFFFFFFFFFFFi64;

    //         if ((CacheEncAddress & 0xFFFFFFFFFFFFui64) >= 0x800000000000i64)
    //         {
    //             EncAddress = CacheEncAddress & 0xFFFFFFFFFFFFi64 | 0xFFFF000000000000ui64;
    //         }
    //     }

    //     return EncAddress;
    // }

    int Index = Address & 0xF;
    uint64_t EncAddress = Address >> 4;
    // auto Enable = _bittest((const LONG*)&GameData.UPTRDecrypt.UPTREnable, Index);
    std::atomic<LONG>& AtomicValue = reinterpret_cast<std::atomic<LONG>&>(GameData.UPTRDecrypt.UPTREnable);
    LONG OldValue = AtomicValue.load(std::memory_order_acquire);
    bool Enable = (OldValue & (1 << Index)) != 0;

    if (Enable)
    {
        if (GameData.UPTRDecrypt.SwitchEncryptor)
        {
            if (!GameData.UPTRDecrypt.bVEH)
            {
                unsigned int* PTREncAddress = (unsigned int*)&EncAddress;
                ENC::Decrypt(0, PTREncAddress, 4, Index);
            }
            else
            {
                MirrorProcess::VEHDecrypt(GameData.UPTRDecrypt.EncBase0, &EncAddress, 4, Index);
            }
            // switch (Type)
            // {
            // case FUPTRDecryptType::AcknowledgedPawn:
            //     return EncAddress;
            //     break;
            // case FUPTRDecryptType::GameState:
            // 	//2
            // 	if (GameData.UPTRDecrypt.GameState.Key0 == 0)
            // 	{
            // 		GameData.UPTRDecrypt.GameState.Key0 = mem.Read<uint32_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(GameData.UPTRDecrypt.EncBase0 + 0x380i64) + 0x170i64)
            // 			+ 0x2C0i64)
            // 			+ 0x178i64)
            // 			+ 0xF0i64)
            // 			+ 0x98i64);

            // 		Utils::Log(0, XorStr("[UPTR] GameState Key0=0x%llX"), GameData.UPTRDecrypt.GameState.Key0);
            // 	}
            // 	return ~(uint32_t)EncAddress - GameData.UPTRDecrypt.GameState.Key0;
            // 	break;
            // case FUPTRDecryptType::PlayerCameraManager:
            // 	//5
            // 	if (GameData.UPTRDecrypt.PlayerCameraManager.Key0 == 0)
            // 	{
            // 		GameData.UPTRDecrypt.PlayerCameraManager.Key0 = mem.Read<uint32_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(GameData.UPTRDecrypt.EncBase0 + 40i64) + 144i64)
            // 			+ 136i64)
            // 			+ 736i64)
            // 			+ 664i64)
            // 			+ 664i64)
            // 			+ 712i64);

            // 		Utils::Log(0, XorStr("[UPTR] PlayerCameraManager Key0=0x%llX"), GameData.UPTRDecrypt.PlayerCameraManager.Key0);
            // 	}
            // 	//std::cout << Index << std::endl;
            // 	return GameData.UPTRDecrypt.PlayerCameraManager.Key0 ^ EncAddress;
            // 	break;
            // case FUPTRDecryptType::RootComponent:
            // {
            // 	//6
            // 	if (GameData.UPTRDecrypt.RootComponent.Key0 == 0 || GameData.UPTRDecrypt.RootComponent.Key1 == 0)
            // 	{
            // 		GameData.UPTRDecrypt.RootComponent.Key0 = mem.Read<uint32_t>(GameData.UPTRDecrypt.EncBase0 + 0x2C8i64);
            // 		GameData.UPTRDecrypt.RootComponent.Key1 = mem.Read<uint32_t>(GameData.UPTRDecrypt.EncBase0 + 0x268);
            // 		Utils::Log(0, XorStr("[UPTR] RootComponent Key0=0x%llX, Key1=0x%llX"), GameData.UPTRDecrypt.RootComponent.Key0, GameData.UPTRDecrypt.RootComponent.Key1);
            // 	}
            // 	/*
            // 	  result = (unsigned int)(0x62745DF6 * *(_DWORD *)(a2 + 0x268));
            // 		*a1 ^= 0xA0CEF29E - result;
            // 	*/
            // 	EncAddress = EncAddress - GameData.UPTRDecrypt.RootComponent.Key0 - 0x1CE4612D;
            // 	auto Key3 = (unsigned int)(0x62745DF6 * GameData.UPTRDecrypt.RootComponent.Key1);
            // 	EncAddress ^= 0xA0CEF29E - Key3;
            // 	EncAddress = (uint32_t)~EncAddress;
            // 	return EncAddress;
            // 	break;
            // }
            // case FUPTRDecryptType::CharacterEquipComponentCache:
            // 	//7
            // 	if (GameData.UPTRDecrypt.CharacterEquipComponentCache.Key0 == 0 || GameData.UPTRDecrypt.CharacterEquipComponentCache.Key1 == 0)
            // 	{
            // 		GameData.UPTRDecrypt.CharacterEquipComponentCache.Key0 = mem.Read<uint32_t>(GameData.UPTRDecrypt.EncBase0 + 776i64);
            // 		GameData.UPTRDecrypt.CharacterEquipComponentCache.Key1 = mem.Read<uint32_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(mem.Read<uint64_t>(GameData.UPTRDecrypt.EncBase0 + 184) + 40i64) + 664i64)
            // 			+ 432i64)
            // 			+ 136i64)
            // 			+ 408i64);
            // 		Utils::Log(0, XorStr("[UPTR] CharacterEquipComponentCache Key0=0x%llX, Key1=0x%llX"), GameData.UPTRDecrypt.CharacterEquipComponentCache.Key0, GameData.UPTRDecrypt.CharacterEquipComponentCache.Key1);
            // 	}

            // 	EncAddress = GameData.UPTRDecrypt.CharacterEquipComponentCache.Key0 ^ EncAddress;
            // 	EncAddress = EncAddress - GameData.UPTRDecrypt.CharacterEquipComponentCache.Key1;
            // 	return EncAddress;
            // 	break;
            // default:
            // 	break;
            // }
        }
        else
        {
            if (!GameData.UPTRDecrypt.bVEH)
            {
                unsigned int* PTREncAddress = (unsigned int*)&EncAddress;
                ENC::Decrypt(1, PTREncAddress, 4, Index);
            }
            else
            {
                MirrorProcess::VEHDecrypt(GameData.UPTRDecrypt.EncBase1, &EncAddress, 4, Index);
            }
        }
        EncAddress = EncAddress & 0xFFFFFFFFFFFFFFF0ui64;
    }

    return EncAddress;
};