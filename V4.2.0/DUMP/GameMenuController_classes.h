// BlueprintGeneratedClass GameMenuController.GameMenuController_C
// Size: 0x2d8 (Inherited: 0x220)
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
	UBlueFire_Game_Instance_C* GameInstance; // 0x290(0x08)
	AStaticMeshActor* Sun; // 0x298(0x08)
	UMaterialInstanceDynamic* SunMaterial; // 0x2a0(0x08)
	FMulticastInlineDelegate SaveSettings; // 0x2a8(0x10)
	bool MasterLoaded; // 0x2b8(0x01)
	UObject* LevelMaster; // 0x2c0(0x08)
	bool SaveGameExist; // 0x2c8(0x01)
	USaveGame* SaveGame; // 0x2d0(0x08)

	void Is PS4 or Xbox(bool Result);
	void FadeTimeline__FinishedFunc();
	void FadeTimeline__UpdateFunc();
	void InpActEvt_DeleteSaveSlot_K2Node_InputActionEvent_13(FKey Key);
	void InpActEvt_Gamepad_DPad_Left_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_Gamepad_DPad_Right_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_AnyKey_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_Gamepad_Special_Pause_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Generic_Left_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Generic_Right_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Generic_Up_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Delete_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_1(FKey Key);
	void OnLoaded_5106C1734EE783986C84129805CC72ED(UObject* Loaded);
	void Completed_0D93ED0F45446BD3D03966BB75F20A62(USaveGame* SaveGame, bool bSuccess);
	void Completed_3E3B256E434E472499772286EE6D7E27(USaveGame* SaveGame, bool bSuccess);
	void Xbox Change User();
	void Xbox Logout();
	void Xbox Set User Name();
	void ChangeSelection(bool Up, enum class Directions Direction);
	void Active();
	void ReceiveBeginPlay();
	void CreateSaveGameObject();
	void DownKey();
	void UpKey();
	void SetMoveInputTimer();
	void ClearSetMoveInputTimer();
	void Xbox Bind Events();
	void StartGame();
	void StartNewGame(int32_t DemoPart);
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_2(float AxisValue);
	void CancelWrite();
	void FadeSun(bool FadeIn);
	void PS4 Retry Master();
	void ExecuteUbergraph_GameMenuController(int32_t EntryPoint);
	void SaveSettings__DelegateSignature();
};

