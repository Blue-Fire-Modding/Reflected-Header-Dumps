// BlueprintGeneratedClass GameOverController.GameOverController_C
// Size: 0x24a (Inherited: 0x220)
struct AGameOverController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UDeathHud_C* DeathHud; // 0x230(0x08)
	bool SelectedPlay; // 0x238(0x01)
	UBlueFireSaveGame_C* SaveGameObject; // 0x240(0x08)
	bool Right; // 0x248(0x01)
	bool Up; // 0x249(0x01)

	void InpActEvt_PC_Interact_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void Activate();
	void ExecuteUbergraph_GameOverController(int32_t EntryPoint);
};

