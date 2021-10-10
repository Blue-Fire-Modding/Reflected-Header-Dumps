// WidgetBlueprintGeneratedClass ShopItemWBP.ShopItemWBP_C
// Size: 0x280 (Inherited: 0x230)
struct UShopItemWBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Amount; // 0x238(0x08)
	UTextBlock* Cost; // 0x240(0x08)
	UImage* Image_6; // 0x248(0x08)
	UImage* Image_125; // 0x250(0x08)
	UImage* Image_200; // 0x258(0x08)
	UImage* ItemFrame; // 0x260(0x08)
	UImage* ItemImage; // 0x268(0x08)
	UTextBlock* Name; // 0x270(0x08)
	UImage* SimpleGlow; // 0x278(0x08)

	void Selected();
	void Unselected();
	void NotFound();
	void SetItemInfo(UMaterialInterface* Material, FText Name);
	void Update(FInventory Item);
	void ExecuteUbergraph_ShopItemWBP(int32_t EntryPoint);
};

