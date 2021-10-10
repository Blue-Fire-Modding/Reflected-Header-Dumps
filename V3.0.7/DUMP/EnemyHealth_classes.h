// WidgetBlueprintGeneratedClass EnemyHealth.EnemyHealth_C
// Size: 0x25c (Inherited: 0x230)
struct UEnemyHealth_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* LifeFXBar; // 0x238(0x08)
	USizeBox* SizeBox_2; // 0x240(0x08)
	UMaterialInstanceDynamic* LifeBarMat; // 0x248(0x08)
	float Percent; // 0x250(0x04)
	float LerpPercent; // 0x254(0x04)
	float Size; // 0x258(0x04)

	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetHealth(float Health, float Max Health);
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_EnemyHealth(int32_t EntryPoint);
};

