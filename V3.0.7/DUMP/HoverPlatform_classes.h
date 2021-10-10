// BlueprintGeneratedClass HoverPlatform.HoverPlatform_C
// Size: 0x268 (Inherited: 0x220)
struct AHoverPlatform_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UStaticMeshComponent* Plane1; // 0x228(0x08)
	UStaticMeshComponent* Plane; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Play_Opacity_BC92B0ED4533968EEE7BB1BAAC6A23A1; // 0x240(0x04)
	enum class ETimelineDirection Play__Direction_BC92B0ED4533968EEE7BB1BAAC6A23A1; // 0x244(0x01)
	UTimelineComponent* Play; // 0x248(0x08)
	float Z; // 0x250(0x04)
	FMulticastInlineDelegate Finish; // 0x258(0x10)

	void Play__FinishedFunc();
	void Play__UpdateFunc();
	void ReceiveBeginPlay();
	void QuickFade();
	void ExecuteUbergraph_HoverPlatform(int32_t EntryPoint);
	void Finish__DelegateSignature();
};

