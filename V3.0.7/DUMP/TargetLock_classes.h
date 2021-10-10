// WidgetBlueprintGeneratedClass TargetLock.TargetLock_C
// Size: 0x250 (Inherited: 0x230)
struct UTargetLock_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* Lock; // 0x238(0x08)
	UWidgetAnimation* Loop; // 0x240(0x08)
	UImage* Backup; // 0x248(0x08)

	void Stop();
	void ModifierOn();
	void ModifierOff();
	void Set Visibility(bool Visible);
	void LockEv();
	void CheckDash(bool Index);
	void ExecuteUbergraph_TargetLock(int32_t EntryPoint);
};

