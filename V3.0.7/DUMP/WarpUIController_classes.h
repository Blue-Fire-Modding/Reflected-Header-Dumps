// BlueprintGeneratedClass WarpUIController.WarpUIController_C
// Size: 0x24c (Inherited: 0x220)
struct AWarpUIController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UWarpUI_C* WarpUI; // 0x230(0x08)
	bool Right; // 0x238(0x01)
	APlayer_Character_BP_C* Player; // 0x240(0x08)
	enum class Directions Directions; // 0x248(0x01)
	bool RightSpin; // 0x249(0x01)
	bool TwmpSet; // 0x24a(0x01)
	bool TimeFix; // 0x24b(0x01)

	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_16(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_14(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_PC_Sprint_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_1(FKey Key);
	void ClearSetMoveInputTimer();
	void SetMoveInputTimer();
	void UpKey();
	void DownKey();
	void ExitPause();
	void Empty();
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void ExecuteUbergraph_WarpUIController(int32_t EntryPoint);
};

