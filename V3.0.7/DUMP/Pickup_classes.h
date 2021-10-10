// BlueprintGeneratedClass Pickup.Pickup_C
// Size: 0x3a9 (Inherited: 0x220)
struct APickup_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	UAkComponent* Play_Ore_Currency_Collect; // 0x228(0x08)
	UMaterialBillboardComponent* MaterialBillboard; // 0x230(0x08)
	UChildActorComponent* ChildActor; // 0x238(0x08)
	USceneComponent* Scene; // 0x240(0x08)
	UBoxComponent* Collider; // 0x248(0x08)
	UBoxComponent* Box; // 0x250(0x08)
	UParticleSystemComponent* P_ItemDestroy; // 0x258(0x08)
	UStaticMeshComponent* SM_Item_Outside; // 0x260(0x08)
	UStaticMeshComponent* SM_Item_Inside; // 0x268(0x08)
	float Timeline_0_Light_Intensity_798326A24B02A5C1193E8694BD09CF8C; // 0x270(0x04)
	float Timeline_0_Opacity_798326A24B02A5C1193E8694BD09CF8C; // 0x274(0x04)
	float Timeline_0_Scale_798326A24B02A5C1193E8694BD09CF8C; // 0x278(0x04)
	enum class ETimelineDirection Timeline_0__Direction_798326A24B02A5C1193E8694BD09CF8C; // 0x27c(0x01)
	UTimelineComponent* Timeline_1; // 0x280(0x08)
	enum class PickUpList Type; // 0x288(0x01)
	enum class Items Item; // 0x289(0x01)
	int32_t LifeAmount; // 0x28c(0x04)
	FString ID; // 0x290(0x10)
	bool Persistent; // 0x2a0(0x01)
	UPickUp_Action_UI_C* ActionWidget; // 0x2a8(0x08)
	APlayer_Character_BP_C* Player; // 0x2b0(0x08)
	FMulticastInlineDelegate NewItemEnd; // 0x2b8(0x10)
	UMaterialInstanceDynamic* MatInside; // 0x2c8(0x08)
	FLinearColor Color; // 0x2d0(0x10)
	UMaterialInstanceDynamic* MatOutside; // 0x2e0(0x08)
	FGodStone_Structure GodStoneInfo; // 0x2e8(0x48)
	FString GodStoneName; // 0x330(0x10)
	FPlayerStatsSimple UpgradeStats; // 0x340(0x24)
	bool ID by DisplayName; // 0x364(0x01)
	bool Bind to Destroy; // 0x365(0x01)
	FLinearColor Item Color; // 0x368(0x10)
	FLinearColor FireEssence Color; // 0x378(0x10)
	UAkAudioEvent* PickupItemSound; // 0x388(0x08)
	float Velocity Z; // 0x390(0x04)
	float Velocity Direction; // 0x394(0x04)
	UProjectileMovementComponent* Projectile; // 0x398(0x08)
	bool FirstSoundOre; // 0x3a0(0x01)
	bool PopUp; // 0x3a1(0x01)
	int32_t PlayingID; // 0x3a4(0x04)
	bool CurrencyCollected; // 0x3a8(0x01)

	void Build();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void InpActEvt_PC_Interact_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_1(FKey Key);
	void Launch();
	void CheckState();
	void AlreadyUsed();
	void Used();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
	void InstaDestroy();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void ReceiveBeginPlay();
	void Pickup();
	void PickUpSouls();
	void PickUpKeyItem();
	void PickUpItem();
	void Remove();
	void SuccessItemAddInventory();
	void CheckIfShouldBeActive();
	void FakePickup();
	void PlayItemSound();
	void CollectGodStone();
	void AddLife();
	void AddStats();
	void ReturnPrompt();
	void CheckCondition();
	void Pickup Shadow Fragment();
	void ExecuteUbergraph_Pickup(int32_t EntryPoint);
	void NewItemEnd__DelegateSignature();
};

