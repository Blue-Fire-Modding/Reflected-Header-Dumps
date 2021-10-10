// BlueprintGeneratedClass NPC_Parent.NPC_Parent_C
// Size: 0x558 (Inherited: 0x4c0)
struct ANPC_Parent_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UChildActorComponent* ChildActor; // 0x4c8(0x08)
	UBoxComponent* LookAtBox; // 0x4d0(0x08)
	UChildActorComponent* HeadPOI; // 0x4d8(0x08)
	UChildActorComponent* DialogBound; // 0x4e0(0x08)
	FString ID; // 0x4e8(0x10)
	FText NPCName; // 0x4f8(0x18)
	ANPCBound_C* Bound; // 0x510(0x08)
	int32_t TalkTimes; // 0x518(0x04)
	float CamDistance; // 0x51c(0x04)
	bool HasShadow; // 0x520(0x01)
	ANPC_ShadowDecal_C* ShadowDecal; // 0x528(0x08)
	float ShadowSize; // 0x530(0x04)
	bool AttachPOI; // 0x534(0x01)
	FName POISocketName; // 0x538(0x08)
	bool LookAtPlayer; // 0x540(0x01)
	AActor* Target; // 0x548(0x08)
	bool NoLock; // 0x550(0x01)
	float PopUpZOffset; // 0x554(0x04)

	void AlreadyUsed();
	void Used();
	void CheckState();
	void MoveShadow();
	void ReceiveBeginPlay();
	void NPC Dialog Line(TArray<FText> TextLines, UAkAudioEvent* AkEvent, bool UseAkSoundsArray, TArray<UAkAudioEvent*> AkEvents);
	void NPCDialog();
	void EndD();
	void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__LookAtBox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void LookAtPlayerBegin();
	void LookAtPlayerEnd();
	void RunNPCBoundSet(ANPCBound_C* Bound);
	void ExecuteUbergraph_NPC_Parent(int32_t EntryPoint);
};

