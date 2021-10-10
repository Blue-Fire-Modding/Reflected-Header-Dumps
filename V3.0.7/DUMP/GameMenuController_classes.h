// BlueprintGeneratedClass GameMenuController.GameMenuController_C
// Size: 0x2b0 (Inherited: 0x220)
struct AGameMenuController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UMediaSoundComponent* MediaSound; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float FadeTimeline_Sun_6DAFEE8F4E548469CDD1178F8187EB82; // 0x238(0x04)
	enum class ETimelineDirection FadeTimeline__Direction_6DAFEE8F4E548469CDD1178F8187EB82; // 0x23c(0x01)
	UTimelineComponent* FadeTimeline; // 0x240(0x08)
	UGameMenu_C* GameMenu; // 0x248(0x08)
	bool SelectedPlay; // 0x250(0x01)
	UBlueFireSaveGame_C* SaveGameObject; // 0x258(0x08)
	bool Right; // 0x260(0x01)
	bool Up; // 0x261(0x01)
	FString DemoBuildVersion; // 0x268(0x10)
	FString BuildVersion; // 0x278(0x10)
	bool NewGame; // 0x288(0x01)
	bool Demo; // 0x289(0x01)
	bool TrailerOn; // 0x28a(0x01)
	bool SkipIntroScreens; // 0x28b(0x01)
	bool Force Brutal Mode; // 0x28c(0x01)
	ULoadScreen_C* LoadScreen; // 0x290(0x08)
	UBlueFire_Game_Instance_C* GameInstance; // 0x298(0x08)
	AStaticMeshActor* Sun; // 0x2a0(0x08)
	UMaterialInstanceDynamic* SunMaterial; // 0x2a8(0x08)

	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_10(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_Special_Left_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_P_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Special_Pause_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Delete_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
	void DownKey();
	void UpKey();
	void SetMoveInputTimer();
	void ClearSetMoveInputTimer();
	void ReceiveBeginPlay();
	void Active();
	void ChangeSelection(bool Up, enum class Directions Direction);
	void StartGame();
	void CreateSaveGameObject();
	void StartNewGame(int32_t DemoPart);
	void StartTrailer();
	void PlayTrailer();
	void StopTrailer(bool Finished);
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_2(float AxisValue);
	void CancelWrite();
	void FadeSun(bool FadeIn);
	void ExecuteUbergraph_GameMenuController(int32_t EntryPoint);
};

