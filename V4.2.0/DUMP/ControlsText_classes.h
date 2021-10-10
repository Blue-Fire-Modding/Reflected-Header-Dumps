// BlueprintGeneratedClass ControlsText.ControlsText_C
// Size: 0x2b8 (Inherited: 0x2a0)
struct UControlsText_C : UTextBlock {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	bool CanBeRemapped; // 0x2a8(0x01)
	int32_t MoveLeftOrRightSum; // 0x2ac(0x04)
	enum class PlatformInput Action; // 0x2b0(0x01)
	int32_t MoveDownSum; // 0x2b4(0x04)

	void Select();
	void Unselect();
	void ExecuteUbergraph_ControlsText(int32_t EntryPoint);
};

