// WidgetBlueprintGeneratedClass TargetLockHint.TargetLockHint_C
// Size: 0x248 (Inherited: 0x230)
struct UTargetLockHint_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Loop; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)

	void Construct();
	void ModifierOn();
	void ModifierOff();
	void Set Visibility(bool Visible);
	void ExecuteUbergraph_TargetLockHint(int32_t EntryPoint);
};

