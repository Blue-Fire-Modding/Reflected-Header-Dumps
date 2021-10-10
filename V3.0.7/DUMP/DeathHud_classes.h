// WidgetBlueprintGeneratedClass DeathHud.DeathHud_C
// Size: 0x268 (Inherited: 0x230)
struct UDeathHud_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Idle; // 0x238(0x08)
	UWidgetAnimation* Fade; // 0x240(0x08)
	UImage* Image_28; // 0x248(0x08)
	UImage* Image_136; // 0x250(0x08)
	FMulticastInlineDelegate Restart; // 0x258(0x10)

	void Construct();
	void Remove();
	void CallRestart();
	void Activate();
	void ReBuild();
	void ExecuteUbergraph_DeathHud(int32_t EntryPoint);
	void Restart__DelegateSignature();
};

