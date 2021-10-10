// BlueprintGeneratedClass Player_AttackWave.Player_AttackWave_C
// Size: 0x281 (Inherited: 0x220)
struct APlayer_AttackWave_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBillboardComponent* Billboard; // 0x228(0x08)
	USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float Timeline_0_c_B251FF124E8BDDCA713C398FA58C9857; // 0x238(0x04)
	enum class ETimelineDirection Timeline_0__Direction_B251FF124E8BDDCA713C398FA58C9857; // 0x23c(0x01)
	UTimelineComponent* Timeline_1; // 0x240(0x08)
	TArray<AActor*> HitActors; // 0x248(0x10)
	float Damage; // 0x258(0x04)
	FVector Dir; // 0x25c(0x0c)
	bool Left; // 0x268(0x01)
	int32_t AttackDire; // 0x26c(0x04)
	bool recoil; // 0x270(0x01)
	bool Downwards; // 0x271(0x01)
	bool DownSmash; // 0x272(0x01)
	APlayer_Character_BP_C* Player; // 0x278(0x08)
	bool Bounce; // 0x280(0x01)

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void SetSurfaceSoundType(enum class EPhysicalSurface SurfaceType);
	void Reset();
	void End(bool CompleteKill);
	void AttackExecute(bool Downwards, FVector Dir, float Damage, int32_t AttackDire, bool DownSmash, bool AerialAttack, float BounceHeight, float Range);
	void ExecuteUbergraph_Player_AttackWave(int32_t EntryPoint);
};

