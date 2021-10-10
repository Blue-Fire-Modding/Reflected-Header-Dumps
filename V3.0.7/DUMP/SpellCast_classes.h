// BlueprintGeneratedClass SpellCast.SpellCast_C
// Size: 0x248 (Inherited: 0x220)
struct ASpellCast_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool Target; // 0x230(0x01)
	FVector Location; // 0x234(0x0c)
	AActor* Actor; // 0x240(0x08)

	void Kill();
	void ReceiveBeginPlay();
	void UpdateLocation();
	void ExecuteUbergraph_SpellCast(int32_t EntryPoint);
};

