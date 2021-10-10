// WidgetBlueprintGeneratedClass Quest_PopUp.Quest_PopUp_C
// Size: 0x2b0 (Inherited: 0x230)
struct UQuest_PopUp_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* QuickFade; // 0x238(0x08)
	UWidgetAnimation* Text; // 0x240(0x08)
	UBorder* Border_InputQuest; // 0x248(0x08)
	UCanvasPanel* CanvasPanel_Root; // 0x250(0x08)
	UImage* Image_1; // 0x258(0x08)
	UImage* Image_128; // 0x260(0x08)
	UOverlay* Overlay_1; // 0x268(0x08)
	USpacer* Spacer_1; // 0x270(0x08)
	UTextBlock* TextBlock_1; // 0x278(0x08)
	UTextBlock* TextBlock_9; // 0x280(0x08)
	UTextBlock* TextBlock_79; // 0x288(0x08)
	UTextBlock* TextBlock_89; // 0x290(0x08)
	enum class Quests Quest; // 0x298(0x01)
	enum class QuestStatusType OperationType; // 0x299(0x01)
	FMulticastInlineDelegate Finished; // 0x2a0(0x10)

	void OnAnimationFinished(UWidgetAnimation* Animation);
	void UpdateUI();
	void Finish();
	void QuickExit();
	void Replay();
	void Construct();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_Quest_PopUp(int32_t EntryPoint);
	void Finished__DelegateSignature();
};

