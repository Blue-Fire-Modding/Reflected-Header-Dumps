// BlueprintGeneratedClass LeaveTemple_Controller.LeaveTemple_Controller_C
// Size: 0x320 (Inherited: 0x304)
struct ALeaveTemple_Controller_C : ACinematic_Controller_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	UBillboardComponent* Billboard_1; // 0x310(0x08)
	AActor* TargetA; // 0x318(0x08)

	void OnNotifyEnd_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
	void OnNotifyBegin_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
	void OnInterrupted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
	void OnBlendOut_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
	void OnCompleted_C56BA4F44E061796FEAA799FD782EA6A(FName NotifyName);
	void End();
	void FIN();
	void TX1();
	void TX2();
	void TX3();
	void TX4();
	void TX5();
	void TX6();
	void TX8();
	void StartCutscene();
	void TX9();
	void TX10();
	void GiveStoneSound();
	void UmbralookUp();
	void TX5B();
	void Quest();
	void Tutorial();
	void SkipCutscene();
	void ExecuteUbergraph_LeaveTemple_Controller(int32_t EntryPoint);
};

