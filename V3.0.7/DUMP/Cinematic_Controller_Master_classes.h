// BlueprintGeneratedClass Cinematic_Controller_Master.Cinematic_Controller_Master_C
// Size: 0x304 (Inherited: 0x220)
struct ACinematic_Controller_Master_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAkComponent* AkStopOverride; // 0x228(0x08)
	UAkComponent* AkOverride; // 0x230(0x08)
	UBillboardComponent* Billboard; // 0x238(0x08)
	UBoxComponent* Box; // 0x240(0x08)
	USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	APlayer_Character_BP_C* Player; // 0x250(0x08)
	FString CutsceneID; // 0x258(0x10)
	bool CanSkipCutscene; // 0x268(0x01)
	ANPCBound_C* NPCBound; // 0x270(0x08)
	enum class Areas Area; // 0x278(0x01)
	bool MeetCondition; // 0x279(0x01)
	FString Condition; // 0x280(0x10)
	bool DebugAlwaysRun; // 0x290(0x01)
	bool OverrideAudio; // 0x291(0x01)
	UAkAudioEvent* CutsceneAudioOverride; // 0x298(0x08)
	bool Lower5dB; // 0x2a0(0x01)
	UAkAudioEvent* StopCutsceneAudioOverride; // 0x2a8(0x08)
	bool OverrideOnlyMusic; // 0x2b0(0x01)
	UAkAudioEvent* CutsceneAudioOverride2; // 0x2b8(0x08)
	UAkAudioEvent* StopCutsceneAudioOverride2; // 0x2c0(0x08)
	bool Mono_VO; // 0x2c8(0x01)
	bool UseInBeginPlay; // 0x2c9(0x01)
	float Delay; // 0x2cc(0x04)
	bool CharacterMakeUpGain; // 0x2d0(0x01)
	bool RequireItem; // 0x2d1(0x01)
	enum class Items ItemRequired; // 0x2d2(0x01)
	bool IsKeyItem; // 0x2d3(0x01)
	bool InstantWriteID; // 0x2d4(0x01)
	FMulticastInlineDelegate StartMusicIntroCutscene; // 0x2d8(0x10)
	float DelayStartMusicIntro; // 0x2e8(0x04)
	USkipCutscene_Action_UI_C* SkipCutsceneWidget; // 0x2f0(0x08)
	ULevelSequencePlayer* Current Sequence; // 0x2f8(0x08)
	bool EnableSkipCutscene; // 0x300(0x01)
	bool Instant Deactivate Box; // 0x301(0x01)
	bool TimeFix; // 0x302(0x01)
	bool EnableTriggerCutscene; // 0x303(0x01)

	void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void StartCutscene();
	void ReceiveBeginPlay();
	void CreateBound();
	void AreaName();
	void EndCutscene();
	void Cutscene Begin Play Used();
	void ForceTriggerCutscene();
	void WriteID();
	void SkipCutscene();
	void ReceiveActorEndOverlap(AActor* OtherActor);
	void ForceCutscene();
	void Write Custom ID();
	void Deactivate Box();
	void ExecuteUbergraph_Cinematic_Controller_Master(int32_t EntryPoint);
	void StartMusicIntroCutscene__DelegateSignature();
};

