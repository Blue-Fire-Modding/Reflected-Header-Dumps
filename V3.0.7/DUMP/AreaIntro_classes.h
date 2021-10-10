// WidgetBlueprintGeneratedClass AreaIntro.AreaIntro_C
// Size: 0x270 (Inherited: 0x230)
struct UAreaIntro_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Text; // 0x238(0x08)
	UImage* Image_51; // 0x240(0x08)
	UOverlay* Overlay_1; // 0x248(0x08)
	UTextBlock* TextBlock_1; // 0x250(0x08)
	UTextBlock* TextBlock_9; // 0x258(0x08)
	FMulticastInlineDelegate Finished; // 0x260(0x10)

	void Construct();
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void Name(FText Area Name, bool Void);
	void Replay();
	void Force Finish();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_AreaIntro(int32_t EntryPoint);
	void Finished__DelegateSignature();
};

