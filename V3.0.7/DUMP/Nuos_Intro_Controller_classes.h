// BlueprintGeneratedClass Nuos_Intro_Controller.Nuos_Intro_Controller_C
// Size: 0x320 (Inherited: 0x304)
struct ANuos_Intro_Controller_C : ACinematic_Controller_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	UBillboardComponent* Billboard_1; // 0x310(0x08)
	AActor* TargetA; // 0x318(0x08)

	void OnNotifyEnd_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
	void OnNotifyBegin_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
	void OnInterrupted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
	void OnBlendOut_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
	void OnCompleted_3746CD3048896AC2EEED7EB44EEC5654(FName NotifyName);
	void OnNotifyEnd_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
	void OnNotifyBegin_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
	void OnInterrupted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
	void OnBlendOut_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
	void OnCompleted_87F776894D3F4B58625B17AD80A67A6D(FName NotifyName);
	void End();
	void TX1();
	void TX2();
	void FIN();
	void TX3();
	void CustomEvent_2();
	void TX4();
	void CustomEvent_4();
	void TX5();
	void CustomEvent_6();
	void DemoEnd();
	void StartCutscene();
	void WwiseTrigger();
	void UmbraReaction();
	void Umbra1();
	void Umbra2();
	void StartGodRaySound();
	void Umbra3();
	void ReceiveBeginPlay();
	void SkipCutscene();
	void ExecuteUbergraph_Nuos_Intro_Controller(int32_t EntryPoint);
};

