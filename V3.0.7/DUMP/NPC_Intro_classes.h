// WidgetBlueprintGeneratedClass NPC_Intro.NPC_Intro_C
// Size: 0x290 (Inherited: 0x230)
struct UNPC_Intro_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Text; // 0x238(0x08)
	UImage* Image_51; // 0x240(0x08)
	UTextBlock* NPCName; // 0x248(0x08)
	UOverlay* Overlay_1; // 0x250(0x08)
	UTextBlock* SubTitleText; // 0x258(0x08)
	FText NameNPC; // 0x260(0x18)
	FText Subtitle; // 0x278(0x18)

	void Construct();
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_NPC_Intro(int32_t EntryPoint);
};

