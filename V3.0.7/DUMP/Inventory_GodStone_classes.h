// WidgetBlueprintGeneratedClass Inventory_GodStone.Inventory_GodStone_C
// Size: 0x270 (Inherited: 0x230)
struct UInventory_GodStone_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* CollectedTime; // 0x238(0x08)
	UTextBlock* CounterTxt; // 0x240(0x08)
	UTextBlock* GodStoneName; // 0x248(0x08)
	UImage* Image_83; // 0x250(0x08)
	UImage* Image_516; // 0x258(0x08)
	USizeBox* SizeBox_1; // 0x260(0x08)
	UTextBlock* TextBlock_4; // 0x268(0x08)

	void Collected(FText Name, bool Collected, FText Time, UTexture2D* Texture, int32_t Shards);
	void PreConstruct(bool IsDesignTime);
	void Selected();
	void Unselected();
	void ExecuteUbergraph_Inventory_GodStone(int32_t EntryPoint);
};

