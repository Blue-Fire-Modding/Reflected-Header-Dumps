// WidgetBlueprintGeneratedClass LifePoint.LifePoint_C
// Size: 0x288 (Inherited: 0x230)
struct ULifePoint_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UWidgetAnimation* VFXScale; // 0x238(0x08)
	UWidgetAnimation* Scale; // 0x240(0x08)
	UWidgetAnimation* Last; // 0x248(0x08)
	UImage* BackGlow; // 0x250(0x08)
	UImage* LifeImage; // 0x258(0x08)
	UImage* VFX; // 0x260(0x08)
	UMaterialInstanceDynamic* Material; // 0x268(0x08)
	bool HolyBlessing; // 0x270(0x01)
	FMulticastInlineDelegate Remove; // 0x278(0x10)

	void Empty(bool Effect);
	void Full(bool Effect);
	void Current(float Value, bool Effect);
	void SetExtra();
	void Construct();
	void UpdateAnim(int32_t Fill);
	void EffectSlot(bool On, float Percent, float Direction);
	void Play Anim Scale();
	void ExecuteUbergraph_LifePoint(int32_t EntryPoint);
	void Remove__DelegateSignature();
};

