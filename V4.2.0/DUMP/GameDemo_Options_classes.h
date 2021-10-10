// WidgetBlueprintGeneratedClass GameDemo_Options.GameDemo_Options_C
// Size: 0x290 (Inherited: 0x230)
struct UGameDemo_Options_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SelectAnim; // 0x238(0x08)
	UImage* Back; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)
	UImage* Image_338; // 0x250(0x08)
	UOverlay* Overlay_1; // 0x258(0x08)
	UTextBlock* Text; // 0x260(0x08)
	FText Title; // 0x268(0x18)
	bool Selected; // 0x280(0x01)
	bool NotAvailable; // 0x281(0x01)
	UMaterialInterface* Mat; // 0x288(0x08)

	void PreConstruct(bool IsDesignTime);
	void Select();
	void Unselect();
	void NoAvailableCall();
	void ExecuteUbergraph_GameDemo_Options(int32_t EntryPoint);
};

