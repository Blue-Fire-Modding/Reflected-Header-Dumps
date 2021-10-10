// WidgetBlueprintGeneratedClass OptionMaster.OptionMaster_C
// Size: 0x2c1 (Inherited: 0x230)
struct UOptionMaster_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SelectedIdle; // 0x238(0x08)
	UImage* Arrow_L; // 0x240(0x08)
	UImage* Arrow_R; // 0x248(0x08)
	UImage* Image_1; // 0x250(0x08)
	UTextBlock* OptionText; // 0x258(0x08)
	UTextBlock* Setting; // 0x260(0x08)
	USlider* SliderBar; // 0x268(0x08)
	UWidgetSwitcher* WidgetSwitcher_1; // 0x270(0x08)
	TArray<FString> Options; // 0x278(0x10)
	int32_t Index; // 0x288(0x04)
	TArray<FString> OptionsCommands; // 0x290(0x10)
	float SlideBarValue; // 0x2a0(0x04)
	enum class Options CommandType; // 0x2a4(0x01)
	UBlueFire_Game_Instance_C* GameInstance; // 0x2a8(0x08)
	FMulticastInlineDelegate RefreshAll; // 0x2b0(0x10)
	bool Clickable; // 0x2c0(0x01)

	void Command();
	void SliderBarLimits(float A);
	void RemoveArrows();
	void ChangeSetting(bool Right);
	void Unselected();
	void Selected();
	void ReConstruct();
	void Run();
	void SetSlideBarValue();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_OptionMaster(int32_t EntryPoint);
	void RefreshAll__DelegateSignature();
};

