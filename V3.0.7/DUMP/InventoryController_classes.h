// BlueprintGeneratedClass InventoryController.InventoryController_C
// Size: 0x250 (Inherited: 0x220)
struct AInventoryController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UInventory_C* Inventory; // 0x230(0x08)
	bool Right; // 0x238(0x01)
	APlayer_Character_BP_C* Player; // 0x240(0x08)
	enum class Directions Directions; // 0x248(0x01)
	bool RightSpin; // 0x249(0x01)
	bool TwmpSet; // 0x24a(0x01)
	bool TimeFix; // 0x24b(0x01)
	float SleepTime; // 0x24c(0x04)

	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_13(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_12(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_11(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Gamepad_LeftStick_Up_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_24(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_23(FKey Key);
	void InpActEvt_Generic_Player_Inventory_Spin_R_K2Node_InputActionEvent_22(FKey Key);
	void InpActEvt_Generic_Player_Inventory_Spin_R_K2Node_InputActionEvent_21(FKey Key);
	void InpActEvt_Generic_Player_Inventory_Spin_L_K2Node_InputActionEvent_20(FKey Key);
	void InpActEvt_Generic_Player_Inventory_Spin_L_K2Node_InputActionEvent_19(FKey Key);
	void InpActEvt_Gamepad_RightThumbstickRight_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_Gamepad_RightThumbstickLeft_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_16(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_14(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Generic_Inventory_Tab_Change_R_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Generic_Inventory_Tab_Change_L_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
	void SetMoveInputTimer();
	void ClearSetMoveInputTimer();
	void RightKey();
	void LeftKey();
	void UpKey();
	void DownKey();
	void InpAxisKeyEvt_MouseX_K2Node_InputAxisKeyEvent_1(float AxisValue);
	void InpAxisKeyEvt_MouseY_K2Node_InputAxisKeyEvent_2(float AxisValue);
	void Rotate();
	void ExitPause(bool NoReturnInput, bool UnfreezeEnemies);
	void InpAxisKeyEvt_Gamepad_LeftY_K2Node_InputAxisKeyEvent_4(float AxisValue);
	void  djustPös();
	void AdjustPosB();
	void StopScroll();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void PrintSleep();
	void StartTimerSleepPause();
	void RunSleep();
	void ExecuteUbergraph_InventoryController(int32_t EntryPoint);
};

