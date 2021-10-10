// BlueprintGeneratedClass Global_Controller.Global_Controller_C
// Size: 0x829 (Inherited: 0x220)
struct AGlobal_Controller_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDirectionalLightComponent* DirectionalLight; // 0x228(0x08)
	UExponentialHeightFogComponent* ExponentialHeightFog; // 0x230(0x08)
	UBillboardComponent* Billboard; // 0x238(0x08)
	UPostProcessComponent* PostProcess; // 0x240(0x08)
	float Timeline_0_Lerp_2890453349BB5BC5E77E1A8F1AE4C6BC; // 0x248(0x04)
	enum class ETimelineDirection Timeline_0__Direction_2890453349BB5BC5E77E1A8F1AE4C6BC; // 0x24c(0x01)
	UTimelineComponent* Timeline_1; // 0x250(0x08)
	float FogChangeColor_Lerp_E824A45544EFF3BD8246DB8F176787D1; // 0x258(0x04)
	enum class ETimelineDirection FogChangeColor__Direction_E824A45544EFF3BD8246DB8F176787D1; // 0x25c(0x01)
	UTimelineComponent* FogChangeColor; // 0x260(0x08)
	TArray<enum class Areas> DebugTestAreas; // 0x268(0x10)
	UMaterialInstanceDynamic* PPMaterial; // 0x278(0x08)
	bool Editor; // 0x280(0x01)
	bool Recorder Mode; // 0x281(0x01)
	bool UseNavMesh; // 0x282(0x01)
	bool IgnoreCommands; // 0x283(0x01)
	bool FullPlayer; // 0x284(0x01)
	bool Tutorials; // 0x285(0x01)
	FString CurrentFog; // 0x288(0x10)
	UBlueFireSaveGame_C* SaveGameObject; // 0x298(0x08)
	bool WallJump; // 0x2a0(0x01)
	bool DoubleJump; // 0x2a1(0x01)
	bool DownSmash; // 0x2a2(0x01)
	bool Dash; // 0x2a3(0x01)
	bool Attack; // 0x2a4(0x01)
	UBlueFire_Game_Instance_C* GameInstance; // 0x2a8(0x08)
	bool FireBall; // 0x2b0(0x01)
	bool Sprint; // 0x2b1(0x01)
	bool Grind; // 0x2b2(0x01)
	bool InfiniteStamina; // 0x2b3(0x01)
	float MasterTimeDilatation; // 0x2b4(0x04)
	bool Invinsible; // 0x2b8(0x01)
	FVector SavedEditorLocation; // 0x2bc(0x0c)
	bool bLock; // 0x2c8(0x01)
	bool CustomPlayer; // 0x2c9(0x01)
	FMulticastInlineDelegate PCGamepadChange; // 0x2d0(0x10)
	bool FreezeOnDebug; // 0x2e0(0x01)
	APlayer_Character_BP_C* Player; // 0x2e8(0x08)
	TArray<FName> VisibleLevels; // 0x2f0(0x10)
	bool AlreadyAddedLevel; // 0x300(0x01)
	bool LoadedLevel; // 0x301(0x01)
	FMulticastInlineDelegate DoneLoadingLevels; // 0x308(0x10)
	enum class Areas CurrentArea; // 0x318(0x01)
	bool VoidLoaded; // 0x319(0x01)
	UAkAudioEvent* LastAreaMusic; // 0x320(0x08)
	bool SpinAttack; // 0x328(0x01)
	bool GraphicDebugOptionsConsole; // 0x329(0x01)
	bool FogVisible; // 0x32a(0x01)
	int32_t Shots; // 0x32c(0x04)
	bool DebugMusic; // 0x330(0x01)
	bool DebugAmbiences_Deprecated; // 0x331(0x01)
	FLinearColor OriginalColor; // 0x334(0x10)
	FFogSettings Stoneheart; // 0x348(0x38)
	FFogSettings ArcaneTunnels; // 0x380(0x38)
	FFogSettings IceCavern; // 0x3b8(0x38)
	FFogSettings SandTemple; // 0x3f0(0x38)
	FFogSettings IronCaves; // 0x428(0x38)
	FFogSettings BlazeRiver; // 0x460(0x38)
	FFogSettings ShadowFortress; // 0x498(0x38)
	FFogSettings PenumbrasTemple; // 0x4d0(0x38)
	FFogSettings EyasForest; // 0x508(0x38)
	float OriginalFogDensity; // 0x540(0x04)
	float OriginalMaxOpacity; // 0x544(0x04)
	float OriginalStartDistance; // 0x548(0x04)
	float OriginalHeightFalloff; // 0x54c(0x04)
	bool DemoTimeout; // 0x550(0x01)
	enum class Weapons Weapon; // 0x551(0x01)
	enum class Tunics Tunic; // 0x552(0x01)
	TArray<enum class Spirits> EquippedSpirits; // 0x558(0x10)
	int32_t SpiritSlots; // 0x568(0x04)
	bool WaterDamage; // 0x56c(0x01)
	bool HideFromEnemies; // 0x56d(0x01)
	FSave_PlayerStats Stats; // 0x570(0xa8)
	TArray<FName> AllLevels; // 0x618(0x10)
	int32_t LevelLoadingIndex; // 0x628(0x04)
	int32_t AttackUpgrades; // 0x62c(0x04)
	int32_t LevelUnloadingIndex; // 0x630(0x04)
	int32_t MovementUpgrades; // 0x634(0x04)
	int32_t DefenseUpgrades; // 0x638(0x04)
	TArray<enum class E_DailyQuest> DailyQuestsList; // 0x640(0x10)
	ATutorialText_C* Tutorial; // 0x650(0x08)
	TArray<FFogSettings> FogSettings; // 0x658(0x10)
	FFogSettings CheckPointFog; // 0x668(0x38)
	bool BlockStreaming; // 0x6a0(0x01)
	AAllVoids_Controller_C* AllVoidsController; // 0x6a8(0x08)
	AActor* PlayerStart; // 0x6b0(0x08)
	TArray<FName> EditorVisibleLevels; // 0x6b8(0x10)
	bool VisibleMethodON_LoadMethodOff; // 0x6c8(0x01)
	int32_t LevelLoadingIndex2; // 0x6cc(0x04)
	TArray<FName> VisibleLevelsDebugLoad; // 0x6d0(0x10)
	AActor* UthasDemoStart; // 0x6e0(0x08)
	AActor* NuosStart; // 0x6e8(0x08)
	enum class StreamingChunks Chunk; // 0x6f0(0x01)
	TArray<FName> AllLevelsPermanent; // 0x6f8(0x10)
	FString AreaTravelString; // 0x708(0x10)
	FMulticastInlineDelegate SpecialAreaTravel; // 0x718(0x10)
	FTransform Travel New Loc; // 0x730(0x30)
	FVector TempLocation; // 0x760(0x0c)
	FMulticastInlineDelegate StreamOut; // 0x770(0x10)
	enum class Areas LastArea; // 0x780(0x01)
	UDebugLevel_C* DebugLevel; // 0x788(0x08)
	int32_t BeiraVesselIndex; // 0x790(0x04)
	bool ElevatorFindSuccess; // 0x794(0x01)
	ULoadScreen_C* LoadScreen; // 0x798(0x08)
	bool ShowingAreaIntro; // 0x7a0(0x01)
	FMulticastInlineDelegate AreaIntroFinished; // 0x7a8(0x10)
	bool DebugToolsOn; // 0x7b8(0x01)
	bool TurnOffMusic; // 0x7b9(0x01)
	bool TurnOffAmbiences; // 0x7ba(0x01)
	UAreaIntro_C* AreaIntro; // 0x7c0(0x08)
	AActor* CreditsCam; // 0x7c8(0x08)
	UQuest_PopUp_C* Quest Popup; // 0x7d0(0x08)
	float SleepTime; // 0x7d8(0x04)
	AActor* PauseCam; // 0x7e0(0x08)
	FMulticastInlineDelegate ShowCredits; // 0x7e8(0x10)
	bool CanShowAreaIntro; // 0x7f8(0x01)
	UWarpUI_C* WarpUI; // 0x800(0x08)
	FMulticastInlineDelegate RemoveUI; // 0x808(0x10)
	FMulticastInlineDelegate AddUI; // 0x818(0x10)
	bool PlayingCredits; // 0x828(0x01)

	void GetFogColor(enum class Areas Area, FLinearColor NewParam);
	void GetLevelName(enum class Areas Index, FName LevelName);
	void UserConstructionScript();
	void FogChangeColor__FinishedFunc();
	void FogChangeColor__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
	void OnNotifyBegin_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
	void OnInterrupted_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
	void OnBlendOut_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
	void OnCompleted_B6A6CF574BA6CB23D77D6EA2EA0CE3A4(FName NotifyName);
	void OnNotifyEnd_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
	void OnNotifyBegin_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
	void OnInterrupted_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
	void OnBlendOut_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
	void OnCompleted_55B65EA047C47014606FE8BD881805BF(FName NotifyName);
	void OnFailure_D9EECAA04BA716EFCEC8AB94A59F85B6();
	void OnSuccess_D9EECAA04BA716EFCEC8AB94A59F85B6();
	void OnFailure_BC2F8CEF4FAF939E19996C93B0A592EB(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
	void OnSuccess_BC2F8CEF4FAF939E19996C93B0A592EB(FName WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(FKey Key);
	void StartCastleAmb();
	void StartCtuscene();
	void EndCutscene();
	void TextAllVoids();
	void TextAllVoids1();
	void TextAllVoids2();
	void TextAllVoids3();
	void TextAllVoids4();
	void UmbraAnim();
	void UmbraTunic();
	void UmbraAnimReset();
	void Void Load Screen();
	void QuestStatusUpdate(enum class QuestStatusType Quest Operation, enum class Quests Quest);
	void Force Remove QuestPopUp();
	void AddAchievement(enum class Achievements Achievement);
	void StartWarp();
	void LoadDebugArea();
	void AddLevelToCurrentlyLoaded(TArray<FName> AreasToMakeVisible, bool Show);
	void DeathUnloadLevels();
	void RemoveLevelToCurrentlyLoaded(TArray<FName> Array);
	void VoidExitMakeLevelsVisible();
	void ClearLevelList();
	void LoadVoid(FName Void);
	void UnloadVoid();
	void EnterVoidLevelsHide();
	void LoadAllLevels();
	void ShowVisibleLevels();
	void Load(FName InName);
	void NextLevelLoad();
	void NextLevelUnload();
	void UnloadLevel(FName InName);
	void DebugLoadAll();
	void DebugReturnLoadAll();
	void TeleportToTempleEntrance(FString Origin);
	void Credi();
	void MakeVisible(FName InName);
	void NextLevelMakeVisible();
	void PrevLoaded();
	void AreaTravel(enum class StreamingChunks NewChunk, bool Show Area Name, TArray<FName> VisibleLevels, FTransform NewPlayerLocation, bool Debug, FString String, bool SkipNormalRespawn, bool Fade, bool Is Begin Play, bool Override Safe Spot, bool ShowAllLevels);
	void LoadNextArea();
	void Start();
	void CheckPointReload(enum class StreamingChunks Chunk, TArray<FName> VisibleLevels);
	void Retry Find Elevator();
	void RestartLoadFog();
	void GodStoneGrab(FText GodStoneName, bool MoveToLocation, FVector Location);
	void PlayerSuperFreeze();
	void AttackCamEffect();
	void PauseCallPCGamepadChange();
	void PrintSleep();
	void StartTimerSleep();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void NoSpaceInInventory();
	void GlobalAreaName();
	void ShowAreaName();
	void Remove AreaIntro();
	void Force Remove AreaIntro();
	void MoveFog();
	void ChangeFogColor(float PlayRate, FLinearColor NewColor);
	void RevertFogColor();
	void ChangeFogToCheckpoint(enum class Areas Area, bool Instant);
	void FogDeactivate();
	void FogActivate();
	void ChangeFogToString(bool Instant, FString Area, bool Construct, FString Origin);
	void ChangeFogColorStringTime(float PlayRate, FString String);
	void RevFog();
	void Play Credits(ULevelSequence* LevelSequence);
	void ReceiveBeginPlay();
	void Save(bool HiddenSave, bool Show HUD);
	void GamePercentAdd(float Percent);
	void Timer();
	void addshots();
	void UpdateDebugLevel(FName Void Name);
	void ShowDebugLevel(bool Show);
	void ExecuteUbergraph_Global_Controller(int32_t EntryPoint);
	void AddUI__DelegateSignature();
	void RemoveUI__DelegateSignature();
	void ShowCredits__DelegateSignature();
	void AreaIntroFinished__DelegateSignature();
	void StreamOut__DelegateSignature();
	void SpecialAreaTravel__DelegateSignature();
	void DoneLoadingLevels__DelegateSignature();
	void PCGamepadChange__DelegateSignature();
};

