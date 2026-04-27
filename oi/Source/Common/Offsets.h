#pragma once
#include <Windows.h>

/*
UPDATE `users`
SET `expire_at` = DATE_ADD(`expire_at`, INTERVAL 1 DAY)
WHERE `expire_at` > '2025-11-9';

DELETE FROM login_logs WHERE created_at < DATE_FORMAT(NOW() ,'%Y-%m-01') OR created_at >= DATE_ADD(DATE_FORMAT(NOW() ,'%Y-%m-01'), INTERVAL 1 MONTH)
*/

/*
* 
* 

使用 FModel 打开解包后 找到 Content\R13N\Common\Base\DataTables\GameItem.json 是这个游戏的物品合集
Content\Localization 是语言

DeltaForce\Content\StringTables\STForDataTable\Common\Base\LOC_GameItem.json 是语言

Content\DataTables\CommonItemAsset\CommonItemAssets_Prop.json 可以找到对应的 Icon 路径
DeltaForce\Content\BluePrints\Map 大地图文件
Content\R13N\Common\Base\DataTables\MapBoxDataTable.json 包含容器盒子ID

钥匙门的位置在
Conten\DataTables\Interact\DoorData\DoorDatabase_Dam_Iris_Long3.json

*/

namespace Offsets
{
	//WeGame
    constexpr UINT32 UPTRIndex = 0x1435082C;
    constexpr UINT32 UPTREnable = 0x14350830;
    constexpr UINT32 UPTRKey = 0x14350834;
    constexpr UINT32 SwitchEncryptor = 0x143507E8;
    constexpr UINT32 EncBase0 = 0x1435AB98;
    constexpr UINT32 EncBase1 = 0x13FBF8B0;

    constexpr UINT32 UnencryptedObjects = 0x131b43e0;
    constexpr UINT32 InteractorComponent = 0x23D0;
    constexpr UINT32 ItemActors = 0x6F0;
    constexpr UINT32 PickupActors = 0x6D0;


    constexpr UINT32 PhysXSDK = 0x001F8878;
    constexpr UINT32 UWorld = 0x13A415E8;
    constexpr UINT32 Engine = 0x00000000;
    constexpr UINT32 Matix = 0x00000000;
    constexpr UINT32 GNames = 0x1435E940;
    constexpr UINT32 GObjects = 0x14378068;
    constexpr UINT32 NumElementsPerChunk = 0x10000;
    constexpr UINT32 ObjID = 0x001C;
    constexpr UINT32 UObject_Name = 0x001C;
    constexpr UINT32 UObject_Number = 0x0020;
    constexpr UINT32 UObject_Index = 0x24;
    constexpr UINT32 UObject_Class = 0x0008;
    constexpr UINT32 UObject_Outer = 0x0010;
    constexpr UINT32 UObject_Size = 0x0018;
    constexpr UINT32 UObject_Inherit = 0x0050;
    constexpr UINT32 Actor = 0x0098;
    constexpr UINT32 ComponentToWorld = 0x0210;
    constexpr UINT32 ComponentLocation = 0x0220;
    constexpr UINT32 ComponentRotation = 0x0230;
    constexpr UINT32 WorldToMap = 0x064C;
    constexpr UINT32 GLocalPlayer = 0x144B1450;

    constexpr UINT32 bEnableCameraEncrypt = 0x144C1DB3;
    constexpr UINT32 CameraEncryptIndex = 0x13A3B630;
    constexpr UINT32 CameraKey1 = 0x13A3B628;
    constexpr UINT32 CameraKey2 = 0x13A3B62C;
    constexpr UINT32 CameraOffset1 = 0x2F2F0;
    constexpr UINT32 CameraOffset2 = 0x09E0;
    constexpr UINT32 CameraOffset3 = 0x2FCD0;

    constexpr UINT32 EncryptArray = 0x00000000;
    constexpr UINT32 EncryptArrayActor = 0x00000000;
    constexpr UINT32 InventoryItemInfo = 0x0ED0;
    constexpr UINT32 FinalRefBoneInfo = 0x01D8;

	constexpr UINT32 GameViewport = 0x0910;
    constexpr UINT32 World = 0x0078;
    constexpr UINT32 OwningGameInstance = 0x0190;
    constexpr UINT32 LocalPlayers = 0x0038;
    constexpr UINT32 NetDriver = 0x0030;
    constexpr UINT32 NetDriverLevels = 0x0518;
    constexpr UINT32 PersistentLevel = 0x00F8;
    constexpr UINT32 Levels = 0x0158;

    constexpr UINT32 GameState = 0x0140;
    constexpr UINT32 InteractSystemComponent = 0x07C0;
    constexpr UINT32 MapDoorInfoArray = 0x05A8;
    constexpr UINT32 KeyID = 0x0020;
    constexpr UINT32 KeyLocation = 0x0030;
    constexpr UINT32 DFMGamePlayerMode = 0x0659;
    constexpr UINT32 DisplayName = 0x0678;
    constexpr UINT32 LevelName = 0x0690;

    constexpr UINT32 PlayerController = 0x0030;
    constexpr UINT32 ControlRotation = 0x03D8;
    constexpr UINT32 bShowMouseCursor = 0x0588;
    constexpr UINT32 AcknowledgedPawn = 0x03F0;

    constexpr UINT32 MyHUD = 0x0400;
    constexpr UINT32 Controllers = 0x0468;
    constexpr UINT32 ChildControllers = 0x00B0;
    constexpr UINT32 View = 0x0088;
    constexpr UINT32 Visibility = 0x0116;

    constexpr UINT32 CurrentScale = 0x0528;
    constexpr UINT32 CurrentMapUVPos = 0x052C;
    constexpr UINT32 WorldCenter = 0x04B0;
    constexpr UINT32 WorldExtent = 0x04BC;
    constexpr UINT32 MapSize = 0x0520;

    constexpr UINT32 PlayerCameraManager = 0x0408;
    constexpr UINT32 ViewTarget = 0x2DEC0;
    constexpr UINT32 CameraCachePrivate = 0x2F2E0;
    constexpr UINT32 GPCameraModeComponent = 0x30A0;
    constexpr UINT32 PlayerViewPitch = 0x01DC;
    constexpr UINT32 PlayerViewYaw = 0x01E0;
    constexpr UINT32 DefaultFOV = 0x0388;

    constexpr UINT32 bActorIsBeingDestroyed = 0x0095;
    constexpr UINT32 RootComponent = 0x0180;
    constexpr UINT32 ComponentVelocity = 0x0190;
    constexpr UINT32 Mesh = 0x03D0;
    constexpr UINT32 BoneArray = 0x0728;
    constexpr UINT32 SkeletalMesh = 0x06F8;
    constexpr UINT32 bAlwaysCreatePhysicsState = 0x0269;

    constexpr UINT32 AnimScriptInstance = 0x0958;
    constexpr UINT32 LocalProxy = 0x0280;
    constexpr UINT32 LogicADSPercent = 0x0A70;

    constexpr UINT32 DeadInfo = 0x0C88;
    constexpr UINT32 KillerUin = 0x0038;
    constexpr UINT32 LookingRotation = 0x12AC;
    constexpr UINT32 LastIsDead = 0x0CF1;
    constexpr UINT32 bFighting = 0x30B4;

    constexpr UINT32 HealthComp = 0x0F68;
    constexpr UINT32 HealthSet = 0x0248;
    constexpr UINT32 Health = 0x0038;
    constexpr UINT32 MaxHealth = 0x0050;
    constexpr UINT32 ImpendingDeathHealth = 0x00E8;
    constexpr UINT32 MaxImpendingDeathHealth = 0x00F8;
    constexpr UINT32 ArmorHealth = 0x0070;
    constexpr UINT32 MaxArmorHealth = 0x0088;
    constexpr UINT32 HelmetArmorHealth = 0x0098;
    constexpr UINT32 MaxHelmetArmorHealth = 0x00B0;

    constexpr UINT32 CharacterEquipComponentCache = 0x2048;
    constexpr UINT32 EquipmentInfoArray = 0x01D8;
    constexpr UINT32 EquipedArmorInfoArray = 0x01E8;

    constexpr UINT32 WeaponManagerComponent = 0x30A8;
    constexpr UINT32 WeaponIDList = 0x01B8;
    constexpr UINT32 WeaponList = 0x0198;
    constexpr UINT32 AssetFallBackPartNodes = 0x0A90;

    constexpr UINT32 CacheCurWeapon = 0x15E8;
    constexpr UINT32 WeaponID = 0x0820;
    constexpr UINT32 CachedAttributeSetWeaponAmmo = 0x1120;
    constexpr UINT32 WeaponAmmoCount = 0x0048;
    constexpr UINT32 CachedAttributeSetFireMode = 0x1118;
    constexpr UINT32 FiringMode = 0x0118;
    constexpr UINT32 WeaponMesh = 0x0370;
    constexpr UINT32 WeaponDataComponentState = 0x0418;
    constexpr UINT32 Rep_CurStateType = 0x0480;
    constexpr UINT32 WeaponFuncComponentFireShakeCache = 0x0BB0;
    constexpr UINT32 RecoilPitch = 0x0188;
    constexpr UINT32 AllBlueprintCreatedComponents = 0x0220;
    constexpr UINT32 FireRecoil = 0x2940;
    constexpr UINT32 WeaponDataComponentFiring = 0x1358;
    constexpr UINT32 ContinueFireCount = 0x05F0;
    constexpr UINT32 FireRecoilMethod = 0x0508;
    constexpr UINT32 RecoilModifierConfigForAiming = 0x09E0;
    constexpr UINT32 ContinueShotRecoil = 0x0248;
    constexpr UINT32 ContinueShotRecoilLoop = 0x0488;
    constexpr UINT32 HorizontalRecoil = 0x0000;
    constexpr UINT32 VerticalRecoil = 0x0060;
    constexpr UINT32 WeaponRecoilPairScale = 0x0048;
    constexpr UINT32 WeaponRecoilPairRecoils = 0x0050;
    constexpr UINT32 FCFiring = 0x0038;
    constexpr UINT32 CurrentFireMode = 0x0178;
    constexpr UINT32 Params = 0x00C8;
    constexpr UINT32 BulletBaseParam = 0x0048;
    constexpr UINT32 InitSpeed = 0x0024;

    constexpr UINT32 PlayerState = 0x0390;
    constexpr UINT32 PlayerArray = 0x0388;
    constexpr UINT32 PlayerNamePrivate = 0x0478;
    constexpr UINT32 Uin = 0x0498;
    constexpr UINT32 bFinishGame = 0x04C8;
    constexpr UINT32 bDead = 0x04B4;
    constexpr UINT32 TeamId = 0x066C;
    constexpr UINT32 InnerTeamIndex = 0x04B0;
    constexpr UINT32 Camp = 0x0670;
    constexpr UINT32 bIsDeadBox = 0x0968;
    constexpr UINT32 HeroID = 0x09B8;

    constexpr UINT32 bIsOpened = 0x1D52;
    constexpr UINT32 OpeningPlayerId = 0x1D58;
    constexpr UINT32 bFirstOpened = 0x0DE8;
    constexpr UINT32 RepItemArrayItems = 0x19C8;
    constexpr UINT32 ItemID = 0x0010;
    constexpr UINT32 ItemRow = 0x0578;
    constexpr UINT32 Quality = 0x0068;
    constexpr UINT32 InitialGuidePrice = 0x00D8;
    constexpr UINT32 PickupItemInfo = 0x0F10;
    constexpr UINT32 bLooted = 0x1F68;
    constexpr UINT32 PlayerName_Buffer = 0x1EC0;
    constexpr UINT32 CurrentLootingPlayers = 0x1A68;
    constexpr UINT32 PwdSum = 0x0E28;
    constexpr UINT32 Password = 0x0DCC;
    constexpr UINT32 MorseCodeSuccessInfo = 0x0DD0;
    constexpr UINT32 HackPcMiniGameType = 0x0E58;
    constexpr UINT32 FingerprintInfo = 0x0FA0;

    constexpr UINT32 bStopFly = 0x1614;
    constexpr UINT32 bIsPreDestroyed = 0x098A;
	
	// Steam
    //constexpr UINT32 UPTRIndex = 0x14536A6C;
    //constexpr UINT32 UPTREnable = 0x14536A70;
    //constexpr UINT32 UPTRKey = 0x14536A74;
    //constexpr UINT32 SwitchEncryptor = 0x14536A28;
    //constexpr UINT32 EncBase0 = 0x14540DF8;
    //constexpr UINT32 EncBase1 = 0x141A5720;

    //constexpr UINT32 PhysXSDK = 0x001F8878;
    //constexpr UINT32 UWorld = 0x13C187A8;
    //constexpr UINT32 Engine = 0x00000000;
    //constexpr UINT32 Matix = 0x00000000;
    //constexpr UINT32 GNames = 0x14544B80;
    //constexpr UINT32 GObjects = 0x1455E2A8;
    //constexpr UINT32 NumElementsPerChunk = 0x10000;
    //constexpr UINT32 ObjID = 0x001C;
    //constexpr UINT32 UObject_Name = 0x001C;
    //constexpr UINT32 UObject_Number = 0x0020;
    //constexpr UINT32 UObject_Index = 0x24;
    //constexpr UINT32 UObject_Class = 0x0008;
    //constexpr UINT32 UObject_Outer = 0x0010;
    //constexpr UINT32 UObject_Size = 0x0018;
    //constexpr UINT32 UObject_Inherit = 0x0050;
    //constexpr UINT32 Actor = 0x0098;
    //constexpr UINT32 ComponentToWorld = 0x0210;
    //constexpr UINT32 ComponentLocation = 0x0220;
    //constexpr UINT32 ComponentRotation = 0x0230;
    //constexpr UINT32 WorldToMap = 0x064C;
    //constexpr UINT32 GLocalPlayer = 0x14697690;

    //constexpr UINT32 bEnableCameraEncrypt = 0x146A7FF3;
    //constexpr UINT32 CameraEncryptIndex = 0x13C127F0;
    //constexpr UINT32 CameraKey1 = 0x13C127E8;
    //constexpr UINT32 CameraKey2 = 0x13C127EC;
    //constexpr UINT32 CameraOffset1 = 0x2F2F0;
    //constexpr UINT32 CameraOffset2 = 0x09E0;
    //constexpr UINT32 CameraOffset3 = 0x2FCD0;

    //constexpr UINT32 EncryptArray = 0x00000000;
    //constexpr UINT32 EncryptArrayActor = 0x00000000;
    //constexpr UINT32 InventoryItemInfo = 0x0ED0;
    //constexpr UINT32 FinalRefBoneInfo = 0x01D8;

    //constexpr UINT32 GameViewport = 0x0910;
    //constexpr UINT32 World = 0x0078;
    //constexpr UINT32 OwningGameInstance = 0x0190;
    //constexpr UINT32 LocalPlayers = 0x0038;
    //constexpr UINT32 NetDriver = 0x0030;
    //constexpr UINT32 NetDriverLevels = 0x0518;
    //constexpr UINT32 PersistentLevel = 0x00F8;
    //constexpr UINT32 Levels = 0x0158;

    //constexpr UINT32 GameState = 0x0140;
    //constexpr UINT32 InteractSystemComponent = 0x07C0;
    //constexpr UINT32 MapDoorInfoArray = 0x05A8;
    //constexpr UINT32 KeyID = 0x0020;
    //constexpr UINT32 KeyLocation = 0x0030;
    //constexpr UINT32 DFMGamePlayerMode = 0x0659;
    //constexpr UINT32 DisplayName = 0x0678;
    //constexpr UINT32 LevelName = 0x0690;

    //constexpr UINT32 PlayerController = 0x0030;
    //constexpr UINT32 ControlRotation = 0x03D8;
    //constexpr UINT32 bShowMouseCursor = 0x0588;
    //constexpr UINT32 AcknowledgedPawn = 0x03F0;

    //constexpr UINT32 MyHUD = 0x0400;
    //constexpr UINT32 Controllers = 0x0468;
    //constexpr UINT32 ChildControllers = 0x00B0;
    //constexpr UINT32 View = 0x0088;
    //constexpr UINT32 Visibility = 0x0116;

    //constexpr UINT32 CurrentScale = 0x0528;
    //constexpr UINT32 CurrentMapUVPos = 0x052C;
    //constexpr UINT32 WorldCenter = 0x04B0;
    //constexpr UINT32 WorldExtent = 0x04BC;
    //constexpr UINT32 MapSize = 0x0520;

    //constexpr UINT32 PlayerCameraManager = 0x0408;
    //constexpr UINT32 ViewTarget = 0x2DEC0;
    //constexpr UINT32 CameraCachePrivate = 0x2F2E0;
    //constexpr UINT32 GPCameraModeComponent = 0x30A0;
    //constexpr UINT32 PlayerViewPitch = 0x01DC;
    //constexpr UINT32 PlayerViewYaw = 0x01E0;
    //constexpr UINT32 DefaultFOV = 0x0388;

    //constexpr UINT32 bActorIsBeingDestroyed = 0x0095;
    //constexpr UINT32 RootComponent = 0x0180;
    //constexpr UINT32 ComponentVelocity = 0x0190;
    //constexpr UINT32 Mesh = 0x03D0;
    //constexpr UINT32 BoneArray = 0x0728;
    //constexpr UINT32 SkeletalMesh = 0x06F8;
    //constexpr UINT32 bAlwaysCreatePhysicsState = 0x0269;

    //constexpr UINT32 AnimScriptInstance = 0x0958;
    //constexpr UINT32 LocalProxy = 0x0280;
    //constexpr UINT32 LogicADSPercent = 0x0A70;

    //constexpr UINT32 DeadInfo = 0x0C88;
    //constexpr UINT32 KillerUin = 0x0038;
    //constexpr UINT32 LookingRotation = 0x12AC;
    //constexpr UINT32 LastIsDead = 0x0CF1;
    //constexpr UINT32 bFighting = 0x30B4;

    //constexpr UINT32 HealthComp = 0x0F68;
    //constexpr UINT32 HealthSet = 0x0248;
    //constexpr UINT32 Health = 0x0038;
    //constexpr UINT32 MaxHealth = 0x0050;
    //constexpr UINT32 ImpendingDeathHealth = 0x00E8;
    //constexpr UINT32 MaxImpendingDeathHealth = 0x00F8;
    //constexpr UINT32 ArmorHealth = 0x0070;
    //constexpr UINT32 MaxArmorHealth = 0x0088;
    //constexpr UINT32 HelmetArmorHealth = 0x0098;
    //constexpr UINT32 MaxHelmetArmorHealth = 0x00B0;

    //constexpr UINT32 CharacterEquipComponentCache = 0x2048;
    //constexpr UINT32 EquipmentInfoArray = 0x01D8;
    //constexpr UINT32 EquipedArmorInfoArray = 0x01E8;

    //constexpr UINT32 WeaponManagerComponent = 0x30A8;
    //constexpr UINT32 WeaponIDList = 0x01B8;
    //constexpr UINT32 WeaponList = 0x0198;
    //constexpr UINT32 AssetFallBackPartNodes = 0x0A90;

    //constexpr UINT32 CacheCurWeapon = 0x15E8;
    //constexpr UINT32 WeaponID = 0x0820;
    //constexpr UINT32 CachedAttributeSetWeaponAmmo = 0x1120;
    //constexpr UINT32 WeaponAmmoCount = 0x0048;
    //constexpr UINT32 CachedAttributeSetFireMode = 0x1118;
    //constexpr UINT32 FiringMode = 0x0118;
    //constexpr UINT32 WeaponMesh = 0x0370;
    //constexpr UINT32 WeaponDataComponentState = 0x0418;
    //constexpr UINT32 Rep_CurStateType = 0x0480;
    //constexpr UINT32 WeaponFuncComponentFireShakeCache = 0x0BB0;
    //constexpr UINT32 RecoilPitch = 0x0188;
    //constexpr UINT32 AllBlueprintCreatedComponents = 0x0220;
    //constexpr UINT32 FireRecoil = 0x2940;
    //constexpr UINT32 WeaponDataComponentFiring = 0x1358;
    //constexpr UINT32 ContinueFireCount = 0x05F0;
    //constexpr UINT32 FireRecoilMethod = 0x0508;
    //constexpr UINT32 RecoilModifierConfigForAiming = 0x09E0;
    //constexpr UINT32 ContinueShotRecoil = 0x0248;
    //constexpr UINT32 ContinueShotRecoilLoop = 0x0488;
    //constexpr UINT32 HorizontalRecoil = 0x0000;
    //constexpr UINT32 VerticalRecoil = 0x0060;
    //constexpr UINT32 WeaponRecoilPairScale = 0x0048;
    //constexpr UINT32 WeaponRecoilPairRecoils = 0x0050;
    //constexpr UINT32 FCFiring = 0x0038;
    //constexpr UINT32 CurrentFireMode = 0x0178;
    //constexpr UINT32 Params = 0x00C8;
    //constexpr UINT32 BulletBaseParam = 0x0048;
    //constexpr UINT32 InitSpeed = 0x0024;

    //constexpr UINT32 PlayerState = 0x0390;
    //constexpr UINT32 PlayerArray = 0x0388;
    //constexpr UINT32 PlayerNamePrivate = 0x0478;
    //constexpr UINT32 Uin = 0x0498;
    //constexpr UINT32 bFinishGame = 0x04C8;
    //constexpr UINT32 bDead = 0x04B4;
    //constexpr UINT32 TeamId = 0x066C;
    //constexpr UINT32 InnerTeamIndex = 0x04B0;
    //constexpr UINT32 Camp = 0x0670;
    //constexpr UINT32 bIsDeadBox = 0x0968;
    //constexpr UINT32 HeroID = 0x09B8;

    //constexpr UINT32 bIsOpened = 0x1D52;
    //constexpr UINT32 OpeningPlayerId = 0x1D58;
    //constexpr UINT32 bFirstOpened = 0x0DE8;
    //constexpr UINT32 RepItemArrayItems = 0x19C8;
    //constexpr UINT32 ItemID = 0x0010;
    //constexpr UINT32 ItemRow = 0x0578;
    //constexpr UINT32 Quality = 0x0068;
    //constexpr UINT32 InitialGuidePrice = 0x00D8;
    //constexpr UINT32 PickupItemInfo = 0x0F10;
    //constexpr UINT32 bLooted = 0x1F68;
    //constexpr UINT32 PlayerName_Buffer = 0x1EC0;
    //constexpr UINT32 CurrentLootingPlayers = 0x1A68;
    //constexpr UINT32 PwdSum = 0x0E28;
    //constexpr UINT32 Password = 0x0DCC;
    //constexpr UINT32 MorseCodeSuccessInfo = 0x0DD0;
    //constexpr UINT32 HackPcMiniGameType = 0x0E58;
    //constexpr UINT32 FingerprintInfo = 0x0FA0;

    //constexpr UINT32 bStopFly = 0x1614;
    //constexpr UINT32 bIsPreDestroyed = 0x098A;
	
	
	// Garena
    /*constexpr UINT32 UPTRIndex = 0x1455B36C;
    constexpr UINT32 UPTREnable = 0x1455B370;
    constexpr UINT32 UPTRKey = 0x1455B374;
    constexpr UINT32 SwitchEncryptor = 0x1455B328;
    constexpr UINT32 EncBase0 = 0x145656F8;
    constexpr UINT32 EncBase1 = 0x141CA3F0;

    constexpr UINT32 PhysXSDK = 0x001F8878;
    constexpr UINT32 UWorld = 0x13C35F28;
    constexpr UINT32 Engine = 0x00000000;
    constexpr UINT32 Matix = 0x00000000;
    constexpr UINT32 GNames = 0x14569480;
    constexpr UINT32 GObjects = 0x14582BA8;
    constexpr UINT32 NumElementsPerChunk = 0x10000;
    constexpr UINT32 ObjID = 0x001C;
    constexpr UINT32 UObject_Name = 0x001C;
    constexpr UINT32 UObject_Number = 0x0020;
    constexpr UINT32 UObject_Index = 0x24;
    constexpr UINT32 UObject_Class = 0x0008;
    constexpr UINT32 UObject_Outer = 0x0010;
    constexpr UINT32 UObject_Size = 0x0018;
    constexpr UINT32 UObject_Inherit = 0x0050;
    constexpr UINT32 Actor = 0x0098;
    constexpr UINT32 ComponentToWorld = 0x0210;
    constexpr UINT32 ComponentLocation = 0x0220;
    constexpr UINT32 ComponentRotation = 0x0230;
    constexpr UINT32 WorldToMap = 0x064C;
    constexpr UINT32 GLocalPlayer = 0x146BBF90;

    constexpr UINT32 bEnableCameraEncrypt = 0x146CC8F3;
    constexpr UINT32 CameraEncryptIndex = 0x13C2FF70;
    constexpr UINT32 CameraKey1 = 0x13C2FF68;
    constexpr UINT32 CameraKey2 = 0x13C2FF6C;
    constexpr UINT32 CameraOffset1 = 0x2F2F0;
    constexpr UINT32 CameraOffset2 = 0x09E0;
    constexpr UINT32 CameraOffset3 = 0x2FCD0;

    constexpr UINT32 EncryptArray = 0x00000000;
    constexpr UINT32 EncryptArrayActor = 0x00000000;
    constexpr UINT32 InventoryItemInfo = 0x0ED0;
    constexpr UINT32 FinalRefBoneInfo = 0x01D8;

    constexpr UINT32 GameViewport = 0x0910;
    constexpr UINT32 World = 0x0078;
    constexpr UINT32 OwningGameInstance = 0x0190;
    constexpr UINT32 LocalPlayers = 0x0038;
    constexpr UINT32 NetDriver = 0x0030;
    constexpr UINT32 NetDriverLevels = 0x0518;
    constexpr UINT32 PersistentLevel = 0x00F8;
    constexpr UINT32 Levels = 0x0158;

    constexpr UINT32 GameState = 0x0140;
    constexpr UINT32 InteractSystemComponent = 0x07C0;
    constexpr UINT32 MapDoorInfoArray = 0x05A8;
    constexpr UINT32 KeyID = 0x0020;
    constexpr UINT32 KeyLocation = 0x0030;
    constexpr UINT32 DFMGamePlayerMode = 0x0659;
    constexpr UINT32 DisplayName = 0x0678;
    constexpr UINT32 LevelName = 0x0690;

    constexpr UINT32 PlayerController = 0x0030;
    constexpr UINT32 ControlRotation = 0x03D8;
    constexpr UINT32 bShowMouseCursor = 0x0588;
    constexpr UINT32 AcknowledgedPawn = 0x03F0;

    constexpr UINT32 MyHUD = 0x0400;
    constexpr UINT32 Controllers = 0x0468;
    constexpr UINT32 ChildControllers = 0x00B0;
    constexpr UINT32 View = 0x0088;
    constexpr UINT32 Visibility = 0x0116;

    constexpr UINT32 CurrentScale = 0x0528;
    constexpr UINT32 CurrentMapUVPos = 0x052C;
    constexpr UINT32 WorldCenter = 0x04B0;
    constexpr UINT32 WorldExtent = 0x04BC;
    constexpr UINT32 MapSize = 0x0520;

    constexpr UINT32 PlayerCameraManager = 0x0408;
    constexpr UINT32 ViewTarget = 0x2DEC0;
    constexpr UINT32 CameraCachePrivate = 0x2F2E0;
    constexpr UINT32 GPCameraModeComponent = 0x30A0;
    constexpr UINT32 PlayerViewPitch = 0x01DC;
    constexpr UINT32 PlayerViewYaw = 0x01E0;
    constexpr UINT32 DefaultFOV = 0x0388;

    constexpr UINT32 bActorIsBeingDestroyed = 0x0095;
    constexpr UINT32 RootComponent = 0x0180;
    constexpr UINT32 ComponentVelocity = 0x0190;
    constexpr UINT32 Mesh = 0x03D0;
    constexpr UINT32 BoneArray = 0x0728;
    constexpr UINT32 SkeletalMesh = 0x06F8;
    constexpr UINT32 bAlwaysCreatePhysicsState = 0x0269;

    constexpr UINT32 AnimScriptInstance = 0x0958;
    constexpr UINT32 LocalProxy = 0x0280;
    constexpr UINT32 LogicADSPercent = 0x0A70;

    constexpr UINT32 DeadInfo = 0x0C88;
    constexpr UINT32 KillerUin = 0x0038;
    constexpr UINT32 LookingRotation = 0x12AC;
    constexpr UINT32 LastIsDead = 0x0CF1;
    constexpr UINT32 bFighting = 0x30B4;

    constexpr UINT32 HealthComp = 0x0F68;
    constexpr UINT32 HealthSet = 0x0248;
    constexpr UINT32 Health = 0x0038;
    constexpr UINT32 MaxHealth = 0x0050;
    constexpr UINT32 ImpendingDeathHealth = 0x00E8;
    constexpr UINT32 MaxImpendingDeathHealth = 0x00F8;
    constexpr UINT32 ArmorHealth = 0x0070;
    constexpr UINT32 MaxArmorHealth = 0x0088;
    constexpr UINT32 HelmetArmorHealth = 0x0098;
    constexpr UINT32 MaxHelmetArmorHealth = 0x00B0;

    constexpr UINT32 CharacterEquipComponentCache = 0x2048;
    constexpr UINT32 EquipmentInfoArray = 0x01D8;
    constexpr UINT32 EquipedArmorInfoArray = 0x01E8;

    constexpr UINT32 WeaponManagerComponent = 0x30A8;
    constexpr UINT32 WeaponIDList = 0x01B8;
    constexpr UINT32 WeaponList = 0x0198;
    constexpr UINT32 AssetFallBackPartNodes = 0x0A90;

    constexpr UINT32 CacheCurWeapon = 0x15E8;
    constexpr UINT32 WeaponID = 0x0820;
    constexpr UINT32 CachedAttributeSetWeaponAmmo = 0x1120;
    constexpr UINT32 WeaponAmmoCount = 0x0048;
    constexpr UINT32 CachedAttributeSetFireMode = 0x1118;
    constexpr UINT32 FiringMode = 0x0118;
    constexpr UINT32 WeaponMesh = 0x0370;
    constexpr UINT32 WeaponDataComponentState = 0x0418;
    constexpr UINT32 Rep_CurStateType = 0x0480;
    constexpr UINT32 WeaponFuncComponentFireShakeCache = 0x0BB0;
    constexpr UINT32 RecoilPitch = 0x0188;
    constexpr UINT32 AllBlueprintCreatedComponents = 0x0220;
    constexpr UINT32 FireRecoil = 0x2940;
    constexpr UINT32 WeaponDataComponentFiring = 0x1358;
    constexpr UINT32 ContinueFireCount = 0x05F0;
    constexpr UINT32 FireRecoilMethod = 0x0508;
    constexpr UINT32 RecoilModifierConfigForAiming = 0x09E0;
    constexpr UINT32 ContinueShotRecoil = 0x0248;
    constexpr UINT32 ContinueShotRecoilLoop = 0x0488;
    constexpr UINT32 HorizontalRecoil = 0x0000;
    constexpr UINT32 VerticalRecoil = 0x0060;
    constexpr UINT32 WeaponRecoilPairScale = 0x0048;
    constexpr UINT32 WeaponRecoilPairRecoils = 0x0050;
    constexpr UINT32 FCFiring = 0x0038;
    constexpr UINT32 CurrentFireMode = 0x0178;
    constexpr UINT32 Params = 0x00C8;
    constexpr UINT32 BulletBaseParam = 0x0048;
    constexpr UINT32 InitSpeed = 0x0024;

    constexpr UINT32 PlayerState = 0x0390;
    constexpr UINT32 PlayerArray = 0x0388;
    constexpr UINT32 PlayerNamePrivate = 0x0478;
    constexpr UINT32 Uin = 0x0498;
    constexpr UINT32 bFinishGame = 0x04C8;
    constexpr UINT32 bDead = 0x04B4;
    constexpr UINT32 TeamId = 0x066C;
    constexpr UINT32 InnerTeamIndex = 0x04B0;
    constexpr UINT32 Camp = 0x0670;
    constexpr UINT32 bIsDeadBox = 0x0968;
    constexpr UINT32 HeroID = 0x09B8;

    constexpr UINT32 bIsOpened = 0x1D52;
    constexpr UINT32 OpeningPlayerId = 0x1D58;
    constexpr UINT32 bFirstOpened = 0x0DE8;
    constexpr UINT32 RepItemArrayItems = 0x19C8;
    constexpr UINT32 ItemID = 0x0010;
    constexpr UINT32 ItemRow = 0x0578;
    constexpr UINT32 Quality = 0x0068;
    constexpr UINT32 InitialGuidePrice = 0x00D8;
    constexpr UINT32 PickupItemInfo = 0x0F10;
    constexpr UINT32 bLooted = 0x1F68;
    constexpr UINT32 PlayerName_Buffer = 0x1EC0;
    constexpr UINT32 CurrentLootingPlayers = 0x1A68;
    constexpr UINT32 PwdSum = 0x0E28;
    constexpr UINT32 Password = 0x0DCC;
    constexpr UINT32 MorseCodeSuccessInfo = 0x0DD0;
    constexpr UINT32 HackPcMiniGameType = 0x0E58;
    constexpr UINT32 FingerprintInfo = 0x0FA0;

    constexpr UINT32 bStopFly = 0x1614;
    constexpr UINT32 bIsPreDestroyed = 0x098A;*/
}