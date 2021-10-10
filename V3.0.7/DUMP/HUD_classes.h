// WidgetBlueprintGeneratedClass HUD.HUD_C
// Size: 0x41a (Inherited: 0x230)
struct UHUD_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ConsumeItem; // 0x238(0x08)
	UWidgetAnimation* ChangeItemAnim; // 0x240(0x08)
	UWidgetAnimation* FadeHUD; // 0x248(0x08)
	UWidgetAnimation* CollectCurrency; // 0x250(0x08)
	UWidgetAnimation* ChargeSpecialMove; // 0x258(0x08)
	UWidgetAnimation* Target; // 0x260(0x08)
	UImage* BBB; // 0x268(0x08)
	UImage* BBT; // 0x270(0x08)
	UTextBlock* CurrencyAmount; // 0x278(0x08)
	UImage* CurrencyGlow; // 0x280(0x08)
	UTextBlock* DeveloperModeTxt; // 0x288(0x08)
	UImage* Dpad; // 0x290(0x08)
	UImage* EquippedItem; // 0x298(0x08)
	UImage* EquippedItemFrame; // 0x2a0(0x08)
	UTextBlock* HexLeftAmount; // 0x2a8(0x08)
	UImage* Image_70; // 0x2b0(0x08)
	UWrapBox* LifeBox; // 0x2b8(0x08)
	ULifePoint_C* LifePoint; // 0x2c0(0x08)
	ULifePoint_C* LifePoint_2; // 0x2c8(0x08)
	ULifePoint_C* LifePoint_3; // 0x2d0(0x08)
	ULifePoint_C* LifePoint_4; // 0x2d8(0x08)
	ULifePoint_C* LifePoint_5; // 0x2e0(0x08)
	ULifePoint_C* LifePoint_6; // 0x2e8(0x08)
	ULifePoint_C* LifePoint_7; // 0x2f0(0x08)
	ULifePoint_C* LifePoint_8; // 0x2f8(0x08)
	ULifePoint_C* LifePoint_9; // 0x300(0x08)
	ULifePoint_C* LifePoint_10; // 0x308(0x08)
	ULifePoint_C* LifePoint_11; // 0x310(0x08)
	ULifePoint_C* LifePoint_12; // 0x318(0x08)
	ULifePoint_C* LifePoint_13; // 0x320(0x08)
	ULifePoint_C* LifePoint_14; // 0x328(0x08)
	ULifePoint_C* LifePoint_15; // 0x330(0x08)
	ULifePoint_C* LifePoint_16; // 0x338(0x08)
	ULifePoint_C* LifePoint_17; // 0x340(0x08)
	ULifePoint_C* LifePoint_18; // 0x348(0x08)
	ULifePoint_C* LifePoint_75; // 0x350(0x08)
	ULifePoint_C* LifePoint_177; // 0x358(0x08)
	UWrapBox* LootBox; // 0x360(0x08)
	UBorder* MainBorder; // 0x368(0x08)
	UTextBlock* NewCurrency; // 0x370(0x08)
	UImage* RageBar; // 0x378(0x08)
	UVerticalBox* VerticalBox_120; // 0x380(0x08)
	float currentvar; // 0x388(0x04)
	float target var; // 0x38c(0x04)
	APlayer_Character_BP_C* Player; // 0x390(0x08)
	UMaterialInstanceDynamic* LifeMat; // 0x398(0x08)
	UBlueFire_Game_Instance_C* GameInstance; // 0x3a0(0x08)
	int32_t DisplayedCurrency; // 0x3a8(0x04)
	int32_t SetCurrency; // 0x3ac(0x04)
	float SetCurrencyFloat; // 0x3b0(0x04)
	UMaterialInstanceDynamic* AimTimeMat; // 0x3b8(0x08)
	bool Hidden; // 0x3c0(0x01)
	UMaterialInstanceDynamic* AimInsideMat; // 0x3c8(0x08)
	UMaterialInstanceDynamic* AimMatExterior; // 0x3d0(0x08)
	float RagePercent; // 0x3d8(0x04)
	UMaterialInstanceDynamic* RageBarMat; // 0x3e0(0x08)
	float LifePercent; // 0x3e8(0x04)
	float LifeLerpPercent; // 0x3ec(0x04)
	float RageLerpPercent; // 0x3f0(0x04)
	int32_t TempHealth; // 0x3f4(0x04)
	bool Animate; // 0x3f8(0x01)
	TArray<ULifePoint_C*> LifeSlots; // 0x400(0x10)
	bool LifeReduce; // 0x410(0x01)
	int32_t PreviousHealth; // 0x414(0x04)
	bool AddLife; // 0x418(0x01)
	bool HidePermanent; // 0x419(0x01)

	float Get_Rage_Percent_1();
	void HealthSlotsRun(bool FirstRun);
	void UpdateSlotCount();
	void UpdateLifeHud(bool Animate, bool ChangeSlotCount, bool AddLife);
	void AddLoot(FText Name, UMaterialInterface* Image, FText Description, int32_t Value);
	void Construct();
	void TargetOn();
	void TargetOff();
	void RecieveHit(bool Anim);
	void LoadItems();
	void UpdateCurrency(int32_t Add, bool Sound, bool Negative, bool Max Limit);
	void UpdateCurrencyLatest();
	void HideHUD();
	void ShowHUD();
	void LoadCurrency(int32_t Currency);
	void SilentUpdateCurrency(int32_t Currency);
	void HexGreyed();
	void HexActive();
	void UpdateRage(float InPercent, float Rage);
	void UpdateItems(bool ChangeAnim);
	void ItemUpdate(int32_t Offset, UImage* ItemImage, UTextBlock* AmountText, UWidget* Frame);
	void ChangeItemUse();
	void ConsumeItemPlay();
	void Change Color Currency(bool Limit);
	void Hide PermanenteHUD();
	void Tick(FGeometry MyGeometry, float InDeltaTime);
	void Reset Displayed Currency();
	void ExecuteUbergraph_HUD(int32_t EntryPoint);
};

