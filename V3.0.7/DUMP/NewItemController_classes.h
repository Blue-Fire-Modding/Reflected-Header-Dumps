// BlueprintGeneratedClass NewItemController.NewItemController_C
// Size: 0x238 (Inherited: 0x220)
struct ANewItemController_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	UNewItem_C* NewItem; // 0x230(0x08)

	void InpActEvt_PC_Interact_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_Gamepad_Confirm_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Confirm_K2Node_InputActionEvent_1(FKey Key);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewItemController(int32_t EntryPoint);
};

