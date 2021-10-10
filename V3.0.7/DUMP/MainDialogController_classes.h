// BlueprintGeneratedClass MainDialogController.MainDialogController_C
// Size: 0x248 (Inherited: 0x220)
struct AMainDialogController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UMainDialogWB_C* MainDialogUI; // 0x230(0x08)
	FMulticastInlineDelegate WaitDone; // 0x238(0x10)

	void InpActEvt_MainMenuConfirm_K2Node_InputActionEvent_34(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Nine_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_33(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_32(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_31(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_30(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_29(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_28(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_27(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_26(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_RightThumbstickLeft_K2Node_InputActionEvent_25(FKey Key);
	void InpActEvt_Gamepad_RightThumbstickRight_K2Node_InputActionEvent_24(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_23(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_22(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_21(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_20(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_19(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_PC_Shield_K2Node_InputActionEvent_16(FKey Key);
	void InpActEvt_PC_Sprint_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_14(FKey Key);
	void InpActEvt_PC_Dash_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_PC_Lock_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_1(FKey Key);
	void AutoSideMovementR();
	void AutoSideMovementL();
	void ClearTimers();
	void AutoMovementU();
	void AutoMovementD();
	void AutoSideMovementRTrigger();
	void AutoSideMovementLTrigger();
	void AutoMovementDTrigger();
	void AutoMovementUTrigger();
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_4(float AxisValue);
	void ExecuteUbergraph_MainDialogController(int32_t EntryPoint);
	void WaitDone__DelegateSignature();
};

