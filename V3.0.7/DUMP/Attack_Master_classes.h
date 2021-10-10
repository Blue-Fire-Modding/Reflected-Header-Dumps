// BlueprintGeneratedClass Attack_Master.Attack_Master_C
// Size: 0x24d (Inherited: 0x220)
struct AAttack_Master_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float Damage; // 0x230(0x04)
	float ReleaseTime; // 0x234(0x04)
	float Speed; // 0x238(0x04)
	float Duration; // 0x23c(0x04)
	AEnemy_Character_Parent_C* Parent; // 0x240(0x08)
	float MaxDieOutTime; // 0x248(0x04)
	bool MaxDieOut; // 0x24c(0x01)

	void ReceiveBeginPlay();
	void Release();
	void Cancel();
	void Explode();
	void FadeOut();
	void TickRotToPlayer();
	void CustomBeginPlay();
	void ExecuteUbergraph_Attack_Master(int32_t EntryPoint);
};

