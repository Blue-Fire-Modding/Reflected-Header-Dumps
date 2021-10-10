// WidgetBlueprintGeneratedClass Message_PopUp.Message_PopUp_C
// Size: 0x26c (Inherited: 0x230)
struct UMessage_PopUp_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UTextBlock* TextBlock_49; // 0x248(0x08)
	FText Text; // 0x250(0x18)
	float Playback Speed; // 0x268(0x04)

	void Construct();
	void ReConstruct(FText InText, bool SkipReName);
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_Message_PopUp(int32_t EntryPoint);
};

