// BlueprintGeneratedClass Die_Bounds.Die_Bounds_C
// Size: 0x252 (Inherited: 0x220)
struct ADie_Bounds_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Collider; // 0x228(0x08)
	UStaticMeshComponent* Mesh; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UDamageType* DamageType; // 0x240(0x08)
	UParticleSystem* VFX; // 0x248(0x08)
	bool Launch Player; // 0x250(0x01)
	bool Custom; // 0x251(0x01)

	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ExecuteUbergraph_Die_Bounds(int32_t EntryPoint);
};

