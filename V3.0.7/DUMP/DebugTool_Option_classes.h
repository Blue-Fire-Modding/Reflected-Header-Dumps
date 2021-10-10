// WidgetBlueprintGeneratedClass DebugTool_Option.DebugTool_Option_C
// Size: 0x398 (Inherited: 0x230)
struct UDebugTool_Option_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SideMoveLeft; // 0x238(0x08)
	UWidgetAnimation* SideMove; // 0x240(0x08)
	UWidgetAnimation* Select; // 0x248(0x08)
	UWidgetAnimation* SelectedIdle; // 0x250(0x08)
	UImage* Arrow_L; // 0x258(0x08)
	UImage* Arrow_R; // 0x260(0x08)
	UImage* Image_1; // 0x268(0x08)
	UImage* Image_67; // 0x270(0x08)
	UTextBlock* OptionText; // 0x278(0x08)
	UTextBlock* Setting; // 0x280(0x08)
	USizeBox* SizeBox_1; // 0x288(0x08)
	TArray<FString> Options; // 0x290(0x10)
	int32_t Index; // 0x2a0(0x04)
	TArray<FString> OptionsCommands; // 0x2a8(0x10)
	float SlideBarValue; // 0x2b8(0x04)
	enum class DebugTool_Options CommandType; // 0x2bc(0x01)
	UBlueFire_Game_Instance_C* GameInstance; // 0x2c0(0x08)
	enum class Items Item; // 0x2c8(0x01)
	APlayer_Character_BP_C* PlayerCharacter; // 0x2d0(0x08)
	enum class Tunics Tunic; // 0x2d8(0x01)
	TArray<enum class CheckPoints> CheckPoints; // 0x2e0(0x10)
	enum class Abilities Abilities; // 0x2f0(0x01)
	enum class Weapons Weapons; // 0x2f1(0x01)
	enum class Spirits Amulets; // 0x2f2(0x01)
	bool FullStats; // 0x2f3(0x01)
	TArray<enum class Areas> MapsArray; // 0x2f8(0x10)
	FString Description; // 0x308(0x10)
	FLinearColor Color; // 0x318(0x10)
	ADebugTools_Control_C* DebugControl; // 0x328(0x08)
	FTransform VoidPre; // 0x330(0x30)
	TArray<FName> TempVisibleAreas; // 0x360(0x10)
	AVoid_Gate_C* VoidGate; // 0x370(0x08)
	TArray<enum class StreamingChunks> AllChunks; // 0x378(0x10)
	TArray<enum class Quests> Quests; // 0x388(0x10)

	void Refresh();
	void Construct();
	void Confirm();
	void SetInitialIndex();
	void UpdateTunicText(FString inString);
	void TunicSelector();
	void Unselected();
	void Selected();
	void ReConstruct();
	void PreConstruct(bool IsDesignTime);
	void Weapon Selector();
	void AmuletSelector();
	void SetCamDistance();
	void SetCamOffset();
	void CheckFreeze();
	void ChangeSetting(bool Right);
	void ConfirmAnim();
	void PlayChangeSettingSound();
	void ConfirmAnimDirect(bool Right);
	void Off(bool On);
	void UpdateItemHas();
	void UpdateDescription();
	void HideArrows();
	void ExecuteUbergraph_DebugTool_Option(int32_t EntryPoint);
};

