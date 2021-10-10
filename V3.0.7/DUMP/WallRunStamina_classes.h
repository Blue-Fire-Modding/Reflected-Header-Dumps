// WidgetBlueprintGeneratedClass WallRunStamina.WallRunStamina_C
// Size: 0x251 (Inherited: 0x230)
struct UWallRunStamina_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Bar; // 0x238(0x08)
	UMaterialInstanceDynamic* Material; // 0x240(0x08)
	float Value; // 0x248(0x04)
	float LerpValue; // 0x24c(0x04)
	bool InVoid; // 0x250(0x01)

	void Construct();
	void Update(float Value);
	void StartUpdate(bool Void);
	void UpdateLocation();
	void StopUpdate();
	void Hit(float AmountReduce);
	void Land(bool Instant);
	void Refill();
	void Hide();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_WallRunStamina(int32_t EntryPoint);
};

