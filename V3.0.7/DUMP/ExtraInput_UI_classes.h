// WidgetBlueprintGeneratedClass ExtraInput_UI.ExtraInput_UI_C
// Size: 0x2f0 (Inherited: 0x230)
struct UExtraInput_UI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Clicked; // 0x238(0x08)
	UWidgetAnimation* IdleAnim; // 0x240(0x08)
	UWidgetAnimation* Fade; // 0x248(0x08)
	UBorder* Border_1; // 0x250(0x08)
	UImage* Dash; // 0x258(0x08)
	UImage* Image_1; // 0x260(0x08)
	UImage* Image_176; // 0x268(0x08)
	UImage* Right; // 0x270(0x08)
	UTextBlock* Right_Command; // 0x278(0x08)
	UTextBlock* TextBlock_1; // 0x280(0x08)
	UImage* Third_Img; // 0x288(0x08)
	UTextBlock* Third_Text; // 0x290(0x08)
	enum class PlatformInput InputLeft; // 0x298(0x01)
	enum class PlatformInput InputRight; // 0x299(0x01)
	FText LeftText; // 0x2a0(0x18)
	FText RightText; // 0x2b8(0x18)
	FText ThirdText; // 0x2d0(0x18)
	enum class PlatformInput InputThird; // 0x2e8(0x01)
	int32_t Inputs; // 0x2ec(0x04)

	void Remove(bool Click);
	void SetText(FText Right, FText Top, FText Bottom, FText Left);
	void CheckAndSetText(UTextBlock* Target, FText A, UImage* Target2);
	void Idle();
	void Construct();
	void SetPlatformIcon();
	void TempRemove();
	void TempReAdd();
	void ExecuteUbergraph_ExtraInput_UI(int32_t EntryPoint);
};

