#pragma once

#include <unordered_map>
#include <string>
#include <Common/Constant.h>

inline std::unordered_map<std::string, EntityInfo> EntityContainerLists = {
	{"BP_AbilityBullet_AntiTankGrenade_C", {"Triple Blaster", EntityType::Throw}},
	{"BP_AbilityBullet_AntiTankGrenade_1_C", {"Triple Blaster", EntityType::Throw}},
	{"BP_AbilityBullet_AntiTankGrenade_2_C", {"Triple Blaster", EntityType::Throw}},
	{"BP_AbilityBullet_AntiTankGrenade_3_C", {"Triple Blaster", EntityType::Throw}},
	{"BP_GrenadeLauncher_Bullet_C", {"Grenade Launcher", EntityType::Throw}},
	{"ThrowableProjectileDefault_C", {"Grenade", EntityType::Throw}},
	{"BP_HighExpGrenadeLauncher_Bullet_C", {"Grenade Launcher", EntityType::Throw}},
	{"BP_EMPBullet_C", {"Grenade Launcher", EntityType::Throw}},
	//{"BP_SubMissile_C", {"Sub Loitering Munition", EntityType::Throw}},
	{"BP_ProjectileC4_C", {"Magnetic Bomb", EntityType::Throw}},
	{"BP_AbilityBullet_AirCannon_C", {"QLL32 Crouching Tiger", EntityType::Throw}},
	{"BP_C303FlashGrenade2_C", {"Flashbang", EntityType::Throw}},
	{"BP_AbilityBullet_C303_knifeDrone2_C", {"Whirlwind Disc", EntityType::Throw}},
	//{"BP_AbilitySuppressionMine_C", {"Sonic Trap", EntityType::Throw}},
	//{"BP_C202FlashDroneLight_C", {"Flash Drone", EntityType::Throw}},
	{"BP_IncendiaryGrenade_C", {"Incendiary", EntityType::Throw}},
	{"BP_WeaponBullet_FireArrow_C", {"Volt Arrow", EntityType::Throw}},
	{"BP_WeaponBullet_ProxSensorArrow_C", {"ESP Arrow", EntityType::Throw}},
	//{"BP_SuppressionMineProjectile_C", {"Sonic Trap", EntityType::Throw}},
	//{"BP_DFMAbilitySuppressionMine_C", {"Sonic Trap", EntityType::Throw}},
	//{"BP_PreviewMine_C", {"Sonic Trap", EntityType::Throw}},

	{"BP_AbilityBullet_Scout_C202FlashDrone_C", {"Flash Drone", EntityType::Throw, 0, "", false, true, false}},
	//{"BP_C202FlashDroneLight_C", {"Flash Drone", EntityType::Throw, 0, "", false, true, false}},
	{"BP_C401_Drone_C", {"Sonic Drone", EntityType::Throw, 0, "", false, true, false}},
	//{"DroneRange_GEN_VARIABLE_BP_401DroneRange_C_CAT", {"Sonic Drone", EntityType::Throw, 0, "", false, true, false}},
	//{"VoicePrintActor_GEN_VARIABLE_Ability401_VoiceMasker_C_CAT", {"Sonic Drone", EntityType::Throw, 0, "", false, true, false}},
	{"BP_DFMAbilitySuppressionMine_C", {"Sonic Trap", EntityType::Throw, 0, "", false, true, false}},
	{"BP_GuidedCruiseMissile_C", {"Loitering Munition", EntityType::Throw, 0, "", false, true, false}},
	{"BP_BionicBird_C", {"Bionic Bird", EntityType::Throw, 0, "", false, true, false}},

	{"BP_Interactor_CodedLock3", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock2", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock1", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock4", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock5", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock6", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock7", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock8", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock9", {"Coded Lock", EntityType::CodedLock}},
	{"BP_Interactor_CodedLock10", {"Coded Lock", EntityType::CodedLock}},
	//{"BP_Interactor_RotateDoorBase3", {"Key Door", EntityType::Door}},
	//{"BP_Interactor_RotateDoor", {"Key Door", EntityType::Door}},
	//{"GameAcousticPortal13", {"Key Door", EntityType::Door}},
	//{"GameAcousticPortal28", {"Key Door", EntityType::Door}},

	{"BP_Inventory_DeadBody_C", {"Dead Body", EntityType::DeadBody}},
	//{"BP_Inventory_CarryBody_C", {"Dead Body", EntityType::DeadBody}},

	{"BP_Interact_Long2Spacepod", {"Airdrop", EntityType::Container}}, // 哈夫克返回舱
	{"BP_Interact_LongSpacepodBase_AWBGM_C", {"Airdrop", EntityType::Container}}, // 哈夫克返回舱
    {"BP_Interactor_Container_SafeBox_C", {"Safe Box", EntityType::Container}},                     // 保险箱
    {"BP_Interactor_Container_SafeBox", {"Safe Box", EntityType::Container}},                     // 保险箱
	{"BP_Interactor_Container_SafeBox10", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox9", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox8", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox7", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox6", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox5", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox4", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox3", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox2", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_Container_SafeBox1", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interact_SmallSafebox_C", {"Small Safe Box", EntityType::Container}}, // 小保险箱
	{"BP_Interact_Nest_C", {"Bird Nest", EntityType::Container}}, // 鸟巢
	{"BP_Interact_Nest", {"Bird Nest", EntityType::Container}}, // 鸟巢
	{"BP_InteractorContainer_PlasticCrate_C", {"Large Tool Box", EntityType::Container}}, // 大工具盒
	{"BP_InteractorContainer_OfficeBox_C", {"Delivery Box", EntityType::Container}}, // 快递箱
	{"BP_InteractorContainer_PaperBox_C", {"Delivery Box", EntityType::Container}}, // 快递箱
	{"BP_InteractorContainer_Dupmster_C", {"Garbage Bin", EntityType::Container}}, // 垃圾箱
	{"BP_InteractorContainer_ComputerCase_C", {"Computer Case", EntityType::Container}}, // 电脑机箱
	{"BP_InteractorContainer_AirCargoContainer_C", {"Air Cargo Container", EntityType::Container}}, // 航空储物箱
	{"BP_InteractorContainer_Militarybox8_C", {"Outdoor Military Crate", EntityType::Container}}, // 野外战备箱
	{"BP_InteractorContainer_ToolCabinetLarge_C", {"Tool Cabinet", EntityType::Container}}, // 工具柜
	{"BP_InteractorContainer_Cloth_HDSresearcher_C", {"Lab Coat", EntityType::Container}}, // 实验服
	{"BP_InteractorContainer_Server_C", {"Server", EntityType::Container}}, // 服务器
	{"BP_InteractorContainer_Militarybox2_C", {"Ammo Box", EntityType::Container}}, // 弹药箱
	{"BP_Interact_ShoppingBag_C", {"Travel Bag", EntityType::Container}}, // 旅行袋
	{"BP_InteractorContainer_computerbag2_C", {"Travel Bag", EntityType::Container}}, // 旅行袋
	{"BP_InteractorContainer_MedSupplyPile_C", {"Medical Supply Pile", EntityType::Container}}, // 医疗物资堆
	{"BP_InteractorContainer_Cloth_Grab2_C", {"Clothing", EntityType::Container}}, // 衣服
	{"BP_Interact_WellLid_C", {"Sewer", EntityType::Container}}, // 井盖
	{"BP_InteractorContainer_Militarybox6_C", {"Large Weapon Box", EntityType::Container}}, // 大武器箱
	{"BP_InteractorContainer_Cloth_Ground_C", {"Clothing", EntityType::Container}}, // 衣服
	{"BP_InteractorContainer_flightcase_C", {"Premium Storage Box", EntityType::Container}}, // 高级储物箱
	{"BP_InteractorContainer_Lxrysuitcase_C", {"Premium Travel Case", EntityType::Container}}, // 高级旅行箱
	{"BP_InteractorContainer_Handsuitcase_C", {"Briefcase", EntityType::Container}}, // 手提箱
	{"BP_InteractorContainer_She2EventSupplies3", {"Briefcase", EntityType::Container}}, // 手提箱
	{"BP_InteractorContainer_Suitcase_C", {"Briefcase", EntityType::Container}}, // 手提箱
	{"BP_InteractorContainer_ArknightsSupplies", {"Briefcase", EntityType::Container}}, // 手提箱
	//{"BP_InteractorContainer_PaperBox_C", {"Paper Box", EntityType::Container}}, // 纸盒
	{"BP_InteractorContainer_Militarybox7_C", {"Outdoor Military Crate", EntityType::Container}}, // 野外战备箱
	{"BP_InteractorContainer_MedicalKit_C", {"Medical Kit", EntityType::Container}}, // 医疗包
	{"BP_InteractorContainer_CabinetDrawer_C", {"Drawer Cabinet", EntityType::Container}}, // 抽屉柜
	{"BP_InteractorContainer_operationalbag_C", {"Hiking Backpack", EntityType::Container}}, // 登山包
	{"BP_Interact_Computer_C", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_PC_OpenDoor2", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Manning", {"Computer", EntityType::Container}}, // 电脑
	//{"BP_Interactor_SingleItemContainer_SafeBox_C", {"Safe Box", EntityType::Container}}, // 保险箱
	//{"BP_Interactor_SingleItemContainer_SafeBox2_C", {"Safe Box", EntityType::Container}}, // 保险箱
	{"BP_Interactor_SingleItemContainer_Cabinet_C", {"Storage Cabinet", EntityType::Container}}, // 储物柜
	{"BP_Interactor_SingleItemContainer_filecabinet_C", {"Storage Cabinet", EntityType::Container}}, // 储物柜
	{"BP_Interactor_SingleItemContainer_AgitatingLorry_C", {"Cement Mixer", EntityType::Container}}, // 水泥车
	{"BP_Interactor_SingleItemContainer_WeaponBox_C", {"Weapon Box", EntityType::Container}}, // 武器箱
	//{"BP_Interactor_ContainerTruck4", {"Container Truck", EntityType::Container}}, // 货柜车
	{"BP_InteractorContainer_Cloth_Grab_C", {"Clothing", EntityType::Container}}, // 衣服
	{"BP_InteractorContainer_ToolCabinetLarge_2_C", {"Tool Cabinet", EntityType::Container}}, // 工具柜
	{"BP_InteractorContainer_computerbag2_C", {"Travel Bag", EntityType::Container}}, // 电脑包
	{"BP_InteractorContainer_computerbag_C", {"Travel Bag", EntityType::Container}}, // 电脑包
	{"InventoryPickup_OpenBox", {"Unknown Container", EntityType::Container}}, // 未知容器

	{"BP_Interactor_SingleItemContainer_Deltashell_C", {"Delta Shell", EntityType::Container}}, // 三角蚌
	{"BP_Interactor_SingleItemContainer_Toilet_C", {"Toilet", EntityType::Container}}, // 马桶

	{"BP_Interact_Computer_Tide1", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide2", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide3", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide4", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide5", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide6", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide7", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide8", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide9", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide10", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide11", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide12", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide13", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide14", {"Computer", EntityType::Container}}, // 电脑
	{"BP_Interact_Computer_Tide15", {"Computer", EntityType::Container}}, // 电脑
};

void EntityListsInit();