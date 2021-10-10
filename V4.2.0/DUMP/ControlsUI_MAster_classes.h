// WidgetBlueprintGeneratedClass ControlsUI_MAster.ControlsUI_Master_C
// Size: 0x270 (Inherited: 0x230)
struct UControlsUI_Master_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	int32_t SelectedActionIndex; // 0x238(0x04)
	TArray<UControlsText_C*> Actions; // 0x240(0x10)
	FMulticastInlineDelegate MoveCursor; // 0x250(0x10)
	bool CastToGameInstanceFailed; // 0x260(0x01)
	UBlueFire_Game_Instance_C* GameInstance; // 0x268(0x08)

	void GetGameInstanceReference(bool Success, UBlueFire_Game_Instance_C* GameInstance);
	void CheckGameInstanceFailed(bool Bool, bool Result);
	void Refresh(UPanelWidget* Canvas);
	void PreConstruct(bool IsDesignTime);
	void RefreshExtra();
	void ReceiveMovement(bool Refresh, enum class Directions Direction);
	void ExecuteUbergraph_ControlsUI_Master(int32_t EntryPoint);
	void MoveCursor__DelegateSignature(bool Error);
};

