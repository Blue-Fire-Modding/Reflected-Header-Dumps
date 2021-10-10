// BlueprintGeneratedClass BlueFire_Game_Instance.BlueFire_Game_Instance_C
// Size: 0x7c1 (Inherited: 0x1d8)
struct UBlueFire_Game_Instance_C : UBFGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1d8(0x08)
	FSave_GameSettings GameSettings; // 0x1e0(0x30)
	FSave_Settings Settings; // 0x210(0x28)
	FSave_PlayerAbilities PlayerAbilities; // 0x238(0x0a)
	FSave_PlayerStats PlayerStats; // 0x248(0xb8)
	FSave_GameStats GameStats; // 0x300(0x48)
	FSave_WorldStats WorldStats; // 0x350(0xa0)
	FSave_System System; // 0x3f0(0x18)
	bool PlatformIsStadia; // 0x408(0x01)
	FString Version; // 0x410(0x10)
	enum class Platform Platform; // 0x420(0x01)
	TArray<FInventory> Shop0-Mork; // 0x428(0x10)
	TArray<FInventory> Shop1-Onrom; // 0x438(0x10)
	TArray<FInventory> Shop2-SpiritHunter; // 0x448(0x10)
	TArray<FInventory> Shop3-Ari; // 0x458(0x10)
	TArray<FInventory> Shop4-Poti; // 0x468(0x10)
	TArray<FInventory> Shop5-POI; // 0x478(0x10)
	TArray<FInventory> Shop6-NA; // 0x488(0x10)
	TArray<enum class Items> AlreadyPickedUpItems; // 0x498(0x10)
	FPlayer_Equipment PlayerEquipment; // 0x4a8(0x50)
	bool GameStarted; // 0x4f8(0x01)
	TArray<enum class E_Emotes> Emotes; // 0x500(0x10)
	TArray<enum class E_DailyQuest> Today DailyQuests; // 0x510(0x10)
	FDateTime LastPlayDay; // 0x520(0x08)
	int32_t Selected Emote; // 0x528(0x04)
	FBuilding_Inventory_Stats Building_Inventory_Stats; // 0x530(0x30)
	TArray<FDressing_Pak> DressingSaves; // 0x560(0x10)
	TArray<FSaveQuest_Struct> Quests; // 0x570(0x10)
	int32_t Demo; // 0x580(0x04)
	int32_t DebugMode; // 0x584(0x04)
	bool IncludesZhAndKo; // 0x588(0x01)
	bool IncludesJa; // 0x589(0x01)
	bool DemoMode; // 0x58a(0x01)
	FString Filename; // 0x590(0x10)
	FST_PlayerGhost PlayerGhost; // 0x5a0(0x14)
	TArray<FInventory> Shop7-Nilo; // 0x5b8(0x10)
	bool HasBeatenGame; // 0x5c8(0x01)
	bool Brutal Mode Activated; // 0x5c9(0x01)
	enum class Platform StadiaPreKeyboard; // 0x5ca(0x01)
	bool UniversalHasBeatenGame; // 0x5cb(0x01)
	bool UseSpeedTimer; // 0x5cc(0x01)
	UPCGamepadConnect_C* GamepadUI; // 0x5d0(0x08)
	FMulticastInlineDelegate OnXboxSetUserName; // 0x5d8(0x10)
	bool IsControllerConnected; // 0x5e8(0x01)
	int32_t ControllerIndex; // 0x5ec(0x04)
	int32_t UserIndex; // 0x5f0(0x04)
	UXboxGamepadConnect_C* GamepadXboxUI; // 0x5f8(0x08)
	FMulticastInlineDelegate OnXboxLogout; // 0x600(0x10)
	FMulticastInlineDelegate OnXboxChangeUser; // 0x610(0x10)
	FMulticastInlineDelegate AddUI; // 0x620(0x10)
	FMulticastInlineDelegate RemoveUI; // 0x630(0x10)
	enum class KeyboardType KeyboardType; // 0x640(0x01)
	TArray<FKey> PC_RemapBlockedKeys; // 0x648(0x10)
	TArray<FName> PC_Default_KeysToMap; // 0x658(0x10)
	TArray<FKey> PC_Default_KeysToMapKeys; // 0x668(0x10)
	float SpeedTimerTick; // 0x678(0x04)
	FString SpeedTimerSlotName; // 0x680(0x10)
	bool HaveDLC_VoidMaster; // 0x690(0x01)
	bool HasBeatedDLC_VoidMaster; // 0x691(0x01)
	bool Has_VoidMaker; // 0x692(0x01)
	bool OpenMasterVoidMakerMode; // 0x693(0x01)
	FMulticastInlineDelegate StadiaChangeController; // 0x698(0x10)
	bool StadiaDefaultInput; // 0x6a8(0x01)
	TMap<FName, FST_AxisMapping> AxisMappings; // 0x6b0(0x50)
	TMap<FName, FST_ActionMapping> ActionMappings; // 0x700(0x50)
	bool HasPlayedVoidMakerTutorial; // 0x750(0x01)
	bool VMHideShortCuts; // 0x751(0x01)
	int32_t BossDeaths; // 0x754(0x04)
	bool IsGOGLogged; // 0x758(0x01)
	FMulticastInlineDelegate OnGOGLogin; // 0x760(0x10)
	int32_t WeaponsCount; // 0x770(0x04)
	int32_t TunicsCount; // 0x774(0x04)
	UObject* VMMongoPool; // 0x778(0x08)
	FString VMMongoDBConnection String; // 0x780(0x10)
	FString VMFoundLevel; // 0x790(0x10)
	FMulticastInlineDelegate VMBsonRead; // 0x7a0(0x10)
	FString VMTagsQuery; // 0x7b0(0x10)
	bool IsQA_VoidOfSorrows; // 0x7c0(0x01)

	void Is Xbox Series X(bool Result);
	void Get Xbox Amount Users Logged(int32_t Amount Users Logged);
	void Get Xbox Force Login(bool Force Login);
	void Get Xbox User Is Logged(bool IsLogged);
	void Get Xbox User Name(FString User Name);
	void Completed_8943EB0049BFC8602B4DF99B3C453C10(USaveGame* SaveGame, bool bSuccess);
	void GA ParryCount();
	void EnemyKilled();
	void GA Session();
	void GA SendEvent(enum class GameAnalytics GA Selector, FString String, float Value);
	void BossDeath();
	void InsertCreator(FString CreatorString);
	void SearchPopularThisMonth();
	void SearchByGamemode(int32_t GameMode);
	void SearchTopRated();
	void SearchByUsername(FString Username);
	void ResetBossDeath();
	void GOG Login();
	void SearchByTags(TArray<char> NewParam);
	void SearchByShareCode(FString ShareCode);
	void SeachOneId(FString VoidID);
	void SearchAllIds();
	void InsertLevel(FString LevelString);
	void ConnectToDatabase();
	void UpdateKeyboardType(int32_t KeyboardType);
	void AnyKeyPress(FKey Key);
	void StadiaStatCall(int32_t Event);
	void XboxShowLoginUI(bool Is Switch Profile);
	void XboxSetUserName();
	void XboxLogin();
	void Xbox Logout Menu();
	void NativeOnLoginUICloseEvent(int32_t LocalPlayerNum);
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus);
	void NativeOnControllerPairingEvent(int32_t ControllerIndex, int32_t NewUserId, int32_t OldUserId);
	void OnControllerConnectedEvent(int32_t Type);
	void OnControllerDisconectedEvent(int32_t Type);
	void Set Gamepad Control(int32_t Controller);
	void DesignEvent(FString EventId, float Value);
	void Get WeaponCount();
	void ProgressionEvent(char Status, FString Progression01);
	void Async Save Game(USaveGame* SaveGameObject, FString SlotName, int32_t UserIndex);
	void ChangeController(int32_t InputPin);
	void Get TunicsCount();
	void Set Achievement(FString Stat);
	void ExecuteUbergraph_BlueFire_Game_Instance(int32_t EntryPoint);
	void VMBsonRead__DelegateSignature();
	void OnGOGLogin__DelegateSignature(bool IsLogged);
	void StadiaChangeController__DelegateSignature();
	void RemoveUI__DelegateSignature();
	void AddUI__DelegateSignature();
	void OnXboxChangeUser__DelegateSignature();
	void OnXboxLogout__DelegateSignature();
	void OnXboxSetUserName__DelegateSignature();
};

