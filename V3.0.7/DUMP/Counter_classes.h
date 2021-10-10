// WidgetBlueprintGeneratedClass Counter.Counter_C
// Size: 0x271 (Inherited: 0x230)
struct UCounter_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeHUD; // 0x238(0x08)
	UBorder* Border_14; // 0x240(0x08)
	UImage* CounterImg; // 0x248(0x08)
	UTextBlock* CounterTxt; // 0x250(0x08)
	UImage* Image_99; // 0x258(0x08)
	FMulticastInlineDelegate CounterUpdate; // 0x260(0x10)
	bool Hidden; // 0x270(0x01)

	void UpdateImageCounter(UMaterialInterface* Material);
	void HideHUD();
	void ShowHUD();
	void UpdateValue(int32_t Amount, bool Has Total, int32_t Total);
	void Construct();
	void Re Construct();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_Counter(int32_t EntryPoint);
	void CounterUpdate__DelegateSignature();
};

