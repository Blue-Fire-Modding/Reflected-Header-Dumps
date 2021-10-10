// BlueprintGeneratedClass Player_Camera_Control.Player_Camera_Control_C
// Size: 0x409 (Inherited: 0x220)
struct APlayer_Camera_Control_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPostProcessComponent* LockBlur; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float LockBlurTime_Weight_05FA907A4F64E01B46DA589649451F5A; // 0x238(0x04)
	enum class ETimelineDirection LockBlurTime__Direction_05FA907A4F64E01B46DA589649451F5A; // 0x23c(0x01)
	UTimelineComponent* LockBlurTime; // 0x240(0x08)
	APlayer_Character_BP_C* Char; // 0x248(0x08)
	bool DisableAutoFollow; // 0x250(0x01)
	bool InvertPitch; // 0x251(0x01)
	float DeltaSec; // 0x254(0x04)
	float PitchRate; // 0x258(0x04)
	float YawRate; // 0x25c(0x04)
	UCurveFloat* Pitch_Distance; // 0x260(0x08)
	float CameraTargetDistance; // 0x268(0x04)
	UCurveFloat* Pitch_FOV; // 0x270(0x08)
	bool Override; // 0x278(0x01)
	ACameraCapture_C* CameraCapture; // 0x280(0x08)
	bool Pause; // 0x288(0x01)
	TArray<AActor*> LockActors; // 0x290(0x10)
	float DistanceToClosest; // 0x2a0(0x04)
	AActor* Target; // 0x2a8(0x08)
	bool MouseIsMoving; // 0x2b0(0x01)
	float TargetTempOffsetCam; // 0x2b4(0x04)
	bool NPCTalk; // 0x2b8(0x01)
	float NPCTalkDistance; // 0x2bc(0x04)
	UTargetLock_C* Lock; // 0x2c0(0x08)
	bool CamOnly; // 0x2c8(0x01)
	float RightTAxis; // 0x2cc(0x04)
	float RightYAxis; // 0x2d0(0x04)
	enum class Tabs Tab; // 0x2d4(0x01)
	bool OnlyCam; // 0x2d5(0x01)
	UCurveFloat* CamCurve; // 0x2d8(0x08)
	UTargetLockHint_C* Lock Hint; // 0x2e0(0x08)
	float MaxDistanceToTarget; // 0x2e8(0x04)
	bool LockedToTarget; // 0x2ec(0x01)
	float CameraNoLockTargetDistance; // 0x2f0(0x04)
	float CamDistanceOffset; // 0x2f4(0x04)
	bool CamOffset; // 0x2f8(0x01)
	float CamDistanceOffsetMaster; // 0x2fc(0x04)
	TArray<AActor*> SpellTargets; // 0x300(0x10)
	float DistanceToClosestSpell; // 0x310(0x04)
	AActor* SpellTarget; // 0x318(0x08)
	UCurveFloat* AimCurve; // 0x320(0x08)
	float LockCamPitchOffset; // 0x328(0x04)
	float LockCamYawOffset; // 0x32c(0x04)
	bool ObjectBelow; // 0x330(0x01)
	bool TempDownCheck; // 0x331(0x01)
	ADebugTools_Control_C* DebugTools; // 0x338(0x08)
	bool DebugToolsOn; // 0x340(0x01)
	AEnemy_Character_Parent_C* TargetEnemy; // 0x348(0x08)
	UInventory_C* PauseUI; // 0x350(0x08)
	int32_t SelectedItem; // 0x358(0x04)
	FMulticastInlineDelegate ExitPause; // 0x360(0x10)
	bool DebugToolsActivated; // 0x370(0x01)
	UEmotesUI_C* EmotesUI; // 0x378(0x08)
	APlayer_Character_BP_C* Player; // 0x380(0x08)
	bool EmoteUI Open; // 0x388(0x01)
	float DistanceToClosestEnemy; // 0x38c(0x04)
	AEnemy_Character_Parent_C* ClosestEnemy; // 0x390(0x08)
	TArray<AActor*> LockedActorsSwap; // 0x398(0x10)
	bool SwapBreak; // 0x3a8(0x01)
	bool SwapEnemyDetected; // 0x3a9(0x01)
	FRotator Lerp; // 0x3ac(0x0c)
	bool OpenedPause; // 0x3b8(0x01)
	bool PossesedStatue; // 0x3b9(0x01)
	FMulticastInlineDelegate InputOn; // 0x3c0(0x10)
	FMulticastInlineDelegate InputOff; // 0x3d0(0x10)
	bool ShowDebugLevel; // 0x3e0(0x01)
	float CurrentEnemyPriority; // 0x3e4(0x04)
	bool IsFirstTimePause; // 0x3e8(0x01)
	FMulticastInlineDelegate Emote; // 0x3f0(0x10)
	bool LockedToEnemy; // 0x400(0x01)
	float LockOffsetDisplay; // 0x404(0x04)
	bool Editor; // 0x408(0x01)

	void LockBlurTime__FinishedFunc();
	void LockBlurTime__UpdateFunc();
	void InpActEvt_Zero_K2Node_InputKeyEvent_9(FKey Key);
	void InpActEvt_G_K2Node_InputKeyEvent_8(FKey Key);
	void InpActEvt_L_K2Node_InputKeyEvent_7(FKey Key);
	void InpActEvt_I_K2Node_InputKeyEvent_6(FKey Key);
	void InpActEvt_Generic_Special_Pause_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_5(FKey Key);
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_4(FKey Key);
	void InpActEvt_H_K2Node_InputKeyEvent_3(FKey Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2(FKey Key);
	void InpActEvt_C_K2Node_InputKeyEvent_1(FKey Key);
	void InpActEvt_Generic_Pause_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_PC_Quick_Emote_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PC_Emote_Menu_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Emote_Menu_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Quick_Emote_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_PC_ChangeLockTarget_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_ChangeLockTarget_K2Node_InputActionEvent_1(FKey Key);
	void ReturnPlayer();
	void ScreenCam();
	void UnPause(int32_t SelectedItem, enum class Tabs Tab, int32_t SettingsMainSelectionIndex, int32_t SettingsActiveTab, int32_t SettingsGameSelectionIndex, int32_t SettingsGraphicsSelectionIndex, int32_t InventoryTab, int32_t SelectedKeyItem, int32_t SelectedSword, int32_t SelectedAmulet, int32_t SelectedWeapon, int32_t SelectedTunic, int32_t JournalTab, int32_t SelectedGodStone, int32_t SelectedAchievement, int32_t SelectedQuestIndex, int32_t CurrentScreenInCategory, int32_t Selected Void);
	void OpenSpiritMenu();
	void RemoveMap();
	void UnpauseRegainInput(bool NoReturnInput, bool UnfreezeEnemies);
	void Close Emote UI();
	void EquipItem(bool Right);
	void SetMoveInputTimer(enum class Directions Index);
	void ClearSetMoveInputTimer();
	void RightKey();
	void LeftKey();
	void SetMove();
	void DropItem();
	void ReceiveTick(float DeltaSeconds);
	void ResetCam();
	void ReceiveBeginPlay();
	void GetAllLockActors();
	void SetNpcTalk(float NPCTalkDistance, bool NPCTalk);
	void ShowLock();
	void HideLock();
	void ManualControl();
	void LockCameraAdjust();
	void AdjustCamDistanceAndFov();
	void GetClosestTarget();
	void CreateLockWidget();
	void LockBlurOn();
	void LockBlurOff();
	void UpdateLockBlur();
	void ShowLockHint();
	void HideLockHint();
	void CreateLockHint();
	void UpdateLockHint();
	void LockOn();
	void LockOff();
	void RefreshTarget();
	void ChangeCamDistanceOffset(bool Reset, float Offset, bool Master);
	void SpellTargetsGet();
	void LockSnap();
	void AddLockCamOffset();
	void ResetSide();
	void Checkifhittargetbelow();
	void ModifierOn();
	void ModifierOff();
	void SwapTarget();
	void ResetSwaPTargetList();
	void Set Locks Visibility(bool Visible);
	void CallInputOn();
	void CallInputOff();
	void RefreshLockedToEnemy();
	void ExecuteUbergraph_Player_Camera_Control(int32_t EntryPoint);
	void Emote__DelegateSignature(enum class E_Emotes NewParam);
	void InputOff__DelegateSignature();
	void InputOn__DelegateSignature();
	void ExitPause__DelegateSignature();
};

