// BlueprintGeneratedClass MainMenuSub.MainMenuSub_C
// Size: 0x298 (Inherited: 0x228)
struct AMainMenuSub_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UBlueFire_Game_Instance_C* BlueFireGameInstance; // 0x230(0x08)
	int32_t Index; // 0x238(0x04)
	TArray<FString> OptionsCommands; // 0x240(0x10)
	FMulticastInlineDelegate CallPCGamepadSwitch; // 0x250(0x10)
	int32_t Language; // 0x260(0x04)
	UPCGamePadUI_C* ControlUI; // 0x268(0x08)
	bool IgnoreFirst; // 0x270(0x01)
	UGameIntro_C* GameIntroUI; // 0x278(0x08)
	bool SaveGameExist; // 0x280(0x01)
	USaveGame* SaveGame; // 0x288(0x08)
	AGameMenuController_C* GameMenuController_2_ExecuteUbergraph_MainMenuSub_RefProperty; // 0x290(0x08)

	void Is PS4 or Xbox(bool Result);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_1(FKey Key);
	void Completed_89A2B5A247FDDF3E4BF0D7B96F3F6F45(USaveGame* SaveGame, bool bSuccess);
	void Completed_645F2B98406403FED80B04A0AC5C1FF7(USaveGame* SaveGame, bool bSuccess);
	void Completed_A29928B44AE942E5A63270AAA7B2E68B(USaveGame* SaveGame, bool bSuccess);
	void UpdateMenuHUD();
	void KeyCheck(FKey Key);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SetLanguage(bool Use Default Language);
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void FinishIntro();
	void ReceiveBeginPlay();
	void OpenSettingsSave();
	void BackFromSettings();
	void ChangeStadiaController();
	void BindStadiaController();
	void ApplySettings(bool Graphics);
	void Command();
	void ExecuteUbergraph_MainMenuSub(int32_t EntryPoint);
	void CallPCGamepadSwitch__DelegateSignature();
};

