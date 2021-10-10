// WidgetBlueprintGeneratedClass AutoSave.AutoSave_C
// Size: 0x258 (Inherited: 0x230)
struct UAutoSave_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Appear; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UImage* Image_124; // 0x248(0x08)
	UTextBlock* TextBlock_34; // 0x250(0x08)

	void Construct();
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void ExecuteUbergraph_AutoSave(int32_t EntryPoint);
};

