// BlueprintGeneratedClass enemy_character_parent.Enemy_Character_Parent_C
// Size: 0x875 (Inherited: 0x4c0)
struct AEnemy_Character_Parent_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UAkComponent* Play_Vanish_SFX; // 0x4c8(0x08)
	UWidgetComponent* Alert; // 0x4d0(0x08)
	UDecalComponent* Decal_Shadow; // 0x4d8(0x08)
	UParticleSystemComponent* P_ShowMinion; // 0x4e0(0x08)
	UParticleSystemComponent* P_BlackSubstance; // 0x4e8(0x08)
	UPawnSensingComponent* PawnSensing; // 0x4f0(0x08)
	UWidgetComponent* Widget; // 0x4f8(0x08)
	float Timeline_1_Blur_822C98F144BAA83DF21B958EA7E6AA4E; // 0x500(0x04)
	enum class ETimelineDirection Timeline_1__Direction_822C98F144BAA83DF21B958EA7E6AA4E; // 0x504(0x01)
	UTimelineComponent* Timeline_2; // 0x508(0x08)
	float SineMovement_Lerp_97C5E80B4F1D34AD62B657BC40A0A270; // 0x510(0x04)
	enum class ETimelineDirection SineMovement__Direction_97C5E80B4F1D34AD62B657BC40A0A270; // 0x514(0x01)
	UTimelineComponent* SineMovement; // 0x518(0x08)
	float Move_Backwards_Alpha_60266F6B46FD51D6B3490E8251C4D0E5; // 0x520(0x04)
	enum class ETimelineDirection Move_Backwards__Direction_60266F6B46FD51D6B3490E8251C4D0E5; // 0x524(0x01)
	UTimelineComponent* Move Backwards; // 0x528(0x08)
	float Timeline_0_Blur_825C187D417DDC103C47C7A39E34CFE1; // 0x530(0x04)
	enum class ETimelineDirection Timeline_0__Direction_825C187D417DDC103C47C7A39E34CFE1; // 0x534(0x01)
	UTimelineComponent* Timeline_1; // 0x538(0x08)
	float HitBodyFlashTimeline_Hit_97A5830442F72E299E04F098996B4BEA; // 0x540(0x04)
	enum class ETimelineDirection HitBodyFlashTimeline__Direction_97A5830442F72E299E04F098996B4BEA; // 0x544(0x01)
	UTimelineComponent* HitBodyFlashTimeline; // 0x548(0x08)
	float RelocateTimeline_Alpha_B4D969DC4291BC66716E99B174DB08EB; // 0x550(0x04)
	enum class ETimelineDirection RelocateTimeline__Direction_B4D969DC4291BC66716E99B174DB08EB; // 0x554(0x01)
	UTimelineComponent* RelocateTimeline; // 0x558(0x08)
	bool Recorder Mode; // 0x560(0x01)
	AActor* TargetActor; // 0x568(0x08)
	bool Instant Kill; // 0x570(0x01)
	bool Min Health; // 0x571(0x01)
	float Health; // 0x574(0x04)
	FText Name; // 0x578(0x18)
	bool Is Boss; // 0x590(0x01)
	float CamMaxDistance; // 0x594(0x04)
	float MaxHealth; // 0x598(0x04)
	float Damage; // 0x59c(0x04)
	float Damage Body; // 0x5a0(0x04)
	FMulticastInlineDelegate Die; // 0x5a8(0x10)
	UWidgetComponent* Widget_1; // 0x5b8(0x08)
	UEnemyHealth_C* HealthBar-DEPRECATED; // 0x5c0(0x08)
	bool Active; // 0x5c8(0x01)
	bool ShowHealthBar; // 0x5c9(0x01)
	bool AutoStart; // 0x5ca(0x01)
	bool Attacking; // 0x5cb(0x01)
	AShadowDecal_C* ShadowDecal; // 0x5d0(0x08)
	enum class E_EnemyBehaviour Behaviour; // 0x5d8(0x01)
	UBehaviorTree* BT; // 0x5e0(0x08)
	bool UseExpression; // 0x5e8(0x01)
	FST_Expression Expression Detect; // 0x5f0(0x20)
	FST_Expression Expression Angry; // 0x610(0x20)
	FST_Expression Expression Unreachable; // 0x630(0x20)
	bool Use AgroArea; // 0x650(0x01)
	int32_t Currency; // 0x654(0x04)
	bool StartHidden; // 0x658(0x01)
	bool Fighting; // 0x659(0x01)
	FLinearColor FogColor; // 0x65c(0x10)
	int32_t BattleFase; // 0x66c(0x04)
	UAudioComponent* BossAudio; // 0x670(0x08)
	float ShadowScale; // 0x678(0x04)
	bool TargetOn; // 0x67c(0x01)
	enum class EnemyStates EnemyState; // 0x67d(0x01)
	bool SkipIntro; // 0x67e(0x01)
	bool AerialRise; // 0x67f(0x01)
	bool CanAerialRise; // 0x680(0x01)
	bool CanBeBlasted; // 0x681(0x01)
	float Fase_01_Damage; // 0x684(0x04)
	float Fase_02_Damage; // 0x688(0x04)
	float Fase_03_Damage; // 0x68c(0x04)
	float Health To Fase 2; // 0x690(0x04)
	float Health To Fase 3; // 0x694(0x04)
	FMulticastInlineDelegate TeleportOutDone; // 0x698(0x10)
	FMulticastInlineDelegate TeleportInDone; // 0x6a8(0x10)
	bool CanBeLocked; // 0x6b8(0x01)
	int32_t ConsecutiveHits; // 0x6bc(0x04)
	FMulticastInlineDelegate RelocateFinished; // 0x6c0(0x10)
	bool Show Trace; // 0x6d0(0x01)
	bool Print Life; // 0x6d1(0x01)
	float OriginalGravity; // 0x6d4(0x04)
	enum class Directions HitDirection; // 0x6d8(0x01)
	APlayer_Character_BP_C* PlayerCharacter; // 0x6e0(0x08)
	TArray<AAttack_Master_C*> Attacks; // 0x6e8(0x10)
	UMaterialInstanceDynamic* BodyMaterial; // 0x6f8(0x08)
	bool PlayerInAgro; // 0x700(0x01)
	bool TeleportedIn; // 0x701(0x01)
	bool Stun; // 0x702(0x01)
	bool Angry; // 0x703(0x01)
	FMulticastInlineDelegate CallA; // 0x708(0x10)
	bool HasShadowDecal; // 0x718(0x01)
	UAkAudioEvent* AwareSound; // 0x720(0x08)
	enum class Items ItemDrop; // 0x728(0x01)
	bool DropItem; // 0x729(0x01)
	FTransform Initial Transform; // 0x730(0x30)
	UEnemyHealth_C* EnemyHealthUI; // 0x760(0x08)
	UBossHealth_C* Boss Health UI; // 0x768(0x08)
	bool Moving to Center; // 0x770(0x01)
	bool Use Nav Mesh; // 0x771(0x01)
	float Check Distance; // 0x774(0x04)
	bool Hit Player; // 0x778(0x01)
	FMulticastInlineDelegate OnPlayerWarp; // 0x780(0x10)
	bool Mode Ambush; // 0x790(0x01)
	bool Skip Drop; // 0x791(0x01)
	bool Heal when Die; // 0x792(0x01)
	bool Is Hidden; // 0x793(0x01)
	int32_t MaxCurrencyDrop; // 0x794(0x04)
	int32_t MinCurrencyDrop; // 0x798(0x04)
	bool BT Flip Flop; // 0x79c(0x01)
	bool Spawn Fast; // 0x79d(0x01)
	bool Spawn Black Substance; // 0x79e(0x01)
	bool Minus5dB; // 0x79f(0x01)
	enum class EMovementMode StartMovementMode; // 0x7a0(0x01)
	bool SetIdleInCutscene; // 0x7a1(0x01)
	bool TempIdle; // 0x7a2(0x01)
	FVector PreFreezeVelocity; // 0x7a4(0x0c)
	float OriginalDamage; // 0x7b0(0x04)
	float OriginalMaxHealth; // 0x7b4(0x04)
	FVector MoveBackOriginal; // 0x7b8(0x0c)
	FVector MoveBackDire; // 0x7c4(0x0c)
	bool ShowTraceCheckWall; // 0x7d0(0x01)
	float BodyParticleFastRate; // 0x7d4(0x04)
	FColor VFX Color; // 0x7d8(0x04)
	FVector StartAttackLocation; // 0x7dc(0x0c)
	bool IsDead; // 0x7e8(0x01)
	float LockCamPitchOffset; // 0x7ec(0x04)
	float LockCamDistanceOffset; // 0x7f0(0x04)
	bool FreezePause; // 0x7f4(0x01)
	float ChangeCurrencyShadow; // 0x7f8(0x04)
	UEnemy_Behaviour_FX_C* AlertUI; // 0x800(0x08)
	bool HitSuccess; // 0x808(0x01)
	FName HealthParentBone; // 0x80c(0x08)
	FVector HealthParentOffset; // 0x814(0x0c)
	FVector Start Relative Location; // 0x820(0x0c)
	float Sine Speed; // 0x82c(0x04)
	float Sine Max Position; // 0x830(0x04)
	bool IsPlayingExpression; // 0x834(0x01)
	FVector Last Player Location; // 0x838(0x0c)
	float VFX Death Scale; // 0x844(0x04)
	int32_t Current Difficulty; // 0x848(0x04)
	bool IsParry; // 0x84c(0x01)
	float LockCamZOffset; // 0x850(0x04)
	float VerticalSeeDistance; // 0x854(0x04)
	float PlayerDirectionChase; // 0x858(0x04)
	FMulticastInlineDelegate Break Attack; // 0x860(0x10)
	float LockOffsetDisplay; // 0x870(0x04)
	bool DestroyAnimInstanceOnPause; // 0x874(0x01)

	void RecieveHit(float Damage, UCameraShake* Shake, UAkAudioEvent* AkEvent, bool OverrideHitTimeline, bool Cancel Rotate, bool Reset Agro, bool VFX Hit, UDamageType* DamageType, bool Dead);
	void UserConstructionScript();
	void RelocateTimeline__FinishedFunc();
	void RelocateTimeline__UpdateFunc();
	void HitBodyFlashTimeline__FinishedFunc();
	void HitBodyFlashTimeline__UpdateFunc();
	void SineMovement__FinishedFunc();
	void SineMovement__UpdateFunc();
	void Move Backwards__FinishedFunc();
	void Move Backwards__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void OnNotifyEnd_E4A3E4BE4FEA9C6B20F39295875BC5AE(FName NotifyName);
	void OnNotifyBegin_E4A3E4BE4FEA9C6B20F39295875BC5AE(FName NotifyName);
	void OnInterrupted_E4A3E4BE4FEA9C6B20F39295875BC5AE(FName NotifyName);
	void OnBlendOut_E4A3E4BE4FEA9C6B20F39295875BC5AE(FName NotifyName);
	void OnCompleted_E4A3E4BE4FEA9C6B20F39295875BC5AE(FName NotifyName);
	void VFX Rate Body(bool Rate Fast);
	void VFX Dash(float Delay, float Lerp Distance);
	void VFX Slash(float Delay, float Rotation, float Scale);
	void VFX Shadow(bool Visibility);
	void VFX Body Particle(bool Show);
	void VFX Death();
	void VFX Teleport();
	void SFX Death();
	void TeleportOut();
	void TeleportIn();
	void Relocate(FVector CurrentLocation, FVector Target, float Duration, bool Stop);
	void TeleportInExtra();
	void TeleportOutExtra();
	void RotateToPlayer(bool SingleBurst, bool On, float RotateSpeed, float RotateSpeedCurve(1isnone), bool Rotation to Movement);
	void RotateToPlayerTick();
	void RotateToPlayerInstant();
	void CancelRotToPlayer();
	void StartTimerA(float Time);
	void CallTimerA();
	void CancelTimerA();
	void StartTimerACall();
	void CancelTimerACall();
	void Attack(int32_t Selection, int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void Attack01(int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void AttackWindowOpen();
	void AttackWindowClose();
	void AttackWindowOpenCall();
	void AttackWindowCloseCall();
	void Attack02(int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void HitBodyFlash();
	void StopStun();
	void StartStun();
	void CancelFollow();
	void Attack03(int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void ExitBounds();
	void BeginAwareSound();
	void Start Movement(int32_t N);
	void End Movement(int32_t N);
	void RotateToInit(float Rotate Speed, float Rotate Speed Curve, bool On);
	void RotateToInitTick();
	void Update Health UI(float Health, float Max Health);
	void Restore Health();
	void In Room Center();
	void Anim Move Front(bool Move);
	void Anim Move Back(bool Move);
	void Call Event(FString Event Name);
	void Agro();
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_2_SeePawnDelegate__DelegateSignature(APawn* Pawn);
	void BndEvt__PawnSensing_K2Node_ComponentBoundEvent_3_HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector Location, float Volume);
	void CheckDistance();
	void Start Agro(bool Start);
	void Attack04(int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void Attack05(int32_t Count, int32_t Max Count, bool Use Custom Counter);
	void Instant Combat(float Delay);
	void Death Minion();
	void Show Minion();
	void Hide Minion();
	void Show Minion Extra();
	void Hide Minion Extra();
	void OnLanded(FHitResult Hit);
	void On Landed Extra();
	void Instant Combat Extra();
	void Set Visible Mesh(bool Visible);
	void CheckWall();
	void FreezeState(bool Freeze);
	void ExtraFreeze();
	void ExtraUnfreeze();
	void Force Idle State();
	void Force Agro State(APawn* Actor);
	void Force Idle State Extra();
	void Expression(enum class E_Expression Expression);
	void Sine(bool Play);
	void AttackExpression(int32_t Number);
	void AttackExpression_01();
	void AttackExpression_02();
	void AttackExpression_03();
	void AttackExpression_04();
	void AttackExpression_05();
	void AttackExpression_06();
	void Rise(float DropOn, bool KeepInAir);
	void TickAdjusttoPlayerZ();
	void EndRise();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void EnemyLaunch(enum class Directions Direction, FVector Origin);
	void RiseMontage();
	void FinishRise();
	void Make Flip Flop();
	void Back to Original Transform();
	void PlayBounceBack();
	void StopMoveBack();
	void ReceiveBeginPlay();
	void ShadowLoop();
	void ReceiveDestroyed();
	void DestroyCall();
	void UpdateState(bool Active - Deprecated, bool ChangeState, enum class EnemyStates EnemyState, bool NextFase);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpawnShadow();
	void StartBoss();
	void ShowName();
	void EndIntro();
	void BossName();
	void RadialBlurGrowl(bool Scream, float ScreamScale, bool ShortScream);
	void LockedOn();
	void LockedOff();
	void EndBoss();
	void On Player Die();
	void Boss Appear();
	void Boss Desappear();
	void Restart();
	void Play Custom Cutscene();
	void Resume Custom Cutscene();
	void Relocate Player();
	void Set New Player Location(FVector New Location);
	void PlayerDieRun();
	void Create UI();
	void Set Visibility UI(bool Visibility);
	void Set One Hit Health();
	void Set Custom Health(float Health);
	void Replace by Statue(float Delay);
	void UnloadCall();
	void Move to Center(bool Moving);
	void Destroy Used();
	void Destroy Used Extra();
	void Show Teleport();
	void On Stream Out();
	void PlayCustomCutsceneExtra();
	void ResumeCustomCutsceneExtra();
	void AdjustDifficulty(bool BeginPlay);
	void AdjustHealthonDifficultyChange();
	void Kill();
	void CustomDamage(float Damage);
	void DestroyStatue();
	void DontDestroyPawnSensing();
	void Fade Boss Health();
	void RetryBeginPlay();
	void Force Idle Animation();
	void ExecuteUbergraph_Enemy_Character_Parent(int32_t EntryPoint);
	void Break Attack__DelegateSignature();
	void OnPlayerWarp__DelegateSignature();
	void CallA__DelegateSignature();
	void RelocateFinished__DelegateSignature();
	void TeleportInDone__DelegateSignature();
	void TeleportOutDone__DelegateSignature();
	void Die__DelegateSignature();
};

