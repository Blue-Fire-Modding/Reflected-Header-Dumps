// BlueprintGeneratedClass AreaTransition_Elevator.AreaTransition_Elevator_C
// Size: 0x3e1 (Inherited: 0x28b)
struct AAreaTransition_Elevator_C : AInteractionMaster_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UStaticMeshComponent* TargetPosIndicator1; // 0x298(0x08)
	UBoxComponent* Box1; // 0x2a0(0x08)
	UAkComponent* AkClose; // 0x2a8(0x08)
	UAkComponent* AkOpen; // 0x2b0(0x08)
	UArrowComponent* Arrow_Direction; // 0x2b8(0x08)
	UChildActorComponent* ChildActor; // 0x2c0(0x08)
	USkeletalMeshComponent* SM_Elevator_Door_SkelMesh; // 0x2c8(0x08)
	UAkComponent* Ak; // 0x2d0(0x08)
	float Move_Alpha_F29FC58245A289BA1525E2A766CD41D7; // 0x2d8(0x04)
	enum class ETimelineDirection Move__Direction_F29FC58245A289BA1525E2A766CD41D7; // 0x2dc(0x01)
	UTimelineComponent* Move; // 0x2e0(0x08)
	AActor* Camera; // 0x2e8(0x08)
	bool Start Bottom; // 0x2f0(0x01)
	float PlayRate; // 0x2f4(0x04)
	float Distance; // 0x2f8(0x04)
	float InitialZ; // 0x2fc(0x04)
	bool PlayerInside; // 0x300(0x01)
	bool Moving; // 0x301(0x01)
	bool MovingDown; // 0x302(0x01)
	bool Active; // 0x303(0x01)
	bool ActivatedFromStart; // 0x304(0x01)
	enum class StreamingChunks CurrentChunk; // 0x305(0x01)
	enum class StreamingChunks NewChunk; // 0x306(0x01)
	FTransform NewLoc; // 0x310(0x30)
	TArray<FName> VisibleLevels; // 0x340(0x10)
	bool IsSpecialRespawn; // 0x350(0x01)
	bool Start HUD; // 0x351(0x01)
	FVector Player Offset; // 0x354(0x0c)
	FMulticastInlineDelegate TriggerPlayer; // 0x360(0x10)
	UAkAudioEvent* TravelSound; // 0x370(0x08)
	FString Elevator ID; // 0x378(0x10)
	enum class EDetachmentRule Detach Scale Rule; // 0x388(0x01)
	enum class EAttachmentRule Attach Scale Rule; // 0x389(0x01)
	UAkAudioEvent* TravelSoundGo; // 0x390(0x08)
	UAkAudioEvent* TravelSoundArrive; // 0x398(0x08)
	UAkAudioEvent* AudioHitArrived; // 0x3a0(0x08)
	UAkAudioEvent* ElevatorLoopSound; // 0x3a8(0x08)
	UAkAudioEvent* StopElevatorLoopSound; // 0x3b0(0x08)
	bool PreLoadTravel; // 0x3b8(0x01)
	bool Show Area Name; // 0x3b9(0x01)
	TArray<UMaterialInterface*> Materials; // 0x3c0(0x10)
	UStaticMesh* NewMesh; // 0x3d0(0x08)
	UStaticMesh* OriginalMesh; // 0x3d8(0x08)
	bool SwitchMesh; // 0x3e0(0x01)

	void UserConstructionScript();
	void Move__FinishedFunc();
	void Move__UpdateFunc();
	void Move__AudioHit__EventFunc();
	void ReceiveBeginPlay();
	void PressButton();
	void Fix();
	void SetText();
	void StartElevatorSound();
	void Animation(bool Open, bool Instant);
	void End();
	void SpecialRespawn();
	void Special Press Button();
	void Restart();
	void OverlapEndClean();
	void BeginOverlapEv();
	void Change Mesh(bool Set Original);
	void ExecuteUbergraph_AreaTransition_Elevator(int32_t EntryPoint);
	void TriggerPlayer__DelegateSignature();
};

