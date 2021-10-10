// BlueprintGeneratedClass BlueFireSaveGame.BlueFireSaveGame_C
// Size: 0x478 (Inherited: 0x28)
struct UBlueFireSaveGame_C : USaveGame {
	FSave_GameSettings GameSettings; // 0x28(0x30)
	FSave_Settings Settings; // 0x58(0x28)
	FSave_PlayerAbilities PlayerAbilities; // 0x80(0x0a)
	FSave_PlayerStats PlayerStats; // 0x90(0xb8)
	FSave_GameStats GameStats; // 0x148(0x48)
	FSave_WorldStats WorldStats; // 0x190(0xa0)
	FSave_System System; // 0x230(0x18)
	TArray<FInventory> ShopA; // 0x248(0x10)
	TArray<FInventory> ShopB; // 0x258(0x10)
	TArray<FInventory> ShopC; // 0x268(0x10)
	TArray<FInventory> ShopD; // 0x278(0x10)
	TArray<FInventory> ShopE; // 0x288(0x10)
	TArray<FInventory> ShopF; // 0x298(0x10)
	TArray<FInventory> ShopG; // 0x2a8(0x10)
	TArray<enum class Items> AlreadyPickedUpItems; // 0x2b8(0x10)
	FPlayer_Equipment PlayerEquipment; // 0x2c8(0x50)
	TArray<enum class E_Emotes> Emotes; // 0x318(0x10)
	TArray<enum class E_DailyQuest> Today DailyQuests; // 0x328(0x10)
	FDateTime LastPlayDay; // 0x338(0x08)
	int32_t Selected Emote; // 0x340(0x04)
	FBuilding_Inventory_Stats Building_Inventory; // 0x348(0x30)
	TArray<FDressing_Pak> DressingSaves; // 0x378(0x10)
	TArray<FSaveQuest_Struct> Quests; // 0x388(0x10)
	FString Filename; // 0x398(0x10)
	FST_PlayerGhost PlayerGhost; // 0x3a8(0x14)
	TArray<FInventory> ShopH; // 0x3c0(0x10)
	bool HasBeatenGame; // 0x3d0(0x01)
	bool UseSpeedTimer; // 0x3d1(0x01)
	bool HasBeatedDLC_VoidMaster; // 0x3d2(0x01)
	TMap<FName, FST_AxisMapping> AxisMappings; // 0x3d8(0x50)
	TMap<FName, FST_ActionMapping> ActionMappings; // 0x428(0x50)
};
