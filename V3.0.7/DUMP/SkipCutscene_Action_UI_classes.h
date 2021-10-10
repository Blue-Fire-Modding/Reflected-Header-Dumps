// WidgetBlueprintGeneratedClass SkipCutscene_Action_UI.SkipCutscene_Action_UI_C
// Size: 0x288 (Inherited: 0x230)
struct USkipCutscene_Action_UI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade; // 0x238(0x08)
	UWidgetAnimation* Show; // 0x240(0x08)
	UImage* ActionInput; // 0x248(0x08)
	UTextBlock* ActionText; // 0x250(0x08)
	UImage* Background; // 0x258(0x08)
	UHorizontalBox* HorizontalBox_1; // 0x260(0x08)
	UOverlay* Overlay_1; // 0x268(0x08)
	enum class PlatformInput Action; // 0x270(0x01)
	bool CreateController; // 0x271(0x01)
	ASkipCutscene_Controller_C* Controller; // 0x278(0x08)
	ULevelSequencePlayer* CurrentSequence; // 0x280(0x08)

	void Construct();
	void Remove();
	void SetPlatformIcon();
	void Set State(bool Skip Cutscene);
	void Replay();
	void ExecuteUbergraph_SkipCutscene_Action_UI(int32_t EntryPoint);
};

