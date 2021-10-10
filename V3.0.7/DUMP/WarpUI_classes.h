// WidgetBlueprintGeneratedClass WarpUI.WarpUI_C
// Size: 0x310 (Inherited: 0x230)
struct UWarpUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_70; // 0x238(0x08)
	UImage* Image_87; // 0x240(0x08)
	UImage* Image_162; // 0x248(0x08)
	USelectCommands_C* SelectCommands; // 0x250(0x08)
	UWarpOption_C* WarpOption; // 0x258(0x08)
	UWarpOption_C* WarpOption_40; // 0x260(0x08)
	UWarpOption_C* WarpOption_78; // 0x268(0x08)
	UWarpOption_C* WarpOption_94; // 0x270(0x08)
	UWarpOption_C* WarpOption_175; // 0x278(0x08)
	UWarpOption_C* WarpOption_368; // 0x280(0x08)
	UWarpOption_C* WarpOption_843; // 0x288(0x08)
	UWrapBox* WrapBox_100; // 0x290(0x08)
	int32_t Index; // 0x298(0x04)
	APlayer_Character_BP_C* Player; // 0x2a0(0x08)
	UBlueFire_Game_Instance_C* GameInstance; // 0x2a8(0x08)
	TArray<FString> Options; // 0x2b0(0x10)
	TArray<UWarpOption_C*> CheckPointOptions; // 0x2c0(0x10)
	AWarpUIController_C* Controller; // 0x2d0(0x08)
	bool HasCheckpoint; // 0x2d8(0x01)
	TArray<enum class CheckPoints> CheckPointsArray; // 0x2e0(0x10)
	TArray<FName> TempVisibleAreas; // 0x2f0(0x10)
	FMulticastInlineDelegate Remove Call; // 0x300(0x10)

	void SetCheckpoints();
	void MoveSelection(bool Down, bool RefreshOnly);
	void Construct();
	void PCGamepadChange(enum class Platform Platform);
	void Confirm();
	void Back();
	void Remove();
	void ExitWarp();
	void ExecuteUbergraph_WarpUI(int32_t EntryPoint);
	void Remove Call__DelegateSignature();
};

