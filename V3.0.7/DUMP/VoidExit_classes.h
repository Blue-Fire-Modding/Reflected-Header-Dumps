// WidgetBlueprintGeneratedClass VoidExit.VoidExit_C
// Size: 0x260 (Inherited: 0x230)
struct UVoidExit_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Fade_Icon; // 0x238(0x08)
	UWidgetAnimation* Fade_Background; // 0x240(0x08)
	UImage* Background; // 0x248(0x08)
	UImage* Image_42; // 0x250(0x08)
	bool AddLife; // 0x258(0x01)
	float Delay; // 0x25c(0x04)

	void Construct();
	void Loaded();
	void End();
	void Start();
	void ExecuteUbergraph_VoidExit(int32_t EntryPoint);
};

