// WidgetBlueprintGeneratedClass DemoTextTutorial.DemoTextTutorial_C
// Size: 0x2c0 (Inherited: 0x230)
struct UDemoTextTutorial_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Idle; // 0x238(0x08)
	UWidgetAnimation* FadeIn; // 0x240(0x08)
	UImage* Background; // 0x248(0x08)
	UImage* Bar; // 0x250(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x258(0x08)
	UImage* Image_513; // 0x260(0x08)
	UTextBlock* Title; // 0x268(0x08)
	UTutorialImage_C* TutorialImage; // 0x270(0x08)
	UTutorialImage_C* TutorialImage_213; // 0x278(0x08)
	UTutorialImage_C* TutorialImage_383; // 0x280(0x08)
	UWrapBox* WrapBox_93; // 0x288(0x08)
	enum class TutorialList Type; // 0x290(0x01)
	APlayer_Character_BP_C* Player; // 0x298(0x08)
	FMulticastInlineDelegate Removed; // 0x2a0(0x10)
	TArray<FTutorialStructure> Array; // 0x2b0(0x10)

	void Play(enum class TutorialList Type);
	void PlayContinue(TArray<FTutorialStructure> Tut);
	void Remove();
	void updateButtons();
	void Refresh();
	void Construct();
	void ExecuteUbergraph_DemoTextTutorial(int32_t EntryPoint);
	void Removed__DelegateSignature();
};

