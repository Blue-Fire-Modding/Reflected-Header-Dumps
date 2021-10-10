// BlueprintGeneratedClass Shield_Bp.Shield_Bp_C
// Size: 0x240 (Inherited: 0x220)
struct AShield_Bp_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UPointLightComponent* PointLight; // 0x228(0x08)
	UParticleSystemComponent* ShielfFX; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)

	void On();
	void Off();
	void ExecuteUbergraph_Shield_Bp(int32_t EntryPoint);
};

