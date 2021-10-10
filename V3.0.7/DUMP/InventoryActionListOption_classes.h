// WidgetBlueprintGeneratedClass InventoryActionListOption.InventoryActionListOption_C
// Size: 0x250 (Inherited: 0x230)
struct UInventoryActionListOption_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UImage* Image_3; // 0x240(0x08)
	UTextBlock* TextBlock_2; // 0x248(0x08)

	void SetText(FText InText);
	void Selected();
	void Unselected();
	void ExecuteUbergraph_InventoryActionListOption(int32_t EntryPoint);
};

