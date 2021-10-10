// WidgetBlueprintGeneratedClass InventoryActionList.InventoryActionList_C
// Size: 0x260 (Inherited: 0x230)
struct UInventoryActionList_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UInventoryActionListOption_C* Option00; // 0x238(0x08)
	UInventoryActionListOption_C* Option01; // 0x240(0x08)
	UInventoryActionListOption_C* Option02; // 0x248(0x08)
	UWrapBox* WrapBox_1; // 0x250(0x08)
	int32_t Length; // 0x258(0x04)
	int32_t SelectedOption; // 0x25c(0x04)

	void Set(TArray<FText> Options);
	void ReceiveMovement(bool Down, bool RefreshOnly, AInventoryController_C* InventoryController);
	void ExecuteUbergraph_InventoryActionList(int32_t EntryPoint);
};

