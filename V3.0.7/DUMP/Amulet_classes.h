// WidgetBlueprintGeneratedClass Amulet.Amulet_C
// Size: 0x288 (Inherited: 0x230)
struct UAmulet_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Unselect; // 0x238(0x08)
	UWidgetAnimation* Equip; // 0x240(0x08)
	UWidgetAnimation* SelectionIdle; // 0x248(0x08)
	UScaleBox* Box; // 0x250(0x08)
	UButton* Button_1; // 0x258(0x08)
	UImage* Equipped; // 0x260(0x08)
	UImage* ItemImage; // 0x268(0x08)
	UImage* Selection; // 0x270(0x08)
	bool Valid; // 0x278(0x01)
	bool Select; // 0x279(0x01)
	bool On; // 0x27a(0x01)
	bool IsEquipped; // 0x27b(0x01)
	enum class Spirits Spirit; // 0x27c(0x01)
	UInventory_C* Inventory; // 0x280(0x08)

	void UpdateSpirit(int32_t ChildN, TArray<enum class Spirits> InventorySpirits, TArray<enum class Spirits> EquippedSpirits, UInventory_C* Inventory);
	void Selected();
	void Unselected();
	void EquipItem();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Amulet(int32_t EntryPoint);
};

