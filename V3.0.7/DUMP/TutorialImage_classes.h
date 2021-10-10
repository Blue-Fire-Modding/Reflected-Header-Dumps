// WidgetBlueprintGeneratedClass TutorialImage.TutorialImage_C
// Size: 0x250 (Inherited: 0x230)
struct UTutorialImage_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Button; // 0x238(0x08)
	UTextBlock* Description; // 0x240(0x08)
	UImage* Image_68; // 0x248(0x08)

	void Set(FText Command, UMaterialInterface* Input, UMaterialInterface* Image, bool NonSquare, bool Empty);
	void ExecuteUbergraph_TutorialImage(int32_t EntryPoint);
};

