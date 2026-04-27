#pragma once

#include <Utils/Engine.h>
#include <Utils/ue4math/ue4math.h>
#include <Utils/ue4math/matrix.h>
#include <Utils/ue4math/vector.h>

struct FEncHandler {
    uint16_t Index;  // 0x00(0x02)
	INT8 bEncrypted; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
};

struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FEncHandler EncHandler;
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	//float DesiredFOV; // 0x1c(0x04)
};

struct FOldMinimalViewInfo {
	struct FVector Location; // 0x00(0x0c)
	struct FRotator Rotation; // 0x0c(0x0c)
	float FOV; // 0x18(0x04)
	//float DesiredFOV; // 0x1c(0x04)
};

struct FAllBlueprintCreatedComponent
{
	uint64_t Component{};
	char Unk[0x8];
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : UINT8
{
    ECC_WorldStatic = 0,       // 0
    ECC_WorldDynamic,          // 1
    ECC_Pawn,                  // 2
    ECC_Visibility,            // 3
    ECC_Camera,                // 4
    ECC_PhysicsBody,           // 5
    ECC_Vehicle,               // 6
    ECC_Destructible,          // 7
    ECC_EngineTraceChannel1,   // 8
    ECC_EngineTraceChannel2,   // 9
    ECC_EngineTraceChannel3,   // 10
    ECC_EngineTraceChannel4,   // 11
    ECC_EngineTraceChannel5,   // 12
    ECC_EngineTraceChannel6,   // 13
    ECC_GameTraceChannel1,     // 14
    ECC_GameTraceChannel2,     // 15
    ECC_GameTraceChannel3,     // 16
    ECC_GameTraceChannel4,     // 17
    ECC_GameTraceChannel5,     // 18
    ECC_GameTraceChannel6,     // 19
    ECC_GameTraceChannel7,     // 20
    ECC_GameTraceChannel8,     // 21
    ECC_GameTraceChannel9,     // 22
    ECC_GameTraceChannel10,    // 23
    ECC_GameTraceChannel11,    // 24
    ECC_GameTraceChannel12,    // 25
    ECC_GameTraceChannel13,    // 26
    ECC_GameTraceChannel14,    // 27
    ECC_GameTraceChannel15,    // 28
    ECC_GameTraceChannel16,    // 29
    ECC_GameTraceChannel17,    // 30
    ECC_GameTraceChannel18,    // 31
    ECC_OverlapAll_Deprecated, // 32
    ECC_MAX                    // 33
};

// Enum DFMGameplay.EExitStageType
enum class EExitStageType : UINT8 {
	NotActive = 0,             	// 0
	WaitingAwake,              	// 1
	Awake,                     	// 2
	ResetCoolDown,             	// 3
	Close,                     	// 4
	EExitStageType_MAX        	// 5
};

// Enum GPWeaponRuntime.EGPWeaponStateType
enum class EGPWeaponStateType : UINT8 {
	EWeapState_None = 0,                   	// 0
	EWeapState_Active,                     	// 1
	EWeapState_Inactive,                   	// 2
	EWeapState_Equipping,                  	// 3
	EWeapState_Unequipping,                	// 4
	EWeapState_PreFire,                    	// 5
	EWeapState_KeepPreFire,                	// 6
	EWeapState_Firing,                     	// 7
	EWeapState_PostFire,                   	// 8
	EWeapState_ChangingClip,               	// 9
	EWeapState_Chamber,                    	// 10
	EWeapState_Interaction,                	// 11
	EWeapState_Zoom,                       	// 12
	EWeapState_AltFiring,                  	// 13
	EWeapState_ZoomTransition,             	// 14
	EWeapState_SwitchFireMode,             	// 15
	EWeapState_BeginingInteraction,        	// 16
	EWeapState_CancelPreFire,              	// 17
	EWeapState_EndingInteraction,          	// 18
	EWeapState_SwitchPot,                  	// 19
	EWeapState_LeftHold,                   	// 20
	EWeapState_MAX                        	// 21
};

enum class EDFMGamePlayMode : UINT8 {
	None = 0,                          	// 0
	GamePlayMode_SOL,                  	// 1
	GamePlayMode_Raid,                 	// 2
	GamePlayMode_IrisDiscovery,        	// 3
	GamePlayMode_Conquest,             	// 4
	GamePlayMode_Breakthrough,         	// 5
	GamePlayMode_SafeHouse,            	// 6
	GamePlayMode_Intro,                	// 7
	EDFMGamePlayMode_MAX              	// 8
};

// Enum DFMGameplay.ECharacterRoleType
enum class ECharacterRoleType : UINT8 {
	CharacterRole_Boss = 0,      	// 0
	CharacterRole_AI,            	// 1
	CharacterRole_Player,        	// 2
	CharacterRole_MAX           	// 3
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : UINT8 {
	Visible = 0,                 	// 0
	Collapsed,                   	// 1
	Hidden,                      	// 2
	HitTestInvisible,            	// 3
	HitTestSelfOnly,             	// 4
	SelfHitTestInvisible,        	// 5
	ESlateVisibility_MAX        	// 6
};

enum class EWeaponItemType : UINT8 {
	None = 0,                          // 0
	Rifle,                             // 1  - 步枪
	Submachine,                        // 2  - 冲锋枪
	Shotgun,                           // 3  - 霰弹枪
	LightMachine,                      // 4  - 轻机枪
	PrecisionShootingRifle,           // 5  - 精确射击步枪
	Sniper,                           // 6  - 狙击枪
	Pistol,                           // 7  - 手枪
	Heavy,                            // 8  - 重型武器
	Melee,                            // 9  - 近战武器
	EmptyHand,                        // 10 - 空手/拿刀
	VehicleGun,                       // 11 - 载具武器
	Bow,                              // 12 - 弓箭
	BlastShield,                      // 13 - 防爆盾
	CompoundBow,                      // 14 - 复合弓
	HeavyMachineGun,                  // 15 - 重机枪
	FlameThrower,                     // 16 - 火焰喷射器
	Max                               // 17
};

struct FEquipmentInfo {
	uint64_t ItemID; // 0x00(0x08)
	uint64_t gid; // 0x08(0x08)
	float Health; // 0x10(0x04)
	float MaxHealth; // 0x14(0x04)
	float Durability; // 0x18(0x04)
	float MaxDurability; // 0x1c(0x04)
	float TotalEquipSeceonds; // 0x20(0x04)
	float LastEquipTimeSeconds; // 0x24(0x04)
	float TotalApplyDamage; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

struct FPlayerStatItem {
	uint64_t PlayerUin; // 0x00(0x08)
	uint64_t PlayerName; // 0x08(0x10)
	INT32 Camp; // 0x18(0x04)
	char pad[0x8];
	INT32 Kill; // 0x20(0x04)
	INT32 Death; // 0x24(0x04)
	INT32 Assist; // 0x28(0x04)
	INT32 CaptureNum; // 0x2c(0x04)
	INT32 Score; // 0x30(0x04)
	float TotalDamage; // 0x34(0x04)
	INT32 Rescue; // 0x38(0x04)
	INT32 DestroyVehicle; // 0x3c(0x04)
	INT32 RescueContribScore; // 0x40(0x04)
	INT32 BuildAndDestroyContribScore; // 0x44(0x04)
	INT32 CaptureContribScore; // 0x48(0x04)
	INT32 TacticsContribScore; // 0x4c(0x04)
	INT32 RescueContrib; // 0x50(0x04)
	INT32 BuildAndDestroyContrib; // 0x54(0x04)
	INT32 CaptureContrib; // 0x58(0x04)
	INT32 TacticsContrib; // 0x5c(0x04)
	INT32 BattleLevel; // 0x60(0x04)
	INT32 CapturedFlagNum; // 0x64(0x04)
};

struct FGPModularWeaponPartNode
{
	char pad[0x128];
};

struct FOBPlayerMatchStat {
	INT16 TeamId; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	uint64_t PlayerUin; // 0x08(0x08)
	UINT16 KillNums; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	UINT32 InventoryValue; // 0x14(0x04)
	INT32 DepositValue; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

enum class EEquipmentType : UINT8 {
	None = 0,            	// 0
	Helmet,              	// 1
	Headset,             	// 2
	FaceMask,            	// 3
	Armband,             	// 4
	BreastPlate,         	// 5
	Glasses,             	// 6
	ChestHanging,        	// 7
	Bag,                 	// 8
	SafeBox,             	// 9
	Tool,                	// 10
	Shoes,               	// 11
	KeyChain,            	// 12
	Max                 	// 13
};

struct FArmorInfo {
	enum class EEquipmentType EquipmentType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	uint64_t ItemID; // 0x08(0x08)
	uint64_t gid; // 0x10(0x08)
	float ArmorHP; // 0x18(0x04)
	float MaxArmorHP; // 0x1c(0x04)
	struct FName ProtecetName; // 0x20(0x08)
	float Durability; // 0x28(0x04)
	float MaxDurability; // 0x2c(0x04)
	float SrcMaxDurability; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	INT64 LastEquipTimeStamp; // 0x38(0x08)
	float TotalEquipSeconds; // 0x40(0x04)
	float TotalDamage; // 0x44(0x04)
	INT32 ArmorLevel; // 0x48(0x04)
	float DamagesReduction; // 0x4c(0x04)
	float Ricochet; // 0x50(0x04)
	float RicochetDamage; // 0x54(0x04)
	char bDamageFunctionOnly; // 0x58(0x01)
	char bEnableDamageFunction; // 0x59(0x01)
};

struct FInventoryItemInfo
{
	char pad[0x5f0];
};

struct FItemID {
	UINT32 Category; // 0x00(0x04)
	UINT32 Sequence; // 0x04(0x04)
};

inline EWeaponItemType GetWeaponItemType(uint64_t WeaponID)
{
	if (WeaponID == 18150000001) return EWeaponItemType::Sniper;
	return (EWeaponItemType)((WeaponID / 10000000) % 100);
}

inline INT32 GetWeaponInstanceID(uint64_t WeaponID)
{
	return WeaponID % 100;
}

inline uint64_t MakeItemID(FItemID ItemID) {
	std::ostringstream oss;
	oss << ItemID.Category << std::setw(4) << std::setfill('0') << ItemID.Sequence;
	std::string id_str = oss.str();
	try {
		return std::stoull(id_str);
	}
	catch (...) {
		return 0;
	}
}