#include "AimBot.h"

bool AimBot::bRandomAim = false;
DWORD AimBot::LastRandomTime = GetTickCount();
int AimBot::LastRandomAimBone = -1;
bool AimBot::FistAim = true;
bool AimBot::ReKmBox = false;
float AimBot::RecoilTimeStartTime = 0;
FVector AimBot::RecoilLocation{};
float AimBot::LineTraceSingleRecoilTimeStartTime = 0;
FVector AimBot::LastTargetPos{};
FVector AimBot::LineTraceSingleRecoilLocation{};
float AimBot::AutoSwitchTargetStartTime = 0;
float AimBot::RemainMouseX = 0.0f;
float AimBot::RemainMouseY = 0.0f;
float AimBot::RecoilYawDifference = 0.f;
int AimBot::BezierCurrentTime = 0;
int AimBot::BezierLastTickCount = 0;
uint64_t AimBot::WeaponMesh{};
uint64_t AimBot::AnimScriptInstance{};
uint64_t AimBot::WeaponDataComponentState{};
uint64_t AimBot::WeaponFuncComponentFireShakeCache{};
uint64_t AimBot::WeaponFuncComponentFiringAnim{};
DWORD AimBot::RecoilStartTick = GetTickCount();
bool AimBot::IsTriggering = false;
int AimBot::CurWeaponSpeed = 0;

bool AimBot::IsHit(float probability) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<> dis(0.0, 100.0);
	float randomValue = dis(gen);
	return randomValue <= probability;
}

float AimBot::BezierValue(float p0, float p1, float p2, float p3, float t) {
	float u = 1.0f - t;
	float w1 = u * u * u;
	float w2 = 3 * u * u * t;
	float w3 = 3 * u * t * t;
	float w4 = t * t * t;
	return w1 * p0 + w2 * p1 + w3 * p2 + w4 * p3;
}

void AimBot::AimBotTarget()
{
	if (!GameData.Config.AimBot.Connected)
	{
		return;
	}

	if (GameData.Config.AimBot.Controller == 0)
	{
		NewKmBox::LeftClick();
		return;
	}

	if (GameData.Config.AimBot.Controller == 1)
	{
		KmBoxNet::LeftClick();
		return;
	}

	if (GameData.Config.AimBot.Controller == 4)
	{
		CatBox::LeftClick();
		return;
	}

	
	if (GameData.Config.AimBot.Controller == 5)
    {
        Utils::LeftMouseClick();
        return;
    }

	std::thread LeftClickThread([] {
		switch (GameData.Config.AimBot.Controller) {
		case 2:
			MoBox::LeftClick();
			break;
		case 3:
			DHZBox::LeftClick();
			break;
		}
	});
	LeftClickThread.detach();
}

void AimBot::AimBotTargetLong()
{
	if (IsTriggering) return;

	IsTriggering = true;

	if (GameData.Config.AimBot.Controller == 0)
	{
		NewKmBox::LeftDown();
		return;
	}

	if (GameData.Config.AimBot.Controller == 1)
	{
		KmBoxNet::LeftDown();
		return;
	}

	if (GameData.Config.AimBot.Controller == 4)
	{
		CatBox::LeftDown();
		return;
	}

	if (GameData.Config.AimBot.Controller == 5)
    {
        Utils::LeftMouseDown();
        return;
    }

	std::thread LeftClickThread([] {
		switch (GameData.Config.AimBot.Controller) {
		case 2:
			MoBox::LeftDown();
			break;
		case 3:
			DHZBox::LeftDown();
			break;
		}
		});
	LeftClickThread.detach();
}

void AimBot::StopTrigger()
{
	if (!IsTriggering) return;

	IsTriggering = false;

	if (!GameData.Config.AimBot.Connected)
	{
		return;
	}

	if (GameData.Config.AimBot.Controller == 0)
	{
		NewKmBox::LeftUp();
		return;
	}

	if (GameData.Config.AimBot.Controller == 1)
	{
		KmBoxNet::LeftUp();
		return;
	}

	if (GameData.Config.AimBot.Controller == 4)
	{
		CatBox::LeftUp();
		return;
	}

	if (GameData.Config.AimBot.Controller == 5)
    {
        Utils::LeftMouseUp();
        return;
    }

	std::thread LeftClickThread([] {
		switch (GameData.Config.AimBot.Controller) {
		case 2:
			MoBox::LeftUp();
			break;
		case 3:
			DHZBox::LeftUp();
			break;
		}
		});
	LeftClickThread.detach();
}

void AimBot::StopAiming()
{
    CurWeaponSpeed = 0;
	bRandomAim = false;
	LastRandomAimBone = -1;
	FistAim = true;
	GameData.AimBot.Lock = false;
	GameData.AimBot.Bone = -1;
	GameData.AimBot.FirstBone = -1;
	AutoSwitchTargetStartTime = 0;
	RecoilTimeStartTime = 0;
	RecoilLocation = { 0.f, 0.f, 0.f };
	LastTargetPos = { 0.f, 0.f, 0.f };
	LineTraceSingleRecoilTimeStartTime = 0;
	LineTraceSingleRecoilLocation = { 0.f, 0.f, 0.f };
	RemainMouseX = 0.0f;
	RemainMouseY = 0.0f;
	BezierCurrentTime = 0;
	BezierLastTickCount = 0;
	WeaponMesh = 0;
	AnimScriptInstance = 0;
	WeaponDataComponentState = 0;
	WeaponFuncComponentFireShakeCache = 0;
	WeaponFuncComponentFiringAnim = 0;
	RecoilYawDifference = 0;
	RecoilStartTick = 0;
	//Data::SetEnemyInfoMap({});

	if (IsTriggering)
	{
		StopTrigger();
	}
}

bool AimBot::GetBoneIsAllFalse(const bool Bones[17])
{
	for (size_t i = 0; i < 17; i++)
	{
		if (Bones[i]) {
			return true;
		}
	}
	return false;
}

void AimBot::Move(int X, int Y)
{
	if (!GameData.Config.AimBot.Connected)
	{
		return;
	}

	if (GameData.Config.AimBot.Controller == 0)
	{
		NewKmBox::Move(X, Y);
		return;
	}

	if (GameData.Config.AimBot.Controller == 1)
	{
		KmBoxNet::Move(X, Y);
		return;
	}

	if (GameData.Config.AimBot.Controller == 4)
	{
		CatBox::Move(X, Y);
		return;
	}

	if (GameData.Config.AimBot.Controller == 5)
    {
        Utils::MoveMouseRelative(X, Y);
        return;
    }

	ThreadManager threadManager;

	threadManager.addThread([X, Y, Controller = GameData.Config.AimBot.Controller]() {
		switch (Controller) {
		case 2:
			MoBox::Move(X, Y);
			break;
		case 3:
			DHZBox::Move(X, Y);
			break;
		}
	});
	return;
}

FVector2D AimBot::AimBotAPI(const FVector2D MoveXY, AimBotConfig Config, bool IsTrigger, float Distance)
{
	if (Config.bCloseRangeSpeed && (int)Distance <= Config.CloseRangeDistance)
	{
		Config.XSpeed = Config.CloseRangeSpeed;
		Config.YSpeed = Config.CloseRangeSpeed;
	}

	if (Config.Trigger.Enable && IsTrigger && Config.Trigger.Smooth > 0)
	{
		Config.XSpeed = Config.Trigger.Smooth;
		Config.YSpeed = Config.Trigger.Smooth;
	}

	if (GameData.AimBot.Type == EntityType::Throw)
	{
		Config.XSpeed = Config.Throw.Speed;
		Config.YSpeed = Config.Throw.Speed;
	}

	FVector FMouseXY = { (float)MoveXY.X, (float)MoveXY.Y, 0.0f };
	FMouseXY.Normalize();

	if (MoveXY.X == 0 && MoveXY.Y == 0) {
		RemainMouseX = RemainMouseY = 0.0f;
        return {};
	}

	if (std::isinf(RemainMouseX)) RemainMouseX = 0;
	if (std::isinf(RemainMouseY)) RemainMouseY = 0;

	float InitialValue = 100.f;
	float CurveMultiplierX = 1.0f;
	float CurveMultiplierY = 1.0f;

    bool IsTriggerKey = Config.Trigger.Enable ? (GameData.Keyboard.IsKeyDown(Config.Trigger.Key) || GameData.Keyboard.IsKeyDown(Config.Trigger.Key1)) : false;

	if (Config.Curve && !IsTriggerKey)
	{
		DWORD CurrentTickCount = GetTickCount();
		if (BezierLastTickCount == 0) {
			BezierLastTickCount = CurrentTickCount;
		}

		DWORD DeltaTime = CurrentTickCount - BezierLastTickCount;
		BezierLastTickCount = CurrentTickCount;

		BezierCurrentTime += DeltaTime;

		// 修复1：使用 >= 而不是 == 进行重置判断
		if (BezierCurrentTime >= Config.NewCurveTime && Config.PowerfulCurve)
		{
			BezierCurrentTime = BezierCurrentTime % Config.NewCurveTime; // 使用取模保持连续性
		}
		else if (BezierCurrentTime >= Config.NewCurveTime) {
			BezierCurrentTime = Config.NewCurveTime;
		}

		float Time = (float)BezierCurrentTime / (float)Config.NewCurveTime;

		// 确保 Time 在 [0,1] 范围内，不使用min/max
		if (Time > 1.0f) Time = 1.0f;
		if (Time < 0.0f) Time = 0.0f;

		CurveMultiplierX = BezierValue(0.0f, Config.Curves[0], Config.Curves[2], 1.0f, Time);
		CurveMultiplierY = BezierValue(0.0f, Config.Curves[1], Config.Curves[3], 1.0f, Time);

		// 修复3：使用条件判断代替min/max
		if (CurveMultiplierX <= 0.0f) CurveMultiplierX = 0.01f; // 避免突然跳到1.0
		if (CurveMultiplierY <= 0.0f) CurveMultiplierY = 0.01f;
	}

	float X = (InitialValue * (Config.XSpeed / 100.0f)) * FMouseXY.X * CurveMultiplierX;
	float Y = (InitialValue * (Config.YSpeed / 100.0f)) * FMouseXY.Y * CurveMultiplierY;

	float MouseX = RemainMouseX + std::clamp(X, -(float)abs(MoveXY.X), (float)abs(MoveXY.X));
	float MouseY = RemainMouseY + std::clamp(Y, -(float)abs(MoveXY.Y), (float)abs(MoveXY.Y));

	RemainMouseX = MouseX - truncf(MouseX);
	RemainMouseY = MouseY - truncf(MouseY);

	if (abs(MouseX) > 0 || abs(MouseY) > 0) {
		Move(MouseX, MouseY);
	}

	return FVector2D(MouseX, MouseY);
}

float AimBot::GetDragForce(float Distance) {
	float DistanceDecay = 0.0f;

	if (Distance > 100 && Distance <= 150) {
		DistanceDecay = 0.43f;
	}
	if (Distance > 150 && Distance <= 200) {
		DistanceDecay = 0.44f;
	}
	if (Distance > 200 && Distance <= 250) {
		DistanceDecay = 0.45f;
	}
	if (Distance > 250 && Distance <= 300) {
		DistanceDecay = 0.6f;
	}
	if (Distance > 300 && Distance <= 350) {
		DistanceDecay = 0.8f;
	}
	if (Distance > 350 && Distance <= 400) {
		DistanceDecay = 0.95f;
	}
	if (Distance > 400 && Distance <= 450) {
		DistanceDecay = 1.1f;
	}
	if (Distance > 450 && Distance <= 500) {
		DistanceDecay = 1.3f;
	}
	if (Distance > 500 && Distance <= 550) {
		DistanceDecay = 1.35f;
	}
	if (Distance > 550 && Distance <= 600) {
		DistanceDecay = 1.45f;
	}
	if (Distance > 600 && Distance <= 650) {
		DistanceDecay = 1.5f;
	}
	if (Distance > 650 && Distance <= 700) {
		DistanceDecay = 1.61f;
	}
	if (Distance > 700 && Distance <= 800) {
		DistanceDecay = 1.635f;
	}
	if (Distance > 800 && Distance <= 900) {
		DistanceDecay = 1.88f;
	}
	if (Distance > 900 && Distance <= 1000) {
		DistanceDecay = 2.1f;
	}
	if (Distance > 1000 && Distance <= 1050) {
		DistanceDecay = 2.2f;
	}

	return DistanceDecay;
}

float AimBot::GetDrop(const FVector& GunLocation, FVector TargetPos, float TimeToReach)
{
	const float DistanceToTarget = GunLocation.Distance(TargetPos) / 100.0f;
	float Gravity = abs(-9.8f);
	float Drop = 0.5f * Gravity * TimeToReach * TimeToReach * 100.0f;
	float Force = GetDragForce(DistanceToTarget);
	Drop = Drop * Force;
	if (DistanceToTarget <= 100)
	{
		Drop = 0;
	}

	return Drop;
}

std::pair<float, float> AimBot::GetBulletDropAndTravelTime(const FVector& GunLocation, const FRotator& GunRotation, const FVector& TargetPos,
	float ZeroingDistance, float BulletDropAdd, float InitialSpeed, float TrajectoryGravityZ, float BallisticDragScale,
	float BallisticDropScale, float BDS, float SimulationSubstepTime, float VDragCoefficient, FRichCurve RichCurve, int KeysNum, std::vector<FRichCurveKey> Keys)
{
	const float ZDistanceToTarget = TargetPos.Z - GunLocation.Z;
	const float DistanceToTarget = GunLocation.Distance(TargetPos) / 100.0f;
	float TravelTime = DistanceToTarget / InitialSpeed;
	float BulletDrop = 0.5f * TrajectoryGravityZ * TravelTime * TravelTime * 100.0f;

	float TravelTimeZero = ZeroingDistance / InitialSpeed;
	float BulletDropZero = 0.5f * TrajectoryGravityZ * TravelTimeZero * TravelTimeZero * 100.0f;

	if (KeysNum > 0)
	{
	}

	BulletDrop = fabsf(BulletDrop) - fabsf(BulletDropAdd);
	if (BulletDrop < 0.0f)
		BulletDrop = 0.0f;
	BulletDropZero = fabsf(BulletDropZero) + fabsf(BulletDropAdd);

	const float TargetPitch = asinf((ZDistanceToTarget + BulletDrop) / 100.0f / DistanceToTarget);
	const float ZeroPitch = IsNearlyZero(ZeroingDistance) ? 0.0f : atan2f(BulletDropZero / 100.0f, ZeroingDistance);
	const float FinalPitch = TargetPitch - ZeroPitch;
	const float AdditiveZ = DistanceToTarget * sinf(FinalPitch) * 100.0f - ZDistanceToTarget;

	return std::pair(AdditiveZ, TravelTime);
}

void AimBot::Loop()
{
	//HighResolutionTimer timer;
	Throttler Throttlered;
	AimBotConfig Config;
	while (true)
	{
		if (GameData.Config.ESP.Debug) GameData.Global.Data.ThreadCount.AimBot++;

		if (GameData.Process.GameState != FGameState::InGame || !GameData.Config.AimBot.Enable)
		{
			std::this_thread::sleep_for(std::chrono::milliseconds(GameData.ThreadSleep));
			continue;
		}

		if (GameData.Global.Data.bShowMouseCursor || Utils::ValidPtr(GameData.Global.AcknowledgedPawn) || GameData.Global.Data.LocalPlayerInfo.Health <= 0)
		{
			StopAiming();
			Sleep(1);
			continue;
		}

		EWeaponItemType WeaponType = GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponType;

		if ((UINT8)WeaponType <= 0 || (UINT8)WeaponType > (UINT8)EWeaponItemType::Pistol || GameData.Config.AimBot.ConfigIndex < 0 || GameData.Config.AimBot.ConfigIndex > 3)
		{
			StopAiming();
			Sleep(1);
			continue;
		}

		Config = GameData.Config.AimBot.Configs.at(GameData.Config.AimBot.ConfigIndex).Weapon.at(WeaponType);

		FVector TargetPos{};
		float TargetDistance{};
		FVector TargetVelocity{};
		FVector PredictedPos{};
		PlayerInfo Player{};
		EGPWeaponStateType Rep_CurStateType{};
		float LogicADSPercent{};

		bool IsThrowKey = GameData.Keyboard.IsKeyDown(Config.Throw.Key);
		bool IsFirstKey = GameData.Keyboard.IsKeyDown(Config.First.Key);
		bool IsSecondKey = GameData.Keyboard.IsKeyDown(Config.Second.Key);
		bool IsGroggyKey = GameData.Keyboard.IsKeyDown(Config.Groggy.Key);
		bool IsLeftMouseKey = GameData.Keyboard.IsKeyDown(VK_LBUTTON);
		bool IsTriggerKey = Config.Trigger.Enable ? (GameData.Keyboard.IsKeyDown(Config.Trigger.Key) || GameData.Keyboard.IsKeyDown(Config.Trigger.Key1)) : false;
		IsFirstKey = IsFirstKey || (Config.Trigger.Independent && IsTriggerKey);
		bool CanAim = IsFirstKey || IsSecondKey || IsGroggyKey || IsThrowKey;

		if (CanAim)
		{
			if (Config.HotkeyMerge && !IsFirstKey && IsSecondKey)
			{
				StopAiming();
				continue;
			}
			else if (Config.HotkeyMerge && IsFirstKey && !IsSecondKey && !GetBoneIsAllFalse(Config.First.Bones))
			{
				StopAiming();
				continue;
			}
			else if (!Config.HotkeyMerge && IsFirstKey && !IsSecondKey && !GetBoneIsAllFalse(Config.First.Bones))
			{
				StopAiming();
				continue;
			}
			else if (!Config.HotkeyMerge && !IsFirstKey && IsSecondKey && !GetBoneIsAllFalse(Config.Second.Bones))
			{
				StopAiming();
				continue;
			}

			if (GameData.AimBot.Type == EntityType::Player)
			{
				if (Config.HotkeyMerge && !IsFirstKey && IsSecondKey)
				{
					StopAiming();
					continue;
				}

				//if (CanAim) GameData.AimBot.Lock = true;
				Player = GameData.AimBot.TargetPlayerInfo;
				int AimBone = GameData.AimBot.Bone;

				if ((IsFirstKey || (!Config.HotkeyMerge && IsSecondKey)) && Config.Trigger.Independent && IsTriggerKey)
				{
					for (int i = 0; i < 17; i++)
					{
						if (Config.Trigger.Bones[i])
						{
							const auto BoneToIndex = BoneIndex.at(i);
							AimBone = BoneToIndex;
							break;
						}
					}
				}

				bool bOtherAimBone = false;
				bool bUseRandom = false;

				if (AimBone == -1)
				{
					StopAiming();
					continue;
				}

				const auto RandomAimBoneFunc = [&IsLeftMouseKey, &Player, &AimBone, &Config, &bUseRandom]() {
					if (Config.FireOnlyRandomBone && !IsLeftMouseKey) return;
					if (GetTickCount() - LastRandomTime > Config.RandomDelay)
					{
						std::vector<int> VisCheckBones;

						for (size_t i = 0; i < 10; i++)
						{
							if (Player.VisCheckBones[BoneIndex[i]] || (Player.IsVisible))
							{
								VisCheckBones.push_back(i);
							}
						}

						if (VisCheckBones.size() > 0)
						{
							std::random_device rd;
							std::mt19937 gen(rd());
							std::uniform_int_distribution<int> dist(0, VisCheckBones.size() - 1);
							int randomIndex = dist(gen);

							AimBone = BoneIndex[randomIndex];
							LastRandomTime = GetTickCount();
							LastRandomAimBone = AimBone;
							bRandomAim = true;
							bUseRandom = true;
						}
					}
					};

				if ((IsFirstKey && IsSecondKey) || (!Config.HotkeyMerge && IsSecondKey))
				{
					int SecondBone = -1;
					for (size_t i = 0; i < 17; i++)
					{
						if (Config.Second.Bones[i]) {
							if (Player.VisCheckBones[BoneIndex[i]])
							{
								SecondBone = BoneIndex[i];
								break;
							}
						}
					}

					if (SecondBone != -1) {
						AimBone = SecondBone;

						bOtherAimBone = true;
					}

					if (Config.Second.Bones[17])
					{
						RandomAimBoneFunc();
					}
				}

				if (Player.Health <= 0 && IsGroggyKey)
				{
					int GroggyBone = -1;
					for (size_t i = 0; i < 17; i++)
					{
						if (Config.Groggy.Bones[i]) {
							if (Player.VisCheckBones[BoneIndex[i]])
							{
								GroggyBone = BoneIndex[i];
								break;
							}
						}
					}

					if (GroggyBone != -1) {
						AimBone = GroggyBone;
						bOtherAimBone = true;
					}

					if (Config.Groggy.Bones[17])
					{
						RandomAimBoneFunc();
					}
				}

				if (LastRandomAimBone != -1)
				{
					if (!bOtherAimBone) {
						AimBone = LastRandomAimBone;
					}

					if (bUseRandom) {
						AimBone = LastRandomAimBone;
					}
				}

				if ((IsFirstKey && !IsTriggerKey) && !bOtherAimBone && !bUseRandom && Config.First.Bones[17])
				{
					RandomAimBoneFunc();
				}

				if (IsTriggerKey && !bOtherAimBone && !bUseRandom && Config.Trigger.Bones[17])
				{
					RandomAimBoneFunc();
				}

				if (IsTriggerKey && !Config.Trigger.AutoVisibility)
				{
					Config.RayCast = false;
				}

				if (CanAim && Config.RayCast && GameData.Config.PhysX.Enable && RecoilTimeStartTime == 0 && Player.AliveState != EPlayerAliveState::ImpendingDeath)
				{
					EBoneIndex VisibilityBoneIndex = EBoneIndex::Unk;
					bool AimBoneVisCheck = Player.VisCheckBones[AimBone];
					TargetPos = Player.LocationBones[AimBone];

					if (!AimBoneVisCheck)
					{
						for (const auto& Item : Player.LocationBones)
						{
							if (Item.first == EBoneIndex::Root)
							{
								continue;
							}

							if (Player.VisCheckBones[Item.first]) {
								VisibilityBoneIndex = (EBoneIndex)Item.first;

								AimBone = VisibilityBoneIndex;
								TargetPos = Player.LocationBones[AimBone];
								Config.VisibleCheck = false;
								AimBoneVisCheck = true;
								break;
							}
						}

						if (VisibilityBoneIndex == EBoneIndex::Unk)
						{
							Config.VisibleCheck = true;
						}
					}

					if (!AimBoneVisCheck && Config.LineTraceSingleRecoilLocation)
					{
						LineTraceSingleRecoilTimeStartTime = 0;
						LineTraceSingleRecoilLocation = LastTargetPos;
					}
				}
				else {
					TargetPos = Player.LocationBones[AimBone];
					Player.IsVisible = Player.VisCheckBones[AimBone];
				}

				//if (Player.Health <= 0) {

				//	bool ShouldSwitchTarget = Config.AutoSwitch &&
				//		((Config.IgnoreGroggy) || (!Config.IgnoreGroggy && Player.ImpendingDeathHealth <= 0));

				//	if (ShouldSwitchTarget && !IsGroggyKey) {
				//		//Sleep(Config.SwitchingDelay);
				//		StopAiming();
				//		continue;
				//	}
				//}

				if (LineTraceSingleRecoilLocation != FVector(0.f, 0.f, 0.f))
				{
					TargetPos = LineTraceSingleRecoilLocation;

					if (LineTraceSingleRecoilTimeStartTime == 0)
					{
						LineTraceSingleRecoilTimeStartTime = GetTickCount64();
					}
					else if ((GetTickCount64() - LineTraceSingleRecoilTimeStartTime >= Config.RecoilTime * 100) || Config.RecoilTime <= 0) {
						StopAiming();
						continue;
					}

					if (Player.IsVisible)
					{
						LineTraceSingleRecoilLocation = FVector(0.f, 0.f, 0.f);
						LineTraceSingleRecoilTimeStartTime = 0;
						TargetPos = Player.LocationBones[AimBone];
					}
				}

				if (Config.AutoSwitch && Config.IgnoreGroggy && !IsGroggyKey && Player.Health <= 0 && Player.ImpendingDeathHealth > 0)
				{
					StopAiming();
					continue;
				}

				if (Config.VisibleCheck && !Player.IsVisible && LineTraceSingleRecoilLocation == FVector(0.f, 0.f, 0.f) && RecoilLocation == FVector(0.f, 0.f, 0.f))
				{
					if (Config.AutoSwitch)
					{
						StopAiming();
					}
					else
					{
						if (IsTriggering)
						{
							StopTrigger();
						}
					}
					continue;
				}

				TargetDistance = GameData.Global.Data.Camera.Location.Distance(Player.Location) / 100.0f;

				if (AimBone == 0)
				{
					StopAiming();
					continue;
				}
			}

			if (GameData.AimBot.Type == EntityType::Throw)
			{
				const auto Data = GameData.Global.Data.Entitys.Throws.Get(GameData.AimBot.Target);
				TargetPos = Data.Location;
				TargetVelocity = Data.ComponentVelocity;
				if (Utils::ValidPtr(Data.Address) || !Data.Entity.bAimBot || !Data.bVisible)
				{
					StopAiming();
					continue;
				}
				//Utils::Log(1, "Throw %p %s", GameData.AimBot.Target, Data.Entity.DisplayName);
			}

			if (TargetPos.X == 0 || TargetPos.Y == 0 || TargetPos.Z == 0)
			{
				if (Config.AutoSwitch) {
					//Sleep(Config.SwitchingDelay);
					StopAiming();
				}
				else {
					if (IsTriggering)
					{
						StopTrigger();
					}
				}
				continue;
			}

			if (GameData.AimBot.Type == EntityType::Player) {

				if (Config.VelocityMode == 0)
				{
					auto hScatter = mem.CreateScatterHandle();
					mem.AddScatterRead(hScatter, Player.RootComponent + Offset::GetEncryptedOffset(XorStr("ComponentVelocity")), &TargetVelocity);
					mem.ExecuteReadScatter(hScatter);
					mem.CloseScatterHandle(hScatter);
				}
				else {
					TargetVelocity = Player.Velocity;
				}
				/*Utils::Log(1, "0 %f %f %f", TargetVelocity.X, TargetVelocity.Y, TargetVelocity.Z);
				Utils::Log(4, "2 %f %f %f", Player.Velocity.X, Player.Velocity.Y, Player.Velocity.Z);*/
			}

			if ((Config.NoBulletNotAim && GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponAmmoCount <= 0.f))
			{
				StopAiming();
				continue;
			}

			if (Utils::ValidPtr(WeaponMesh)) {
				auto hScatter = mem.CreateScatterHandle();
				mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponMesh")), &WeaponMesh);
				//mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponFuncComponentFireShakeCache")), &WeaponFuncComponentFireShakeCache);
				//mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponDataComponentState")), &WeaponDataComponentState);
				//mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.Mesh + Offset::GetEncryptedOffset(XorStr("AnimScriptInstance")), &AnimScriptInstance);
				mem.ExecuteReadScatter(hScatter);
				mem.CloseScatterHandle(hScatter);

				auto AllBlueprintCreatedComponents = mem.Read<TArray<FAllBlueprintCreatedComponent>>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("AllBlueprintCreatedComponents")));
				//Utils::Log(4, "BlueprintCreatedComponents %p %d", AllBlueprintCreatedComponents.GetData(), AllBlueprintCreatedComponents.Size());

				if (!Utils::ValidPtr((uint64_t)AllBlueprintCreatedComponents.GetData()) && AllBlueprintCreatedComponents.Size() > 0 && AllBlueprintCreatedComponents.Size() < 300)
				{
					for (auto& Item : AllBlueprintCreatedComponents.GetVector())
					{
						auto Name = GName::GetNameByAddr(Item.Component);
						if (Name == XorStr("WeaponFuncComponentFiringAnim"))
						{
							WeaponFuncComponentFiringAnim = Item.Component;
							//std::cout << Name << std::endl;
							break;
						}
					}
				}
			}

			if (CurWeaponSpeed == 0)
            {
                uint64_t WeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + Offset::GetEncryptedOffset(XorStr("WeaponDataComponentFiring")));
                auto FireRecoilMethod = mem.Read<uint64_t>(WeaponDataComponentFiring + Offset::GetEncryptedOffset(XorStr("FireRecoilMethod")));
                auto FCFiring = mem.Read<uint64_t>(FireRecoilMethod + Offset::GetEncryptedOffset(XorStr("FCFiring"))); // GPWeaponRuntime.GPWeaponFireRecoilBase.FCFiring;
                auto CurrentFireMode = mem.Read<uint64_t>(FCFiring + Offset::GetEncryptedOffset(XorStr("CurrentFireMode")));  // GPWeaponRuntime.GPWeaponFuncComponentFiring.CurrentFireMode
                auto Params = mem.Read<uint64_t>(CurrentFireMode + Offset::GetEncryptedOffset(XorStr("Params")));    // GPWeaponRuntime.GPWeaponFireModeBase.Params
                auto InitSpeed = mem.Read<float>(Params + Offset::GetEncryptedOffset(XorStr("BulletBaseParam")) + Offset::GetEncryptedOffset(XorStr("InitSpeed")));
                CurWeaponSpeed = static_cast<int>(InitSpeed / 100.0f);

				if (CurWeaponSpeed <= 0 || CurWeaponSpeed >= 2000)
				{
                    CurWeaponSpeed = 500;
                    Utils::Log(2, XorStr("CurWeaponSpeed: %d"), CurWeaponSpeed);
				}

				if (GameData.Config.ESP.Debug)
				{
                    Utils::Log(4, XorStr("Cur Weapon Speed: %d"), CurWeaponSpeed);
				}
            }

			/*
			float InitSpeed = 0.0f;
			auto ComponentFiring = *reinterpret_cast<void**>(CacheCurWeapon + 0x1308);
			if (IsPoint(ComponentFiring)) {
			FWeaponFireRepInfo FireInfo = *reinterpret_cast<FWeaponFireRepInfo*>(uintptr_t(ComponentFiring) + 0x468);
			if (FireInfo.InitSpeed > 0.0f) {
			InitSpeed = FireInfo.InitSpeed;
			}
			}
			*/

			if (Utils::ValidPtr(WeaponMesh))
			{
				StopAiming();
				continue;
			}

			if (TargetDistance > Config.AimDistance)
			{
				StopAiming();
				continue;
			}

			if (FistAim)
			{
				ReKmBox = true;
			}

			if (LineTraceSingleRecoilLocation != FVector(0.f, 0.f, 0.f))
			{
				TargetVelocity = FVector(0.f, 0.f, 0.f);
			}

			FTransform GunComponentToWorld{};
			float RecoilPitch{};
			FRotator LookingRotation{};

			auto hScatter = mem.CreateScatterHandle();
			mem.AddScatterRead(hScatter, WeaponMesh + Offset::GetEncryptedOffset(XorStr("ComponentToWorld")), &GunComponentToWorld);
			mem.AddScatterRead(hScatter, GameData.Global.Data.LocalPlayerInfo.AnimScriptInstance + Offset::GetEncryptedOffset(XorStr("LocalProxy")) + Offset::GetEncryptedOffset(XorStr("LogicADSPercent")), &LogicADSPercent);

			mem.ExecuteReadScatter(hScatter);
			mem.CloseScatterHandle(hScatter);

			uint64_t CameraModifierWeaponRecoil{};

			if (Config.ADS && LogicADSPercent != 1.f) {
				if (IsTriggering)
				{
					StopTrigger();
				}
				continue;
			}

			FVector GunLocation = GunComponentToWorld.Translation;
			FRotator GunRotation = GunComponentToWorld.Rotation;
			GunRotation.ToCamera();

			/*uint64_t WeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + 0x448);
			Utils::Log(4, "WeaponDataComponentFiring: 0x%llx", WeaponDataComponentFiring);

			uint64_t FireRecoilMethod = mem.Read<uint64_t>(WeaponDataComponentFiring + 0x520);
			Utils::Log(4, "FireRecoilMethod: 0x%llx", FireRecoilMethod);

			uint64_t ContinueShotRecoil = mem.Read<uint64_t>(FireRecoilMethod + 0x990 + 0x228);
			Utils::Log(4, "UWeaponBlackboard: 0x%llx", FireRecoilMethod);
			std::cout << GName::GetNameByAddr(UWeaponBlackboard) << std::endl;*/

			//for (size_t i = 0x390; i < 0x1230; i++)
			//{
			//	auto Obj = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + i);
			//	auto Name = GName::GetNameByAddr(Obj);
			//	if (Name != "None" && Name != "" && Name != "FAIL")
			//	{
			//		//GPWeaponRuntime.GPWeaponDataComponentFiring.FireInfo + GPWeaponRuntime.WeaponFireRepInfo.InitSpeed = 子弹初始速度
			//		if (Name == "WeaponDataComponentFiring") // 0x448
			//		{
			//			Utils::Log(4, "0x%llx %s", i, Name.c_str());
			//		}
			//		if (Name == "WeaponDataComponentState")
			//		{
			//			Utils::Log(4, "0x%llx %s", i, Name.c_str());
			//		}
			//		if (Name == "WeaponFuncComponentFireShakeCache")
			//		{
			//			Utils::Log(4, "0x%llx %s", i, Name.c_str());
			//		}
			//		//Utils::Log(4, "0x%llx %s", i, Name.c_str());
			//	}
			//}

			

			//INT CurWeaponSpeed = GetWeaponSpeed(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID);

			const float DistanceToTarget = GunLocation.Distance(TargetPos) / 100.0f;
			float TravelTime = DistanceToTarget / CurWeaponSpeed;
			float BulletDrop = 0.f;//GetDrop(GunLocation, TargetPos, TravelTime);

			//uint64_t WeaponDataComponentFiring = mem.Read<uint64_t>(GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.Address + 0x440);
			////必须开枪后才会有数据
			//float InitSpeed3P = mem.Read<float>(WeaponDataComponentFiring + 0x480 + 0x4c);
			//Utils::Log(4, "1 %f", InitSpeed3P);

			//Utils::Log(4, "2 %d %lld", CurWeaponSpeed, GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID);

			{
				float BulletDropAdd = 0.f;
				auto Result = GetBulletDropAndTravelTime(
					GunLocation,
					GameData.Global.Data.Camera.Rotation,
					TargetPos,
					100.f,
					BulletDropAdd,
					CurWeaponSpeed,
					9.8f,
					1.f,
					1.f,
					1.f,
					0.016f,
					0.001f,
					FRichCurve(),
					0,
					{}
				);

				BulletDrop = Result.first;
				//Utils::Log(4, "BulletDrop: %f, TravelTime: %f %f", Result.first, Result.second, TravelTime);
			}
			TargetPos.Z += abs(BulletDrop);
			PredictedPos = TargetPos + TargetVelocity * (TravelTime / 1.f);

			const float CameraFOV = GameData.Global.Data.Camera.FOV;
			const float DefaultFOV = 89.999992f;
			const float MouseXSensitivity = 0.02f;
			const float MouseYSensitivity = 0.02f;
			//const float AimSpeedMaxFactor = 1.0f;

			if (IsNearlyZero(CameraFOV))
			{
				if (IsTriggering)
				{
					StopTrigger();
				}
				continue;
			}

			const float FOVRatio = CameraFOV / DefaultFOV;

			auto GetMouseXY = [&](FRotator RotationInput) {
				return FVector2D{
					/*float(RotationInput.Yaw / MouseXSensitivity * 0.4f * FOVRatio),
					float(-RotationInput.Pitch / MouseYSensitivity * 0.4f * FOVRatio)*/
					/*float(RotationInput.Yaw / (0.03f * FOVRatio * 1.f)),
					float(-RotationInput.Pitch / (0.03f * FOVRatio * 1.f))*/
                    float(RotationInput.Yaw) * (GameData.Config.Overlay.ScreenWidth / GameData.Global.Data.Camera.FOV), 
					float(-RotationInput.Pitch) * (GameData.Config.Overlay.ScreenWidth / GameData.Global.Data.Camera.FOV)
				};
			};

			const FRotator TargetRotation = (PredictedPos - GameData.Global.Data.Camera.Location).GetDirectionRotator();
			const FRotator CurrentCameraRotation = GameData.Global.Data.Camera.Rotation;
			FRotator FinalAimRotation = CurrentCameraRotation;

			if (!Config.Sway)
			{
				FinalAimRotation = mem.Read<FRotator>(GameData.Global.PlayerController + Offset::GetEncryptedOffset(XorStr("ControlRotation")));
			}

			if (Config.Recoil)
			{
				auto FireRecoil = mem.Read<FRotator>(WeaponFuncComponentFiringAnim + Offset::GetEncryptedOffset(XorStr("FireRecoil")));
				//std::cout << GName::GetNameByAddr(WeaponFuncComponentFiringAnim) << std::endl;
				//Utils::Log(4, "WeaponFuncComponentFiringAnim: %p + 0x%llx", WeaponFuncComponentFiringAnim, Offset::GetEncryptedOffset(XorStr("FireRecoil")));
				//Utils::Log(4, "FireRecoil: %f %f %f", FireRecoil.Pitch, FireRecoil.Yaw, FireRecoil.Roll);
				FinalAimRotation = FinalAimRotation + FireRecoil;
			}

			FRotator RotationDelta = TargetRotation - FinalAimRotation;
			RotationDelta.Clamp();

			FVector2D MoveXY = GetMouseXY(RotationDelta * (Config.AimSpeedMaxFactor / 100.f));

			if (CanAim)
			{
				if (Config.RandomValue < 100.f && !IsHit(Config.RandomValue))
				{
					if (IsTriggering)
					{
						StopTrigger();
					}
					continue;
				}

				auto Moved = AimBotAPI(MoveXY, Config, IsTriggerKey, DistanceToTarget);
				//LastTargetPos = TargetPos;

				if (IsTriggerKey && TargetDistance <= Config.Trigger.MaxDistance && LineTraceSingleRecoilLocation == FVector{ 0.f, 0.f, 0.f })
				{
					if (Config.Trigger.Sleep > 0) Sleep(Config.Trigger.Sleep);

					//float Distance = sqrt(MoveXY.X * MoveXY.X + MoveXY.Y * MoveXY.Y);
                    float Distance = sqrt(Moved.X * Moved.X + Moved.Y * Moved.Y);

                    float TriggerRange = Config.Trigger.TriggerRange;

					//float MaxTriggerRange = Config.Trigger.TriggerRange;
                    //float MinTriggerRange = 0.1f;
					//if (Config.Trigger.bMaxMin)
					//{
					//	TriggerRange = MaxTriggerRange / (TargetDistance / Config.Trigger.MaxMinDistance);
					//	if (TriggerRange > MaxTriggerRange) TriggerRange = MaxTriggerRange;
					//	if (TriggerRange < MinTriggerRange) TriggerRange = MinTriggerRange;
					//}

					if (Distance <= TriggerRange)
					{
						if (WeaponNeedLong[GameData.Global.Data.LocalPlayerInfo.CacheCurWeapon.WeaponID])
						{
							AimBotTargetLong();
						}
						else
						{
							AimBotTarget();
						}
					}
					else
					{
						if (Config.Trigger.Long && IsTriggering)
						{
							StopTrigger();
						}
					}
				}

				GameData.AimBot.Lock = true;
			}
		}
		else {
			StopAiming();

			if (ReKmBox)
			{
				ReKmBox = false;

				if (GameData.Config.AimBot.Controller == 0)
				{
					NewKmBox::Clear();
				}

				if (GameData.Config.AimBot.Controller == 1)
				{
					KmBoxNet::Clear();
					//Utils::Log(0, XorStr("Automatically Ping KMNET IP"));
				}
			}
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(GameData.Config.AimBot.FPSLimit[GameData.Config.AimBot.Controller]));
	}
}