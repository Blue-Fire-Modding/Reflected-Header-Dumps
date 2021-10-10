// WidgetBlueprintGeneratedClass EmotesUI.EmotesUI_C
// Size: 0x2c0 (Inherited: 0x230)
struct UEmotesUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UImage* Background; // 0x240(0x08)
	UScrollBox* EmoteContainer; // 0x248(0x08)
	UEmoteSlot_C* EmoteSlot; // 0x250(0x08)
	UEmoteSlot_C* EmoteSlot_1; // 0x258(0x08)
	UEmoteSlot_C* EmoteSlot_2; // 0x260(0x08)
	UEmoteSlot_C* EmoteSlot_3; // 0x268(0x08)
	UEmoteSlot_C* EmoteSlot_4; // 0x270(0x08)
	UEmoteSlot_C* EmoteSlot_5; // 0x278(0x08)
	UEmoteSlot_C* EmoteSlot_6; // 0x280(0x08)
	USelectCommands_C* SelectCommands; // 0x288(0x08)
	AEmote_Controller_C* Controller; // 0x290(0x08)
	TArray<UEmoteSlot_C*> Emotes; // 0x298(0x10)
	int32_t SelectedEmote; // 0x2a8(0x04)
	APlayer_Character_BP_C* Player; // 0x2b0(0x08)
	APlayer_Camera_Control_C* CamControl; // 0x2b8(0x08)

	void Construct();
	void Movement(bool Right);
	void Play();
	void PCGamepadChange();
	void ReRun();
	void Remove();
	void Play Selected Emote();
	void RemoveEvent();
	void FadeInAnim();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_EmotesUI(int32_t EntryPoint);
};

