#include "Offset.h"

void Offset::Init()
{
    GameData.Remote.Offset[EncryptKey(XorStr("UnencryptedObjects"))] = Offsets::UnencryptedObjects;
    GameData.Remote.Offset[EncryptKey(XorStr("InteractorComponent"))] = Offsets::InteractorComponent;
    GameData.Remote.Offset[EncryptKey(XorStr("ItemActors"))] = Offsets::ItemActors;
    GameData.Remote.Offset[EncryptKey(XorStr("PickupActors"))] = Offsets::PickupActors;

	GameData.Remote.Offset[EncryptKey(XorStr("UPTRIndex"))] = Offsets::UPTRIndex;
	GameData.Remote.Offset[EncryptKey(XorStr("UPTREnable"))] = Offsets::UPTREnable;
	GameData.Remote.Offset[EncryptKey(XorStr("UPTRKey"))] = Offsets::UPTRKey;
	GameData.Remote.Offset[EncryptKey(XorStr("SwitchEncryptor"))] = Offsets::SwitchEncryptor;
	GameData.Remote.Offset[EncryptKey(XorStr("EncBase0"))] = Offsets::EncBase0;
	GameData.Remote.Offset[EncryptKey(XorStr("EncBase1"))] = Offsets::EncBase1;

	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptFuncIndex"))] = Offsets::DynamicDecryptFuncIndex;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptKeyMask"))] = Offsets::DynamicDecryptKeyMask;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptKey"))] = Offsets::DynamicDecryptKey;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptFuns_GameState"))] = Offsets::DynamicDecryptFuns_GameState;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptFuns_OwningGameInstance"))] = Offsets::DynamicDecryptFuns_OwningGameInstance;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptFuns_PlayerCameraManager"))] = Offsets::DynamicDecryptFuns_PlayerCameraManager;
	//GameData.Remote.Offset[EncryptKey(XorStr("DynamicDecryptFuns_RootComponent"))] = Offsets::DynamicDecryptFuns_RootComponent;

	GameData.Remote.Offset[EncryptKey(XorStr("InteractSystemComponent"))] = Offsets::InteractSystemComponent;
	GameData.Remote.Offset[EncryptKey(XorStr("MapDoorInfoArray"))] = Offsets::MapDoorInfoArray;
	GameData.Remote.Offset[EncryptKey(XorStr("KeyID"))] = Offsets::KeyID;
    GameData.Remote.Offset[EncryptKey(XorStr("KeyLocation"))] = Offsets::KeyLocation;
    //GameData.Remote.Offset[EncryptKey(XorStr("RelativeLocation"))] = Offsets::RelativeLocation;

	GameData.Remote.Offset[EncryptKey(XorStr("Engine"))] = Offsets::Engine;
	GameData.Remote.Offset[EncryptKey(XorStr("GameViewport"))] = Offsets::GameViewport;
	GameData.Remote.Offset[EncryptKey(XorStr("World"))] = Offsets::World;

	GameData.Remote.Offset[EncryptKey(XorStr("NetDriver"))] = Offsets::NetDriver;
	GameData.Remote.Offset[EncryptKey(XorStr("NetDriverLevels"))] = Offsets::NetDriverLevels;

	GameData.Remote.Offset[EncryptKey(XorStr("EncryptArray"))] = Offsets::EncryptArray;
	GameData.Remote.Offset[EncryptKey(XorStr("EncryptArrayActor"))] = Offsets::EncryptArrayActor;

	GameData.Remote.Offset[EncryptKey(XorStr("OwningGameInstance"))] = Offsets::OwningGameInstance;
	GameData.Remote.Offset[EncryptKey(XorStr("LocalPlayers"))] = Offsets::LocalPlayers;

	GameData.Remote.Offset[EncryptKey(XorStr("GPCameraModeComponent"))] = Offsets::GPCameraModeComponent;
	GameData.Remote.Offset[EncryptKey(XorStr("PlayerViewPitch"))] = Offsets::PlayerViewPitch;
	GameData.Remote.Offset[EncryptKey(XorStr("PlayerViewYaw"))] = Offsets::PlayerViewYaw;

	GameData.Remote.Offset[EncryptKey(XorStr("bEnableCameraEncrypt"))] = Offsets::bEnableCameraEncrypt;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraEncryptIndex"))] = Offsets::CameraEncryptIndex;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraKey1"))] = Offsets::CameraKey1;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraKey2"))] = Offsets::CameraKey2;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraOffset1"))] = Offsets::CameraOffset1;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraOffset2"))] = Offsets::CameraOffset2;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraOffset3"))] = Offsets::CameraOffset3;

	GameData.Remote.Offset[EncryptKey(XorStr("Matix"))] = Offsets::Matix;
	GameData.Remote.Offset[EncryptKey(XorStr("PhysXSDK"))] = Offsets::PhysXSDK;
	GameData.Remote.Offset[EncryptKey(XorStr("GNames"))] = Offsets::GNames;
	GameData.Remote.Offset[EncryptKey(XorStr("NumElementsPerChunk"))] = Offsets::NumElementsPerChunk;
	GameData.Remote.Offset[EncryptKey(XorStr("GObjects"))] = Offsets::GObjects;
	GameData.Remote.Offset[EncryptKey(XorStr("ObjID"))] = Offsets::ObjID;
	//GameData.Remote.Offset[EncryptKey(XorStr("Inherit"))] = Offsets::Inherit;
	GameData.Remote.Offset[EncryptKey(XorStr("UWorld"))] = Offsets::UWorld;
	GameData.Remote.Offset[EncryptKey(XorStr("WorldToMap"))] = Offsets::WorldToMap;
	GameData.Remote.Offset[EncryptKey(XorStr("GLocalPlayer"))] = Offsets::GLocalPlayer;

	GameData.Remote.Offset[EncryptKey(XorStr("GameState"))] = Offsets::GameState;
	GameData.Remote.Offset[EncryptKey(XorStr("DFMGamePlayerMode"))] = Offsets::DFMGamePlayerMode;
	GameData.Remote.Offset[EncryptKey(XorStr("DisplayName"))] = Offsets::DisplayName;
	GameData.Remote.Offset[EncryptKey(XorStr("LevelName"))] = Offsets::LevelName;

	GameData.Remote.Offset[EncryptKey(XorStr("PlayerController"))] = Offsets::PlayerController;
	GameData.Remote.Offset[EncryptKey(XorStr("bShowMouseCursor"))] = Offsets::bShowMouseCursor;

	GameData.Remote.Offset[EncryptKey(XorStr("AcknowledgedPawn"))] = Offsets::AcknowledgedPawn;

	GameData.Remote.Offset[EncryptKey(XorStr("MyHUD"))] = Offsets::MyHUD;
	GameData.Remote.Offset[EncryptKey(XorStr("Controllers"))] = Offsets::Controllers;
	GameData.Remote.Offset[EncryptKey(XorStr("ChildControllers"))] = Offsets::ChildControllers;
	GameData.Remote.Offset[EncryptKey(XorStr("View"))] = Offsets::View;
	GameData.Remote.Offset[EncryptKey(XorStr("Visibility"))] = Offsets::Visibility;
	GameData.Remote.Offset[EncryptKey(XorStr("CurrentScale"))] = Offsets::CurrentScale;
	GameData.Remote.Offset[EncryptKey(XorStr("CurrentMapUVPos"))] = Offsets::CurrentMapUVPos;
	GameData.Remote.Offset[EncryptKey(XorStr("WorldCenter"))] = Offsets::WorldCenter;
	GameData.Remote.Offset[EncryptKey(XorStr("WorldExtent"))] = Offsets::WorldExtent;
	GameData.Remote.Offset[EncryptKey(XorStr("MapSize"))] = Offsets::MapSize;

	GameData.Remote.Offset[EncryptKey(XorStr("PersistentLevel"))] = Offsets::PersistentLevel;
	GameData.Remote.Offset[EncryptKey(XorStr("Levels"))] = Offsets::Levels;
	GameData.Remote.Offset[EncryptKey(XorStr("Actor"))] = Offsets::Actor;
	GameData.Remote.Offset[EncryptKey(XorStr("PlayerCameraManager"))] = Offsets::PlayerCameraManager;
	GameData.Remote.Offset[EncryptKey(XorStr("ViewTarget"))] = Offsets::ViewTarget;
	GameData.Remote.Offset[EncryptKey(XorStr("CameraCachePrivate"))] = Offsets::CameraCachePrivate;

	GameData.Remote.Offset[EncryptKey(XorStr("RootComponent"))] = Offsets::RootComponent;
	GameData.Remote.Offset[EncryptKey(XorStr("Mesh"))] = Offsets::Mesh;
	GameData.Remote.Offset[EncryptKey(XorStr("BoneArray"))] = Offsets::BoneArray;
	GameData.Remote.Offset[EncryptKey(XorStr("SkeletalMesh"))] = Offsets::SkeletalMesh;
	GameData.Remote.Offset[EncryptKey(XorStr("FinalRefBoneInfo"))] = Offsets::FinalRefBoneInfo;

	GameData.Remote.Offset[EncryptKey(XorStr("ComponentToWorld"))] = Offsets::ComponentToWorld;
	GameData.Remote.Offset[EncryptKey(XorStr("ComponentLocation"))] = Offsets::ComponentLocation;
	GameData.Remote.Offset[EncryptKey(XorStr("ComponentRotation"))] = Offsets::ComponentRotation;
	GameData.Remote.Offset[EncryptKey(XorStr("ComponentVelocity"))] = Offsets::ComponentVelocity;

	GameData.Remote.Offset[EncryptKey(XorStr("LookingRotation"))] = Offsets::LookingRotation;
	GameData.Remote.Offset[EncryptKey(XorStr("DeadInfo"))] = Offsets::DeadInfo;
	GameData.Remote.Offset[EncryptKey(XorStr("KillerUin"))] = Offsets::KillerUin;

	GameData.Remote.Offset[EncryptKey(XorStr("HealthComp"))] = Offsets::HealthComp;
	GameData.Remote.Offset[EncryptKey(XorStr("HealthSet"))] = Offsets::HealthSet;
	GameData.Remote.Offset[EncryptKey(XorStr("Health"))] = Offsets::Health;
	GameData.Remote.Offset[EncryptKey(XorStr("MaxHealth"))] = Offsets::MaxHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("ImpendingDeathHealth"))] = Offsets::ImpendingDeathHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("MaxImpendingDeathHealth"))] = Offsets::MaxImpendingDeathHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("ArmorHealth"))] = Offsets::ArmorHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("MaxArmorHealth"))] = Offsets::MaxArmorHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("HelmetArmorHealth"))] = Offsets::HelmetArmorHealth;
	GameData.Remote.Offset[EncryptKey(XorStr("MaxHelmetArmorHealth"))] = Offsets::MaxHelmetArmorHealth;

	GameData.Remote.Offset[EncryptKey(XorStr("CharacterEquipComponentCache"))] = Offsets::CharacterEquipComponentCache;
	GameData.Remote.Offset[EncryptKey(XorStr("EquipmentInfoArray"))] = Offsets::EquipmentInfoArray;

	GameData.Remote.Offset[EncryptKey(XorStr("CacheCurWeapon"))] = Offsets::CacheCurWeapon;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponID"))] = Offsets::WeaponID;
	GameData.Remote.Offset[EncryptKey(XorStr("CachedAttributeSetWeaponAmmo"))] = Offsets::CachedAttributeSetWeaponAmmo;
	GameData.Remote.Offset[EncryptKey(XorStr("FiringMode"))] = Offsets::FiringMode;
	GameData.Remote.Offset[EncryptKey(XorStr("CachedAttributeSetFireMode"))] = Offsets::CachedAttributeSetFireMode;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponAmmoCount"))] = Offsets::WeaponAmmoCount;

	GameData.Remote.Offset[EncryptKey(XorStr("PlayerArray"))] = Offsets::PlayerArray;
	GameData.Remote.Offset[EncryptKey(XorStr("PlayerNamePrivate"))] = Offsets::PlayerNamePrivate;
	GameData.Remote.Offset[EncryptKey(XorStr("Uin"))] = Offsets::Uin;
	GameData.Remote.Offset[EncryptKey(XorStr("bFinishGame"))] = Offsets::bFinishGame;
	GameData.Remote.Offset[EncryptKey(XorStr("bDead"))] = Offsets::bDead;
	GameData.Remote.Offset[EncryptKey(XorStr("TeamId"))] = Offsets::TeamId;
	GameData.Remote.Offset[EncryptKey(XorStr("InnerTeamIndex"))] = Offsets::InnerTeamIndex;
	GameData.Remote.Offset[EncryptKey(XorStr("Camp"))] = Offsets::Camp;
	GameData.Remote.Offset[EncryptKey(XorStr("bIsDeadBox"))] = Offsets::bIsDeadBox;
	GameData.Remote.Offset[EncryptKey(XorStr("HeroID"))] = Offsets::HeroID;

	GameData.Remote.Offset[EncryptKey(XorStr("PlayerState"))] = Offsets::PlayerState;

	GameData.Remote.Offset[EncryptKey(XorStr("bIsOpened"))] = Offsets::bIsOpened;
	GameData.Remote.Offset[EncryptKey(XorStr("OpeningPlayerId"))] = Offsets::OpeningPlayerId;
	GameData.Remote.Offset[EncryptKey(XorStr("RepItemArrayItems"))] = Offsets::RepItemArrayItems;
	GameData.Remote.Offset[EncryptKey(XorStr("ItemID"))] = Offsets::ItemID;
	GameData.Remote.Offset[EncryptKey(XorStr("ItemRow"))] = Offsets::ItemRow;
	GameData.Remote.Offset[EncryptKey(XorStr("Quality"))] = Offsets::Quality;
	GameData.Remote.Offset[EncryptKey(XorStr("InitialGuidePrice"))] = Offsets::InitialGuidePrice;

	GameData.Remote.Offset[EncryptKey(XorStr("PickupItemInfo"))] = Offsets::PickupItemInfo;
	GameData.Remote.Offset[EncryptKey(XorStr("InventoryItemInfo"))] = Offsets::InventoryItemInfo;

	GameData.Remote.Offset[EncryptKey(XorStr("bLooted"))] = Offsets::bLooted;
	GameData.Remote.Offset[EncryptKey(XorStr("PlayerName_Buffer"))] = Offsets::PlayerName_Buffer;
	GameData.Remote.Offset[EncryptKey(XorStr("LastIsDead"))] = Offsets::LastIsDead;

	GameData.Remote.Offset[EncryptKey(XorStr("CurrentLootingPlayers"))] = Offsets::CurrentLootingPlayers;

	GameData.Remote.Offset[EncryptKey(XorStr("WeaponMesh"))] = Offsets::WeaponMesh;

	GameData.Remote.Offset[EncryptKey(XorStr("PwdSum"))] = Offsets::PwdSum;
	GameData.Remote.Offset[EncryptKey(XorStr("Password"))] = Offsets::Password;
	GameData.Remote.Offset[EncryptKey(XorStr("bFirstOpened"))] = Offsets::bFirstOpened;
	GameData.Remote.Offset[EncryptKey(XorStr("MorseCodeSuccessInfo"))] = Offsets::MorseCodeSuccessInfo;

	GameData.Remote.Offset[EncryptKey(XorStr("bAlwaysCreatePhysicsState"))] = Offsets::bAlwaysCreatePhysicsState;

	GameData.Remote.Offset[EncryptKey(XorStr("bFighting"))] = Offsets::bFighting;


	GameData.Remote.Offset[EncryptKey(XorStr("WeaponDataComponentState"))] = Offsets::WeaponDataComponentState;
	GameData.Remote.Offset[EncryptKey(XorStr("Rep_CurStateType"))] = Offsets::Rep_CurStateType;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponFuncComponentFireShakeCache"))] = Offsets::WeaponFuncComponentFireShakeCache;
	GameData.Remote.Offset[EncryptKey(XorStr("RecoilPitch"))] = Offsets::RecoilPitch;
	GameData.Remote.Offset[EncryptKey(XorStr("ControlRotation"))] = Offsets::ControlRotation;

	GameData.Remote.Offset[EncryptKey(XorStr("AnimScriptInstance"))] = Offsets::AnimScriptInstance;
	GameData.Remote.Offset[EncryptKey(XorStr("LocalProxy"))] = Offsets::LocalProxy;
	GameData.Remote.Offset[EncryptKey(XorStr("LogicADSPercent"))] = Offsets::LogicADSPercent;

	GameData.Remote.Offset[EncryptKey(XorStr("WeaponManagerComponent"))] = Offsets::WeaponManagerComponent;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponIDList"))] = Offsets::WeaponIDList;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponList"))] = Offsets::WeaponList;
	GameData.Remote.Offset[EncryptKey(XorStr("AssetFallBackPartNodes"))] = Offsets::AssetFallBackPartNodes;

	GameData.Remote.Offset[EncryptKey(XorStr("AllBlueprintCreatedComponents"))] = Offsets::AllBlueprintCreatedComponents;
	GameData.Remote.Offset[EncryptKey(XorStr("FireRecoil"))] = Offsets::FireRecoil;

	GameData.Remote.Offset[EncryptKey(XorStr("WeaponDataComponentFiring"))] = Offsets::WeaponDataComponentFiring;
	GameData.Remote.Offset[EncryptKey(XorStr("ContinueFireCount"))] = Offsets::ContinueFireCount;
	GameData.Remote.Offset[EncryptKey(XorStr("FireRecoilMethod"))] = Offsets::FireRecoilMethod;
	GameData.Remote.Offset[EncryptKey(XorStr("RecoilModifierConfigForAiming"))] = Offsets::RecoilModifierConfigForAiming;
	GameData.Remote.Offset[EncryptKey(XorStr("ContinueShotRecoil"))] = Offsets::ContinueShotRecoil;
	GameData.Remote.Offset[EncryptKey(XorStr("ContinueShotRecoilLoop"))] = Offsets::ContinueShotRecoilLoop;
	GameData.Remote.Offset[EncryptKey(XorStr("HorizontalRecoil"))] = Offsets::HorizontalRecoil;
	GameData.Remote.Offset[EncryptKey(XorStr("VerticalRecoil"))] = Offsets::VerticalRecoil;
	GameData.Remote.Offset[EncryptKey(XorStr("WeaponRecoilPairScale"))] = Offsets::WeaponRecoilPairScale;
    GameData.Remote.Offset[EncryptKey(XorStr("WeaponRecoilPairRecoils"))] = Offsets::WeaponRecoilPairRecoils;

    GameData.Remote.Offset[EncryptKey(XorStr("FCFiring"))] = Offsets::FCFiring;
    GameData.Remote.Offset[EncryptKey(XorStr("CurrentFireMode"))] = Offsets::CurrentFireMode;
    GameData.Remote.Offset[EncryptKey(XorStr("Params"))] = Offsets::Params;
    GameData.Remote.Offset[EncryptKey(XorStr("BulletBaseParam"))] = Offsets::BulletBaseParam;
    GameData.Remote.Offset[EncryptKey(XorStr("InitSpeed"))] = Offsets::InitSpeed;

	GameData.Remote.Offset[EncryptKey(XorStr("HackPcMiniGameType"))] = Offsets::HackPcMiniGameType;
	GameData.Remote.Offset[EncryptKey(XorStr("FingerprintInfo"))] = Offsets::FingerprintInfo;

	GameData.Remote.Offset[EncryptKey(XorStr("bActorIsBeingDestroyed"))] = Offsets::bActorIsBeingDestroyed;
	GameData.Remote.Offset[EncryptKey(XorStr("bStopFly"))] = Offsets::bStopFly;
	GameData.Remote.Offset[EncryptKey(XorStr("bIsPreDestroyed"))] = Offsets::bIsPreDestroyed;

}