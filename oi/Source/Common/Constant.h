#pragma once

#include <windows.h>
#include <iostream>
#include <Utils/ue4math/rotator.h>
#include <Utils/ue4math/transform.h>
#include <Utils/XorString.h>
#include <Common/Bone.h>
#include <Common/Translate/ItemDataTable.h>
#include <Utils/Engine.h>
#include <Common/SDK.h>
#include <unordered_map>
#include <atomic>
#include <deque>

struct FStringBuffer
{
	char Buffer[64];
};

enum class FGameState
{
	Finding,    // Looking for game process
	InLobby,    // In game lobby
	InGame      // In active match
};

struct FWorldOriginLocation
{
	INT32 X{};
	INT32 Y{};
	INT32 Z{};
};

struct CameraData
{
	FVector Location;
	FRotator Rotation;
	float FOV;
};

struct FRadarMap
{
	FVector2D WorldCenter{};
	FVector2D MapSize{};
	FVector2D WorldExtent{};
	FVector OriginalWorldCenter{};
};

inline std::unordered_map<std::string, FRadarMap> RadarMaps = {
	//DeltaForce/Content/BluePrints/Map/MapInfoConfig 世界原点可以在这里直接找到
	{
		XorStr("Dam_Iris"),
		{
			{358155.687500f, -750191.750000f},
			{3840.f, 2400.f},
			{81086.304688f, 80988.500000f},
			{357385.f, -769888.f, -16797.f}
		}
	},
	{
		/*
			[00:44:20.260]  ▲ DEBUG    WorldCenter: 330551.750000f, -639913.875000f
			[00:44:20.260]  ▲ DEBUG    MapSize: 3840.000000f, 2160.000000f
			[00:44:20.261]  ▲ DEBUG    WorldExtent: 112800.000000f, 112800.000000f
			[00:44:20.261]  ▲ DEBUG    OriginalWorldCenter: 400062.000000f, -641652.000000f, -21556.000000f
		*/
		XorStr("Forrest"),
		{
			{330551.750000f, -639913.875000f},
			{3840.f, 2160.f},
			{112800.f, 112800.f},
			{400062.000000f, -641652.f, -21556.f}
		}
	},
	{
		XorStr("Brakkesh"),
		{
			{380000.000000f, -456000.000000f},
			{3840.000000f, 2160.000000f},
			{60000.000000f, 60000.000000f},
			{378673.000000f, -448841.000000f, -21556.000000f}
		}
	},
	{
		XorStr("SpaceCenter"),
		{
			{669337.000000f, -446449.750000f},
			{3840.000000f, 2160.000000f},
			{65442.871094f, 65442.871094f},
			{668720.000000f, -452754.000000f, -19000.000000f}
		}
	},
	{
		XorStr("Tide"),
		{
			{50383.464844f, -51155.902344f},
			{3840.000000f, 2160.000000f},
			{36596.421875f, 36596.421875f},
			{53272.000000f, -51971.000000f, -7533.000000f}
		}
	}
};

struct MapData
{
	ESlateVisibility Visibility{};
	bool bVisibility{};
	float CurrentScale{};
	FVector2D CurrentMapUVPos{};
	FVector2D LeftTop{};
	FVector2D RightBottom{};
	FVector2D MapSize{};
	FVector2D WorldCenter{};
	FVector2D WorldExtent{};
};

inline std::unordered_map<uint64_t, bool> WeaponNeedLong = {
	{18020000004, true},
	{18040000003, true},
	{18040000002, true},
	{18040000001, true},
	{18040000004, true},
};

inline std::unordered_map<uint64_t, INT> WeaponSpeed = {
	//{18150000001, 200},
	//{18010000042, 575},
	//{18010000038, 575},
	//{18010000037, 330},
	//{18010000031, 575},
	//{18010000024, 630},
	//{18010000023, 630},
	//{18010000021, 630},
	//{18010000018, 575},
	//{18010000017, 575},
	////{18010000016, 630},
	//{18010000015, 575},
	//{18010000014, 575},
	//{18010000013, 575},
	//{18010000012, 340},
	//{18010000010, 500},
	//{18010000008, 575},
	//{18010000006, 525},
	//{18010000001, 575},
	//{18020000010, 450},
	//{18020000009, 500},
	//{18020000008, 330},
	//{18020000006, 500},
	//{18020000005, 500},
	//{18020000004, 450},
	//{18020000003, 500},
	//{18020000002, 450},
	//{18020000001, 450},
	//{18020000011, 450},
	//{18030000004, 400},
	//{18030000002, 300},
	//{18030000001, 450},
	//{18040000003, 630},
	//{18040000002, 575},
	//{18040000001, 630},
	//{18040000004, 575},
	//{18050000031, 750},
	//{18050000007, 550},
	//{18050000008, 750},
	//{18050000006, 575},
	//{18050000005, 575},
	//{18050000004, 500},
	//{18050000003, 330},
	//{18050000002, 650},
	//{18060000011, 750},
	////{18060000009, 650},
	//{18070000033, 400},
	//{18070000010, 400},
	//{18070000006, 400},
	//{18070000005, 400},
	//{18070000004, 340},
	//{18070000003, 340},
	//{18070000002, 400},
	//{18030000005, 575},
	//{18080000009, 1},

	////以下是调整过正确的
	//{18060000008, 650},
	//{18060000007, 720},
	//{18010000043, 625},
	//{18050000032, 750},
 //   {18060000009, 921}, // M700
 //   {18010000016, 1016}, // M7
 //   {18010000006, 572},
 //   {18010000043, 525}, 
	//{18010000042, 575}, 
	//{18010000040, 575}, 
	//{18010000038, 575},
	//{18010000037, 330}, 
	//{18010000031, 575}, 
	//{18010000024, 630}, 
	//{18010000023, 630}, 
	//{18010000021, 630},
	//{18010000018, 575}, 
	//{18010000017, 575},
};

inline INT GetWeaponSpeed(uint64_t weaponId) {
	// 由于WeaponSpeed是inline静态常量map，本身是线程安全的
	// 使用find来查找，避免[]操作符可能的未定义行为
	auto it = WeaponSpeed.find(weaponId);
	if (it != WeaponSpeed.end()) {
		return it->second;
	}
	return 0; // 如果找不到武器ID，返回默认值0
};

enum class EntityType
{
	Unknown = 0,// 未知
	Player, // 玩家
	AI, //  AI
	BOSS, //  BOSS
	Container, //  容器
	Item, //  物品
	DeadBody, // 尸体盒子
	CodedLock, // 密码锁
	Throw, // 投掷物/技能
	Door, // 门
	ExitTrigger, // 拉闸点
	PlayerExit, // 撤离点
	KeyRoom, // 钥匙房
};

struct EntityInfo {
	std::string DisplayName = "Unknown";
	EntityType Type = EntityType::Unknown;
	//ItemType ItemType = ItemType::Other;
	UINT32 ID{};
	std::string Name{};
	bool IsWide = false;
	bool bAimBot = false;
	bool bHide = false;
};

struct PlayerConfig
{
	bool Enable = true;
	bool ShowHeroAvatar = true;
	bool TeamNumber = true;
	bool Skeleton = true;
	bool Distance = true;
	bool bFighting = false;
	bool Name = true;
	bool HeroName = true;
	bool Health = true;
	bool Weapon = true;
	bool HelmetArmor = true;
	bool AimingRay = true;

	int HelmetArmorRender = 0;
	int WeaponRender = 0;
    int WeaponRenderPos = 0;
	int TeamNumberRender = 0;
	int DistanceRender = 1;
	int HealthRender = 2;
    int HealthRounded = 1;
	int MaxDistance = 1000;
	int InfoMaxDistance = 50;
	bool ShowHead = true;
	bool FloatHead = true;
	bool HideBody = false;
	float SkeletonWidth = 1;
	float HealthWidth = 22;
	int FontSize = 12;
	float AimingRayWidth = 1.5f;

	bool BottomInfoColor = false;
	bool KillCount = true;
	bool EquipmentPrice = false;

	float AimingRayColor[4] = { 225.0f / 255.0f, 0.0f / 255.0f, 0.0f / 255.0f, 255.0f / 255.0f };
	float WeaponInfoColor[4] = { 225.0f / 255.0f, 225.0f / 255.0f, 225.0f / 255.0f, 255.0f / 255.0f };

	float DefaultInfoColor[4] = { 245.f / 255.0f, 245.f / 255.0f, 245.f / 255.0f, 255.0f / 255.0f };
	float DefaultSkeletonColor[4] = { 245.f / 255.0f, 245.f / 255.0f, 245.f / 255.0f, 255.0f / 255.0f };
	float VisibleInfoColor[4] = { 160.0f / 255.0f, 223.0f / 255.0f, 158.0f / 255.0f, 255.0f / 255.0f };
	float VisibleSkeletonColor[4] = { 160.0f / 255.0f, 223.0f / 255.0f, 158.0f / 255.0f, 255.0f / 255.0f };
	float ImpendingDeathInfoColor[4] = { 219.0f / 255.0f, 23.0f / 255.0f, 23.0f / 255.0f, 255.0f / 255.0f };
	float ImpendingDeathSkeletonColor[4] = { 219.0f / 255.0f, 23.0f / 255.0f, 23.0f / 255.0f, 255.0f / 255.0f };

	float ArmorLv1Color[4] = { 197.f / 255.f, 197.f / 255.f, 195.f / 255.f, 255.f / 255.f };
	float ArmorLv2Color[4] = { 42.f / 255.f, 202.f / 255.f, 150.f / 255.f, 255.f / 255.f };
	float ArmorLv3Color[4] = { 89.f / 255.f, 160.f / 255.f, 221.f / 255.f, 255.f / 255.f };
	float ArmorLv4Color[4] = { 157.f / 255.f, 115.f / 255.f, 223.f / 255.f, 255.f / 255.f };
	float ArmorLv5Color[4] = { 209.f / 255.f, 130.f / 255.f, 78.f / 255.f, 255.f / 255.f };
	float ArmorLv6Color[4] = { 218.f / 255.f, 87.f / 255.f, 88.f / 255.f, 255.f / 255.f };
};

struct ActorInfo
{
	uint64_t Address{};
	UINT32 ObjID{};
	uint64_t Inherit{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	UINT32 InheritObjID{};
	EntityInfo Entity{};
    FVector Location;
	bool bNet{};
};

enum class EPlayerAliveState: UINT8
{
	Alive = 0,
	ImpendingDeath = 1,
	Dead = 2,
};

struct PlayerWeaponInfo
{
	uint64_t Address{};
	uint64_t WeaponID{};
	uint64_t WeaponMesh{};
	uint64_t CachedAttributeSetFireMode{};
	float FiringMode{};
	FTransform ComponentToWorld{};
	EWeaponItemType WeaponType{};
	INT32 WeaponInstanceID{};
	uint64_t CachedAttributeSetWeaponAmmo{};
	float WeaponAmmoCount{};
	std::string WeaponName{};
	TArray<uint64_t> AssetFallBackPartNodesArray{};
	std::vector<uint64_t> AssetFallBackPartNodesItemID{};
};

struct DebugActorInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	FVector Location{};
    FEncHandler EncHandler{};
};

struct ItemInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	FVector Location{};
    FEncHandler EncHandler{};
	FItemID CacheItemID{};
	uint64_t ItemID{};
	std::string Name{};
	ItemDataTableInfo Info{};
	uint64_t ItemsRow{};
};

struct CodedLockInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	FVector Location{};
    FEncHandler EncHandler{};
	INT32 PwdSum{};
	INT32 DoorType{};
	uint64_t CodedLock{};
};

struct ThrowInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	bool bVisible{};
	BYTE bActorIsBeingDestroyed{};
	bool bStopFly{};
	bool bIsPreDestroyed{};
	float CurrHP{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	uint64_t Mesh{};
	FVector Location{};
    FEncHandler EncHandler{};
	FVector ComponentVelocity{};
	UINT8 bAlwaysCreatePhysicsState{};
};

struct DeadBodyInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	FVector Location{};
    FEncHandler EncHandler{};
	bool bIsOpened{};
	uint64_t PlayerName_BufferPtr{};
	FStringBuffer FPlayerName_Buffer{};
	std::string PlayerName{};
	bool bIsAI{};
	uint64_t OpeningPlayerId{};
	int InitialGuidePrice{};
	TArray<uint64_t> ItemArrayItems{};
    uint64_t ReplicatedMovement{};
	std::unordered_map<uint64_t, FItemID> ItemsID{};
	std::unordered_map<uint64_t, uint64_t> ItemsRow{};
	std::unordered_map<uint64_t, std::vector<ItemDataTableInfo>> Items{};
	TArray<uint64_t> CurrentLootingPlayersTArray{};
	std::vector<uint64_t> CurrentLootingPlayers{};
	bool bIsSelfOpening{};
};

struct DoorDataInfo
{
	uint64_t Address{};
	FVector Location{};
	uint64_t KeyIDPtr{};
	uint32_t KeyID{};
	uint64_t ItemID{};
	std::string Name{};
	ItemDataTableInfo Info{};
};

struct ContainerInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	FVector Location{};
    FEncHandler EncHandler{};
	bool bIsOpened{};
	uint64_t FingerprintPassWordPtr{};
	FStringBuffer FFingerprintPassWord{};
	std::string FingerprintPassWord{};
	uint8_t HackPcMiniGameType{};
	INT32 PwdSum{};
	float OwnDuration{};
	uint64_t OpeningPlayerId{};
	int InitialGuidePrice{};
	TArray<uint64_t> ItemArrayItems{};
	std::unordered_map<uint64_t, FItemID> ItemsID{};
	std::unordered_map<uint64_t, uint64_t> ItemsRow{};
	std::unordered_map<uint64_t, std::vector<ItemDataTableInfo>> Items{};
	TArray<uint64_t> CurrentLootingPlayersTArray{};
	std::vector<uint64_t> CurrentLootingPlayers{};
	bool bIsSelfOpening{};
};

struct ContainerBoxInfo
{
	int InitialGuidePrice{};
	std::unordered_map<uint64_t, std::vector<ItemDataTableInfo>> Items{};
};

struct PlayerStateInfo
{
	uint64_t Address{};
	uint64_t PlayerNamePrivatePtr{};
	FStringBuffer FPlayerNamePrivate{};
	std::string PlayerNamePrivate{};
	uint64_t Uin{};
	UINT32 TeamId{};
	UINT32 InnerTeamIndex{};
	UINT32 Camp{};
	INT64 HeroID{};
	std::string HeroName{};
	bool bDead = false;
	bool bFinishGame = false;
	bool bIsDeadBox = false;
	uint64_t DFMPlayerNamePtr{};
	std::string DFMPlayerName{};
	uint64_t PawnAddress{};
};

struct PlayerInfo
{
	uint64_t Address{};
	EntityInfo Entity{};
    uint64_t CharacterMovement{};
	uint64_t RootComponent{};
	uint64_t RootComponentKeyIndex{};
	uint64_t Mesh{};
	uint64_t AnimScriptInstance{};
	FTransform ComponentToWorld{};
	uint64_t BoneArray{};
	FVector Location{};
	FRotator LookingRotation{};
	FVector Velocity{};
	bool IsVisible = true;
	bool InScreen = true;
	bool IsAimMe = false;
	bool IsSelf = false;
	bool IsAI = false;
	bool IsAIPlayer = false;
	bool IsBOSS = false;
	bool IsMyTeam = false;
	PlayerStateInfo PlayerState{};
	uint64_t HealthComp{};
	uint64_t HealthSet{};
	float Health{};
	float MaxHealth{};
	float ImpendingDeathHealth{};
	float HelmetArmorHealth{};
	float MaxHelmetArmorHealth{};
	float ArmorHealth{};
	float MaxArmorHealth{};
	bool LastIsDead{};
	EPlayerAliveState AliveState{};
	PlayerWeaponInfo CacheCurWeapon{};
	uint64_t CharacterEquipComponentCache{};
	uint64_t CharacterEquipComponentCacheKeyIndex{};
	uint64_t EquipmentInfoArray{};
	std::vector<uint64_t> EquipmentInfoItemID{};
	int EquipmentPrice{};
	int EquipmentInfoCount{};
	uint64_t HelmetItemId{};
	uint64_t ArmorItemId{};
	INT32 HelmetLevel{};
	INT32 ArmorLevel{};
	UINT8 bFighting{};
	uint64_t KillerUin{};
	int KillCount{};
	uint64_t GPCameraModeComponent{};
	float PlayerViewPitch{};
	float PlayerViewYaw{};
	float Distance{};
    FVector LastUpdateLocation{};
	uint8_t bAlwaysCreatePhysicsState{};
	uint64_t WeaponManagerComponent{};
	TArray<uint64_t> WeaponListArray{};
	std::vector<PlayerWeaponInfo> WeaponList{};

	std::unordered_map<int, FVector> Bones = {
		{EBoneIndex::Root, FVector()},
		{EBoneIndex::ForeHead, FVector()},
		{EBoneIndex::Head, FVector()},
		{EBoneIndex::Neck_01, FVector()},
		{EBoneIndex::Upperarm_R, FVector()},
		{EBoneIndex::Lowerarm_R, FVector()},
		{EBoneIndex::Hand_R, FVector()},
		{EBoneIndex::Upperarm_L, FVector()},
		{EBoneIndex::Lowerarm_L, FVector()},
		{EBoneIndex::Hand_L, FVector()},
		{EBoneIndex::Spine_01, FVector()},
		{EBoneIndex::Pelvis, FVector()},
		{EBoneIndex::Thigh_R, FVector()},
		{EBoneIndex::Calf_R, FVector()},
		{EBoneIndex::Foot_R, FVector()},
		{EBoneIndex::Thigh_L, FVector()},
		{EBoneIndex::Calf_L, FVector()},
		{EBoneIndex::Foot_L, FVector()},
	};

	std::unordered_map<int, FVector> LocationBones = {
		{EBoneIndex::Root, FVector()},
		{EBoneIndex::ForeHead, FVector()},
		{EBoneIndex::Head, FVector()},
		{EBoneIndex::Neck_01, FVector()},
		{EBoneIndex::Upperarm_R, FVector()},
		{EBoneIndex::Lowerarm_R, FVector()},
		{EBoneIndex::Hand_R, FVector()},
		{EBoneIndex::Upperarm_L, FVector()},
		{EBoneIndex::Lowerarm_L, FVector()},
		{EBoneIndex::Hand_L, FVector()},
		{EBoneIndex::Spine_01, FVector()},
		{EBoneIndex::Pelvis, FVector()},
		{EBoneIndex::Thigh_R, FVector()},
		{EBoneIndex::Calf_R, FVector()},
		{EBoneIndex::Foot_R, FVector()},
		{EBoneIndex::Thigh_L, FVector()},
		{EBoneIndex::Calf_L, FVector()},
		{EBoneIndex::Foot_L, FVector()},
	};

	std::unordered_map<int, FVector2D> ScreenBones = {
		{EBoneIndex::Root, FVector2D()},
		{EBoneIndex::ForeHead, FVector2D()},
		{EBoneIndex::Head, FVector2D()},
		{EBoneIndex::Neck_01, FVector2D()},
		{EBoneIndex::Spine_01, FVector2D()},
		{EBoneIndex::Pelvis, FVector2D()},
		{EBoneIndex::Upperarm_R, FVector2D()},
		{EBoneIndex::Lowerarm_R, FVector2D()},
		{EBoneIndex::Hand_R, FVector2D()},
		{EBoneIndex::Upperarm_L, FVector2D()},
		{EBoneIndex::Lowerarm_L, FVector2D()},
		{EBoneIndex::Hand_L, FVector2D()},
		{EBoneIndex::Thigh_R, FVector2D()},
		{EBoneIndex::Calf_R, FVector2D()},
		{EBoneIndex::Foot_R, FVector2D()},
		{EBoneIndex::Thigh_L, FVector2D()},
		{EBoneIndex::Calf_L, FVector2D()},
		{EBoneIndex::Foot_L, FVector2D()},
	};

	std::unordered_map<int, bool> VisCheckBones = {
		{EBoneIndex::Root, true},
		{EBoneIndex::ForeHead, true},
		{EBoneIndex::Head, true},
		{EBoneIndex::Neck_01, true},
		{EBoneIndex::Upperarm_R, true},
		{EBoneIndex::Lowerarm_R, true},
		{EBoneIndex::Hand_R, true},
		{EBoneIndex::Upperarm_L, true},
		{EBoneIndex::Lowerarm_L, true},
		{EBoneIndex::Hand_L, true},
		{EBoneIndex::Spine_01, true},
		{EBoneIndex::Pelvis, true},
		{EBoneIndex::Thigh_R, true},
		{EBoneIndex::Calf_R, true},
		{EBoneIndex::Foot_R, true},
		{EBoneIndex::Thigh_L, true},
		{EBoneIndex::Calf_L, true},
		{EBoneIndex::Foot_L, true},
	};
};

struct AimBotConfig
{
	float RandomValue = 100.f;
	int AimDistance = 500;
	int RandomDelay = 100;
	bool FireOnlyRandomBone = false;
	bool AutoSwitchPlayer = false;
	int UseClosest = 0;
	int AutoSwitchPlayerFOV = 10;
	bool RayCast = true;
	bool LineTraceSingleRecoilLocation = true;
	bool VisibleCheck = true;
	bool HotkeyMerge = true;
	bool LegitMode = false;
	int FOV = 60;
	float XSpeed = 20.0f;
	float YSpeed = 20.0f;
	bool AutoSwitch = true;
	bool ADS = false;
	bool Sway = true;
	bool Recoil = true;
	bool IgnoreGroggy = false;
	int RecoilTime = 5;
	int SwitchingDelay = 20;
	float RecoilSmoothYaw = 0.4f;
	float RecoilSmoothPitch = 0.15f;
	bool NoBulletNotAim = true;
	bool Prediction = true;
	bool Curve = false;
	float Curves[4] = { 0.25f, 0.1f, 0.25f, 1.0f };
	int NewCurveTime = 800;
	bool PowerfulCurve = false;
	float AimSpeedMaxFactor = 100.f;
	bool DontAimAI = false;
	bool bCloseRangeSpeed = false;
	float CloseRangeSpeed = 20.f;
	int CloseRangeDistance = 10;

	int VelocityMode = 0;

	struct
	{
		bool Enable = false;
		int Key = VK_CAPITAL;
		float Speed = 10.0f;
		int MaxDistance = 150;
		std::unordered_map<std::string, bool> Enables = {
			{ XorStr("Flash Drone"), true }, // 闪光巡飞弹
			{ XorStr("Loitering Munition"), true }, // 乌鲁鲁巡飞弹
			{ XorStr("Sonic Drone"), true }, // 声波飞行器
			{ XorStr("Sonic Trap"), true }, // 声波陷阱
			{ XorStr("Bionic Bird"), true},
		};
	} Throw;

	struct
	{
		//int Key = 6;
		int Key = VK_RBUTTON;
		bool Bones[18] = {
			true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false
		};
	} First;

	struct
	{
		int Key = VK_SHIFT;
		bool Bones[18] = {
			true, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false
		};
	} Second;

	struct
	{
		int Key = 17;
		bool Bones[18] = {
			true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false
		};
	} Groggy;

	struct
	{
		bool Enable = false;
		bool Independent = true;
		int Key = 0;
		int Key1 = 0;
		bool Bones[18] = {
			true, true, true, true, false, false, false, false, false, false, false, false, false, false, false, false, false, false
		};
		float TriggerRange = 5.f;
		int Sleep = 0;
		float Smooth = 20.f;
		int MaxDistance = 500;
		int MaxMinDistance = 20.f;
		bool bMaxMin = false;
		bool Long = false;
		bool AutoVisibility = true;
	} Trigger;
};

struct AimBotWeaponConfig
{
	int Key;
	std::unordered_map<EWeaponItemType, AimBotConfig> Weapon;
};

struct RadarConfig
{
	bool Enable = true;
	bool ShowPlayer = true;
	bool ShowAI = true;
	bool ShowBOSS = true;
    bool ShowTeam = true;
    bool ShowHeroAvatar = true;
	bool ShowDirection = true;
	bool ShowSelf = true;
	bool ShowTeammate = true;
	bool ShowArmor = false;
	bool ShowKeyDoor = false;
	float RatioY = 0.f;
	int Size = 6.f;
};

struct tMapInfo {
	float TimeStamp = 0;

	struct {
		struct PosInfo {
			float Time = 0;
			FVector Pos;
		};
		std::deque<PosInfo> Info;
	} PosInfo;
};