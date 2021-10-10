// WidgetBlueprintGeneratedClass Menu_ConfirmationBox.Menu_ConfirmationBox_C
// Size: 0x281 (Inherited: 0x230)
struct UMenu_ConfirmationBox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Select; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UImage* Image_59; // 0x248(0x08)
	UImage* Image_60; // 0x250(0x08)
	UOverlay* Overlay_1; // 0x258(0x08)
	UTextBlock* TextBlock_1; // 0x260(0x08)
	FText Text; // 0x268(0x18)
	bool IsSelected; // 0x280(0x01)

	void Selected();
	void Unselected();
	void SetText(FText InText);
	void PreConstruct(bool IsDesignTime);
	void ResetText();
	void ExecuteUbergraph_Menu_ConfirmationBox(int32_t EntryPoint);
};

