// BlueprintGeneratedClass LoadScreenInput.LoadScreenInput_C
// Size: 0x238 (Inherited: 0x220)
struct ALoadScreenInput_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	ULoadScreen_C* LoadScreen; // 0x230(0x08)

	void InpActEvt_PC_Interact_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_1(FKey Key);
	void ExecuteUbergraph_LoadScreenInput(int32_t EntryPoint);
};

