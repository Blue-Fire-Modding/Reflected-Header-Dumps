// BlueprintGeneratedClass Emote_Controller.Emote_Controller_C
// Size: 0x239 (Inherited: 0x220)
struct AEmote_Controller_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UEmotesUI_C* EmoteUI; // 0x230(0x08)
	bool Right; // 0x238(0x01)

	void InpActEvt_D_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_D_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_A_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_A_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_W_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_S_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_16(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_14(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_PC_Dash_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_PC_Shield_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_SpaceBar_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Enter_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_1(FKey Key);
	void Delete();
	void ReceiveBeginPlay();
	void ClearMovement();
	void MoveT();
	void MoveTTimerStart();
	void ExecuteUbergraph_Emote_Controller(int32_t EntryPoint);
};

