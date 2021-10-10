// BlueprintGeneratedClass Door_BP.Door_BP_C
// Size: 0x479 (Inherited: 0x249)
struct ADoor_BP_C : AMechanics_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	UAkComponent* AkFenceLoopAmbush; // 0x258(0x08)
	UAkComponent* AkFenceLoop; // 0x260(0x08)
	UAkComponent* AkLoop; // 0x268(0x08)
	UStaticMeshComponent* SM_Fence_Back; // 0x270(0x08)
	UCameraComponent* Camera; // 0x278(0x08)
	UStaticMeshComponent* SM_Fence_Front; // 0x280(0x08)
	UStaticMeshComponent* Lock_Mesh3; // 0x288(0x08)
	UStaticMeshComponent* Lock_Mesh1; // 0x290(0x08)
	UStaticMeshComponent* Lock_Mesh2; // 0x298(0x08)
	USkeletalMeshComponent* SkeletalMesh; // 0x2a0(0x08)
	USkeletalMeshComponent* SkeletalMesh1; // 0x2a8(0x08)
	UBillboardComponent* Billboard; // 0x2b0(0x08)
	UBoxComponent* Box; // 0x2b8(0x08)
	UParticleSystemComponent* P_Door; // 0x2c0(0x08)
	UStaticMeshComponent* SM_Door; // 0x2c8(0x08)
	float Dissolve_Lerp_E16D5C494C74A8AF85751AAE5FEA48CE; // 0x2d0(0x04)
	enum class ETimelineDirection Dissolve__Direction_E16D5C494C74A8AF85751AAE5FEA48CE; // 0x2d4(0x01)
	UTimelineComponent* Dissolve; // 0x2d8(0x08)
	float Timeline_0_Offset_3FFE9454417CB940F3080E998F81AE4C; // 0x2e0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_3FFE9454417CB940F3080E998F81AE4C; // 0x2e4(0x01)
	UTimelineComponent* Timeline_1; // 0x2e8(0x08)
	float OpenCloseTimeline_Position_7F477CB24270FE7FEE978D8094E5C908; // 0x2f0(0x04)
	enum class ETimelineDirection OpenCloseTimeline__Direction_7F477CB24270FE7FEE978D8094E5C908; // 0x2f4(0x01)
	UTimelineComponent* OpenCloseTimeline; // 0x2f8(0x08)
	float Fence_Movement_Lerp_7A5A790F495EEC2F06BD4DA809150050; // 0x300(0x04)
	float Fence_Movement_Offset_7A5A790F495EEC2F06BD4DA809150050; // 0x304(0x04)
	enum class ETimelineDirection Fence_Movement__Direction_7A5A790F495EEC2F06BD4DA809150050; // 0x308(0x01)
	UTimelineComponent* Fence Movement; // 0x310(0x08)
	float MoveFence_Lerp_022D15884C4411C5EBD62280DA02DDBA; // 0x318(0x04)
	float MoveFence_Offset_022D15884C4411C5EBD62280DA02DDBA; // 0x31c(0x04)
	enum class ETimelineDirection MoveFence__Direction_022D15884C4411C5EBD62280DA02DDBA; // 0x320(0x01)
	UTimelineComponent* MoveFence; // 0x328(0x08)
	FVector OriginalLocation; // 0x330(0x0c)
	bool bLocked; // 0x33c(0x01)
	float Offset; // 0x340(0x04)
	float Offset Fence Back; // 0x344(0x04)
	bool Opened; // 0x348(0x01)
	float Speed; // 0x34c(0x04)
	float SpeedFence; // 0x350(0x04)
	int32_t NActivates; // 0x354(0x04)
	UPickUp_Action_UI_C* PickUpActionUI; // 0x358(0x08)
	bool CanBeOpened; // 0x360(0x01)
	int32_t DoorType; // 0x364(0x04)
	bool TollKeyItem; // 0x368(0x01)
	TArray<FText> NegativeText; // 0x370(0x10)
	bool RemoveItemOnUse; // 0x380(0x01)
	enum class Items Item; // 0x381(0x01)
	TArray<FText> Text; // 0x388(0x10)
	UMainDialogWB_C* Dialog; // 0x398(0x08)
	FMulticastInlineDelegate FinishActivate; // 0x3a0(0x10)
	bool RestoreHudOpenDoor; // 0x3b0(0x01)
	bool Start Open; // 0x3b1(0x01)
	bool Start Open Fence; // 0x3b2(0x01)
	bool Debug Boss Instant Combat; // 0x3b3(0x01)
	float BlendTimeCam; // 0x3b4(0x04)
	int32_t MultiActivateOriginal; // 0x3b8(0x04)
	APlayer_Character_BP_C* Player; // 0x3c0(0x08)
	bool CanTryToClose; // 0x3c8(0x01)
	UAkAudioEvent* DoorOpenSound; // 0x3d0(0x08)
	UAkAudioEvent* DoorCloseSound; // 0x3d8(0x08)
	bool ChangeCamera; // 0x3e0(0x01)
	bool DelayWhenUnlockHint; // 0x3e1(0x01)
	bool Instant; // 0x3e2(0x01)
	bool FenceLocked; // 0x3e3(0x01)
	UAkAudioEvent* FenceSoundClose; // 0x3e8(0x08)
	UAkAudioEvent* FenceSoundOpen; // 0x3f0(0x08)
	bool Unlocking; // 0x3f8(0x01)
	float DistanceToClose; // 0x3fc(0x04)
	FVector FenceFrontOriginalLocation; // 0x400(0x0c)
	bool Debug Boss Skip Cutscene; // 0x40c(0x01)
	int32_t Debug Boss Fase; // 0x410(0x04)
	bool Debug Location; // 0x414(0x01)
	float Lerp Door; // 0x418(0x04)
	float Lerp Fence Front; // 0x41c(0x04)
	UAkAudioEvent* PlayLoopSound; // 0x420(0x08)
	UAkAudioEvent* StopLoopSound; // 0x428(0x08)
	USkipCutscene_Action_UI_C* SkipCutsceneWidget; // 0x430(0x08)
	bool HasCutscene; // 0x438(0x01)
	bool CanSkipCutscene; // 0x439(0x01)
	ULevelSequencePlayer* Current Sequence; // 0x440(0x08)
	bool UseStingerSFX; // 0x448(0x01)
	UMaterialInstanceDynamic* Mat Lock A; // 0x450(0x08)
	UMaterialInstanceDynamic* Mat Lock B; // 0x458(0x08)
	UAkAudioEvent* StingerSFX; // 0x460(0x08)
	float Lerp Fence Back; // 0x468(0x04)
	ANPCBound_C* NPCBound; // 0x470(0x08)
	bool InvertOffsetForFence; // 0x478(0x01)

	void UserConstructionScript();
	void OpenCloseTimeline__FinishedFunc();
	void OpenCloseTimeline__UpdateFunc();
	void MoveFence__FinishedFunc();
	void MoveFence__UpdateFunc();
	void MoveFence__StopSound__EventFunc();
	void MoveFence__StartSound__EventFunc();
	void Fence Movement__FinishedFunc();
	void Fence Movement__UpdateFunc();
	void Fence Movement__SoundStop__EventFunc();
	void Fence Movement__SoundStart__EventFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__StopSound__EventFunc();
	void Timeline_0__StartSound__EventFunc();
	void Dissolve__FinishedFunc();
	void Dissolve__UpdateFunc();
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_1(FKey Key);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void CustomEvent();
	void QuickEnd();
	void NegativeFinish();
	void OpenAfterActivate();
	void TryToClose();
	void TryToCloseCheck();
	void Set Block Door(bool bLock);
	void Boss Door Fast Open();
	void InputOpenDoor();
	void SkipCutscene();
	void Create NPCBound();
	void Open();
	void ReceiveBeginPlay();
	void Close();
	void InstantOpen();
	void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene);
	void Deactivate(bool Instant);
	void AlreadyUsed();
	void CloseTimelineRun();
	void OpenTimelineRun();
	void VFX(bool Open);
	void Unlock(bool DontWriteID, bool Is Cutscene);
	void KeyUnlock();
	void FenceUnlock(bool Is Cutscene);
	void FenceOnly();
	void BoxCollision(enum class ECollisionEnabled NewType);
	void Open Boss Door();
	void InstantUnlock();
	void InstantFenceUnlock();
	void FenceControl(bool Lock);
	void FenceControlLock();
	void FenceControlUnlock();
	void Build();
	void FenceLock();
	void UnlockHint();
	void ExtraFenceOnly();
	void HideFence();
	void Freeze All(bool Freeze);
	void FinishUnlockHint();
	void TriggerCustomFence(bool Instant, int32_t Index);
	void InstantCustomFenceUnlock();
	void Unlock Extra();
	void InstantUnlockExtra();
	void InstantFenceUnlockExtra();
	void InstantOpenExtra();
	void Build Extra 1();
	void Destroy Fence Front();
	void BndEvt__SM_Door_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void Lock Dissolve();
	void ExecuteUbergraph_Door_BP(int32_t EntryPoint);
	void FinishActivate__DelegateSignature();
};

