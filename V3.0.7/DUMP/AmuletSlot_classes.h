// WidgetBlueprintGeneratedClass AmuletSlot.AmuletSlot_C
// Size: 0x242 (Inherited: 0x230)
struct UAmuletSlot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Image_1; // 0x238(0x08)
	bool Used; // 0x240(0x01)
	enum class Spirits Amulet; // 0x241(0x01)

	void Construct();
	void ExecuteUbergraph_AmuletSlot(int32_t EntryPoint);
};

