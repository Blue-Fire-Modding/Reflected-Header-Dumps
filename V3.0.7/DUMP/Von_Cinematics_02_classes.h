// BlueprintGeneratedClass Von_Cinematics_02.Von_Cinematics_02_C
// Size: 0x4f0 (Inherited: 0x4c0)
struct AVon_Cinematics_02_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UDecalComponent* Decal; // 0x4c8(0x08)
	UStaticMeshComponent* Sword1; // 0x4d0(0x08)
	UStaticMeshComponent* Sword; // 0x4d8(0x08)
	UVon_Cinematics_AnimBP_C* AnimBP; // 0x4e0(0x08)
	ALeaveTemple_Controller_C* Cutscene; // 0x4e8(0x08)

	void OnNotifyEnd_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
	void OnNotifyBegin_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
	void OnInterrupted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
	void OnBlendOut_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
	void OnCompleted_D9FFFB3244C421F6F383CABE1DD72518(FName NotifyName);
	void OnNotifyEnd_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
	void OnNotifyBegin_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
	void OnInterrupted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
	void OnBlendOut_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
	void OnCompleted_1C5D151D4752EC3BA2EC868474FBA115(FName NotifyName);
	void ReceiveBeginPlay();
	void VonAnim();
	void FinCutscene();
	void VonGiveSanctuary();
	void ExecuteUbergraph_Von_Cinematics_02(int32_t EntryPoint);
};

