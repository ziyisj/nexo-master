#pragma once

#include <winsock2.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <Common/Data.h>
#include <Common/Offset.h>
#include <Utils/XorString.h>

#include <Hack/Process.h>
#include <Hack/GName.h>
#include <Utils/FLoop.h>
#include <Utils/Throttler.h>
#include <Utils/Utils.h>
#include <Utils/ThreadManager.h>
#include <Utils/HighResolutionTimer.h>
#include <Utils/Controller/NewKmBox.h>
#include <Utils/Controller/MoBox.h>
#include <Utils/Controller/DHZBox.h>
#include <Utils/Controller/KmBoxNet.h>
#include <Utils/Controller/CatBox/CatBox.h>

class AimBot
{
public:
	static bool bRandomAim;
	static DWORD LastRandomTime;
	static int LastRandomAimBone;
	static bool FistAim;
	static bool ReKmBox;
	static float RecoilTimeStartTime;
	static FVector RecoilLocation;
	static float LineTraceSingleRecoilTimeStartTime;
	static FVector LastTargetPos;
	static FVector LineTraceSingleRecoilLocation;
	static float AutoSwitchTargetStartTime;
	static float RemainMouseX;
	static float RemainMouseY;
	static float RecoilYawDifference;
	static int BezierCurrentTime;
	static int BezierLastTickCount;
	static uint64_t WeaponMesh;
	static uint64_t AnimScriptInstance;
	static uint64_t WeaponDataComponentState;
	static uint64_t WeaponFuncComponentFireShakeCache;
	static uint64_t WeaponFuncComponentFiringAnim;
	static DWORD RecoilStartTick;
	static bool IsTriggering;
    static int CurWeaponSpeed;

	static bool IsHit(float probability);

	static float BezierValue(float p0, float p1, float p2, float p3, float t);

	static void AimBotTarget();

	static void AimBotTargetLong();

	static void StopTrigger();

	static void StopAiming();

	static bool GetBoneIsAllFalse(const bool Bones[17]);

	static void Move(int X, int Y);

	static FVector2D AimBotAPI(const FVector2D MoveXY, AimBotConfig Config, bool IsTrigger = false, float Distance = 0);

	static float GetDragForce(float Distance);

	static float GetDrop(const FVector& GunLocation, FVector TargetPos, float TimeToReach);

	static std::pair<float, float> GetBulletDropAndTravelTime(const FVector& GunLocation, const FRotator& GunRotation, const FVector& TargetPos,
		float ZeroingDistance, float BulletDropAdd, float InitialSpeed, float TrajectoryGravityZ, float BallisticDragScale,
		float BallisticDropScale, float BDS, float SimulationSubstepTime, float VDragCoefficient, FRichCurve RichCurve, int KeysNum, std::vector<FRichCurveKey> Keys);

	static void Loop();
};