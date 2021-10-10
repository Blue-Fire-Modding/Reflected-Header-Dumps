// BlueprintGeneratedClass TutorialText.TutorialText_C
// Size: 0x2d3 (Inherited: 0x28b)
struct ATutorialText_C : AInteractionMaster_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x298(0x08)
	UDecalComponent* Decal; // 0x2a0(0x08)
	bool FreezePlayer; // 0x2a8(0x01)
	enum class TutorialList Tutorial; // 0x2a9(0x01)
	bool OpenOnSpawn; // 0x2aa(0x01)
	bool TutOpen; // 0x2ab(0x01)
	FMulticastInlineDelegate Removed; // 0x2b0(0x10)
	FString ID_Tutorial; // 0x2c0(0x10)
	bool OpenOnlyOnce; // 0x2d0(0x01)
	bool HideUthasNoDemo; // 0x2d1(0x01)
	bool CloseByDie; // 0x2d2(0x01)

	void UserConstructionScript();
	void PressButton();
	void Die();
	void SpawnOpen(FString ID);
	void ReceiveBeginPlay();
	void VFX Show(bool Show);
	void Take Hit();
	void ExecuteUbergraph_TutorialText(int32_t EntryPoint);
	void Removed__DelegateSignature();
};

