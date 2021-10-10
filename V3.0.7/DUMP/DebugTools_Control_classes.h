// BlueprintGeneratedClass DebugTools_Control.DebugTools_Control_C
// Size: 0x251 (Inherited: 0x220)
struct ADebugTools_Control_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	APlayer_Character_BP_C* Player; // 0x230(0x08)
	bool Up; // 0x238(0x01)
	FVector SavedPoint; // 0x23c(0x0c)
	UDebugTools_UI_C* DebugTools_UI; // 0x248(0x08)
	bool ShouldMoveUp; // 0x250(0x01)

	void InpActEvt_H_K2Node_InputKeyEvent_47(FKey Key);
	void InpActEvt_E_K2Node_InputKeyEvent_46(FKey Key);
	void InpActEvt_E_K2Node_InputKeyEvent_45(FKey Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_44(FKey Key);
	void InpActEvt_Q_K2Node_InputKeyEvent_43(FKey Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_42(FKey Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_41(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_40(FKey Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_39(FKey Key);
	void InpActEvt_LeftControl_K2Node_InputKeyEvent_38(FKey Key);
	void InpActEvt_LeftAlt_K2Node_InputKeyEvent_37(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_36(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_35(FKey Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_34(FKey Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_33(FKey Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_32(FKey Key);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_31(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_30(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_29(FKey Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_28(FKey Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_27(FKey Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_26(FKey Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_25(FKey Key);
	void InpActEvt_One_K2Node_InputKeyEvent_24(FKey Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_23(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_22(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_21(FKey Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_20(FKey Key);
	void InpActEvt_Enter_K2Node_InputKeyEvent_19(FKey Key);
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_18(FKey Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_17(FKey Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_16(FKey Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_15(FKey Key);
	void InpActEvt_Up_K2Node_InputKeyEvent_14(FKey Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_I_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_RightTrigger_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_1(FKey Key);
	void MovePlayerVertically();
	void ReceiveBeginPlay();
	void SetWarpPoint();
	void Initialize();
	void MoveDown();
	void MoveUp();
	void CloseTools();
	void ReceiveTick(float DeltaSeconds);
	void LifePlus(int32_t 1);
	void LifePlusRun();
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_2(float AxisValue);
	void ExecuteUbergraph_DebugTools_Control(int32_t EntryPoint);
};

