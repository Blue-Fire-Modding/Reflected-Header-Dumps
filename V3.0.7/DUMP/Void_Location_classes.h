// BlueprintGeneratedClass Void_Location.Void_Location_C
// Size: 0x319 (Inherited: 0x28b)
struct AVoid_Location_C : AInteractionMaster_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	UArrowComponent* Arrow; // 0x298(0x08)
	UBoxComponent* Box_1; // 0x2a0(0x08)
	FTransform PreviousLocation; // 0x2b0(0x30)
	FText VoidName; // 0x2e0(0x18)
	ULevelSequence* LevelSequence; // 0x2f8(0x08)
	bool Skip Cutscene; // 0x300(0x01)
	bool CanSkipCutscene; // 0x301(0x01)
	USkipCutscene_Action_UI_C* SkipCutsceneWidget; // 0x308(0x08)
	ULevelSequencePlayer* Current Sequence; // 0x310(0x08)
	bool IsPlayingCutscene; // 0x318(0x01)

	void InpActEvt_PC_Back_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Back_K2Node_InputActionEvent_1(FKey Key);
	void PressButton();
	void ReceiveBeginPlay();
	void Play();
	void SkipCutscene();
	void ExecuteUbergraph_Void_Location(int32_t EntryPoint);
};

