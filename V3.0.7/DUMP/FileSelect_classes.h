// WidgetBlueprintGeneratedClass FileSelect.FileSelect_C
// Size: 0x2d4 (Inherited: 0x230)
struct UFileSelect_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UImage* Beira; // 0x238(0x08)
	UTextBlock* Currency; // 0x240(0x08)
	UTextBlock* FileIndex; // 0x248(0x08)
	UWrapBox* FireGuardianJournalWrapBox; // 0x250(0x08)
	UImage* GameWin; // 0x258(0x08)
	UImage* Image_1; // 0x260(0x08)
	UImage* Image_222; // 0x268(0x08)
	UTextBlock* Location; // 0x270(0x08)
	UImage* Nuos; // 0x278(0x08)
	UTextBlock* Percentage; // 0x280(0x08)
	UImage* Queen; // 0x288(0x08)
	UImage* Samael; // 0x290(0x08)
	UImage* SanctuaryStone; // 0x298(0x08)
	UImage* Sirion; // 0x2a0(0x08)
	UTextBlock* TextBlock_116; // 0x2a8(0x08)
	UTextBlock* TimeElapsed; // 0x2b0(0x08)
	UImage* Uthas; // 0x2b8(0x08)
	UImage* Voids; // 0x2c0(0x08)
	UWidgetSwitcher* WidgetSwitcher_2; // 0x2c8(0x08)
	int32_t Percent; // 0x2d0(0x04)

	void CustomConstruct(int32_t Index, UBlueFireSaveGame_C* SaveObject);
	void NoExistSaveFile(int32_t inInt);
	void SetIndex(int32_t Index);
	void RemoveMainEvent(FString ItemToFind, UWidget* Target);
	void ExecuteUbergraph_FileSelect(int32_t EntryPoint);
};

