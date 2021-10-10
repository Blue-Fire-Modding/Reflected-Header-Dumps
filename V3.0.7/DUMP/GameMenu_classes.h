// WidgetBlueprintGeneratedClass GameMenu.GameMenu_C
// Size: 0x71b (Inherited: 0x230)
struct UGameMenu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* RestoreControls; // 0x238(0x08)
	UWidgetAnimation* FadeOutAn; // 0x240(0x08)
	UWidgetAnimation* ChangeTabAnim; // 0x248(0x08)
	UWidgetAnimation* ExitSelect; // 0x250(0x08)
	UWidgetAnimation* StartSelect; // 0x258(0x08)
	UWidgetAnimation* Idle; // 0x260(0x08)
	UWidgetAnimation* FadeIn; // 0x268(0x08)
	UImage* Background; // 0x270(0x08)
	UTextBlock* BuildVersion; // 0x278(0x08)
	UWidgetSwitcher* ControlPlatformSwitch; // 0x280(0x08)
	UControlsUI_PS_C* ControlsUI_PS; // 0x288(0x08)
	UControlsUI_Stadia_C* ControlsUI_Stadia; // 0x290(0x08)
	UControlsUI_Switch_C* ControlsUI_Switch; // 0x298(0x08)
	UControlsUI_Xbox_C* ControlsUI_Xbox; // 0x2a0(0x08)
	UWrapBox* DemoSelectWrap; // 0x2a8(0x08)
	UEditableTextBox* EditableTextBox_90; // 0x2b0(0x08)
	UGameMenuTitle_C* Exit; // 0x2b8(0x08)
	UImage* FadeoutAnim; // 0x2c0(0x08)
	UGameMenuTitle_C* File; // 0x2c8(0x08)
	UGameMenuTitle_C* File_2; // 0x2d0(0x08)
	UScrollBox* FileScrollBox; // 0x2d8(0x08)
	UFileSelect_C* FileSelect_42; // 0x2e0(0x08)
	UFileSelect_C* FileSelect_79; // 0x2e8(0x08)
	UFileSelect_C* FileSelect_103; // 0x2f0(0x08)
	UFileSelect_C* FileSelect_174; // 0x2f8(0x08)
	UFileSelect_C* FileSelect_486; // 0x300(0x08)
	UFileSelect_C* FileSelect_647; // 0x308(0x08)
	UFileSelect_C* FileSelect_786; // 0x310(0x08)
	UFileSelect_C* FileSelect_922; // 0x318(0x08)
	UFileSelect_C* FileSelect_1419; // 0x320(0x08)
	UFileSelect_C* FileSelect_1599; // 0x328(0x08)
	UFileSelect_C* FileSelect_1751; // 0x330(0x08)
	UFileSelect_C* FileSelect_1881; // 0x338(0x08)
	UWrapBox* FileSelectedConfirmationBox; // 0x340(0x08)
	UGameDemo_Options_C* GameDemo_Options; // 0x348(0x08)
	UGameDemo_Options_C* GameDemo_Options_176; // 0x350(0x08)
	UGameMenuTitle_C* GameMenuTitle; // 0x358(0x08)
	UGameMenuTitle_C* GameMenuTitle_2; // 0x360(0x08)
	UGameMenuTitle_C* GameMenuTitle_3; // 0x368(0x08)
	UGameMenuTitle_C* GameMenuTitle_4; // 0x370(0x08)
	UGameMenuTitle_C* GameMenuTitle_261; // 0x378(0x08)
	UGameMenuTitle_C* GameMenuTitle_426; // 0x380(0x08)
	UImage* HorBarTitle; // 0x388(0x08)
	UImage* HorBarTitle_2; // 0x390(0x08)
	UImage* HorBarTitle_3; // 0x398(0x08)
	UImage* Image; // 0x3a0(0x08)
	UImage* Image_1; // 0x3a8(0x08)
	UImage* Image_3; // 0x3b0(0x08)
	UImage* Image_4; // 0x3b8(0x08)
	UImage* Image_5; // 0x3c0(0x08)
	UImage* Image_6; // 0x3c8(0x08)
	UImage* Image_7; // 0x3d0(0x08)
	UImage* Image_64; // 0x3d8(0x08)
	UImage* Image_87; // 0x3e0(0x08)
	UWrapBox* MainMenuWrap; // 0x3e8(0x08)
	UMenu_ConfirmationBox_C* Menu_ConfirmationBox_Left; // 0x3f0(0x08)
	UMenu_ConfirmationBox_C* Menu_ConfirmationBox_Right; // 0x3f8(0x08)
	UOptionMaster_C* OptionAntialising; // 0x400(0x08)
	UOptionMaster_C* OptionCamSensitibity; // 0x408(0x08)
	UOptionMaster_C* OptionEffectsVol; // 0x410(0x08)
	UOptionMaster_C* OptionIdleCamMovement; // 0x418(0x08)
	UOptionMaster_C* OptionInvertHorCam; // 0x420(0x08)
	UOptionMaster_C* OptionInvertVerticalCam; // 0x428(0x08)
	UOptionMaster_C* OptionLanguage; // 0x430(0x08)
	UOptionMaster_C* OptionMaster; // 0x438(0x08)
	UOptionMaster_C* OptionMaster_CamAutoAdjust; // 0x440(0x08)
	UOptionMaster_C* OptionMaster_CameraShakes; // 0x448(0x08)
	UOptionMaster_C* OptionMaster_FPSLimit; // 0x450(0x08)
	UOptionMaster_C* OptionMaster_MotionBlur; // 0x458(0x08)
	UOptionMaster_C* OptionMaster_Rumble; // 0x460(0x08)
	UOptionMaster_C* OptionMaster_ScreenMode; // 0x468(0x08)
	UOptionMaster_C* OptionMusicVol; // 0x470(0x08)
	UOptionMaster_C* OptionPostProcess; // 0x478(0x08)
	UOptionMaster_C* OptionScreenRes; // 0x480(0x08)
	UOptionMaster_C* OptionShadowQuality; // 0x488(0x08)
	UOptionMaster_C* OptionSmoothCamRotation; // 0x490(0x08)
	UOptionMaster_C* OptionTextureQuality; // 0x498(0x08)
	UOverlay* Overlay_1; // 0x4a0(0x08)
	UCanvasPanel* PC; // 0x4a8(0x08)
	UTextBlock* PC_ActionRemap; // 0x4b0(0x08)
	UAction_Remap_Option_C* PC_Camera; // 0x4b8(0x08)
	UAction_Remap_Option_C* PC_Dash; // 0x4c0(0x08)
	UAction_Remap_Option_C* PC_EmoteMenu; // 0x4c8(0x08)
	UAction_Remap_Option_C* PC_Horizontal_Attack; // 0x4d0(0x08)
	UAction_Remap_Option_C* PC_Interact; // 0x4d8(0x08)
	UAction_Remap_Option_C* PC_Jump; // 0x4e0(0x08)
	UWrapBox* PC_KeyMap_Options; // 0x4e8(0x08)
	UTextBlock* PC_KeyMappingPrompt; // 0x4f0(0x08)
	UAction_Remap_Option_C* PC_Lock; // 0x4f8(0x08)
	UAction_Remap_Option_C* PC_LockSwitch; // 0x500(0x08)
	UAction_Remap_Option_C* PC_Movement; // 0x508(0x08)
	UAction_Remap_Option_C* PC_Pause; // 0x510(0x08)
	UAction_Remap_Option_C* PC_QuickEmote; // 0x518(0x08)
	UOverlay* PC_Remap_Prompt_NewKey; // 0x520(0x08)
	UAction_Remap_Option_C* PC_RestoreHealth; // 0x528(0x08)
	UAction_Remap_Option_C* PC_Shield; // 0x530(0x08)
	UAction_Remap_Option_C* PC_Sprint; // 0x538(0x08)
	UAction_Remap_Option_C* PC_Vertical_Attack; // 0x540(0x08)
	UGameMenuTitle_C* PlayDemo; // 0x548(0x08)
	UCanvasPanel* PS4; // 0x550(0x08)
	UAction_Remap_Option_C* RestoreToDefaults; // 0x558(0x08)
	UWrapBox* SaveFileWrapBox_2; // 0x560(0x08)
	UScrollBox* ScrollBox_104; // 0x568(0x08)
	UScrollBox* ScrollBox_232; // 0x570(0x08)
	USelectCommands_C* SelectCommands; // 0x578(0x08)
	USelectCommands_C* SelectCommands_200; // 0x580(0x08)
	USelectCommands_C* SelectCommands_C; // 0x588(0x08)
	USelectCommands_C* SelectCommands_C_1; // 0x590(0x08)
	USelectCommands_C* SelectCommands_C_2; // 0x598(0x08)
	USelectCommands_C* SelectCommands_C_3; // 0x5a0(0x08)
	USelectCommands_C* SelectCommands_C_4; // 0x5a8(0x08)
	USelectCommands_C* SelectCommands_C_5; // 0x5b0(0x08)
	USelectCommands_C* SelectCommands_C_6; // 0x5b8(0x08)
	USelectCommands_C* SelectCommands_C_7; // 0x5c0(0x08)
	UGameMenuTitle_C* Settings; // 0x5c8(0x08)
	UWrapBox* SettingsMainWrap; // 0x5d0(0x08)
	UWrapBox* SettingsMainWrap_2; // 0x5d8(0x08)
	UCanvasPanel* Stadia; // 0x5e0(0x08)
	UCanvasPanel* Switch; // 0x5e8(0x08)
	UTextBlock* TextBlock; // 0x5f0(0x08)
	UTextBlock* TextBlock_1; // 0x5f8(0x08)
	UTextBlock* TextBlock_2; // 0x600(0x08)
	UTextBlock* TextBlock_4; // 0x608(0x08)
	UTextBlock* TextBlock_5; // 0x610(0x08)
	UTextBlock* TextBlock_6; // 0x618(0x08)
	UTextBlock* TextBlock_8; // 0x620(0x08)
	UTextBlock* TextBlock_9; // 0x628(0x08)
	UTextBlock* TextBlock_10; // 0x630(0x08)
	UTextBlock* TextBlock_762; // 0x638(0x08)
	UWidgetSwitcher* WidgetSwitcher_1; // 0x640(0x08)
	UWidgetSwitcher* WidgetSwitcher_2; // 0x648(0x08)
	UWrapBox* WrapBox_1; // 0x650(0x08)
	UCanvasPanel* XboxPlatform; // 0x658(0x08)
	UMaterialInstanceDynamic* ExitSelectorMaterial; // 0x660(0x08)
	UMaterialInstanceDynamic* PlaySelectorMaterial; // 0x668(0x08)
	AGameMenuController_C* GameMenuController; // 0x670(0x08)
	int32_t SelectedIndexMain; // 0x678(0x04)
	int32_t SelectedTab; // 0x67c(0x04)
	int32_t SelectedIndexFileSelect; // 0x680(0x04)
	int32_t SelectedIndexOptions; // 0x684(0x04)
	int32_t SelectedMainSettingsIndex; // 0x688(0x04)
	int32_t SelectedIndexGameSettings; // 0x68c(0x04)
	UBlueFire_Game_Instance_C* BlueFireGameInstance; // 0x690(0x08)
	UBlueFire_Game_Instance_C* MainMenuLevel; // 0x698(0x08)
	int32_t FileSelectedSelectionIndex; // 0x6a0(0x04)
	bool FileSelectedDeleteScreen; // 0x6a4(0x01)
	bool FileSelectedExists; // 0x6a5(0x01)
	bool Demo; // 0x6a6(0x01)
	int32_t SelectedIndexDemo; // 0x6a8(0x04)
	TArray<FName> PC_Default_KeysToMap; // 0x6b0(0x10)
	TArray<FKey> PC_Default_KeysToMapKeys; // 0x6c0(0x10)
	bool KeyMapListenReady; // 0x6d0(0x01)
	FName PC_KeyToReMap; // 0x6d4(0x08)
	int32_t PCMapOptionSelectedIndex; // 0x6dc(0x04)
	FKey PC_PreviousKey; // 0x6e0(0x18)
	bool KeyMapListen; // 0x6f8(0x01)
	TArray<FKey> PC_RemapBlockedKeys; // 0x700(0x10)
	int32_t SelectedOptionFileName; // 0x710(0x04)
	int32_t SelectedDifficultyOption; // 0x714(0x04)
	bool BeatenGameSystem; // 0x718(0x01)
	bool WritingFileName; // 0x719(0x01)
	bool Force Brutal Mode; // 0x71a(0x01)

	void ExitMapping();
	void ErrorMapping();
	void PC_KeysRestoreToDefault();
	void PC_StartRemap();
	void ConfirmKeyMap();
	void RecieveMovementMapping(bool RefreshOnly, enum class Directions Directions);
	void ChangeSelection(bool Up, bool NULL, enum class Directions Direction);
	void ActivateControl();
	void StartMenu(AGameMenuController_C* GameMenuController);
	void ChangeTab(int32_t SelectedTab);
	void PC_SetRemapKey(FKey InputPin);
	void PC_CancelRemap();
	void PC_EndRemap(bool OnlySelected);
	void LoadSaveFiles();
	void PC_InitializeButtonMapping(bool OnlySelected);
	void ChangeOption(bool Right);
	void ClearSaveFile();
	void ChangeSelSound(bool Play);
	void LoadSettingsAndApply();
	void FadeOut();
	void Construct();
	void Update();
	void FileSelectedMoveSide(bool Right);
	void FileSelectedConfirm();
	void FileSelectedReset();
	void FileSelectBack();
	void UpdateControlScheme();
	void WriteFileName();
	void CancelWrite();
	void EndType(FText Text, enum class ETextCommit CommitMethod);
	void ConfirmWrite();
	void RecieveConfirmNewFile();
	void ResetFileName();
	void BndEvt__EditableTextBox_89_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(FText Text);
	void RefreshAll();
	void Move(bool Error);
	void ExecuteUbergraph_GameMenu(int32_t EntryPoint);
};

