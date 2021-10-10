// BlueprintGeneratedClass CheckPoint.CheckPoint_C
// Size: 0x409 (Inherited: 0x2b9)
struct ACheckPoint_C : ANPCBound_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	UParticleSystemComponent* P_SaveCheckpoint; // 0x2c8(0x08)
	UStaticMeshComponent* CheckpointBase; // 0x2d0(0x08)
	UChildActorComponent* HeadPOI; // 0x2d8(0x08)
	UStaticMeshComponent* StaticMesh; // 0x2e0(0x08)
	UParticleSystemComponent* ParticleSystem; // 0x2e8(0x08)
	UDecalComponent* Decal; // 0x2f0(0x08)
	UArrowComponent* CameraDirection; // 0x2f8(0x08)
	UArrowComponent* PlayerDirection; // 0x300(0x08)
	float Timeline_0_Intensity_BDC6228346BBB15C38E8A3A7675B89F1; // 0x308(0x04)
	enum class ETimelineDirection Timeline_0__Direction_BDC6228346BBB15C38E8A3A7675B89F1; // 0x30c(0x01)
	UTimelineComponent* Timeline_1; // 0x310(0x08)
	float Radial_Glow_Glow_E75D54CA47A7A0D8F3561191F9FA213D; // 0x318(0x04)
	float Radial_Glow_Blur_E75D54CA47A7A0D8F3561191F9FA213D; // 0x31c(0x04)
	enum class ETimelineDirection Radial_Glow__Direction_E75D54CA47A7A0D8F3561191F9FA213D; // 0x320(0x01)
	UTimelineComponent* Radial Glow; // 0x328(0x08)
	float Glow_Eyes_Intensity_5E577C704BF9C844AE221783B4443759; // 0x330(0x04)
	enum class ETimelineDirection Glow_Eyes__Direction_5E577C704BF9C844AE221783B4443759; // 0x334(0x01)
	UTimelineComponent* Glow Eyes; // 0x338(0x08)
	bool Debug Checkpoint; // 0x340(0x01)
	bool Play Checkpoint; // 0x341(0x01)
	FCheckpointInformation Information; // 0x350(0x60)
	enum class StreamingChunks Chunk; // 0x3b0(0x01)
	enum class CheckPoints CheckPoint; // 0x3b1(0x01)
	TArray<enum class Areas> LoadAreas; // 0x3b8(0x10)
	UAkAudioEvent* Music; // 0x3c8(0x08)
	bool Awakened; // 0x3d0(0x01)
	enum class Areas MainArea; // 0x3d1(0x01)
	TArray<FName> VisibleAreas; // 0x3d8(0x10)
	UMaterialInstanceDynamic* Material Statue; // 0x3e8(0x08)
	UMaterialInstanceDynamic* Material Base; // 0x3f0(0x08)
	int32_t Cost; // 0x3f8(0x04)
	UBlueFire_Game_Instance_C* Game Instance; // 0x400(0x08)
	bool HasSanctuaryStone; // 0x408(0x01)

	void UserConstructionScript();
	void Glow Eyes__FinishedFunc();
	void Glow Eyes__UpdateFunc();
	void Radial Glow__FinishedFunc();
	void Radial Glow__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnNotifyEnd_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
	void OnNotifyBegin_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
	void OnInterrupted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
	void OnBlendOut_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
	void OnCompleted_4DC63C954C5238AAF4E168B5A4E54FA1(FName NotifyName);
	void OnNotifyEnd_C9CB77344B86088688E17D958362AE39(FName NotifyName);
	void OnNotifyBegin_C9CB77344B86088688E17D958362AE39(FName NotifyName);
	void OnInterrupted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
	void OnBlendOut_C9CB77344B86088688E17D958362AE39(FName NotifyName);
	void OnCompleted_C9CB77344B86088688E17D958362AE39(FName NotifyName);
	void SetAwakened(bool Set Glow);
	void DialogStartCall();
	void QuickEnd();
	void CustomEvent_2();
	void ReceiveBeginPlay();
	void SetCurrentCheckpoint();
	void CustomEvent();
	void UpdateFire();
	void WarpDisable();
	void WarpEnable();
	void EndOverlapCall();
	void Set Glow();
	void RadialGlow();
	void Return();
	void Mana();
	void ExitCheckpoint();
	void CustomEvent_3();
	void CustomEvent_5();
	void Get Mana();
	void CustomEvent_1();
	void ReturnQuick();
	void CustomEvent_4();
	void ExecuteUbergraph_CheckPoint(int32_t EntryPoint);
};

