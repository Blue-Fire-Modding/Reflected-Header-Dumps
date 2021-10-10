// BlueprintGeneratedClass InsideTemple_Controller.InsideTemple_Controller_C
// Size: 0x320 (Inherited: 0x304)
struct AInsideTemple_Controller_C : ACinematic_Controller_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	UBillboardComponent* Billboard_1; // 0x310(0x08)
	AActor* TargetA; // 0x318(0x08)

	void Ability();
	void StopChimeSound();
	void End();
	void StartChimeSound();
	void FIN();
	void TX1();
	void TX2();
	void TX3();
	void StartCutscene();
	void TX4();
	void SkipCutscene();
	void ExecuteUbergraph_InsideTemple_Controller(int32_t EntryPoint);
};

