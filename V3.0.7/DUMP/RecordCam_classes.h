// BlueprintGeneratedClass RecordCam.RecordCam_C
// Size: 0x4f8 (Inherited: 0x4c0)
struct ARecordCam_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UCameraComponent* Camera; // 0x4c8(0x08)
	TArray<UTexture*> LutArray; // 0x4d0(0x10)
	int32_t LutIndex; // 0x4e0(0x04)
	TArray<FPostProcessSettings> Filters; // 0x4e8(0x10)

	void UserConstructionScript();
	void MovementA(FVector WorldDirection);
	void NextFilter(bool Right);
	void ReceiveBeginPlay();
	void MovementB(float ScaleValue);
	void PreviewFilter();
	void ExecuteUbergraph_RecordCam(int32_t EntryPoint);
};

