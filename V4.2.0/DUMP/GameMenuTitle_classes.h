// WidgetBlueprintGeneratedClass GameMenuTitle.GameMenuTitle_C
// Size: 0x280 (Inherited: 0x230)
struct UGameMenuTitle_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SelectAnim; // 0x238(0x08)
	UImage* DifficultyImg; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)
	UOverlay* Overlay_1; // 0x250(0x08)
	UTextBlock* Text; // 0x258(0x08)
	FText Title; // 0x260(0x18)
	bool Selected; // 0x278(0x01)
	bool NotAvailable; // 0x279(0x01)
	bool DifficultyShow; // 0x27a(0x01)
	int32_t Difficulty; // 0x27c(0x04)

	void PreConstruct(bool IsDesignTime);
	void Select();
	void Unselect();
	void NoAvailableCall();
	void Update Text(FText InText);
	void ExecuteUbergraph_GameMenuTitle(int32_t EntryPoint);
};

