// BlueprintGeneratedClass Cinematic_Area_Intro.Cinematic_Area_Intro_C
// Size: 0x33a (Inherited: 0x304)
struct ACinematic_Area_Intro_C : ACinematic_Controller_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	UArrowComponent* Arrow; // 0x310(0x08)
	ULevelSequence* Sequence_1; // 0x318(0x08)
	enum class StreamingChunks Chunk; // 0x320(0x01)
	bool NotVisited; // 0x321(0x01)
	bool MoveTo; // 0x322(0x01)
	bool FadeIn; // 0x323(0x01)
	bool FadeOut; // 0x324(0x01)
	float FadeInDuration; // 0x328(0x04)
	AActor* TargetA; // 0x330(0x08)
	bool ShowHudEnd; // 0x338(0x01)
	bool CustomID; // 0x339(0x01)

	void UserConstructionScript();
	void End();
	void AreaName();
	void SkipCutscene();
	void ReceiveBeginPlay();
	void StartCutscene();
	void Write Custom ID();
	void ReceiveActorBeginOverlap(AActor* OtherActor);
	void Cutscene Begin Play Used();
	void ExecuteUbergraph_Cinematic_Area_Intro(int32_t EntryPoint);
};

