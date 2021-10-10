// WidgetBlueprintGeneratedClass EmoteSlot.EmoteSlot_C
// Size: 0x261 (Inherited: 0x230)
struct UEmoteSlot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* EmoteImg; // 0x238(0x08)
	UTextBlock* EmoteTxt; // 0x240(0x08)
	UImage* Image_1; // 0x248(0x08)
	enum class E_Emotes Emote; // 0x250(0x01)
	UAnimMontage* Montage; // 0x258(0x08)
	enum class E_SwordSelection Sword Selection; // 0x260(0x01)

	void Selected();
	void Unselected();
	void Construct();
	void ExecuteUbergraph_EmoteSlot(int32_t EntryPoint);
};

