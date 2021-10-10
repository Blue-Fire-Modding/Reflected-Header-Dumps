// WidgetBlueprintGeneratedClass NewLifeSlot.NewLifeSlot_C
// Size: 0x399 (Inherited: 0x230)
struct UNewLifeSlot_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* ConsumeItem; // 0x238(0x08)
	UWidgetAnimation* ChangeItemAnim; // 0x240(0x08)
	UWidgetAnimation* AimCharge; // 0x248(0x08)
	UWidgetAnimation* AimIdle; // 0x250(0x08)
	UWidgetAnimation* LifeVFX; // 0x258(0x08)
	UWidgetAnimation* RegenAnim; // 0x260(0x08)
	UWidgetAnimation* FadeHUD; // 0x268(0x08)
	UWidgetAnimation* CollectCurrency; // 0x270(0x08)
	UWidgetAnimation* ChargeSpecialMove; // 0x278(0x08)
	UWidgetAnimation* Hit; // 0x280(0x08)
	UWidgetAnimation* Target; // 0x288(0x08)
	UWrapBox* LifeBox; // 0x290(0x08)
	ULifePoint_C* LifePoint; // 0x298(0x08)
	ULifePoint_C* LifePoint_2; // 0x2a0(0x08)
	ULifePoint_C* LifePoint_3; // 0x2a8(0x08)
	ULifePoint_C* LifePoint_4; // 0x2b0(0x08)
	ULifePoint_C* LifePoint_5; // 0x2b8(0x08)
	ULifePoint_C* LifePoint_6; // 0x2c0(0x08)
	ULifePoint_C* LifePoint_7; // 0x2c8(0x08)
	ULifePoint_C* LifePoint_8; // 0x2d0(0x08)
	ULifePoint_C* LifePoint_9; // 0x2d8(0x08)
	ULifePoint_C* LifePoint_10; // 0x2e0(0x08)
	ULifePoint_C* LifePoint_11; // 0x2e8(0x08)
	ULifePoint_C* LifePoint_12; // 0x2f0(0x08)
	ULifePoint_C* LifePoint_13; // 0x2f8(0x08)
	ULifePoint_C* LifePoint_14; // 0x300(0x08)
	ULifePoint_C* LifePoint_15; // 0x308(0x08)
	ULifePoint_C* LifePoint_16; // 0x310(0x08)
	ULifePoint_C* LifePoint_17; // 0x318(0x08)
	ULifePoint_C* LifePoint_18; // 0x320(0x08)
	ULifePoint_C* LifePoint_75; // 0x328(0x08)
	ULifePoint_C* LifePoint_177; // 0x330(0x08)
	UBorder* MainBorder; // 0x338(0x08)
	APlayer_Character_BP_C* Player; // 0x340(0x08)
	UMaterialInstanceDynamic* LifeMat; // 0x348(0x08)
	UBlueFire_Game_Instance_C* GameInstance; // 0x350(0x08)
	bool Hidden; // 0x358(0x01)
	float RagePercent; // 0x35c(0x04)
	UMaterialInstanceDynamic* RageBarMat; // 0x360(0x08)
	float LifePercent; // 0x368(0x04)
	float LifeLerpPercent; // 0x36c(0x04)
	float RageLerpPercent; // 0x370(0x04)
	int32_t TempHealth; // 0x374(0x04)
	bool Animate; // 0x378(0x01)
	TArray<ULifePoint_C*> LifeSlots; // 0x380(0x10)
	bool LifeReduce; // 0x390(0x01)
	int32_t PreviousHealth; // 0x394(0x04)
	bool AddLife; // 0x398(0x01)

	float Get_Rage_Percent_1();
	void UpdateLifeHud(bool Animate, bool ChangeSlotCount, bool AddLife);
	void Regen();
	void HealthSlotsRun(bool FirstRun);
	void UpdateSlotCount();
	void Remove();
	void Construct();
	void HideHUD();
	void ShowHUD();
	void ConsumeItemPlay();
	void ExecuteUbergraph_NewLifeSlot(int32_t EntryPoint);
};

