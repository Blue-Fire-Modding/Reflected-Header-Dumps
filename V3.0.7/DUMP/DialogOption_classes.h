// WidgetBlueprintGeneratedClass DialogOption.DialogOption_C
// Size: 0x2bb (Inherited: 0x230)
struct UDialogOption_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* SelectAnim; // 0x238(0x08)
	UWidgetAnimation* ConfirmAnim; // 0x240(0x08)
	UWidgetAnimation* GlowButton; // 0x248(0x08)
	UImage* Background; // 0x250(0x08)
	UImage* Image_126; // 0x258(0x08)
	UImage* Image_127; // 0x260(0x08)
	UImage* Image_209; // 0x268(0x08)
	UTextBlock* Number; // 0x270(0x08)
	UCanvasPanel* NumberInput; // 0x278(0x08)
	UImage* Ok; // 0x280(0x08)
	USizeBox* SizeBox_1; // 0x288(0x08)
	UWidgetSwitcher* Switch; // 0x290(0x08)
	UTextBlock* Text; // 0x298(0x08)
	FText Option; // 0x2a0(0x18)
	bool Amount; // 0x2b8(0x01)
	bool IsSelected; // 0x2b9(0x01)
	bool IsBack; // 0x2ba(0x01)

	void Unselected();
	void Selected();
	void Construct();
	void ChangeNumber(int32_t N);
	void Confirm();
	void PreConstruct(bool IsDesignTime);
	void SetPlatformIcon();
	void ExecuteUbergraph_DialogOption(int32_t EntryPoint);
};

