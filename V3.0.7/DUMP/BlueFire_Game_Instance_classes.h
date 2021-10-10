// BlueprintGeneratedClass BlueFire_Game_Instance.BlueFire_Game_Instance_C
// Size: 0x568 (Inherited: 0x1a8)
struct UBlueFire_Game_Instance_C : UBFGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)
	FSave_GameSettings GameSettings; // 0x1b0(0x30)
	FSave_Settings Settings; // 0x1e0(0x24)
	FSave_PlayerAbilities PlayerAbilities; // 0x204(0x0a)
	FSave_PlayerStats PlayerStats; // 0x210(0xa8)
	FSave_GameStats GameStats; // 0x2b8(0x28)
	FSave_WorldStats WorldStats; // 0x2e0(0xa0)
	FSave_System System; // 0x380(0x18)
	bool PlatformIsStadia; // 0x398(0x01)
	enum class Platform Platform; // 0x399(0x01)
	TArray<FInventory> Shop0-Mork; // 0x3a0(0x10)
	TArray<FInventory> Shop1-Onrom; // 0x3b0(0x10)
	TArray<FInventory> Shop2-SpiritHunter; // 0x3c0(0x10)
	TArray<FInventory> Shop3-Ari; // 0x3d0(0x10)
	TArray<FInventory> Shop4-Poti; // 0x3e0(0x10)
	TArray<FInventory> Shop5-POI; // 0x3f0(0x10)
	TArray<FInventory> Shop6-NA; // 0x400(0x10)
	TArray<enum class Items> AlreadyPickedUpItems; // 0x410(0x10)
	FPlayer_Equipment PlayerEquipment; // 0x420(0x50)
	bool GameStarted; // 0x470(0x01)
	TArray<enum class E_Emotes> Emotes; // 0x478(0x10)
	TArray<enum class E_DailyQuest> Today DailyQuests; // 0x488(0x10)
	FDateTime LastPlayDay; // 0x498(0x08)
	int32_t Selected Emote; // 0x4a0(0x04)
	FBuilding_Inventory_Stats Building_Inventory_Stats; // 0x4a8(0x30)
	TArray<FDressing_Pak> DressingSaves; // 0x4d8(0x10)
	TArray<FSaveQuest_Struct> Quests; // 0x4e8(0x10)
	int32_t Demo; // 0x4f8(0x04)
	int32_t DebugMode; // 0x4fc(0x04)
	bool DemoMode; // 0x500(0x01)
	FString Filename; // 0x508(0x10)
	FST_PlayerGhost PlayerGhost; // 0x518(0x14)
	TArray<FInventory> Shop7-Nilo; // 0x530(0x10)
	bool HasBeatenGame; // 0x540(0x01)
	enum class Platform StadiaPreKeyboard; // 0x541(0x01)
	bool UniversalHasBeatenGame; // 0x542(0x01)
	bool SpeedTimer; // 0x543(0x01)
	FString BuildV; // 0x548(0x10)
	FString DemoV; // 0x558(0x10)

	void OnControllerConnectedEvent(int32_t Type);
	void OnControllerDisconectedEvent(int32_t Type);
	void SetAchievement(FString Stat);
	void ExecuteUbergraph_BlueFire_Game_Instance(int32_t EntryPoint);
};

