// BlueprintGeneratedClass CameraCapture.CameraCapture_C
// Size: 0x271 (Inherited: 0x220)
struct ACameraCapture_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UBillboardComponent* Billboard; // 0x228(0x08)
	UArrowComponent* Arrow; // 0x230(0x08)
	UBoxComponent* Box; // 0x238(0x08)
	USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	APlayer_Character_BP_C* PlayerRef; // 0x248(0x08)
	AActor* CameraPivotRef; // 0x250(0x08)
	float Distance; // 0x258(0x04)
	float SpeedAdjust; // 0x25c(0x04)
	float MaxYaw; // 0x260(0x04)
	float MaxPitch; // 0x264(0x04)
	AActor* Wall; // 0x268(0x08)
	bool View; // 0x270(0x01)

	void UserConstructionScript();
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ReceiveActorEndOverlap(AActor* OtherActor);
	void ExecuteUbergraph_CameraCapture(int32_t EntryPoint);
};

