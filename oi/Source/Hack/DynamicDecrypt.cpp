#include "DynamicDecrypt.h"

uint64_t DynamicDecrypt::Indicator(const FDynamicDecryptType& Type, const uint64_t& Address, const uint64_t& KeyIndex)
{
	if (Address == 0) return 0;

	static int LastPID = 0;

	int DecryptFuncIndex = GameData.DynamicDecrypt.FuncIndex + KeyIndex;
	if (DecryptFuncIndex >= 0xC9) DecryptFuncIndex = 200;
	/*bool bMask = _bittest(&GameData.DynamicDecrypt.KeyMask, KeyIndex);*/
	std::atomic<long>& atomicMask = reinterpret_cast<std::atomic<long>&>(GameData.DynamicDecrypt.KeyMask);
	bool bMask = (atomicMask.load(std::memory_order_acquire) & (1 << KeyIndex)) != 0;

	static XorDecoder Decoder_GameState;
	static bool bDecoder_GameState = false;

	static XorDecoder Decoder_OwningGameInstance;
	static bool bDecoder_OwningGameInstance = false;

	static XorDecoder Decoder_PlayerCameraManager;
	static bool bDecoder_PlayerCameraManager = false;

	static XorDecoder Decoder_RootComponent;
	static bool bDecoder_RootComponent = false;

	uint64_t Result = Address;

	if (KeyIndex < 0x20 && bMask)
	{
		if (Type == FDynamicDecryptType::GameState)
		{
			//40.5 2943A40 找call函数进去 E8 ? ? ? ? 48 8B F0 48 85 C0 0F 84 ? ? ? ? 8B 68 ? 45 33 F6 3B 2D
			if (LastPID != GameData.Process.PID || !bDecoder_GameState)
			{
				uint64_t FuncAddress = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("DynamicDecryptFuns_GameState")) + (DecryptFuncIndex * 8));
				if (!Utils::ValidPtr(FuncAddress))
				{
					Decoder_GameState.UpdateFunction(FuncAddress);
					Utils::Log(1, XorStr("[%llX] Dynamic Decrypt Function Success"), 0x01);
				}
			}

			Result = Decoder_GameState.Process(Address, GameData.DynamicDecrypt.Key);
			//Utils::Log(4, XorStr("GameState Decrypt: %p"), Result);

			if (Utils::ValidPtr(Result))
			{
				bDecoder_GameState = false;
			}
			else
			{
				bDecoder_GameState = true;
			}
		}

		if (Type == FDynamicDecryptType::OwningGameInstance)
		{
			//40.5 A52920
			//E8 ? ? ? ? 48 8B F0 B9 ? ? ? ? E8 ? ? ? ? 48 89 44 24 ? 48 8B 9C 24 call進去
			if (LastPID != GameData.Process.PID || !bDecoder_OwningGameInstance)
			{
				uint64_t FuncAddress = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("DynamicDecryptFuns_OwningGameInstance")) + (DecryptFuncIndex * 8));
				if (!Utils::ValidPtr(FuncAddress))
				{
					Decoder_OwningGameInstance.UpdateFunction(FuncAddress);
					Utils::Log(1, XorStr("[%llX] Dynamic Decrypt Function Success"), 0x02);
				}
			}

			Result = Decoder_OwningGameInstance.Process(Address, GameData.DynamicDecrypt.Key);
			//Utils::Log(4, XorStr("OwningGameInstance Decrypt: %p"), Result);

			if (Utils::ValidPtr(Result))
			{
				bDecoder_OwningGameInstance = false;
			}
			else
			{
				bDecoder_OwningGameInstance = true;
			}
		}

		if (Type == FDynamicDecryptType::PlayerCameraManager)
		{
			//40.6 B9F88C0 6D096E0 BA10970
			//FF 54 C5 ? 48 8B D8 48 33 DF EB ? 48 8B DF 48 83 BB
			if (LastPID != GameData.Process.PID || !bDecoder_PlayerCameraManager)
			{
				uint64_t FuncAddress = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("DynamicDecryptFuns_PlayerCameraManager")) + (DecryptFuncIndex * 8));
				if (!Utils::ValidPtr(FuncAddress))
				{
					Decoder_PlayerCameraManager.UpdateFunction(FuncAddress);
					Utils::Log(1, XorStr("[%llX] Dynamic Decrypt Function Success"), 0x03);
				}
			}

			Result = Decoder_PlayerCameraManager.Process(Address, GameData.DynamicDecrypt.Key);
			//Utils::Log(4, XorStr("OwningGameInstance Decrypt: %p"), Result);

			if (Utils::ValidPtr(Result))
			{
				bDecoder_PlayerCameraManager = false;
			}
			else
			{
				bDecoder_PlayerCameraManager = true;
			}
		}

		if (Type == FDynamicDecryptType::RootComponent)
		{
			//40.6 B31CC10
			//48 8B B9 ? ? ? ? 48 8B D9 48 85 FF 0F 84 ? ? ? ? 8B 89 ? ? ? ? 4C 8D 35
			if (LastPID != GameData.Process.PID || !bDecoder_RootComponent)
			{
				uint64_t FuncAddress = mem.Read<uint64_t>(GameData.Process.Base + Offset::GetEncryptedOffset(XorStr("DynamicDecryptFuns_RootComponent")) + (DecryptFuncIndex * 8));
				if (!Utils::ValidPtr(FuncAddress))
				{
					Decoder_RootComponent.UpdateFunction(FuncAddress);
					Utils::Log(1, XorStr("[%llX] Dynamic Decrypt Function Success"), 0x04);
				}
			}

			Result = Decoder_RootComponent.Process(Address, GameData.DynamicDecrypt.Key);
			//Utils::Log(4, XorStr("OwningGameInstance Decrypt: %p"), Result);

			if (Utils::ValidPtr(Result))
			{
				bDecoder_RootComponent = false;
			}
			else
			{
				bDecoder_RootComponent = true;
			}
		}
	}

	LastPID = GameData.Process.PID;

	return Result;
};