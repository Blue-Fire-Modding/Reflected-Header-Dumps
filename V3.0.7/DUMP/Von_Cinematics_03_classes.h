// BlueprintGeneratedClass Von_Cinematics_03.Von_Cinematics_03_C
// Size: 0x4f0 (Inherited: 0x4c0)
struct AVon_Cinematics_03_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UDecalComponent* Decal; // 0x4c8(0x08)
	UStaticMeshComponent* Sword1; // 0x4d0(0x08)
	UStaticMeshComponent* Sword; // 0x4d8(0x08)
	UVon_Cinematics_AnimBP_C* AnimBP; // 0x4e0(0x08)
	ALeaveTemple_Controller_C* Cutscene; // 0x4e8(0x08)

	void OnNotifyEnd_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
	void OnNotifyBegin_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
	void OnInterrupted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
	void OnBlendOut_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
	void OnCompleted_2633B6944B5BD7A4610652A40C8F00C5(FName NotifyName);
	void ReceiveBeginPlay();
	void VonAnim();
	void FinCutscene();
	void ExecuteUbergraph_Von_Cinematics_03(int32_t EntryPoint);
};

