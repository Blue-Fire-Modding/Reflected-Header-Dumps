// WidgetBlueprintGeneratedClass GameIntro.GameIntro_C
// Size: 0x298 (Inherited: 0x230)
struct UGameIntro_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Intro_Stadia; // 0x238(0x08)
	UWidgetAnimation* Intro; // 0x240(0x08)
	UImage* BlackBackground; // 0x248(0x08)
	UTextBlock* Disclaimer; // 0x250(0x08)
	UImage* Grafitti; // 0x258(0x08)
	UImage* Image_283; // 0x260(0x08)
	UImage* Robi; // 0x268(0x08)
	UTextBlock* SaveMessage; // 0x270(0x08)
	UImage* WarningBackground; // 0x278(0x08)
	UCanvasPanel* WarningCanvas; // 0x280(0x08)
	FMulticastInlineDelegate Finish; // 0x288(0x10)

	void Start();
	void Construct();
	void OnAnimationFinished(UWidgetAnimation* Animation);
	void Set Save Message(enum class Platform Platform, enum class Region Region);
	void ExecuteUbergraph_GameIntro(int32_t EntryPoint);
	void Finish__DelegateSignature();
};

