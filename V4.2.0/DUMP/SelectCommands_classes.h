// WidgetBlueprintGeneratedClass SelectCommands.SelectCommands_C
// Size: 0x2d8 (Inherited: 0x230)
struct USelectCommands_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UBorder* Border_1; // 0x238(0x08)
	UImage* FirstImage; // 0x240(0x08)
	UTextBlock* FirstText; // 0x248(0x08)
	UHorizontalBox* HorizontalBox_207; // 0x250(0x08)
	UImage* SecondImage; // 0x258(0x08)
	UTextBlock* SecondText; // 0x260(0x08)
	UImage* ThirdImage; // 0x268(0x08)
	UTextBlock* ThirdText; // 0x270(0x08)
	FText SecondTex; // 0x278(0x18)
	FText FirstTex; // 0x290(0x18)
	int32_t Amount; // 0x2a8(0x04)
	FText ThirdTex; // 0x2b0(0x18)
	enum class PlatformInput FirstInput; // 0x2c8(0x01)
	enum class PlatformInput SecondInput; // 0x2c9(0x01)
	enum class PlatformInput ThirdInput; // 0x2ca(0x01)
	UBlueFire_Game_Instance_C* BlueFireGameInstance; // 0x2d0(0x08)

	void PreConstruct(bool IsDesignTime);
	void Build();
	void Construct();
	void SetOpacity(float Opacity1, float Opacity2, float Opacity3);
	void Adjust(int32_t Amount, enum class PlatformInput FirstInput, FText FirstTex, enum class PlatformInput SecondInput, FText SecondTex);
	void ExecuteUbergraph_SelectCommands(int32_t EntryPoint);
};

