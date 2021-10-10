// BlueprintGeneratedClass Enemy_Master_AiController.Enemy_Master_AiController_C
// Size: 0x338 (Inherited: 0x328)
struct AEnemy_Master_AiController_C : AAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	UBlackboardData* SelfBlackBoard; // 0x330(0x08)

	void StartAI();
	void StopAi();
	void ExecuteUbergraph_Enemy_Master_AiController(int32_t EntryPoint);
};

