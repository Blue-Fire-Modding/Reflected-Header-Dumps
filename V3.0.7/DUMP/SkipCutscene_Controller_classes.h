// BlueprintGeneratedClass SkipCutscene_Controller.SkipCutscene_Controller_C
// Size: 0x258 (Inherited: 0x220)
struct ASkipCutscene_Controller_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	USkipCutscene_Action_UI_C* SkipCutsceneUI; // 0x230(0x08)
	FMulticastInlineDelegate SkipCutscene; // 0x238(0x10)
	APlayer_Character_BP_C* Player; // 0x248(0x08)
	ULevelSequencePlayer* Current Sequence; // 0x250(0x08)

	void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_1(FKey Key);
	void Force Close();
	void ExecuteUbergraph_SkipCutscene_Controller(int32_t EntryPoint);
	void SkipCutscene__DelegateSignature();
};

