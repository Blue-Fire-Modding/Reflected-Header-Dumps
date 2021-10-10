// WidgetBlueprintGeneratedClass ControlsUI_Stadia.ControlsUI_Stadia_C
// Size: 0x268 (Inherited: 0x238)
struct UControlsUI_Stadia_C : UControlsUI_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	UControlsText_C* ControlsText_C_384; // 0x240(0x08)
	UControlsText_C* ControlsText_C_1309; // 0x248(0x08)
	UControlsText_C* ControlsText_C_1472; // 0x250(0x08)
	UControlsText_C* ControlsText_C_1868; // 0x258(0x08)
	UImage* Image_96; // 0x260(0x08)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Refresh();
	void ExecuteUbergraph_ControlsUI_Stadia(int32_t EntryPoint);
};

