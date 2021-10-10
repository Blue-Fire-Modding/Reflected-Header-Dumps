// WidgetBlueprintGeneratedClass Enemy_Behaviour_FX.Enemy_Behaviour_FX_C
// Size: 0x248 (Inherited: 0x230)
struct UEnemy_Behaviour_FX_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)

	void OnAnimationFinished(UWidgetAnimation* Animation);
	void TempRemove();
	void TempReAdd();
	void Construct();
	void ExecuteUbergraph_Enemy_Behaviour_FX(int32_t EntryPoint);
};

