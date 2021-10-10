// WidgetBlueprintGeneratedClass CamControlUI.CamControlUI_C
// Size: 0x2b0 (Inherited: 0x230)
struct UCamControlUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* 50; // 0x238(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x240(0x08)
	UImage* Image; // 0x248(0x08)
	UImage* Image_2; // 0x250(0x08)
	UImage* Image_3; // 0x258(0x08)
	UImage* Image_4; // 0x260(0x08)
	UImage* Image_7; // 0x268(0x08)
	UImage* Image_8; // 0x270(0x08)
	UImage* Image_9; // 0x278(0x08)
	UImage* Image_11; // 0x280(0x08)
	UImage* Image_13; // 0x288(0x08)
	UImage* Image_14; // 0x290(0x08)
	UImage* Image_83; // 0x298(0x08)
	UImage* Image_129; // 0x2a0(0x08)
	UImage* Image_309; // 0x2a8(0x08)

	void Hide();
	void Show();
	void UpdateUI();
	void Construct();
	void UpdateCamSpeed(FText InText);
	void ExecuteUbergraph_CamControlUI(int32_t EntryPoint);
};

