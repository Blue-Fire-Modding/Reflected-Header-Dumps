// WidgetBlueprintGeneratedClass SettingsText.SettingsText_C
// Size: 0x266 (Inherited: 0x230)
struct USettingsText_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* UnselectAnim; // 0x238(0x08)
	UTextBlock* Text; // 0x240(0x08)
	FText Box; // 0x248(0x18)
	int32_t Size; // 0x260(0x04)
	bool Select; // 0x264(0x01)
	bool Deactivated; // 0x265(0x01)

	void PreConstruct(bool IsDesignTime);
	void SelectEv();
	void Unselect();
	void ExecuteUbergraph_SettingsText(int32_t EntryPoint);
};

