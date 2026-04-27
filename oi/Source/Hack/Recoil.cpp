#include "Recoil.h"
#include "AimBot.h"

// 将字符串分割为float数组的辅助函数
void SplitRecoilString(const std::string& recoilStr, std::vector<float>& outValues)
{
    outValues.clear();
    std::stringstream ss(recoilStr);
    std::string item;

    while (std::getline(ss, item, ','))
    {
        // 移除可能存在的空格
        item.erase(std::remove_if(item.begin(), item.end(), isspace), item.end());
        if (!item.empty())
        {
            outValues.push_back(std::stof(item));
        }
    }
}

// 修改后的后坐力计算函数，现在有两个缩放比例
FRecoilResult CalculateRecoil(
    const std::string& horizontalRecoilStr,    // 水平后坐力字符串
    const std::string& verticalRecoilStr,      // 垂直后坐力字符串
    int remainingBullets,                      // 剩余子弹数量
    float horizontalScale = 1.0f,              // 水平后坐力缩放比例
    float verticalScale = 1.0f                 // 垂直后坐力缩放比例
)
{
    FRecoilResult result;

    // 解析后坐力字符串
    std::vector<float> horizontalValues;
    std::vector<float> verticalValues;
    SplitRecoilString(horizontalRecoilStr, horizontalValues);
    SplitRecoilString(verticalRecoilStr, verticalValues);

    // 检查数组是否为空
    if (horizontalValues.empty() || verticalValues.empty())
    {
        return result;
    }

    // 计算在后坐力数组中的索引（循环模式）
    size_t patternLength = horizontalValues.size();
    size_t recoilIndex = (remainingBullets - 1) % patternLength;

    // 分别应用水平和垂直后坐力的缩放
    result.Horizontal = horizontalValues[recoilIndex] * horizontalScale;
    result.Vertical = verticalValues[recoilIndex] * verticalScale;

    return result;
}

void Recoil::Loop()
{
    float HorizontalRecoilRecoilsScale = 0;
    std::vector<float> CacheHorizontalRecoilRecoils{};
    float LoopHorizontalRecoilRecoilsScale = 0;
    std::vector<float> LoopCacheHorizontalRecoilRecoils{};

    float VerticalRecoilRecoilsScale = 0;
    std::vector<float> CacheVerticalRecoilRecoils{};
    float LoopVerticalRecoilRecoilsScale = 0;
    std::vector<float> LoopCacheVerticalRecoilRecoils{};

    float RecoilRemainMouseX = 0;
    float RecoilRemainMouseY = 0;

    uint64_t LastWeapon{};
    uint64_t LastWeaponDataComponentFiring{};
    int LastContinueFireCount{};
    auto LastTick = GetTickCount64();

    while (true)
    {
        if (GameData.Process.GameState != FGameState::InGame)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
            continue;
        }

        EWeaponItemType WeaponType = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType;
        bool IsAr = (UINT8)WeaponType == (UINT8)EWeaponItemType::Rifle || (UINT8)WeaponType == (UINT8)EWeaponItemType::Submachine || (UINT8)WeaponType == (UINT8)EWeaponItemType::LightMachine || GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID == 18050000005;
        if ((!IsAr && !GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID == 18070000005) || !GameData.Config.Recoil.Enable || GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.FiringMode != 0.f)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(3));
            continue;
        }

       // Utils::Log(1, "FiringMode: %p %f", GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.CachedAttributeSetFireMode, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.FiringMode);

        if (GameData.Keyboard.IsKeyDown(VK_LBUTTON) && !GameData.Global.Data.bShowMouseCursor && !GameData.AimBot.Lock)
        {
            //Utils::Log(4, "%d", GetTickCount64() - LastTick);
            //if (GetTickCount64() - LastTick < 10) continue;

            //if (GameData.Keyboard.WasKeyPressed(VK_LBUTTON)) continue;
            //LastWeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponDataComponentFiring")));
            auto ContinueFireCount = mem.Read<uint8_t>(LastWeaponDataComponentFiring + Offset::GetEncryptedOffset(XorStr("ContinueFireCount")));

            auto RecIndex = ContinueFireCount - 1;
            if (GameData.Config.Recoil.ContinueOne && RecIndex == 0)
            {
                continue;
            }

            //if (GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID == 18050000005)
            //{
            //    RecIndex = ContinueFireCount - 1;
            //}
            //else {
            //    if (ContinueFireCount == 0 || ContinueFireCount == 1)  continue;
            //}

            if (ContinueFireCount == LastContinueFireCount || ContinueFireCount == 0 || GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponAmmoCount == 0.f) continue;

            float HorizontalRecoil = 0.f;
            float VerticalRecoil = 0.f;

            if (RecIndex < CacheHorizontalRecoilRecoils.size())
            {
                HorizontalRecoil = CacheHorizontalRecoilRecoils[RecIndex] * HorizontalRecoilRecoilsScale;
                VerticalRecoil = CacheVerticalRecoilRecoils[RecIndex] * VerticalRecoilRecoilsScale;
            }
            else
            {
                if (LoopCacheHorizontalRecoilRecoils.size() > 0 && LoopCacheHorizontalRecoilRecoils.size() < 100)
                {
                    auto LoopIndex = RecIndex % LoopCacheHorizontalRecoilRecoils.size();
                    if (LoopIndex < LoopCacheHorizontalRecoilRecoils.size()) {
                        HorizontalRecoil = LoopCacheHorizontalRecoilRecoils[LoopIndex] * LoopHorizontalRecoilRecoilsScale * 0.9f;
                        VerticalRecoil = LoopCacheVerticalRecoilRecoils[LoopIndex] * LoopVerticalRecoilRecoilsScale * 0.9f;
                    }
                }
            }
            
            auto FOVRatio = GameData.Global.Data.Camera.FOV / 89.999992f;
            auto SensitivityXRatio = 1.f;
            auto SensitivityYRatio = 1.f;
            const FVector2D MoveXY = {
                (-HorizontalRecoil / (GameData.Config.Recoil.X * FOVRatio * SensitivityYRatio)) * GameData.Config.Recoil.Speed / 100.f,
                (VerticalRecoil / (GameData.Config.Recoil.X * FOVRatio * SensitivityXRatio)) * GameData.Config.Recoil.Speed / 100.f
            };

            const float MouseX = RecoilRemainMouseX + MoveXY.X;
            const float MouseY = RecoilRemainMouseY + MoveXY.Y;
            RecoilRemainMouseX = MouseX - truncf(MouseX);
            RecoilRemainMouseY = MouseY - truncf(MouseY);

            if (abs(MouseX) > 0 || abs(MouseY) > 0) {
                AimBot::Move(MouseX, MouseY);
            }

            //Utils::Log(4, "ContinueFireCount %d %d %f %f %f %f", ContinueFireCount, RecIndex, HorizontalRecoil, VerticalRecoil, MoveXY.X, MoveXY.Y);

            LastContinueFireCount = ContinueFireCount;
            //Sleep(1);
        }
        else {
            LastTick = GetTickCount64();
            RecoilRemainMouseX = {};
            RecoilRemainMouseY = {};
            LastContinueFireCount = {};

            std::this_thread::sleep_for(std::chrono::milliseconds(3));

            if (LastWeapon == GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address) continue;

            LastWeapon = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address;

            LastWeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponDataComponentFiring")));
            //std::cout << GName::GetNameByAddr(LastWeaponDataComponentFiring) << std::endl;
            auto FireRecoilMethod = mem.Read<uint64_t>(LastWeaponDataComponentFiring + Offset::GetEncryptedOffset(XorStr("FireRecoilMethod")));

            //DeltaForceClient-Win64-Shipping.exe+3AAB2D3
            //3AB48C0
            HorizontalRecoilRecoilsScale = mem.Read<float>(
                FireRecoilMethod 
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming")) 
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoil")) 
                + Offset::GetEncryptedOffset(XorStr("HorizontalRecoil")) 
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairScale"))
            );
            auto HorizontalRecoilRecoils = mem.Read<TArray<float>>(
                FireRecoilMethod 
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoil"))
                + Offset::GetEncryptedOffset(XorStr("HorizontalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairRecoils"))
            );
            LoopHorizontalRecoilRecoilsScale = mem.Read<float>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoilLoop"))
                + Offset::GetEncryptedOffset(XorStr("HorizontalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairScale"))
            );
            auto LoopHorizontalRecoilRecoils = mem.Read<TArray<float>>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoilLoop"))
                + Offset::GetEncryptedOffset(XorStr("HorizontalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairRecoils"))
            );

            VerticalRecoilRecoilsScale = mem.Read<float>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoil"))
                + Offset::GetEncryptedOffset(XorStr("VerticalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairScale"))
            );
            auto VerticalRecoilRecoils = mem.Read<TArray<float>>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoil"))
                + Offset::GetEncryptedOffset(XorStr("VerticalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairRecoils"))
            );
            LoopVerticalRecoilRecoilsScale = mem.Read<float>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoilLoop"))
                + Offset::GetEncryptedOffset(XorStr("VerticalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairScale"))
            );
            auto LoopVerticalRecoilRecoils = mem.Read<TArray<float>>(
                FireRecoilMethod
                + Offset::GetEncryptedOffset(XorStr("RecoilModifierConfigForAiming"))
                + Offset::GetEncryptedOffset(XorStr("ContinueShotRecoilLoop"))
                + Offset::GetEncryptedOffset(XorStr("VerticalRecoil"))
                + Offset::GetEncryptedOffset(XorStr("WeaponRecoilPairRecoils"))
            );

            if (HorizontalRecoilRecoils.Size() < 0 || HorizontalRecoilRecoils.Size() > 100) continue;
            CacheHorizontalRecoilRecoils.clear();
            for (auto& Item : HorizontalRecoilRecoils.GetVector())
            {
                CacheHorizontalRecoilRecoils.push_back(Item);
            }

            if (LoopHorizontalRecoilRecoils.Size() < 0 || LoopHorizontalRecoilRecoils.Size() > 100) continue;
            LoopCacheHorizontalRecoilRecoils.clear();
            for (auto& Item : LoopHorizontalRecoilRecoils.GetVector())
            {
                LoopCacheHorizontalRecoilRecoils.push_back(Item);
            }

            if (VerticalRecoilRecoils.Size() < 0 || VerticalRecoilRecoils.Size() > 100) continue;
            CacheVerticalRecoilRecoils.clear();
            for (auto& Item : VerticalRecoilRecoils.GetVector())
            {
                CacheVerticalRecoilRecoils.push_back(Item);
            }

            if (LoopVerticalRecoilRecoils.Size() < 0 || LoopVerticalRecoilRecoils.Size() > 100) continue;
            LoopCacheVerticalRecoilRecoils.clear();
            for (auto& Item : LoopVerticalRecoilRecoils.GetVector())
            {
                LoopCacheVerticalRecoilRecoils.push_back(Item);
            }

            //Utils::Log(4, XorStr("[%p] 0 %f %d, %f %d"),
            //    GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address,
            //    HorizontalRecoilRecoilsScale,
            //    CacheHorizontalRecoilRecoils.size(),
            //    VerticalRecoilRecoilsScale,
            //    CacheVerticalRecoilRecoils.size()
            //);
            //Utils::Log(4, XorStr("[%p] 1 %f %d, %f %d"),
            //    GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address,
            //    LoopHorizontalRecoilRecoilsScale,
            //    LoopCacheHorizontalRecoilRecoils.size(),
            //    LoopVerticalRecoilRecoilsScale,
            //    LoopCacheVerticalRecoilRecoils.size()
            //);
        }
    }
}

//void Recoil::Loop()
//{
//    struct FRecoilsStringBuffer
//    {
//        char Buffer[1024];
//    };
//
//    uint64_t LastWeapon{};
//    uint64_t LastWeaponFuncComponentFiringAnim{};
//    FVector2D LastRecoil{};
//    int LastBulletIndex{};
//    float RecoilRemainMouseX = 0;
//    float RecoilRemainMouseY = 0;
//
//    while (true)
//    {
//        if (GameData.Process.GameState != FGameState::InGame)
//        {
//            std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
//            continue;
//        }
//
//        if (GameData.Keyboard.IsKeyDown(VK_LBUTTON))
//        {
//            auto FireRecoil = mem.Read<FRotator>(LastWeaponFuncComponentFiringAnim + Offset::GetEncryptedOffset(XorStr("FireRecoil")));
//            auto WeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + 0x1318);
//            auto BulletIndex = mem.Read<int>(WeaponDataComponentFiring + 0x5f8);
//            if (FireRecoil.Yaw == LastRecoil.X && FireRecoil.Pitch == LastRecoil.Y) continue;
//            //if (BulletIndex == LastBulletIndex) continue;
//
//            auto FOVRatio = GameData.Global.Data.Camera.FOV / 89.999992f;
//            auto SensitivityXRatio = 1.f;
//            auto SensitivityYRatio = 1.f;
//            const FVector2D FMoveXY = {
//                -FireRecoil.Yaw / (GameData.Config.Recoil.X * FOVRatio * SensitivityYRatio),
//                FireRecoil.Pitch / (GameData.Config.Recoil.Y * FOVRatio * SensitivityXRatio)
//            };
//            FVector MoveXY = { (float)FMoveXY.X, (float)FMoveXY.Y, 0.0f };
//            //MoveXY.Normalize();
//
//            const float MouseX = RecoilRemainMouseX + MoveXY.X;
//            const float MouseY = RecoilRemainMouseY + MoveXY.Y;
//            RecoilRemainMouseX = MouseX - truncf(MouseX);
//            RecoilRemainMouseY = MouseY - truncf(MouseY);
//
//            if (abs(MouseX) > 0 || abs(MouseY) > 0) {
//                AimBot::Move(MouseX, MouseY);
//                //Sleep(4);
//            }
//
//            LastRecoil = { FireRecoil.Yaw, FireRecoil.Pitch };
//            LastBulletIndex = BulletIndex;
//
//            Utils::Log(4, "%d %f %f %f %f", BulletIndex, FireRecoil.Yaw, FireRecoil.Pitch, MouseX, MouseY);
//        }
//        else {
//            LastRecoil = {};
//            RecoilRemainMouseX = 0;
//            RecoilRemainMouseY = 0;
//            LastBulletIndex = 0;
//
//            if (LastWeapon != GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address) {
//                auto AllBlueprintCreatedComponents = mem.Read<TArray<FAllBlueprintCreatedComponent>>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("AllBlueprintCreatedComponents")));
//                if (!Utils::ValidPtr((uint64_t)AllBlueprintCreatedComponents.GetData()) && AllBlueprintCreatedComponents.Size() > 0 && AllBlueprintCreatedComponents.Size() < 300)
//                {
//                    for (auto& Item : AllBlueprintCreatedComponents.GetVector())
//                    {
//                        auto Name = GName::GetNameByAddr(Item.Component);
//                        if (Name == XorStr("WeaponFuncComponentFiringAnim"))
//                        {
//                            LastWeaponFuncComponentFiringAnim = Item.Component;
//                            break;
//                        }
//                    }
//                }
//            }
//
//            LastWeapon = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address;
//
//            std::this_thread::sleep_for(std::chrono::milliseconds(3));
//        }
//    }
//}