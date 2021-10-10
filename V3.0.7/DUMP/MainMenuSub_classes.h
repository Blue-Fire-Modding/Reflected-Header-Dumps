// BlueprintGeneratedClass MainMenuSub.MainMenuSub_C
// Size: 0x270 (Inherited: 0x228)
struct AMainMenuSub_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UBlueFire_Game_Instance_C* BlueFireGameInstance; // 0x230(0x08)
	int32_t Index; // 0x238(0x04)
	TArray<FString> OptionsCommands; // 0x240(0x10)
	FMulticastInlineDelegate CallPCGamepadSwitch; // 0x250(0x10)
	int32_t Language; // 0x260(0x04)
	AGameMenuController_C* GameMenuController_2_ExecuteUbergraph_MainMenuSub_RefProperty; // 0x268(0x08)

	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_1(FKey Key);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void UpdateMenuHUD();
	void SetLanguage();
	void FinishIntro();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void KeyCheck(FKey Key);
	void ReceiveBeginPlay();
	void OpenSettingsSave();
	void ApplySettings(bool Graphics);
	void Command();
	void ExecuteUbergraph_MainMenuSub(int32_t EntryPoint);
	void CallPCGamepadSwitch__DelegateSignature();
};

