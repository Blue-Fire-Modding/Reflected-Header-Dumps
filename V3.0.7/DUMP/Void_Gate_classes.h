// BlueprintGeneratedClass Void_Gate.Void_Gate_C
// Size: 0x3e8 (Inherited: 0x28b)
struct AVoid_Gate_C : AInteractionMaster_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UArrowComponent* Player Location; // 0x298(0x08)
	UAkComponent* Ak; // 0x2a0(0x08)
	UParticleSystemComponent* P_Void_Active; // 0x2a8(0x08)
	UParticleSystemComponent* P_Void_Idle; // 0x2b0(0x08)
	UMaterialBillboardComponent* MB_Glow; // 0x2b8(0x08)
	USkeletalMeshComponent* SM_VoidStone; // 0x2c0(0x08)
	UBoxComponent* Box1; // 0x2c8(0x08)
	UPointLightComponent* PointLight; // 0x2d0(0x08)
	float Fade_Color_Lerp_Color_6B489A5348FAED9D05BE6A855E3143F2; // 0x2d8(0x04)
	enum class ETimelineDirection Fade_Color__Direction_6B489A5348FAED9D05BE6A855E3143F2; // 0x2dc(0x01)
	UTimelineComponent* Fade Color; // 0x2e0(0x08)
	float VoidBlack_Light_Intensity_08E361ED4C8FD105E6587A8640732F6A; // 0x2e8(0x04)
	float VoidBlack_Glow_08E361ED4C8FD105E6587A8640732F6A; // 0x2ec(0x04)
	float VoidBlack_Mesh_Size_08E361ED4C8FD105E6587A8640732F6A; // 0x2f0(0x04)
	float VoidBlack_Darkness_08E361ED4C8FD105E6587A8640732F6A; // 0x2f4(0x04)
	enum class ETimelineDirection VoidBlack__Direction_08E361ED4C8FD105E6587A8640732F6A; // 0x2f8(0x01)
	UTimelineComponent* VoidBlack; // 0x300(0x08)
	AStaticMeshActor* Von Statue; // 0x308(0x08)
	AVoid_Location_C* TargetVoid; // 0x310(0x08)
	UVoidStone_AnimBP_C* Anim; // 0x318(0x08)
	bool Completed; // 0x320(0x01)
	FName LevelName; // 0x324(0x08)
	enum class Areas Area; // 0x32c(0x01)
	FTransform DestinationTransform; // 0x330(0x30)
	UMaterialInstanceDynamic* MatVoidCenter; // 0x360(0x08)
	FLinearColor Color Completed; // 0x368(0x10)
	UMaterialInstanceDynamic* MatGlow; // 0x378(0x08)
	FLinearColor Color Base; // 0x380(0x10)
	FText VoidName; // 0x390(0x18)
	UAkComponent* Ak_Sound; // 0x3a8(0x08)
	int32_t Difficulty; // 0x3b0(0x04)
	ULevelSequence* LevelSequence; // 0x3b8(0x08)
	FMulticastInlineDelegate Event; // 0x3c0(0x10)
	UTexture2D* Image; // 0x3d0(0x08)
	ADoor_BP_C* Door; // 0x3d8(0x08)
	UMaterialInstanceDynamic* Statue Eyes; // 0x3e0(0x08)

	void UserConstructionScript();
	void VoidBlack__FinishedFunc();
	void VoidBlack__UpdateFunc();
	void Fade Color__FinishedFunc();
	void Fade Color__UpdateFunc();
	void PressButton();
	void BndEvt__Box1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void BndEvt__Box1_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void ReverseVoid();
	void Open Door();
	void ReceiveBeginPlay();
	void Check State Door();
	void Set Completed();
	void ResumeColision();
	void End();
	void VFX Show();
	void VFX Hide();
	void Wwise Void Loop(bool Play);
	void RemoveVoidUI();
	void ReaddVoidUI();
	void OverlapEndClean();
	void Custom Press Button(FName Level Name);
	void AlreadyUsed();
	void Glow Eyes();
	void ExecuteUbergraph_Void_Gate(int32_t EntryPoint);
	void Event__DelegateSignature();
};

