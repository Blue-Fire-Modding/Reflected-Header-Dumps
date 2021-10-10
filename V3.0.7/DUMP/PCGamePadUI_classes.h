// WidgetBlueprintGeneratedClass PCGamePadUI.PCGamePadUI_C
// Size: 0x269 (Inherited: 0x230)
struct UPCGamePadUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade; // 0x238(0x08)
	UImage* Icon; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)
	UImage* Image_111; // 0x250(0x08)
	UOverlay* Overlay_1; // 0x258(0x08)
	UTextBlock* TextBlock_2; // 0x260(0x08)
	enum class Platform Platform; // 0x268(0x01)

	void Construct();
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void Refresh(enum class Platform Platform);
	void TempRemove();
	void TempReAdd();
	void Check Is In Viewport();
	void ExecuteUbergraph_PCGamePadUI(int32_t EntryPoint);
};

