#include "Entity.h"
#include "Data.h"

std::unordered_map<std::string, EntityInfo> EntityPlayerLists = {
	//玩家
	{"BP_DFM_Character_Breakthrough_C", {"Player", EntityType::Player}},
	{"BP_DFMCharacter_SafeHouse_C", {"Player", EntityType::Player}},
	{"BP_DFMCharacter_C", {"Player", EntityType::Player}},
	{"BP_DFMCharacter_TutorialPlayerAi_C", {"Tutorial Player AI", EntityType::AI}},
	{"BP_DFMCharacter_AI_DT_C", {"Soldier", EntityType::AI}},
	{"BP_DFMAICharacter_ShielderLight_C", {"Shieldbearer", EntityType::AI}},
	{"BP_DFMCharacter_AI_DT_RPG_C", {"Rocketeer", EntityType::AI}},
	{"BP_DFMCharacter_AI_HS_C", {"Soldier", EntityType::AI}},
	{"BP_DFMAICharacter_HeavyMachineGun_HS_C", {"Machine Gunner", EntityType::AI}},
	{"BP_DFMAICharacter_ShielderLight_HS_C", {"Shieldbearer", EntityType::AI}},
	{"BP_DFMCharacter_AI_AlwaysFall_DTSniper_C", {"Sniper", EntityType::AI}},
	{"BP_DFMCharacter_AI_Crocodile_C", {"Crocodile", EntityType::AI}},
	{"BP_DFMAICharacter_HeavyMachineGun_C", {"Machine Gunner", EntityType::AI}},
	{"BP_DFMCharacter_AI_AlwaysFall_HSSniper_C", {"Sniper", EntityType::AI}},
	{"BP_DFMAICharacter_Firebat_HS_C", {"Flamethrower", EntityType::AI}},
	{"BP_DFMAICharacter_Firebat_C", {"Flamethrower", EntityType::AI}},
	{"BP_DFMAICharacter_HelicopterPilot_C", {"Soldier", EntityType::AI}},
	{"BP_DFMAICharacter_Boss03_C", {"Desmoulins", EntityType::BOSS}},

	{"BP_DFMCharacter_Boss05_C", {"Raven", EntityType::BOSS}},
	{"BP_DFMCharacter_BOSS05_C", {"Raven", EntityType::BOSS}},
	{"BP_DFMAICharacter_Boss05_C", {"Raven", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Boss05_C", {"Raven", EntityType::BOSS}},

	{"BP_DFMCharacter_Boss06_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMCharacter_BOSS06_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMAICharacter_Boss06_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Boss06_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Boss06_Warder_C", {"Warder", EntityType::BOSS}},
    {"BP_DFMCharacter_AI_Boss06_Warden_C", {"Warder", EntityType::BOSS}},
    {"BP_DFMCharacter_AI_Boss06_Warden_Attandent_C", {"Warder Attandent", EntityType::BOSS}},
	{"BP_DFMCharacterAI_Boss06_Warden_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMCharacterAI_Boss06_Warder_C", {"Warder", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Warder_C", {"Warder", EntityType::BOSS}},

	{"BP_DFMCharacter_AI_Boss05_HENC_C", {"Death Row", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_BossRCV_C", {"Desmoulins Car", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_SuicideCar_C", {"Suicide Car", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Maurice_C", {"Saeed Ziaten", EntityType::BOSS}},
	{"BP_DFMCharacter_AI_Reis_C", {"Reis", EntityType::BOSS}},
	{"BP_RangeTargetCharacter_C", {"Range Target", EntityType::AI}},

	{"BP_DFMCharacter_AI_Tide_DT_C", {"Jailer", EntityType::AI}},
	{"BP_DFMCharacter_AI_Tide_HS_C", {"Jailer", EntityType::AI}},
	{"BP_DFMCharacter_AI_AlwaysFall_HSSniper_Tide_C", {"Jailer", EntityType::AI}},
	{"BP_DFMAICharacter_ShielderLight_HS_Tide_C", {"Shieldbearer", EntityType::AI}},
};

void EntityListsInit()
{
	std::unordered_map<std::string, EntityInfo> EntityLists;
    EntityLists.insert(EntityPlayerLists.begin(), EntityPlayerLists.end());
    EntityLists.insert(EntityContainerLists.begin(), EntityContainerLists.end());
	GameData.Global.Data.Entitys.Infos = EntityLists;
}