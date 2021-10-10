// WidgetBlueprintGeneratedClass ItemName.ItemName_C
// Size: 0x260 (Inherited: 0x230)
struct UItemName_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Background; // 0x238(0x08)
	UImage* Image_178; // 0x240(0x08)
	UTextBlock* Name; // 0x248(0x08)
	enum class Items Item; // 0x250(0x01)
	UWidgetAnimation* Fade; // 0x258(0x08)

	void Remove();
	void Set(FText InText, bool Notify);
	void ShowPopUp();
	void Hide();
	void App();
	void TempRemove();
	void TempReAdd();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_ItemName(int32_t EntryPoint);
};

