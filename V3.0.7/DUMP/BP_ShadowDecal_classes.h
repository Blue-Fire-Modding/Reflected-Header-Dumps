// BlueprintGeneratedClass BP_ShadowDecal.BP_ShadowDecal_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_ShadowDecal_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UDecalComponent* Decal; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Fade_Fade_1CC0E9154DDFB260869F66B6899AC881; // 0x238(0x04)
	enum class ETimelineDirection Fade__Direction_1CC0E9154DDFB260869F66B6899AC881; // 0x23c(0x01)
	UTimelineComponent* Fade; // 0x240(0x08)

	void Fade__FinishedFunc();
	void Fade__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ShadowDecal(int32_t EntryPoint);
};

