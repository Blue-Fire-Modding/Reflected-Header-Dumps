// WidgetBlueprintGeneratedClass Action_Remap_Option.Action_Remap_Option_C
// Size: 0x278 (Inherited: 0x230)
struct UAction_Remap_Option_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Action; // 0x238(0x08)
	UImage* Bar; // 0x240(0x08)
	UImage* Key; // 0x248(0x08)
	UImage* SeparatorBar; // 0x250(0x08)
	enum class PlatformInput Option_Action; // 0x258(0x01)
	bool CanBeRemapped; // 0x259(0x01)
	FText Note; // 0x260(0x18)

	void Editing();
	void PreConstruct(bool IsDesignTime);
	void Reset(UBlueFire_Game_Instance_C* BlueFireGameInstance);
	void Unselected();
	void Selected();
	void ExecuteUbergraph_Action_Remap_Option(int32_t EntryPoint);
};

