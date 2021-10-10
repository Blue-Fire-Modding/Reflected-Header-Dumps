// BlueprintGeneratedClass PickUpSpawn.PickUpSpawn_C
// Size: 0x3ec (Inherited: 0x3a9)
struct APickUpSpawn_C : APickup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	UAkComponent* Play_Ore_Currency_Spawn_Bounce_1; // 0x3b8(0x08)
	FVector Destination; // 0x3c0(0x0c)
	FVector Origin; // 0x3cc(0x0c)
	float Alpha; // 0x3d8(0x04)
	float Speed; // 0x3dc(0x04)
	AActor* ActorToIgnore; // 0x3e0(0x08)
	int32_t BounceSFX; // 0x3e8(0x04)

	void ReceiveBeginPlay();
	void MoveDown();
	void BndEvt__Collider_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void ExecuteUbergraph_PickUpSpawn(int32_t EntryPoint);
};

