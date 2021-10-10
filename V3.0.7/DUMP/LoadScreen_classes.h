// WidgetBlueprintGeneratedClass LoadScreen.LoadScreen_C
// Size: 0x2b0 (Inherited: 0x230)
struct ULoadScreen_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Hint; // 0x238(0x08)
	UWidgetAnimation* Fade; // 0x240(0x08)
	UTextBlock* HintText; // 0x248(0x08)
	UImage* Image_1; // 0x250(0x08)
	UImage* Image_112; // 0x258(0x08)
	UImage* Image_129; // 0x260(0x08)
	UImage* Image_194; // 0x268(0x08)
	UTextBlock* LoadText; // 0x270(0x08)
	UTextBlock* TextBlock_402; // 0x278(0x08)
	FMulticastInlineDelegate Play; // 0x280(0x10)
	bool ReadyToPlay; // 0x290(0x01)
	float Delay Start Input; // 0x294(0x04)
	UBlueFire_Game_Instance_C* GameInstance; // 0x298(0x08)
	TArray<FText> Hints; // 0x2a0(0x10)

	void ChangeInput();
	void Start();
	void Load();
	void FirstHint();
	void Construct();
	void ChangeHint();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_LoadScreen(int32_t EntryPoint);
	void Play__DelegateSignature();
};

