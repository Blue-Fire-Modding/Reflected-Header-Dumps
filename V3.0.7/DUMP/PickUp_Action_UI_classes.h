// WidgetBlueprintGeneratedClass PickUp_Action_UI.PickUp_Action_UI_C
// Size: 0x278 (Inherited: 0x230)
struct UPickUp_Action_UI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Clicked; // 0x238(0x08)
	UWidgetAnimation* IdleAnim; // 0x240(0x08)
	UWidgetAnimation* Fade; // 0x248(0x08)
	UImage* ActionInput; // 0x250(0x08)
	UTextBlock* ActionText; // 0x258(0x08)
	UImage* Background; // 0x260(0x08)
	UHorizontalBox* HorizontalBox_1; // 0x268(0x08)
	UOverlay* Overlay_1; // 0x270(0x08)

	void Construct();
	void Remove(bool Click);
	void SetText(FText Action);
	void CheckAndSetText(UTextBlock* Target, FText A, UImage* Target2);
	void Idle();
	void SetPlatformIcon();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_PickUp_Action_UI(int32_t EntryPoint);
};

