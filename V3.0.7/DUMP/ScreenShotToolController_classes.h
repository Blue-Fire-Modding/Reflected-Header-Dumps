// BlueprintGeneratedClass ScreenShotToolController.ScreenShotToolController_C
// Size: 0x2c8 (Inherited: 0x220)
struct AScreenShotToolController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool Pos; // 0x230(0x01)
	APlayer_Camera_Control_C* CamControl; // 0x238(0x08)
	float SpeedM; // 0x240(0x04)
	bool PositiveSpeed; // 0x244(0x01)
	FRotator NewRotation; // 0x248(0x0c)
	UCamControlUI_C* UI; // 0x258(0x08)
	bool Fast; // 0x260(0x01)
	APlayer_Character_BP_C* Player; // 0x268(0x08)
	bool RecordMove; // 0x270(0x01)
	FVector Control Stick Direction; // 0x274(0x0c)
	float Control Stick Intensity; // 0x280(0x04)
	FTransform CameraLoc; // 0x290(0x30)
	ARecordCam_C* Cam; // 0x2c0(0x08)

	void InpActEvt_Subtract_K2Node_InputKeyEvent_27(FKey Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_26(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_25(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_24(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_23(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_22(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_21(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_20(FKey Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_19(FKey Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_18(FKey Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_17(FKey Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_16(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_15(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_14(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_PC_Pause_K2Node_InputActionEvent_22(FKey Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_21(FKey Key);
	void InpActEvt_MainMenuConfirm_K2Node_InputActionEvent_20(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_PC_Shield_K2Node_InputActionEvent_19(FKey Key);
	void InpActEvt_PC_Sprint_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_PC_Dash_K2Node_InputActionEvent_16(FKey Key);
	void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_14(FKey Key);
	void InpActEvt_PC_Lock_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Pause_K2Node_InputActionEvent_1(FKey Key);
	void InpActEvt_H_K2Node_InputKeyEvent_1(FKey Key);
	void ChangeSpeed();
	void ReceiveBeginPlay();
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_Generic_Cam_Y_Axis_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_Generic_Vertical_Movement2_K2Node_InputAxisEvent_10(float AxisValue);
	void InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ChangeFov();
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_3(float AxisValue);
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_4(float AxisValue);
	void ExecuteUbergraph_ScreenShotToolController(int32_t EntryPoint);
};

