// BlueprintGeneratedClass DemoEndController.DemoEndController_C
// Size: 0x231 (Inherited: 0x220)
struct ADemoEndController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool DemoPartOne; // 0x230(0x01)

	void InpActEvt_PC_Interact_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DemoEndController(int32_t EntryPoint);
};

