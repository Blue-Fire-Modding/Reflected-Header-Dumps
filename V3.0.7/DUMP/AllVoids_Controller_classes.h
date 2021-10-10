// BlueprintGeneratedClass AllVoids_Controller.AllVoids_Controller_C
// Size: 0x340 (Inherited: 0x304)
struct AAllVoids_Controller_C : ACinematic_Controller_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	float Blink_Blink_F34596D74C6665671A393EB5CD259991; // 0x310(0x04)
	enum class ETimelineDirection Blink__Direction_F34596D74C6665671A393EB5CD259991; // 0x314(0x01)
	UTimelineComponent* Blink; // 0x318(0x08)
	AActor* TargetA; // 0x320(0x08)
	float Eyes power; // 0x328(0x04)
	FMulticastInlineDelegate FinishIntroCutscene; // 0x330(0x10)

	void Blink__FinishedFunc();
	void Blink__UpdateFunc();
	void OnNotifyEnd_A701861F42511FD961D56E9284DA1991(FName NotifyName);
	void OnNotifyBegin_A701861F42511FD961D56E9284DA1991(FName NotifyName);
	void OnInterrupted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
	void OnBlendOut_A701861F42511FD961D56E9284DA1991(FName NotifyName);
	void OnCompleted_A701861F42511FD961D56E9284DA1991(FName NotifyName);
	void OnNotifyEnd_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
	void OnNotifyBegin_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
	void OnInterrupted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
	void OnBlendOut_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
	void OnCompleted_6824A750451DB8E5691BF494C7868E7B(FName NotifyName);
	void TX3();
	void DestroyEvent();
	void EndEvent();
	void FIN();
	void Continue();
	void TX1();
	void TX2();
	void TX4();
	void TX5();
	void UmbraAnim();
	void UmbraBlink();
	void UmbraSleep();
	void UmbraWakeUp();
	void UmbraTunic();
	void GodChimeStart();
	void GodChimeEnd();
	void SkipCutscene();
	void StartCutscene();
	void Cutscene CallFinish();
	void ExecuteUbergraph_AllVoids_Controller(int32_t EntryPoint);
	void FinishIntroCutscene__DelegateSignature();
};

