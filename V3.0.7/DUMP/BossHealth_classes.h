// WidgetBlueprintGeneratedClass BossHealth.BossHealth_C
// Size: 0x268 (Inherited: 0x230)
struct UBossHealth_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* FadeIn; // 0x238(0x08)
	UCanvasPanel* CanvasPanel_6; // 0x240(0x08)
	UImage* LifeFXBar; // 0x248(0x08)
	UTextBlock* NameTxt; // 0x250(0x08)
	UMaterialInstanceDynamic* LifeBarMat; // 0x258(0x08)
	float Percent; // 0x260(0x04)
	float LerpPercent; // 0x264(0x04)

	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void SetHealth(float Health, float Max Health);
	void Set Name(FText Name);
	void Fade();
	void Construct();
	void Change Bar Size(float Size X);
	void ExecuteUbergraph_BossHealth(int32_t EntryPoint);
};

