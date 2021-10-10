// WidgetBlueprintGeneratedClass ItemEffect.ItemEffect_C
// Size: 0x259 (Inherited: 0x230)
struct UItemEffect_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	UImage* Image_2; // 0x240(0x08)
	USizeBox* SizeBox_1; // 0x248(0x08)
	UTextBlock* TextBlock_2; // 0x250(0x08)
	bool HideImage; // 0x258(0x01)

	void Set(int32_t Number, UTexture2D* Texture);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ItemEffect(int32_t EntryPoint);
};

