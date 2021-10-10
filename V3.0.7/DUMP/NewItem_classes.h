// WidgetBlueprintGeneratedClass NewItem.NewItem_C
// Size: 0x2c1 (Inherited: 0x230)
struct UNewItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade; // 0x238(0x08)
	UWidgetAnimation* Idle; // 0x240(0x08)
	UWidgetAnimation* Intro; // 0x248(0x08)
	UTextBlock* Amount; // 0x250(0x08)
	UImage* Background; // 0x258(0x08)
	UBorder* Border_83; // 0x260(0x08)
	UTextBlock* Description; // 0x268(0x08)
	UImage* DescriptionBar; // 0x270(0x08)
	UImage* Glow; // 0x278(0x08)
	UImage* Image_128; // 0x280(0x08)
	UImage* Item; // 0x288(0x08)
	UTextBlock* Name; // 0x290(0x08)
	UImage* Ok; // 0x298(0x08)
	USpacer* Spacer_1; // 0x2a0(0x08)
	UTextBlock* TextBlock_79; // 0x2a8(0x08)
	FMulticastInlineDelegate Removed; // 0x2b0(0x10)
	bool HasPickup; // 0x2c0(0x01)

	void Out();
	void PlayNewItem(FText InText, UMaterialInterface* Material_Image, FText Description, TArray<FItemEffectInfo> Stats, bool ShowStats, enum class InventoryItemType InventoryItemType, bool KeyItem, TArray<UAkAudioEvent*> AkEvent, int32_t Amount);
	void Construct();
	void UpdateUI();
	void ExecuteUbergraph_NewItem(int32_t EntryPoint);
	void Removed__DelegateSignature();
};

