// WidgetBlueprintGeneratedClass GameMenuTitle.GameMenuTitle_C
// Size: 0x272 (Inherited: 0x230)
struct UGameMenuTitle_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SelectAnim; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UOverlay* Overlay_1; // 0x248(0x08)
	UTextBlock* Text; // 0x250(0x08)
	FText Title; // 0x258(0x18)
	bool Selected; // 0x270(0x01)
	bool NotAvailable; // 0x271(0x01)

	void PreConstruct(bool IsDesignTime);
	void Select();
	void Unselect();
	void NoAvailableCall();
	void ExecuteUbergraph_GameMenuTitle(int32_t EntryPoint);
};

