// WidgetBlueprintGeneratedClass InventoryItem.InventoryItem_C
// Size: 0x2c5 (Inherited: 0x230)
struct UInventoryItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Unselect; // 0x238(0x08)
	UWidgetAnimation* Equip; // 0x240(0x08)
	UWidgetAnimation* SelectionIdle; // 0x248(0x08)
	UTextBlock* Amount; // 0x250(0x08)
	UTextBlock* Amount_2; // 0x258(0x08)
	UImage* AttackArrow; // 0x260(0x08)
	UScaleBox* Box; // 0x268(0x08)
	UImage* Equipped; // 0x270(0x08)
	UImage* Frame; // 0x278(0x08)
	UImage* Frame_2; // 0x280(0x08)
	UHorizontalBox* HorizontalBox_145; // 0x288(0x08)
	UImage* ItemImage; // 0x290(0x08)
	UImage* nbACK; // 0x298(0x08)
	UOverlay* Overlay_124; // 0x2a0(0x08)
	UOverlay* Overlay_275; // 0x2a8(0x08)
	UImage* Selection; // 0x2b0(0x08)
	UImage* SpecialKeyItemFunction; // 0x2b8(0x08)
	enum class Items Item; // 0x2c0(0x01)
	bool Valid; // 0x2c1(0x01)
	bool Select; // 0x2c2(0x01)
	enum class Tunics Tunic; // 0x2c3(0x01)
	enum class Weapons Sword; // 0x2c4(0x01)

	void EquipItem();
	void PreConstruct(bool IsDesignTime);
	void Unselected();
	void Update(FInventory Item, bool Valid, bool Equipped, enum class Tunics Tunic, enum class InventoryItemType Type, enum class Weapons Sword, bool GrayedOut);
	void Selected();
	void ExecuteUbergraph_InventoryItem(int32_t EntryPoint);
};

