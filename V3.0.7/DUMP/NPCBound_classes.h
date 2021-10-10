// BlueprintGeneratedClass NPCBound.NPCBound_C
// Size: 0x2b9 (Inherited: 0x220)
struct ANPCBound_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UWidgetComponent* Widget; // 0x228(0x08)
	UBillboardComponent* Billboard; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	ANPC_Parent_C* NPC; // 0x240(0x08)
	UMainDialogWB_C* Dialog; // 0x248(0x08)
	APlayer_Character_BP_C* Player; // 0x250(0x08)
	FString ID; // 0x258(0x10)
	bool SaveToEvents; // 0x268(0x01)
	FText ActionUI; // 0x270(0x18)
	int32_t Shop; // 0x288(0x04)
	bool Speakable; // 0x28c(0x01)
	UItemName_C* PopUpWidget; // 0x290(0x08)
	FText PopUpText; // 0x298(0x18)
	bool PopUp; // 0x2b0(0x01)
	bool PopUpNotify; // 0x2b1(0x01)
	bool NoBox; // 0x2b2(0x01)
	bool NoBackground; // 0x2b3(0x01)
	bool NoSpeakPop; // 0x2b4(0x01)
	bool CutsceneTextStyle; // 0x2b5(0x01)
	bool InteractingWith; // 0x2b6(0x01)
	bool Overlap Begin; // 0x2b7(0x01)
	bool ShowIntroPop; // 0x2b8(0x01)

	void UserConstructionScript();
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_1(FKey Key);
	void RemoveHud();
	void EndDialogReturnPrompt();
	void PressButton();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void DialogStartCall();
	void ActionBlock_Camera(float Pitch, float CamDistance, AActor* CamOtherActor);
	void Dialog_Start(bool HudOn);
	void Dialog_End(bool RestoreHUD, bool RestorePrompt, bool RestoreInput, bool Cutscene, bool KeepEnemiesFrozen);
	void Dialog_Line(TArray<FText> TextLines, FText NPCName, bool Center, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, TArray<UAkAudioEvent*> AkEvents, bool FadeStyle);
	void CheckState();
	void AlreadyUsed();
	void Used();
	void ActionEvent_ReturnCamera();
	void Continue();
	void part2();
	void part3t();
	void dfdf();
	void bman();
	void SetNPC(ANPC_Parent_C* NPC);
	void Dialog_Question(TArray<FText> TextLines, FText NPCName, TArray<FText> Responses, int32_t SelectedOptionIndex, bool Center, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, TArray<UAkAudioEvent*> AkEvents, TArray<FText> CustomOptionArray, bool CustomOptionTexts, bool ShowCurrencyOnQuestion, enum class Items ItemToShow, bool ShowItemNNotCurrency);
	void Dialog_Shop(TArray<FText> TextLines, FText NPCName, enum class DialogType DialogType, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, TArray<UAkAudioEvent*> AkEvents);
	void End();
	void CheckIfShouldBeActive();
	void BeginOverlapCall();
	void EndOverlapCall();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ReceiveBeginPlay();
	void NPCintropop(FText NameNPC, FText Subtitle);
	void Exit();
	void ForceReturnTrigger();
	void NPCintropop ForceClose();
	void ExecuteUbergraph_NPCBound(int32_t EntryPoint);
};

