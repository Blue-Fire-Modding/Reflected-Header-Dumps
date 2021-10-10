// BlueprintGeneratedClass Music_Trigger_Enter_Exit_3.Music_Trigger_Enter_Exit_2_C
// Size: 0x298 (Inherited: 0x220)
struct AMusic_Trigger_Enter_Exit_2_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAkComponent* Ak_Component; // 0x228(0x08)
	UBoxComponent* Box; // 0x230(0x08)
	USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	UAkAudioEvent* Ak_Event_Start; // 0x240(0x08)
	UAkComponent* Component; // 0x248(0x08)
	UAkAudioEvent* Ak_Event_Stop; // 0x250(0x08)
	bool StartInBeginPlay; // 0x258(0x01)
	FString ID; // 0x260(0x10)
	APlayer_Character_BP_C* Player; // 0x270(0x08)
	bool CustomIntroGlass; // 0x278(0x01)
	bool StartMusicWithIntroCutscene; // 0x279(0x01)
	FString ID2; // 0x280(0x10)
	ACinematic_Controller_Master_C* Target; // 0x290(0x08)

	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void ReceiveActorEndOverlap(AActor* OtherActor);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Play();
	void Play2();
	void Replay Event Start();
	void ExecuteUbergraph_Music_Trigger_Enter_Exit_3(int32_t EntryPoint);
};

