// BlueprintGeneratedClass InteractionMaster.InteractionMaster_C
// Size: 0x28b (Inherited: 0x220)
struct AInteractionMaster_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBoxComponent* Box; // 0x228(0x08)
	USceneComponent* Scene; // 0x230(0x08)
	FText Text; // 0x238(0x18)
	FString ID; // 0x250(0x10)
	bool HideAction; // 0x260(0x01)
	bool CustomID; // 0x261(0x01)
	UPickUp_Action_UI_C* PickUpActionUI; // 0x268(0x08)
	bool OverrideBoxOverlap; // 0x270(0x01)
	APlayer_Character_BP_C* Player; // 0x278(0x08)
	ANPCBound_C* NPCBound; // 0x280(0x08)
	bool CanShowHUD; // 0x288(0x01)
	bool Overlap Begin; // 0x289(0x01)
	bool AutoEnableInput; // 0x28a(0x01)

	void UserConstructionScript();
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void PressButton();
	void ReturnTrigger(FText newText);
	void CheckState();
	void AlreadyUsed();
	void Used();
	void RemoveHud();
	void BeginOverlapEv();
	void OverlapEndEV();
	void UpdateActionText(FText Text);
	void ForceReturnTrigger();
	void OverlapEndClean();
	void CreateBound();
	void Empty();
	void CallForceOverlapEnd();
	void RetryBeginPlay();
	void ExecuteUbergraph_InteractionMaster(int32_t EntryPoint);
};

