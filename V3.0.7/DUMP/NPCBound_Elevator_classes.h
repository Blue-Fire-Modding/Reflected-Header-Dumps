// BlueprintGeneratedClass NPCBound_Elevator.NPCBound_Elevator_C
// Size: 0x310 (Inherited: 0x2b9)
struct ANPCBound_Elevator_C : ANPCBound_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	TArray<FText> Text; // 0x2c8(0x10)
	FText Name; // 0x2d8(0x18)
	FMulticastInlineDelegate Read; // 0x2f0(0x10)
	bool Item; // 0x300(0x01)
	enum class Items ItemType; // 0x301(0x01)
	bool SaveEvent; // 0x302(0x01)
	bool Custom Size; // 0x303(0x01)
	FVector Box Size; // 0x304(0x0c)

	void UserConstructionScript();
	void CustomEvent();
	void DialogStartCall();
	void QuickEnd();
	void ExecuteUbergraph_NPCBound_Elevator(int32_t EntryPoint);
	void Read__DelegateSignature();
};

