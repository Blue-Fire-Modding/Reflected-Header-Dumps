// BlueprintGeneratedClass BP_PlayerGhost.BP_PlayerGhost_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_PlayerGhost_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAkComponent* Play_Spirit_Umbra_Loop; // 0x228(0x08)
	UParticleSystemComponent* P_GodPresence_Ghost; // 0x230(0x08)
	UStaticMeshComponent* Player_Pose_Birth_Mesh; // 0x238(0x08)
	USphereComponent* Collision; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	FST_PlayerGhost Data; // 0x250(0x14)

	void BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PlayerGhost(int32_t EntryPoint);
};

