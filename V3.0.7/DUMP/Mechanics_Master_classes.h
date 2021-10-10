// BlueprintGeneratedClass Mechanics_Master.Mechanics_Master_C
// Size: 0x249 (Inherited: 0x220)
struct AMechanics_Master_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	bool Persistent; // 0x230(0x01)
	FString ID; // 0x238(0x10)
	bool Active; // 0x248(0x01)

	void UserConstructionScript();
	void Activate(bool ExternalControl, bool BeginPlay, bool ChangeCamera, bool Instant, bool Is Cutscene);
	void Deactivate(bool Instant);
	void AlreadyUsed();
	void SetPermanent();
	void ExecuteUbergraph_Mechanics_Master(int32_t EntryPoint);
};

