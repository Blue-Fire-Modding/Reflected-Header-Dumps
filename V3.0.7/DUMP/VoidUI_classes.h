// WidgetBlueprintGeneratedClass VoidUI.VoidUI_C
// Size: 0x2b8 (Inherited: 0x230)
struct UVoidUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade; // 0x238(0x08)
	UTextBlock* ActionText; // 0x240(0x08)
	UImage* Background; // 0x248(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x250(0x08)
	UHorizontalBox* HorizontalBox_1; // 0x258(0x08)
	UHorizontalBox* HorizontalBox_5; // 0x260(0x08)
	UImage* Image_2; // 0x268(0x08)
	UImage* Image_3; // 0x270(0x08)
	UImage* Image_4; // 0x278(0x08)
	UImage* Image_5; // 0x280(0x08)
	UImage* Image_6; // 0x288(0x08)
	UImage* Image_76; // 0x290(0x08)
	UOverlay* Overlay_1; // 0x298(0x08)
	UTextBlock* TextBlock_3; // 0x2a0(0x08)
	UTextBlock* TextBlock_4; // 0x2a8(0x08)
	UImage* VoidPreview; // 0x2b0(0x08)

	void SetVoid(int32_t Difficulty, bool Done, FText VoidName, UTexture2D* Texture);
	void FadeOut();
	void Rem();
	void Construct();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_VoidUI(int32_t EntryPoint);
};

