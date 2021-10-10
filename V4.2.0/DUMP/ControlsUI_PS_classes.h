// WidgetBlueprintGeneratedClass ControlsUI_PS.ControlsUI_PS_C
// Size: 0x2b0 (Inherited: 0x270)
struct UControlsUI_PS_C : UControlsUI_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	UCanvasPanel* CanvasPanel_47; // 0x278(0x08)
	UControlsText_C* ControlsText_C_384; // 0x280(0x08)
	UControlsText_C* ControlsText_C_1309; // 0x288(0x08)
	UControlsText_C* ControlsText_C_1472; // 0x290(0x08)
	UControlsText_C* ControlsText_C_1868; // 0x298(0x08)
	UTextBlock* Disclaimer; // 0x2a0(0x08)
	UImage* Image_96; // 0x2a8(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void RefreshExtra();
	void ExecuteUbergraph_ControlsUI_PS(int32_t EntryPoint);
};

