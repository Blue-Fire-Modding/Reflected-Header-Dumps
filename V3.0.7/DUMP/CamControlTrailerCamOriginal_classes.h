// BlueprintGeneratedClass CamControlTrailerCamOriginal.CamControlTrailerCam_C
// Size: 0x524 (Inherited: 0x4c0)
struct ACamControlTrailerCam_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UCameraComponent* Camera; // 0x4c8(0x08)
	bool Pos; // 0x4d0(0x01)
	APlayer_Camera_Control_C* CamControl; // 0x4d8(0x08)
	float SpeedM; // 0x4e0(0x04)
	bool PositiveSpeed; // 0x4e4(0x01)
	FRotator NewRotation; // 0x4e8(0x0c)
	UCamControlUI_C* UI; // 0x4f8(0x08)
	bool Fast; // 0x500(0x01)
	APlayer_Character_BP_C* Player; // 0x508(0x08)
	bool RecordMove; // 0x510(0x01)
	FVector Control Stick Direction; // 0x514(0x0c)
	float Control Stick Intensity; // 0x520(0x04)

	void InpActEvt_C_K2Node_InputKeyEvent_22(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_21(FKey Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_20(FKey Key);
	void InpActEvt_Z_K2Node_InputKeyEvent_19(FKey Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_18(FKey Key);
	void InpActEvt_Add_K2Node_InputKeyEvent_17(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_16(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_15(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_14(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Subtract_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Zero_K2Node_InputKeyEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_6(float AxisValue);
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_7(float AxisValue);
	void InpAxisEvt_Generic_Cam_Y_Axis_K2Node_InputAxisEvent_8(float AxisValue);
	void InpAxisEvt_Generic_Cam_X_Axis_K2Node_InputAxisEvent_9(float AxisValue);
	void InpAxisEvt_Generic_Vertical_Movement2_K2Node_InputAxisEvent_10(float AxisValue);
	void ChangeSpeed();
	void ReceiveTick(float DeltaSeconds);
	void ChangeFov();
	void InpAxisKeyEvt_Gamepad_RightTriggerAxis_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void InpAxisKeyEvt_Gamepad_LeftTriggerAxis_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void ReceiveDestroyed();
	void ExecuteUbergraph_CamControlTrailerCam(int32_t EntryPoint);
};

