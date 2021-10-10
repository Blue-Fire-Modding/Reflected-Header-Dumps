// WidgetBlueprintGeneratedClass CollectedItem.CollectedItem_C
// Size: 0x270 (Inherited: 0x230)
struct UCollectedItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro; // 0x238(0x08)
	UTextBlock* Amount; // 0x240(0x08)
	UImage* Background; // 0x248(0x08)
	UTextBlock* Description; // 0x250(0x08)
	UImage* Image_356; // 0x258(0x08)
	UImage* ItemImage; // 0x260(0x08)
	UTextBlock* Text; // 0x268(0x08)

	void Play(FText InText, UMaterialInterface* Material_Image, FText Description, int32_t Value);
	void Construct();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_CollectedItem(int32_t EntryPoint);
};

