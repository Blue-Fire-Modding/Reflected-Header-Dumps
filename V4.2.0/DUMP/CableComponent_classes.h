// Class CableComponent.CableActor
// Size: 0x228 (Inherited: 0x220)
struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x4c0 (Inherited: 0x430)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x430(0x01)
	bool bAttachEnd; // 0x431(0x01)
	FComponentReference AttachEndTo; // 0x438(0x28)
	FName AttachEndToSocketName; // 0x460(0x08)
	FVector EndLocation; // 0x468(0x0c)
	float CableLength; // 0x474(0x04)
	int32_t NumSegments; // 0x478(0x04)
	float SubstepTime; // 0x47c(0x04)
	int32_t SolverIterations; // 0x480(0x04)
	bool bEnableStiffness; // 0x484(0x01)
	bool bEnableCollision; // 0x485(0x01)
	float CollisionFriction; // 0x488(0x04)
	FVector CableForce; // 0x48c(0x0c)
	float CableGravityScale; // 0x498(0x04)
	float CableWidth; // 0x49c(0x04)
	int32_t NumSides; // 0x4a0(0x04)
	float TileMaterial; // 0x4a4(0x04)

	void SetAttachEndToComponent(USceneComponent* Component, FName SocketName);
	void SetAttachEndTo(AActor* Actor, FName ComponentProperty, FName SocketName);
	void GetCableParticleLocations(TArray<FVector> Locations);
	USceneComponent* GetAttachedComponent();
	AActor* GetAttachedActor();
};

