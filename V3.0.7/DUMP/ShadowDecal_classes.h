// BlueprintGeneratedClass ShadowDecal.ShadowDecal_C
// Size: 0x238 (Inherited: 0x220)
struct AShadowDecal_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDecalComponent* Decal; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void ReceiveBeginPlay();
	void UpdateSize(float Value);
	void ExecuteUbergraph_ShadowDecal(int32_t EntryPoint);
};

