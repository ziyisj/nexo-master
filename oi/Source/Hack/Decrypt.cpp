#include "Decrypt.h"

static uint32_t ROR32(uint32_t VALUE, int SHIFT)
{
    return (VALUE >> SHIFT) | (VALUE << (32 - SHIFT));
}

static uint32_t ROL32(uint32_t VALUE, int SHIFT)
{
    return (VALUE << SHIFT) | (VALUE >> (32 - SHIFT));
}

static void GenerateKeys(uint64_t SEED, uint32_t* KEY13, uint32_t* KEY14)
{
    uint32_t D0 = (uint32_t)(SEED & 0xFFFFFFFF);
    uint32_t D1 = (uint32_t)((SEED >> 32) & 0xFFFFFFFF);

    uint32_t XMM13 = ROR32(D1, 7);
    uint32_t XMM14 = (D0 << 3) | (D0 >> 29);
    uint32_t XMM12 = D0 ^ XMM13;
    XMM12 = (XMM12 + XMM14) & 0xFFFFFFFF;

    XMM14 = (XMM12 << 13) | (XMM12 >> 19);          // ROL 13
    uint32_t XMM11 = (XMM12 >> 11) | (XMM12 << 21); // ROR 11

    XMM13 = XMM11;
    XMM14 = XMM14;

    *KEY13 = XMM13;
    *KEY14 = XMM14;
}

uint64_t Decrypt::Indicator(uint64_t ENCRYPTED, uint64_t SEED)
{
    //ENCRYPTED = ENCRYPTED & 0x0000FFFFFFFFFFFF;

    //Utils::Log(4, "%p %p", GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")) , ENCRYPTED);

    uint32_t KEY13, KEY14;
    GenerateKeys(SEED, &KEY13, &KEY14);

    uint32_t LOW = (uint32_t)(ENCRYPTED & 0xFFFFFFFF);
    uint64_t HIGH = ENCRYPTED & 0xFFFFFFFF00000000ULL;

    uint32_t RESULT = LOW ^ KEY13;
    RESULT = ROL32(RESULT, 5);
    RESULT = (RESULT - KEY14) & 0xFFFFFFFF;

    return (HIGH | (uint64_t)RESULT) & 0x0000FFFFFFFFFFFF;
    //return (HIGH | (uint64_t)RESULT);
}

bool Decrypt::Verify(uint64_t PlayerArray, uint64_t CacheKey)
{
    uint64_t DeAddr = Indicator(PlayerArray, CacheKey);
    //Utils::Log(4, "%llX %llX %p", PlayerArray, DeAddr, CacheKey);

    auto PlayerState = mem.Read<uint64_t>(DeAddr);
    auto Name = GName::GetNameByAddr(PlayerState);
    //std::cout << Name << std::endl << std::endl;

    if (Name.find(XorStr("PlayerState")) != std::string::npos) {
        return true;
    }
    return false;
}

uint64_t Decrypt::ReadFileKey()
{
    std::string Text;
    std::ifstream file(XorStr("Config/Keys"), std::ios::binary);
    std::stringstream buffer;
    buffer << file.rdbuf();
    Text = buffer.str();
    if (Text != "")
    {
        const unsigned char Key[] = {0x18, 0x23, 0x45, 0x67};
        for (size_t i = 0; i < Text.length(); i++)
        {
            Text[i] ^= Key[i % sizeof(Key)];
        }

        auto Data = nlohmann::json::parse(Text);

        std::vector<uint64_t> Keys;

        const auto& KeysArray = Data[(XorStr("Keys"))];
        for (const auto& Key : KeysArray)
        {
            Keys.push_back(Key.get<uint64_t>());
        }

        for (size_t i = Keys.size(); i-- > 0;)
        {
            //auto PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
            TArray<uint64_t> PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
            if (Verify((uint64_t)PlayerArray.GetData(), Keys[i]))
            {
                return Keys[i];
            }
        }
    }

    return 0;
}

bool Decrypt::SaveFileKey(uint64_t newKey)
{
    // 首先读取现有的keys
    std::vector<uint64_t> existingKeys;
    try
    {
        std::ifstream file(XorStr("Config/Keys"), std::ios::binary);
        if (file.is_open())
        {
            std::string Text((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
            file.close();

            // 解密
            const unsigned char Key[] = {0x18, 0x23, 0x45, 0x67};
            for (size_t i = 0; i < Text.length(); i++)
            {
                Text[i] ^= Key[i % sizeof(Key)];
            }

            // 解析JSON
            auto json = nlohmann::json::parse(Text);
            const auto& keysArray = json[(XorStr("Keys"))];
            for (const auto& key : keysArray)
            {
                existingKeys.push_back(key.get<uint64_t>());
            }
        }
    }
    catch (...)
    {
        // 如果文件不存在或解析失败，就从空开始
        existingKeys.clear();
    }

    // 检查是否已存在相同的key，如果存在则删除旧的
    auto it = std::find(existingKeys.begin(), existingKeys.end(), newKey);
    if (it != existingKeys.end())
    {
        existingKeys.erase(it);
    }

    // 添加新key
    existingKeys.push_back(newKey);

    // 如果超过3个，删除最旧的
    if (existingKeys.size() > 3)
    {
        existingKeys.erase(existingKeys.begin());
    }

    // 创建新的JSON并保存
    nlohmann::json json;
    for (size_t i = 0; i < existingKeys.size(); i++)
    {
        json[(XorStr("Keys"))][i] = existingKeys[i];
    }

    // 加密并保存
    auto Text = json.dump();
    const unsigned char Key[] = {0x18, 0x23, 0x45, 0x67};
    for (size_t i = 0; i < Text.length(); i++)
    {
        Text[i] ^= Key[i % sizeof(Key)];
    }

    std::ofstream file(XorStr("Config/Keys"), std::ios::binary);
    if (!file.is_open())
    {
        return false;
    }

    file.write(Text.c_str(), Text.length());
    file.close();

    return true;
}

void Decrypt::Init()
{
    auto PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
    if (Utils::ValidPtr((uint64_t)PlayerArray.GetData()) && PlayerArray.Size() >= 1 && PlayerArray.Size() < 1000) GameData.Global.bEncrypt = true;
    if (!Utils::ValidPtr((uint64_t)PlayerArray.GetData()) && PlayerArray.Size() >= 1 && PlayerArray.Size() < 1000) GameData.Global.bEncrypt = false;
    //return;
    //Verify((uint64_t)PlayerArray.GetData(), 0x8D1E114BC5B73EA4);
    //Utils::Log(4, "PlayerArray: 0x%p + 0x%llx %d", GameData.Global.GameState, Offset::GetEncryptedOffset(XorStr("PlayerArray")), 0x8D1E114BC5B73EA4 > 0x1000000000000000);
    ///*
    //[01:10:41.069]  ▲ DEBUG    CacheKey: 8D1E114BC5B73EA4
    //[01:10:41.072]  ▲ DEBUG    8D1E114BC5B73EA4 80030050E1705068 00000050196E4600
    //Default__DFMBlackboardComponent
    //*/
    ////return;

    /*
    找解密特征
    0F B7 C1 4C 8B E1 66 ?? ?? ?? 4C 8B EF 4C 8B F7 4C 8B FF 48 8B D1 49 ?? ?? ?? 66 44 03 F0 49 ?? ?? ?? 0F B7 C1 48 ?? ?? ?? 66 ?? ?? ?? 66 44 03 F8 66 45 33 F7 66 44 33 F1 48 8B DF 48 ?? ?? ?? 66 41 2B D6 0F B7 C2 66 ?? ?? ?? 66 03 D8 0F B7 C2 66 ?? ?? ?? 66 41 03 C5 66 33 D8 41 0F B7 C4 66 33 DA 66 2B C3 0F B7 CA 48 ?? ?? ?? 0F B7 C0 48 03 C1 48 ?? ?? ?? ?? ?? ?? ?? ?? ?? 4C 23 E1 49 03 C4
    */

    if (GameData.Global.bEncrypt && GameData.Config.Window.AutoCollectDecrypt)
    {
        //GameData.Decrypt.Key = 0xAC96640FA2B2F429;
        ////if (Verify((uint64_t)PlayerArray.GetData(), GameData.Decrypt.Key))
        ////{
        ////    Utils::Log(4, "%p", GameData.Decrypt.Key);
        ////}
        //return;
        //8D1E114BC5B73EA4
        /*if (Verify((uint64_t)PlayerArray.GetData(), 0x8D1E114BC5B73EA4))
        {
            GameData.Decrypt.Key = 0x8D1E114BC5B73EA4;
        }
        return;*/
        //GameData.Decrypt.Key = GameData.Decrypt.Key > 0 ? GameData.Decrypt.Key : ReadFileKey();

        static int LastPID = 0;
        static uint64_t KeyAddr = 0;

        if (GameData.Decrypt.Key == 0)
        {
            auto Key = ReadFileKey();
            if (Key != 0)
            {
                LastPID = GameData.Process.PID;
                GameData.Decrypt.Key = Key;
                Utils::Log(1, XorStr("The key for pointer encryption has been successfully found: 0x%llX (Cache)"), GameData.Decrypt.Key);
            }
            //return;
        }

        //uint64_t addr = 0x800400001D92CFD6ULL;
        //uint64_t key = 0xFFFFF8FEC10BCF4CULL;
        //uint64_t result = assembly_function(addr, key);
        //printf("ComputeHash: %p\n", result); //正确的是 DD9D1C60

        //const char* Pattern = XorStr("04 00 00 00 00 00 00 00 ? ? 00 00 00 00 00 80 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ? ? ? ? ? F8 FF FF");
        const char* Pattern = XorStr("53 48 83 EC ? C5 78 11 74 24 20 48 8B 1D ? ? ? ? 48 85 DB 74 ?");
        static uint64_t StartAddr = 0x400000;
        static uint64_t Size = 40960;
        static uint64_t AddSize = 40000;
        static uint64_t Start = StartAddr;
        static bool bCache = false;
        //static auto Size = mem.GetBaseSize(XorStr("DeltaForceClient-Win64-Shipping.exe"));

        if (Start > 0x6000000000)
            Start = StartAddr;

        if (GameData.Process.PID > 0 && (GameData.Process.PID != LastPID || GameData.Decrypt.Key == 0))
        {
            GameData.Decrypt.Loading = true;
            Timer Timered(XorStr("UpdateHapply"));

            while (Start < 0x6000000000)
            {
                GameData.Decrypt.Start = Start;
                auto Addresses1 = mem.FindSignatureAll(
                    Pattern, 
                    Start,
                    Start + Size,
                    GameData.Process.PID
                );

                for (const auto& KeyAddr : Addresses1)
                {
                    if (!Utils::ValidPtr2(KeyAddr))
                    {
                        auto CacheKey = mem.Read<uint32_t>(KeyAddr + 0xE);
                        if (CacheKey != 0)
                        {
                            uint64_t Key = mem.Read<uint64_t>(mem.Read<uint64_t>(KeyAddr + 0xE + 7 - 3 + CacheKey)); // 有 CR3 保护
                            //Key = 0xF2493785B880282B;
                            //Utils::Log(4, "CacheKey: %p %p %p", KeyAddr, mem.Read<uint64_t>(KeyAddr + 0xE + 7 - 3 + CacheKey), Key);

                            if (Abs(Key) > 0x1000000000000000)
                            {
                                for (size_t i = 0; i < 3; i++)
                                {
                                    PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
                                    if (Verify((uint64_t)PlayerArray.GetData(), Key))
                                    {
                                        LastPID = GameData.Process.PID;
                                        GameData.Decrypt.Key = Key;
                                        SaveFileKey(GameData.Decrypt.Key);
                                        Utils::Log(1, XorStr("The key for pointer encryption has been successfully found: 0x%llX (0x%llX)"), GameData.Decrypt.Key, GameData.Global.UWorld);
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }

                if (GameData.Decrypt.Key != 0)
                {
                    break;
                }

                GameData.Decrypt.Key = 0;
                Start += AddSize;


                //if (!Utils::ValidPtr2(KeyAddr))
                //{
                //    auto CacheKey = mem.Read<uint32_t>(KeyAddr + 0xE);
                //    if (CacheKey != 0)
                //    {
                //        auto Key = mem.Read<uint64_t>(mem.Read<uint64_t>(KeyAddr + 0xE + 7 - 3 + CacheKey)); // 有 CR3 保护
                //        Utils::Log(4, "CacheKey: %p %p %p %p", KeyAddr, CacheKey, Key, mem.Read<uint64_t>(KeyAddr + 0xE + 7 - 3 + CacheKey));
                //    }
                //    //auto Key = mem.Read<uint64_t>(mem.Read<uint64_t>(KeyAddr + 0xE + 7 - 3 + CacheKey)); // 有 CR3 保护
                //    // F2493785B880282B
                //    //Utils::Log(4, "CacheKey: %p %p", Addr, Key);
                //    //Utils::Log(4, "CacheKey: %p %p", KeyAddr, CacheKey);
                //    //exit(1);
                //   /* if (CacheKey > 0x1000000000000000)
                //    {
                //        PlayerArray = mem.Read<TArray<uint64_t>>(GameData.Global.GameState + Offset::GetEncryptedOffset(XorStr("PlayerArray")));
                //        if (Verify((uint64_t)PlayerArray.GetData(), CacheKey))
                //        {
                //            LastPID = GameData.Process.PID;
                //            GameData.Decrypt.Key = CacheKey;
                //            SaveFileKey(GameData.Decrypt.Key);
                //            Utils::Log(1, XorStr("The key for pointer encryption has been successfully found: 0x%llX (0x%llX)"), GameData.Decrypt.Key, GameData.Global.UWorld);
                //            break;
                //        }
                //    }*/

                //    GameData.Decrypt.Key = 0;
                //    Start += AddSize;
                //}
                //else
                //{
                //    Start += AddSize;
                //}
            }
            GameData.Decrypt.Loading = false;
        }
    }
}