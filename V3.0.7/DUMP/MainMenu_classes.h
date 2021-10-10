// BlueprintGeneratedClass MainMenu.MainMenu_C
// Size: 0x248 (Inherited: 0x228)
struct AMainMenu_C : ALevelScriptActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	UBlueFire_Game_Instance_C* BlueFireGameInstance; // 0x230(0x08)
	FMulticastInlineDelegate PCGamepadSwitch; // 0x238(0x10)

	void ReceiveBeginPlay();
	void ExecuteUbergraph_MainMenu(int32_t EntryPoint);
	void PCGamepadSwitch__DelegateSignature();
};

