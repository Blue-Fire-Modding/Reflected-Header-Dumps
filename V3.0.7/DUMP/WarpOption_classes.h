// WidgetBlueprintGeneratedClass WarpOption.WarpOption_C
// Size: 0x253 (Inherited: 0x230)
struct UWarpOption_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UImage* Image_84; // 0x240(0x08)
	UTextBlock* TextBlock_2; // 0x248(0x08)
	enum class CheckPoints CheckPoint; // 0x250(0x01)
	enum class Areas Area; // 0x251(0x01)
	bool NotActive; // 0x252(0x01)

	void SetText(FText InText);
	void Selected();
	void Unselected();
	void PreConstruct(bool IsDesignTime);
	void Undiscovered();
	void Set Checkpoint(enum class CheckPoints CheckPoint);
	void ExecuteUbergraph_WarpOption(int32_t EntryPoint);
};

