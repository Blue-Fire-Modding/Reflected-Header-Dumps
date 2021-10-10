// WidgetBlueprintGeneratedClass SpeedTimer.SpeedTimer_C
// Size: 0x258 (Inherited: 0x230)
struct USpeedTimer_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UCanvasPanel* CanvasPanel_1; // 0x238(0x08)
	UImage* Image_148; // 0x240(0x08)
	UTextBlock* TextBlock_124; // 0x248(0x08)
	float TimeElapsed; // 0x250(0x04)
	float TickTimer; // 0x254(0x04)

	void Construct();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Count();
	void TempRemove();
	void TempReAdd();
	void Count2();
	void Play();
	void Stop();
	void ExecuteUbergraph_SpeedTimer(int32_t EntryPoint);
};

