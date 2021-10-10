// BlueprintGeneratedClass Player_Character_BP.Player_Character_BP_C
// Size: 0x10b0 (Inherited: 0x4c0)
struct APlayer_Character_BP_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	UAkComponent* AkSword3Ground; // 0x4c8(0x08)
	UAkComponent* AkSword3Air; // 0x4d0(0x08)
	UAkComponent* AkSword2; // 0x4d8(0x08)
	UAkComponent* AkSword; // 0x4e0(0x08)
	UAkComponent* AkMUSIC; // 0x4e8(0x08)
	UStaticMeshComponent* ShadowVengeace; // 0x4f0(0x08)
	UParticleSystemComponent* P_Ladder; // 0x4f8(0x08)
	UParticleSystemComponent* P_Fall; // 0x500(0x08)
	UParticleSystemComponent* P_ConsumeEssence; // 0x508(0x08)
	UArrowComponent* Arrow2; // 0x510(0x08)
	UParticleSystemComponent* FireBallCast; // 0x518(0x08)
	UParticleSystemComponent* FireBall; // 0x520(0x08)
	UParticleSystemComponent* SpinAttackCharge; // 0x528(0x08)
	UForceFeedbackComponent* GlobalForceFeedback; // 0x530(0x08)
	UParticleSystemComponent* FireSmoke; // 0x538(0x08)
	UBoxComponent* DashAttackAmulet; // 0x540(0x08)
	URadialForceComponent* RadialForce; // 0x548(0x08)
	UForceFeedbackComponent* ForceFeedback; // 0x550(0x08)
	UStaticMeshComponent* Hair_SM; // 0x558(0x08)
	UPawnNoiseEmitterComponent* PawnNoiseEmitter; // 0x560(0x08)
	UStaticMeshComponent* IdleSword_L; // 0x568(0x08)
	UStaticMeshComponent* Sword_R; // 0x570(0x08)
	UStaticMeshComponent* Sword_L; // 0x578(0x08)
	UStaticMeshComponent* IdleSword_R; // 0x580(0x08)
	UStaticMeshComponent* Mask; // 0x588(0x08)
	UPointLightComponent* SelfLight; // 0x590(0x08)
	USpringArmComponent* SpringArm; // 0x598(0x08)
	USpringArmComponent* SpringArm1; // 0x5a0(0x08)
	UCameraComponent* Camera-deprecated; // 0x5a8(0x08)
	float MoveBackwards_Alpha_801C61464C1C5584CE680EB697E5D99E; // 0x5b0(0x04)
	enum class ETimelineDirection MoveBackwards__Direction_801C61464C1C5584CE680EB697E5D99E; // 0x5b4(0x01)
	UTimelineComponent* MoveBackwards; // 0x5b8(0x08)
	float FireEssenceFlash_Flash_8C1BC5214F5D959F592C369B42CF035E; // 0x5c0(0x04)
	enum class ETimelineDirection FireEssenceFlash__Direction_8C1BC5214F5D959F592C369B42CF035E; // 0x5c4(0x01)
	UTimelineComponent* FireEssenceFlash; // 0x5c8(0x08)
	float SpiritHolderLens_Alpha_919A64B04BF617006D16329A4D76AD42; // 0x5d0(0x04)
	enum class ETimelineDirection SpiritHolderLens__Direction_919A64B04BF617006D16329A4D76AD42; // 0x5d4(0x01)
	UTimelineComponent* SpiritHolderLens; // 0x5d8(0x08)
	float BackTeleport_Alpha_7F471402443BC498F6820293239166AB; // 0x5e0(0x04)
	enum class ETimelineDirection BackTeleport__Direction_7F471402443BC498F6820293239166AB; // 0x5e4(0x01)
	UTimelineComponent* BackTeleport; // 0x5e8(0x08)
	float MoveToHook_Alpha_17379C8E4F9C20A243E87FB3DA78F177; // 0x5f0(0x04)
	enum class ETimelineDirection MoveToHook__Direction_17379C8E4F9C20A243E87FB3DA78F177; // 0x5f4(0x01)
	UTimelineComponent* MoveToHook; // 0x5f8(0x08)
	float SpellLight_Light_B741A08647FBD68B57B6F7B3AEB1E428; // 0x600(0x04)
	enum class ETimelineDirection SpellLight__Direction_B741A08647FBD68B57B6F7B3AEB1E428; // 0x604(0x01)
	UTimelineComponent* SpellLight; // 0x608(0x08)
	float ClothesSpellLight_Float_F0E1A4894B32AD982943778C2B8CA3F0; // 0x610(0x04)
	enum class ETimelineDirection ClothesSpellLight__Direction_F0E1A4894B32AD982943778C2B8CA3F0; // 0x614(0x01)
	UTimelineComponent* ClothesSpellLight; // 0x618(0x08)
	FVector CamAimMove_Movement_85CAF36C4B53029E5ACAA38DD35B6782; // 0x620(0x0c)
	enum class ETimelineDirection CamAimMove__Direction_85CAF36C4B53029E5ACAA38DD35B6782; // 0x62c(0x01)
	UTimelineComponent* CamAimMove; // 0x630(0x08)
	float Timeline_4_Flash_4ADF80324480FC4FAA5BBCBC09BAD069; // 0x638(0x04)
	enum class ETimelineDirection Timeline_4__Direction_4ADF80324480FC4FAA5BBCBC09BAD069; // 0x63c(0x01)
	UTimelineComponent* Timeline_5; // 0x640(0x08)
	float Timeline_0_Flash_EF6C720D49B0DA567942DC947134F875; // 0x648(0x04)
	enum class ETimelineDirection Timeline_0__Direction_EF6C720D49B0DA567942DC947134F875; // 0x64c(0x01)
	UTimelineComponent* Timeline_1; // 0x650(0x08)
	float RageUpdate_Lerp_232FF15A4DFC919094E2AF8A0383CF86; // 0x658(0x04)
	enum class ETimelineDirection RageUpdate__Direction_232FF15A4DFC919094E2AF8A0383CF86; // 0x65c(0x01)
	UTimelineComponent* RageUpdate; // 0x660(0x08)
	float RadialIntro_Blur_9AA6EF5B4C4790372865B5827C65BDBD; // 0x668(0x04)
	enum class ETimelineDirection RadialIntro__Direction_9AA6EF5B4C4790372865B5827C65BDBD; // 0x66c(0x01)
	UTimelineComponent* RadialIntro; // 0x670(0x08)
	float RadialBlurFlash_Blur_98ECC5974E9FBCBD496E56849D2E74E4; // 0x678(0x04)
	enum class ETimelineDirection RadialBlurFlash__Direction_98ECC5974E9FBCBD496E56849D2E74E4; // 0x67c(0x01)
	UTimelineComponent* RadialBlurFlash; // 0x680(0x08)
	float SwordPutBack_Glow_B3E347214399106F81A3C89AF11CD483; // 0x688(0x04)
	enum class ETimelineDirection SwordPutBack__Direction_B3E347214399106F81A3C89AF11CD483; // 0x68c(0x01)
	UTimelineComponent* SwordPutBack; // 0x690(0x08)
	float AirControlDefault; // 0x698(0x04)
	bool WallSlide; // 0x69c(0x01)
	float Speed; // 0x6a0(0x04)
	FVector Horizontal Velocity; // 0x6a4(0x0c)
	FVector Control Stick Direction; // 0x6b0(0x0c)
	float Control Stick YAW Spins; // 0x6bc(0x04)
	float Jump Regular Z; // 0x6c0(0x04)
	float Jump Wall Stick Force; // 0x6c4(0x04)
	bool Is Spin Capturing; // 0x6c8(0x01)
	bool Spin Capturing Clockwise; // 0x6c9(0x01)
	FRotator Control Stick Direction Previous; // 0x6cc(0x0c)
	FRotator Control Stick Direction Previous Previous; // 0x6d8(0x0c)
	float Control Stick Intensity; // 0x6e4(0x04)
	bool Control Stick is Tilted; // 0x6e8(0x01)
	bool 180Turn; // 0x6e9(0x01)
	bool Control Stick Clockwise; // 0x6ea(0x01)
	int32_t Control Stick Fix Frame Count; // 0x6ec(0x04)
	int32_t Control Stick Clockwise Fix Frame Count; // 0x6f0(0x04)
	float New Target Arm Lenght; // 0x6f4(0x04)
	float SpinJumpRequiredSpin; // 0x6f8(0x04)
	FVector InitialLocation; // 0x6fc(0x0c)
	float CameraYaw; // 0x708(0x04)
	FVector WallMoveNormal; // 0x70c(0x0c)
	float Def_WalkSpeed; // 0x718(0x04)
	UCurveFloat* MovementInputCurve; // 0x720(0x08)
	float Def_Gravity_Scale; // 0x728(0x04)
	FRotator Control Stick Soumersault Dir; // 0x72c(0x0c)
	float GlobalJumpRegulator; // 0x738(0x04)
	int32_t AirSpinCount; // 0x73c(0x04)
	bool NoMovement; // 0x740(0x01)
	UCurveFloat* VJoystickSwimCurveLerp; // 0x748(0x08)
	float Def_MaxAcceleration; // 0x750(0x04)
	UCurveFloat* VFixCamCurve; // 0x758(0x08)
	float CamY; // 0x760(0x04)
	float CamX; // 0x764(0x04)
	APlayer_Camera_Control_C* CamControl; // 0x768(0x08)
	ACheckPoint_C* CheckPoint; // 0x770(0x08)
	bool CameraRuled; // 0x778(0x01)
	AActor* CamRuledActor; // 0x780(0x08)
	bool OnGround; // 0x788(0x01)
	AActor* CameraCapture; // 0x790(0x08)
	AGlobal_Controller_C* GlobalController; // 0x798(0x08)
	bool SplipperyFloor; // 0x7a0(0x01)
	AShadowDecal_C* ShadowDecal; // 0x7a8(0x08)
	ACheckPoint_C* CheckPointSecret; // 0x7b0(0x08)
	bool InChallenge; // 0x7b8(0x01)
	FMulticastInlineDelegate Die; // 0x7c0(0x10)
	float LocalRightTYAxis; // 0x7d0(0x04)
	float LocalRightTXAxis; // 0x7d4(0x04)
	bool Run; // 0x7d8(0x01)
	int32_t AttackAirCount; // 0x7dc(0x04)
	int32_t AttackAirCountSimple; // 0x7e0(0x04)
	int32_t AirDashCount; // 0x7e4(0x04)
	UMaterialInstanceDynamic* Face_Mat; // 0x7e8(0x08)
	UMaterialInstanceDynamic* Clothes_Mat; // 0x7f0(0x08)
	bool JumpDoubleClick; // 0x7f8(0x01)
	bool CamLock; // 0x7f9(0x01)
	UHUD_C* Hud2; // 0x800(0x08)
	bool FastMoveCheck; // 0x808(0x01)
	bool FastMoveOn; // 0x809(0x01)
	FVector FastMoveVector; // 0x80c(0x0c)
	bool Dashing; // 0x818(0x01)
	bool BashMove; // 0x819(0x01)
	bool DoubleJumpUp; // 0x81a(0x01)
	float PrevControlStickIntensity; // 0x81c(0x04)
	float BashAirTime; // 0x820(0x04)
	bool FastStickPress; // 0x824(0x01)
	bool Dashed; // 0x825(0x01)
	bool StrongAttack; // 0x826(0x01)
	bool StaminaRecoverBlock; // 0x827(0x01)
	bool BashLockTarget; // 0x828(0x01)
	bool DownwardsAttack; // 0x829(0x01)
	float StaminaSpeedRecover; // 0x82c(0x04)
	FVector BashLocation; // 0x830(0x0c)
	float AttackHold; // 0x83c(0x04)
	int32_t AttackAnim; // 0x840(0x04)
	bool Attacking; // 0x844(0x01)
	UBlueFire_Game_Instance_C* GameInstance; // 0x848(0x08)
	int32_t AttackN; // 0x850(0x04)
	float Bash2Distance; // 0x854(0x04)
	AActor* Bash2Target; // 0x858(0x08)
	FVector HitLoc; // 0x860(0x0c)
	bool Grinding; // 0x86c(0x01)
	TArray<float> PointDistance; // 0x870(0x10)
	float RailDistanceAlongSpline; // 0x880(0x04)
	int32_t RailClosestPoint; // 0x884(0x04)
	float RailPointDistanceActor; // 0x888(0x04)
	float RailSpeed; // 0x88c(0x04)
	bool GrindForward; // 0x890(0x01)
	float RailSecondPointDistanceFromActor; // 0x894(0x04)
	int32_t RailSecondClosestPoint; // 0x898(0x04)
	FMulticastInlineDelegate AttackDispatcher; // 0x8a0(0x10)
	FRotator InitialRotation; // 0x8b0(0x0c)
	FVector LightVector; // 0x8bc(0x0c)
	FVector HeadRotation; // 0x8c8(0x0c)
	float HeadRot; // 0x8d4(0x04)
	AActor* HeadRotPOI; // 0x8d8(0x08)
	float HeadRotBody; // 0x8e0(0x04)
	bool Running; // 0x8e4(0x01)
	bool Modifier; // 0x8e5(0x01)
	float SpeedCap; // 0x8e8(0x04)
	UMaterialInstanceDynamic* Body_Mat; // 0x8f0(0x08)
	FVector LastSafeSpot; // 0x8f8(0x0c)
	UMaterialInstanceDynamic* Sword_Mat; // 0x908(0x08)
	enum class EPhysicalSurface Surface; // 0x910(0x01)
	float Rage; // 0x914(0x04)
	float DisplayRage; // 0x918(0x04)
	float TempRage; // 0x91c(0x04)
	bool DashRage; // 0x920(0x01)
	bool Dead; // 0x921(0x01)
	TArray<AActor*> ResetActors; // 0x928(0x10)
	bool SimCam; // 0x938(0x01)
	FMulticastInlineDelegate Fall; // 0x940(0x10)
	enum class Items ItemToUse; // 0x950(0x01)
	bool Input; // 0x951(0x01)
	bool InVoid; // 0x952(0x01)
	FTransform VoidGateLocation; // 0x960(0x30)
	FMulticastInlineDelegate Land; // 0x990(0x10)
	bool SpellMove; // 0x9a0(0x01)
	float SpellAirTime; // 0x9a4(0x04)
	bool WalkSpeedOverride; // 0x9a8(0x01)
	float SpellDistance; // 0x9ac(0x04)
	bool FloorSmashHit; // 0x9b0(0x01)
	APlayer_AttackWave_C* AttackWave; // 0x9b8(0x08)
	bool DownSlam; // 0x9c0(0x01)
	float SprintSpeed; // 0x9c4(0x04)
	bool DodgeCounter; // 0x9c8(0x01)
	bool SpellAim; // 0x9c9(0x01)
	bool StraightJump; // 0x9ca(0x01)
	FVector CamCenter; // 0x9cc(0x0c)
	FRotator InitialTargetRot; // 0x9d8(0x0c)
	bool SpellCharge; // 0x9e4(0x01)
	bool DashFixDireLock; // 0x9e5(0x01)
	bool HitLaunched; // 0x9e6(0x01)
	bool HitLaunchBack; // 0x9e7(0x01)
	bool GettingUp; // 0x9e8(0x01)
	bool HitStun; // 0x9e9(0x01)
	UMaterialInstanceDynamic* BodMat; // 0x9f0(0x08)
	FVector CenterCenterPoint; // 0x9f8(0x0c)
	bool CamOffset; // 0xa04(0x01)
	bool Fixed; // 0xa05(0x01)
	bool WasFixed; // 0xa06(0x01)
	AActor* DashTarget; // 0xa08(0x08)
	bool DashToTarget; // 0xa10(0x01)
	FVector PreviousWallNormal; // 0xa14(0x0c)
	bool FallingDown; // 0xa20(0x01)
	float FallTime; // 0xa24(0x04)
	bool HardFall; // 0xa28(0x01)
	float FixTime; // 0xa2c(0x04)
	bool SpellCoolDown; // 0xa30(0x01)
	UObject* SpellChargeSystem; // 0xa38(0x08)
	bool DashJump; // 0xa40(0x01)
	FVector SpellDamageLocation; // 0xa44(0x0c)
	AActor* ActionActor; // 0xa50(0x08)
	FMulticastInlineDelegate ActionActorNext; // 0xa58(0x10)
	TArray<AActor*> ActionActorList; // 0xa68(0x10)
	float ActionActorDistance; // 0xa78(0x04)
	bool GetUpQuick; // 0xa7c(0x01)
	FTransform VoidLocation; // 0xa80(0x30)
	bool JustPressedJumpFix; // 0xab0(0x01)
	int32_t PreVoidHealth; // 0xab4(0x04)
	bool VoidRestore; // 0xab8(0x01)
	bool SuccessVoidExit; // 0xab9(0x01)
	ULoadScreen_C* LoadScreen; // 0xac0(0x08)
	TArray<enum class Items> DeathItemsArray; // 0xac8(0x10)
	FVector DeathSpawnPoint; // 0xad8(0x0c)
	UMaterialInstanceDynamic* HairMat; // 0xae8(0x08)
	float WeaponAttack; // 0xaf0(0x04)
	bool EF_FarasGrace; // 0xaf4(0x01)
	bool EF_HammerKing; // 0xaf5(0x01)
	bool EF_HolyCentry; // 0xaf6(0x01)
	bool EF_RiverSpirit; // 0xaf7(0x01)
	bool EF_AngryAmbusher; // 0xaf8(0x01)
	bool EF_SecretFruit; // 0xaf9(0x01)
	bool EF_MindController; // 0xafa(0x01)
	bool EF_FrozenSoul; // 0xafb(0x01)
	bool EF_HowlingTree; // 0xafc(0x01)
	bool EF_LoveFlower; // 0xafd(0x01)
	bool EF_StormCentry; // 0xafe(0x01)
	bool EF_BloodPhantom; // 0xaff(0x01)
	float OriginalGravityScale; // 0xb00(0x04)
	float OriginalMaxWalkSpeed; // 0xb04(0x04)
	float OriginalAirControl; // 0xb08(0x04)
	float OriginalMaxAcceleration; // 0xb0c(0x04)
	float PlayerSpeedBoost; // 0xb10(0x04)
	bool ParryShielded; // 0xb14(0x01)
	bool ShieldSpotDefense; // 0xb15(0x01)
	bool Recharging; // 0xb16(0x01)
	float CamLerpSpeed; // 0xb18(0x04)
	bool DownTouch; // 0xb1c(0x01)
	bool TempDownCheck; // 0xb1d(0x01)
	bool PogoTargetBelow; // 0xb1e(0x01)
	FVector LastSafeSpotDirection; // 0xb20(0x0c)
	bool SafeSpotSameDir; // 0xb2c(0x01)
	float ShadowTraceLocation; // 0xb30(0x04)
	FMulticastInlineDelegate FrameFreezeCall; // 0xb38(0x10)
	FVector OriginalHookStartLocation; // 0xb48(0x0c)
	bool TeleportBehind; // 0xb54(0x01)
	AEnemy_Character_Parent_C* UpperRiseLastEnemy; // 0xb58(0x08)
	AEnemy_Character_Parent_C* DownFallEnemy; // 0xb60(0x08)
	bool IsMegaBlast; // 0xb68(0x01)
	AEnemy_Character_Parent_C* MegaBlastEnemyRef; // 0xb70(0x08)
	bool AttackBuffered; // 0xb78(0x01)
	bool IsAerialRise; // 0xb79(0x01)
	float DistanceToFloor; // 0xb7c(0x04)
	bool NoHardFall; // 0xb80(0x01)
	bool CanShield; // 0xb81(0x01)
	int32_t ConsecutiveHits; // 0xb84(0x04)
	bool HitSpecialOn; // 0xb88(0x01)
	bool SpinAttacked; // 0xb89(0x01)
	bool UsedSpecial; // 0xb8a(0x01)
	bool IsInElevator; // 0xb8b(0x01)
	bool ParryOn; // 0xb8c(0x01)
	bool ParryAttackPlus; // 0xb8d(0x01)
	bool AerialAttackAnim; // 0xb8e(0x01)
	bool WallSlideMove; // 0xb8f(0x01)
	bool FallDownDeactivate; // 0xb90(0x01)
	FMulticastInlineDelegate WallSlideCall; // 0xb98(0x10)
	bool Bubbled; // 0xba8(0x01)
	FVector WallRunLocation; // 0xbac(0x0c)
	float WeaponMovementSpeed; // 0xbb8(0x04)
	float WeaponRange; // 0xbbc(0x04)
	float WeaponBounceHeight; // 0xbc0(0x04)
	float WeaponRecoveryTime; // 0xbc4(0x04)
	bool IsInSpiritChange; // 0xbc8(0x01)
	enum class Tunics Tunic; // 0xbc9(0x01)
	enum class Weapons Weapon; // 0xbca(0x01)
	FMulticastInlineDelegate DownSmash; // 0xbd0(0x10)
	bool SpiritHolderOn; // 0xbe0(0x01)
	FMulticastInlineDelegate SpiritHolderActivate; // 0xbe8(0x10)
	FMulticastInlineDelegate SpiritHolderDeactivate; // 0xbf8(0x10)
	bool TripleJump; // 0xc08(0x01)
	bool EF_PossesedBook; // 0xc09(0x01)
	bool EF_ForestGuardian; // 0xc0a(0x01)
	bool EF_MoiTheDreadfull; // 0xc0b(0x01)
	bool EF_StoneHunter; // 0xc0c(0x01)
	bool EF_GoldenLust; // 0xc0d(0x01)
	bool EF_SpringWarrior; // 0xc0e(0x01)
	bool EF_OnopSiblings; // 0xc0f(0x01)
	bool EF_OnopCandle; // 0xc10(0x01)
	bool EF_StoneWarrior; // 0xc11(0x01)
	bool EF_ToxicRat; // 0xc12(0x01)
	bool EF_SummonedGod; // 0xc13(0x01)
	bool EF_SummoningHand; // 0xc14(0x01)
	bool EF_BettingHand; // 0xc15(0x01)
	bool EF_LifeSteal; // 0xc16(0x01)
	bool EF_ShadowDemon; // 0xc17(0x01)
	bool EF_ShadowGru; // 0xc18(0x01)
	bool EF_FlyingOnop; // 0xc19(0x01)
	bool EF_ToxicWater; // 0xc1a(0x01)
	bool DoubleDash; // 0xc1b(0x01)
	int32_t ExtraLifes; // 0xc1c(0x04)
	bool HoverPlatformShow; // 0xc20(0x01)
	bool EFAwakenedGod; // 0xc21(0x01)
	FMulticastInlineDelegate SpinAttackCall; // 0xc28(0x10)
	FMulticastInlineDelegate ShieldCall; // 0xc38(0x10)
	FMulticastInlineDelegate JumpCall; // 0xc48(0x10)
	FMulticastInlineDelegate DoubleJumpCall; // 0xc58(0x10)
	FMulticastInlineDelegate VerticalAttackCall; // 0xc68(0x10)
	FMulticastInlineDelegate AttackCall; // 0xc78(0x10)
	FMulticastInlineDelegate OpenWeaponMenu; // 0xc88(0x10)
	FMulticastInlineDelegate DashCall; // 0xc98(0x10)
	FMulticastInlineDelegate FireballCall; // 0xca8(0x10)
	bool AbyssPotion; // 0xcb8(0x01)
	bool ShadowPotion; // 0xcb9(0x01)
	bool CarrotPotion; // 0xcba(0x01)
	float ExtraDamage; // 0xcbc(0x04)
	int32_t ExtraDamageHits; // 0xcc0(0x04)
	int32_t Pouch; // 0xcc4(0x04)
	bool SpiritSwapDebug; // 0xcc8(0x01)
	float IceRTPC; // 0xccc(0x04)
	float IKAdjustOffset; // 0xcd0(0x04)
	UPlayer_AnimBP_C* AnimBP; // 0xcd8(0x08)
	float LeftFootOffset; // 0xce0(0x04)
	float RightFootOffset; // 0xce4(0x04)
	float IKTraceDistance; // 0xce8(0x04)
	FName IKLeftSocket; // 0xcec(0x08)
	FName IKRightSocket; // 0xcf4(0x08)
	float HipsOffset; // 0xcfc(0x04)
	float IKFeetInterpSpeed; // 0xd00(0x04)
	bool ShieldOn; // 0xd04(0x01)
	FVector FloorLocation; // 0xd08(0x0c)
	bool Climbing; // 0xd14(0x01)
	int32_t StatAttack; // 0xd18(0x04)
	float StatDefense; // 0xd1c(0x04)
	float StatJump; // 0xd20(0x04)
	float StatSpeed; // 0xd24(0x04)
	float StatDash; // 0xd28(0x04)
	float StatAirAttack; // 0xd2c(0x04)
	float StatAttackSpeed; // 0xd30(0x04)
	AInteractionMaster_C* CurrentVoidGate; // 0xd38(0x08)
	FMulticastInlineDelegate QuestProgress; // 0xd40(0x10)
	UExtraInput_UI_C* WallRunUI; // 0xd50(0x08)
	FVector TargetDashDestination; // 0xd58(0x0c)
	bool ReachedTargetDash; // 0xd64(0x01)
	FMulticastInlineDelegate LockCam; // 0xd68(0x10)
	enum class E_SwordSelection Last Sword Selection; // 0xd78(0x01)
	FMulticastInlineDelegate RestoreHealth; // 0xd80(0x10)
	bool Breath; // 0xd90(0x01)
	bool GunAim; // 0xd91(0x01)
	AActor* HitTargetAutoRot; // 0xd98(0x08)
	float CamVOffset; // 0xda0(0x04)
	bool Ref; // 0xda4(0x01)
	UWallRunStamina_C* WallRunStamina; // 0xda8(0x08)
	float WallRunStaminaFloat; // 0xdb0(0x04)
	TArray<UWidget*> WidgetsToKill; // 0xdb8(0x10)
	bool HolyBlessing; // 0xdc8(0x01)
	bool BlackFire; // 0xdc9(0x01)
	bool WallGrab; // 0xdca(0x01)
	FVector CurrentListenerLocation; // 0xdcc(0x0c)
	FRotator CurrentListenerRotation; // 0xdd8(0x0c)
	FMulticastInlineDelegate WarpCall; // 0xde8(0x10)
	float TargetYaw; // 0xdf8(0x04)
	bool Healing; // 0xdfc(0x01)
	bool WallSlideBlock; // 0xdfd(0x01)
	FMulticastInlineDelegate InputOn; // 0xe00(0x10)
	FMulticastInlineDelegate InputOff; // 0xe10(0x10)
	FVector PrevLocationTimed; // 0xe20(0x0c)
	FMulticastInlineDelegate VoidOpenFirst; // 0xe30(0x10)
	FMulticastInlineDelegate RestartPlayer; // 0xe40(0x10)
	bool Cutscene; // 0xe50(0x01)
	float X; // 0xe54(0x04)
	float Y; // 0xe58(0x04)
	float Sum; // 0xe5c(0x04)
	float Length; // 0xe60(0x04)
	UCurveFloat* MovementCurve; // 0xe68(0x08)
	bool IsPlayingMontage; // 0xe70(0x01)
	FMulticastInlineDelegate Cancel; // 0xe78(0x10)
	FMulticastInlineDelegate VoidExit; // 0xe88(0x10)
	FMulticastInlineDelegate VoidEnter; // 0xe98(0x10)
	bool IsTeleporting; // 0xea8(0x01)
	FTransform VoidLocation_1; // 0xeb0(0x30)
	FTransform DestinationTransform; // 0xee0(0x30)
	FMulticastInlineDelegate TriggerCutscene; // 0xf10(0x10)
	bool DetectingWallSlide; // 0xf20(0x01)
	float PrintDuration; // 0xf24(0x04)
	FMulticastInlineDelegate FluteOnopTempo; // 0xf28(0x10)
	bool BlockWarp; // 0xf38(0x01)
	TArray<FName> SafeSpotVisibleLevels; // 0xf40(0x10)
	TArray<FName> SafeSpotHideLevels; // 0xf50(0x10)
	bool WallGrabJump; // 0xf60(0x01)
	FMulticastInlineDelegate FallWaterDeath; // 0xf68(0x10)
	FVector LastLandLocation; // 0xf78(0x0c)
	FMulticastInlineDelegate TakeHit; // 0xf88(0x10)
	bool Interacting; // 0xf98(0x01)
	FMulticastInlineDelegate Interact; // 0xfa0(0x10)
	enum class EPhysicalSurface Last Surface; // 0xfb0(0x01)
	FMulticastInlineDelegate MusicIntroGlass; // 0xfb8(0x10)
	bool FPS; // 0xfc8(0x01)
	bool ChargingSpinAttack; // 0xfc9(0x01)
	bool Vibration; // 0xfca(0x01)
	bool RespawnInTemple; // 0xfcb(0x01)
	bool LastTimeRefreshWasShaking; // 0xfcc(0x01)
	bool IsGameOverDeath; // 0xfcd(0x01)
	bool JustWallGrabbed; // 0xfce(0x01)
	bool DashStartFromBottom; // 0xfcf(0x01)
	int32_t WwiseCallbackSwitch; // 0xfd0(0x04)
	FMulticastInlineDelegate FluteOnopTempoSecond; // 0xfd8(0x10)
	UCounter_C* CounterUI; // 0xfe8(0x08)
	FMulticastInlineDelegate UpdateCounter; // 0xff0(0x10)
	bool UpdateCounterSuccess; // 0x1000(0x01)
	float EnemyLockOffset; // 0x1004(0x04)
	ABP_PlayerGhost_C* Player Ghost; // 0x1008(0x08)
	bool Interacting With; // 0x1010(0x01)
	bool Warping; // 0x1011(0x01)
	bool HasEnemyAttached; // 0x1012(0x01)
	FVector GhostLocation; // 0x1014(0x0c)
	FVector GhostBlockLocation; // 0x1020(0x0c)
	bool GhostBlocked; // 0x102c(0x01)
	bool IsFinalCombat; // 0x102d(0x01)
	int32_t AttackN_Air; // 0x1030(0x04)
	enum class PlayerState State; // 0x1034(0x01)
	UStaticMeshComponent* IceMesh; // 0x1038(0x08)
	float SpellPower; // 0x1040(0x04)
	FVector MoveBackOriginal; // 0x1044(0x0c)
	FVector MoveBackDire; // 0x1050(0x0c)
	float EnemyCamZOffset; // 0x105c(0x04)
	bool SpinAttackMana; // 0x1060(0x01)
	bool Emoting; // 0x1061(0x01)
	int32_t SoundSword; // 0x1064(0x04)
	bool HoverPlatformOn; // 0x1068(0x01)
	int32_t TempAttackDire; // 0x106c(0x04)
	AMusic_Trigger_Enter_Exit_2_C* SafeSpotMusicTrigger; // 0x1070(0x08)
	int32_t SpellLoop; // 0x1078(0x04)
	int32_t StopSpellLoop; // 0x107c(0x04)
	bool ScreenShot; // 0x1080(0x01)
	FMulticastInlineDelegate VibrateStop; // 0x1088(0x10)
	USpeedTimer_C* SpeedTimer; // 0x1098(0x08)
	bool BlockTimer; // 0x10a0(0x01)
	UVoidExit_C* VoidExitUI; // 0x10a8(0x08)

	void NormalToRotator(FVector Normal, FRotator Rotation);
	void IKFootTrace(float TraceDistance, FName SocketName, float OffsetOut, FVector HitPoint);
	void IKUpdateFootRotation(FRotator TargetVal, FRotator RotV, float InterpSpeed, FRotator Rotator);
	void IKUpdateFootOffset(float TargetVal, float EffectorVal, float IntSpeed, float OutOffset);
	void ResetAirFriction();
	void ResetGravity();
	void JumpLenght(enum class Jumps Jump, float Out);
	void Get4GlobalRotationNearest(float Yaw, float YawOut);
	void JumpIntensity(enum class Jumps Jump, float Out);
	void UserConstructionScript();
	void MoveBackwards__FinishedFunc();
	void MoveBackwards__UpdateFunc();
	void SpiritHolderLens__FinishedFunc();
	void SpiritHolderLens__UpdateFunc();
	void CamAimMove__FinishedFunc();
	void CamAimMove__UpdateFunc();
	void ClothesSpellLight__FinishedFunc();
	void ClothesSpellLight__UpdateFunc();
	void SpellLight__FinishedFunc();
	void SpellLight__UpdateFunc();
	void RageUpdate__FinishedFunc();
	void RageUpdate__UpdateFunc();
	void MoveToHook__FinishedFunc();
	void MoveToHook__UpdateFunc();
	void BackTeleport__FinishedFunc();
	void BackTeleport__UpdateFunc();
	void RadialBlurFlash__FinishedFunc();
	void RadialBlurFlash__UpdateFunc();
	void RadialIntro__FinishedFunc();
	void RadialIntro__UpdateFunc();
	void FireEssenceFlash__FinishedFunc();
	void FireEssenceFlash__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void SwordPutBack__FinishedFunc();
	void SwordPutBack__UpdateFunc();
	void OnNotifyEnd_B2E126534D04B9FD883581A50DE65FBF(FName NotifyName);
	void OnNotifyBegin_B2E126534D04B9FD883581A50DE65FBF(FName NotifyName);
	void OnInterrupted_B2E126534D04B9FD883581A50DE65FBF(FName NotifyName);
	void OnBlendOut_B2E126534D04B9FD883581A50DE65FBF(FName NotifyName);
	void OnCompleted_B2E126534D04B9FD883581A50DE65FBF(FName NotifyName);
	void OnNotifyEnd_E6A0521B404072AA3B148AAD82887D20(FName NotifyName);
	void OnNotifyBegin_E6A0521B404072AA3B148AAD82887D20(FName NotifyName);
	void OnInterrupted_E6A0521B404072AA3B148AAD82887D20(FName NotifyName);
	void OnBlendOut_E6A0521B404072AA3B148AAD82887D20(FName NotifyName);
	void OnCompleted_E6A0521B404072AA3B148AAD82887D20(FName NotifyName);
	void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_31(FKey Key);
	void InpActEvt_PC_Vertical_Attack_K2Node_InputActionEvent_30(FKey Key);
	void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_29(FKey Key);
	void InpActEvt_Gamepad_Vertical_Attack_K2Node_InputActionEvent_28(FKey Key);
	void OnNotifyEnd_79120F364C79DE79856FFB9415F25AD3(FName NotifyName);
	void OnNotifyBegin_79120F364C79DE79856FFB9415F25AD3(FName NotifyName);
	void OnInterrupted_79120F364C79DE79856FFB9415F25AD3(FName NotifyName);
	void OnBlendOut_79120F364C79DE79856FFB9415F25AD3(FName NotifyName);
	void OnCompleted_79120F364C79DE79856FFB9415F25AD3(FName NotifyName);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_27(FKey Key);
	void InpActEvt_Gamepad_Interact_Shield_K2Node_InputActionEvent_26(FKey Key);
	void InpActEvt_PC_Shield_K2Node_InputActionEvent_25(FKey Key);
	void InpActEvt_PC_Shield_K2Node_InputActionEvent_24(FKey Key);
	void OnNotifyEnd_FA57F2F848484C8CD9F0DAB10A8BCC08(FName NotifyName);
	void OnNotifyBegin_FA57F2F848484C8CD9F0DAB10A8BCC08(FName NotifyName);
	void OnInterrupted_FA57F2F848484C8CD9F0DAB10A8BCC08(FName NotifyName);
	void OnBlendOut_FA57F2F848484C8CD9F0DAB10A8BCC08(FName NotifyName);
	void OnCompleted_FA57F2F848484C8CD9F0DAB10A8BCC08(FName NotifyName);
	void InpActEvt_PC_Dash_K2Node_InputActionEvent_23(FKey Key);
	void InpActEvt_PC_Dash_K2Node_InputActionEvent_22(FKey Key);
	void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_21(FKey Key);
	void InpActEvt_Gamepad_Dash_K2Node_InputActionEvent_20(FKey Key);
	void OnNotifyEnd_69C2E4E142DEBAC7089683828E4BFAA7(FName NotifyName);
	void OnNotifyBegin_69C2E4E142DEBAC7089683828E4BFAA7(FName NotifyName);
	void OnInterrupted_69C2E4E142DEBAC7089683828E4BFAA7(FName NotifyName);
	void OnBlendOut_69C2E4E142DEBAC7089683828E4BFAA7(FName NotifyName);
	void OnCompleted_69C2E4E142DEBAC7089683828E4BFAA7(FName NotifyName);
	void OnNotifyEnd_5F49E2864D79CA54596D84BE32AE583A(FName NotifyName);
	void OnNotifyBegin_5F49E2864D79CA54596D84BE32AE583A(FName NotifyName);
	void OnInterrupted_5F49E2864D79CA54596D84BE32AE583A(FName NotifyName);
	void OnBlendOut_5F49E2864D79CA54596D84BE32AE583A(FName NotifyName);
	void OnCompleted_5F49E2864D79CA54596D84BE32AE583A(FName NotifyName);
	void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_19(FKey Key);
	void InpActEvt_PC_Horizontal_Attack_K2Node_InputActionEvent_18(FKey Key);
	void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_17(FKey Key);
	void InpActEvt_Gamepad_Horizontal_Attack_K2Node_InputActionEvent_16(FKey Key);
	void OnNotifyEnd_EE04C7614E69D21210DF509DA2B8DEA7(FName NotifyName);
	void OnNotifyBegin_EE04C7614E69D21210DF509DA2B8DEA7(FName NotifyName);
	void OnInterrupted_EE04C7614E69D21210DF509DA2B8DEA7(FName NotifyName);
	void OnBlendOut_EE04C7614E69D21210DF509DA2B8DEA7(FName NotifyName);
	void OnCompleted_EE04C7614E69D21210DF509DA2B8DEA7(FName NotifyName);
	void InpActEvt_Gamepad_Restore_Health_K2Node_InputActionEvent_15(FKey Key);
	void InpActEvt_PC_Restore_Health_K2Node_InputActionEvent_14(FKey Key);
	void OnNotifyEnd_0F4095274387344590F867A95EB62B7A(FName NotifyName);
	void OnNotifyBegin_0F4095274387344590F867A95EB62B7A(FName NotifyName);
	void OnInterrupted_0F4095274387344590F867A95EB62B7A(FName NotifyName);
	void OnBlendOut_0F4095274387344590F867A95EB62B7A(FName NotifyName);
	void OnCompleted_0F4095274387344590F867A95EB62B7A(FName NotifyName);
	void InpActEvt_Generic_Down_K2Node_InputActionEvent_13(FKey Key);
	void OnNotifyEnd_2F4BB1744FB6A25311BD58997A02B3E5(FName NotifyName);
	void OnNotifyBegin_2F4BB1744FB6A25311BD58997A02B3E5(FName NotifyName);
	void OnInterrupted_2F4BB1744FB6A25311BD58997A02B3E5(FName NotifyName);
	void OnBlendOut_2F4BB1744FB6A25311BD58997A02B3E5(FName NotifyName);
	void OnCompleted_2F4BB1744FB6A25311BD58997A02B3E5(FName NotifyName);
	void OnNotifyEnd_D04F630E44E9999B84A864A908C98308(FName NotifyName);
	void OnNotifyBegin_D04F630E44E9999B84A864A908C98308(FName NotifyName);
	void OnInterrupted_D04F630E44E9999B84A864A908C98308(FName NotifyName);
	void OnBlendOut_D04F630E44E9999B84A864A908C98308(FName NotifyName);
	void OnCompleted_D04F630E44E9999B84A864A908C98308(FName NotifyName);
	void OnNotifyEnd_3E2BC40D42FE8C2C1EDB2C90F8708519(FName NotifyName);
	void OnNotifyBegin_3E2BC40D42FE8C2C1EDB2C90F8708519(FName NotifyName);
	void OnInterrupted_3E2BC40D42FE8C2C1EDB2C90F8708519(FName NotifyName);
	void OnBlendOut_3E2BC40D42FE8C2C1EDB2C90F8708519(FName NotifyName);
	void OnCompleted_3E2BC40D42FE8C2C1EDB2C90F8708519(FName NotifyName);
	void InpActEvt_PC_Jump_K2Node_InputActionEvent_12(FKey Key);
	void InpActEvt_PC_Jump_K2Node_InputActionEvent_11(FKey Key);
	void InpActEvt_Gamepad_Jump_K2Node_InputActionEvent_10(FKey Key);
	void InpActEvt_Gamepad_Jump_K2Node_InputActionEvent_9(FKey Key);
	void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_8(FKey Key);
	void InpActEvt_Gamepad_Sprint_K2Node_InputActionEvent_7(FKey Key);
	void InpActEvt_PC_Sprint_K2Node_InputActionEvent_6(FKey Key);
	void InpActEvt_PC_Sprint_K2Node_InputActionEvent_5(FKey Key);
	void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_4(FKey Key);
	void InpActEvt_Gamepad_Lock_K2Node_InputActionEvent_3(FKey Key);
	void InpActEvt_PC_Lock_K2Node_InputActionEvent_2(FKey Key);
	void InpActEvt_PC_Lock_K2Node_InputActionEvent_1(FKey Key);
	void RechargeStart();
	void RechargeTick();
	void RechargeRelease();
	void RechargeCancel();
	void ResetStamina(float StaminaAmount);
	void ShieldPress();
	void ShieldRelease();
	void ShieldTick();
	void ResetShield();
	void TriggerShield();
	void ShieldParry();
	void ParryWindowOff();
	void PlayBounceBackShield(FVector AttackLocation);
	void SkateRelease();
	void StopMoveBackShield();
	void SkateCancel();
	void RefreshPlayer();
	void SetPlayerMesh(enum class Tunics Tunic);
	void RefreshMovement();
	void SkateTick();
	void SkateStart();
	void LifeSteal();
	void SpinHitTrace();
	void ParrySlowMo();
	void RunSpinAttack();
	void LockUpdateCam();
	void ToggleTimer(UBlueFire_Game_Instance_C* GameInstance);
	void FrameFreezeCancel();
	void CancelOtherAttacks(bool CancelFallDown, bool IgnoreSpell);
	void VoidHealthSave();
	void VoidExitRestoreHealth();
	void Teleport to Void();
	void Unbindevents();
	void ActionUpdateCheck();
	void FixPlayer(AActor* ParentActor);
	void Unfix();
	void FixedTick();
	void CamCenterOffset(AActor* CamOtherActor);
	void ForceFeedbackCall(enum class ForceFeedbackTypes Type, UForceFeedbackEffect* ForceFeedbackEffect);
	void ReturnCameraCenter();
	void SpiritHunterTick();
	void FloorSmashEvent();
	void ResetLaunchSwordThrow();
	void SwordThrowTrace();
	void SpellCancel(bool KeepCharge);
	void SwordThrowReset();
	void ReleaseSpell();
	void ExitSpiritHolder();
	void ResetSwordThrowTimer();
	void SwordThrowTime();
	void SwordThrowCamLag(bool On, float LagSpeed, float LagRotSpeed);
	void ChargeSpell();
	void SpellCoolDownEv();
	void DeactivateSpellCharge();
	void UpdateIK();
	void SpellStartAim();
	void CamAimIn();
	void CamAimOut();
	void SpellCoolDownTimelineEv();
	void FakeSpellPressed();
	void FireImpulse(FVector Location);
	void SpellClothesLightStart();
	void SpellClothesLightEnd();
	void ChangeLight();
	void RevertLight();
	void FrameFreeze(float Duration, float Timedilatation, AActor* Target, bool Parry);
	void ShootVFX(FVector Target);
	void Activate VFX(bool Enable);
	void ShootMontage();
	void Bullet();
	void Shoot();
	void Release();
	void StaminaBoost(float Boost);
	void SpellColor(bool Charged);
	void SpellDamage();
	void ResetRage();
	void ModifyRage(float B);
	void ModifierOn(bool On);
	void ChargeModifier(bool NormalCharge);
	void LoseModifier();
	void ResetLoseConsecutiveHits();
	void LoseModifierCall();
	void ModifierPress();
	void ModifierRelease();
	void Set HeadRot();
	void HeadRotTick();
	void GetHeadRotActors();
	void Emote Sword Selection(enum class E_SwordSelection Sword Selection);
	void Emote Play Anim(UAnimMontage* Anim Montage);
	void HoverPlatform();
	void BreakHoverPlat();
	void Reset Hover Platform();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void GrindStart();
	void CheckRail();
	void GrindTick();
	void GrindEnd();
	void ForceClimbEnd();
	void ClimbRelease();
	void ClimbStart(float ClimbSpeed);
	void Awake Umbra();
	void Set All Stats();
	void StopVibrate();
	void Vibrate(UForceFeedbackEffect* NewForceFeedbackEffect);
	void ExitFPSCam();
	void Ghost Block(bool bLock, FVector Block Location);
	void GrindPress();
	void GrindRelease();
	void Ghost Spawn(bool Begin Play);
	void Trace();
	void BashCancel();
	void BashReset();
	void ReleaseBash();
	void BashEnd();
	void GetCurrency(int32_t Currency);
	void StopDash();
	void RepeatDash();
	void PlayRadialBlur();
	void RadialStart(float Intensity);
	void RadialEnd();
	void DashMoveToTargetTick();
	void DashMoveToTargetBegin();
	void DashMoveToTargetEnd();
	void EndDash();
	void ResetDashFreeze();
	void EndDashWhenMoving();
	void DashJumpReset();
	void DashFakePressed();
	void DashFakeRelease();
	void BndEvt__DashAttack_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult SweepResult);
	void turnoffdashattack();
	void RestoreDoubleDash();
	void DashEndJump();
	void StopRadialBlur();
	void DashTick();
	void DashTickRun(FVector DashDirection, float Distance, bool Initial);
	void VFX Dash();
	void StopDashAttack();
	void ResetAttack();
	void AttackChargeHold();
	void StopDashAttackStrong();
	void ResetAttackAnim();
	void FinishAttack();
	void AutoAimNearEnemy();
	void SmashDownChangeWave();
	void AttackSwordHide();
	void AttackFakeInput();
	void AttackFakeInputDown();
	void AttackWaveDirect();
	void AttackBufferUse();
	void AttackBufferAbort(bool LoseSpinCharge);
	void StartSpinAttackCharge();
	void LoseSpinChargeEvent(FString inString);
	void StopAttackMontage();
	void RotToEnemy();
	void StopAttackWave();
	void StopCharge();
	void ResetAttackN();
	void AttackMovementRestore();
	void ResetIce();
	void IceBreak();
	void IceHardBreak();
	void AttackRootJump();
	void AddLife(int32_t B, bool Full);
	void UseItem();
	void ItemAddLife(int32_t B);
	void ItemNotAvailable();
	void DrinkAbyssPotion();
	void EndAbyssEffect();
	void CancelAllPotionEffects();
	void DrinkCarrotPotion();
	void EndCarrotEffect();
	void DrinkShadowPotion();
	void EndShadowEffect();
	void StrenghtPower(int32_t Hits, float Boost);
	void EndStrenghtPower();
	void ReduceHit();
	void Consume VFX();
	void NewCheckPoint(ACheckPoint_C* CheckPoint);
	void NewSecretCheckPoint(ACheckPoint_C* CheckPoint);
	void Warp();
	void DamageCooldown();
	void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
	void InstaDeath(bool Water, bool Spawn VFX, FVector VFX Location);
	void RemoveLife(float InputPin, bool PlayMontage, bool SkipStopMontage, bool Keep1, bool IsFall);
	void Restart();
	void CanDieAgain();
	void OpenHitGate();
	void CloseHitGate();
	void MovePlayerToCheckPoint();
	void HitLaunch(FVector Origin, float Multiplier XY, float Multiplier Z);
	void Replay();
	void ResetHitLaunch();
	void PlayHitDamageSound();
	void ParryDefense();
	void ParryAttackPlusEnd();
	void DamageFallReset();
	void DoneLoading();
	void DieEvent();
	void ExitFromVoid(bool Success, bool Sim, bool AddLife);
	void RemovePauseIfExists();
	void ResetInstaDeath();
	void KillWidgets();
	void Resumeex();
	void DoneUnloadingDeath();
	void CustomEvent();
	void SetTunicVoid();
	void MusicCallback2(enum class EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
	void Clear Safe Spot Levels();
	void Respawn in Temple();
	void Force Exit Pause();
	void Freeze();
	void Void Load Screen(bool Show, bool AddLife);
	void Finish AllVoids();
	void UnlockMask();
	void SimPhy(bool Cam Follow, float InDamping, bool Water);
	void ResetPHY(bool CamReturn);
	void CheckHealthAmountSFX();
	void ClearHitLaunchRun();
	void HitLaunchRun();
	void AddHUD();
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult Hit);
	void WallSlideCheck();
	void WallSlideCheckClear();
	void WallSlideCheckStart();
	void WallSlideReset(bool LoseGripDelay, bool Ladder);
	void CheckWallJumpNormal();
	void Wall Slide Trail();
	void Wall Slide Trail Off();
	void WallSlideLoseGrip();
	void WallRunGrav();
	void LoseGripDelay();
	void WallSlideResetReset();
	void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, FHitResult Hit);
	void UpdateSurface(UPhysicalMaterial* Mat, UPhysicalMaterial* Target);
	void WallSlideLoseGripStart();
	void WallSlideLoseInstantGrip();
	void RemoveWallSlideHUD(bool Instant);
	void DisableWallGrab();
	void UpperRiseEnemyReset();
	void ReleaseWallGrab();
	void SettingsWallGrabCancel();
	void UpperRise();
	void WallSlideFallFaster();
	void WallSlideFallFasterEnd();
	void EndJustWallGrabbed();
	void Detect Other Collisions();
	void StopWallSlideVibrate();
	void OnLanded(FHitResult Hit);
	void ResetMoves(bool Reset1stJump);
	void GetUp();
	void QuickGetUp();
	void QuickGetUpCloseGate();
	void QuickGetUpOpenGate();
	void playgetupsound();
	void AbortGetUp();
	void ResetHitStun();
	void Landd();
	void CancelDownSlam(bool NoMovement);
	void StopFlash();
	void PlayFlash();
	void HitFlash();
	void VFX Death(FVector Location);
	void VFX Jump();
	void VFX Wall Jump();
	void VFX Landing();
	void VFX Wall Slide(FRotator Rotation);
	void VFX Fall Landing();
	void VFX Double Jump();
	void VFX Wall Run(bool Enable);
	void VFX Wallrun Tick();
	void Regular Jump();
	void CrouchJump();
	void JumpInput();
	void BackSoumersault();
	void LongJump();
	void AirHit();
	void ResetAirSpin();
	void WallJump(bool FireballLaunch);
	void DoubleJumpPush();
	void ClearDoubleJump();
	void ResetJump();
	void JumpRotEnd();
	void SideLaunch();
	void JumpEnd();
	void DodgeCounterEvent();
	void DodgeCounterReAttack();
	void JumpEndNoSwordRemove();
	void DodgeJumpCall();
	void DownFallAttack();
	void JustPressedJump();
	void RestoreTripleJump();
	void CapMaxSpeed(float MaxWalkSpeed);
	void ResetWalkSpeedCap();
	void CapMinWalkSpeed(float MinWalkSpeed);
	void RunFX();
	void RunFXOff();
	void RunFXTick();
	void NoiseMaker(float Loudness, bool OtherLocation, FVector Location);
	void InstaStop(bool ResetMoves, bool Freeze, bool ReturnGravity, float ReturnGravityDelay, bool IgnoreFloorCheckForFreeze, bool NoMovement, bool MoveUp);
	void ReturnGravity(float Delay);
	void WallReleaseCall();
	void ForceReturnGrav();
	void MovementTick();
	void Sprint(bool Enable);
	void InpAxisEvt_Generic_Motion_X_Axis_K2Node_InputAxisEvent_1(float AxisValue);
	void InpAxisEvt_Generic_Motion_Y_Axis_K2Node_InputAxisEvent_2(float AxisValue);
	void AttackAirCountReset();
	void UnlockCam();
	void CancelLock();
	void BlendToTarget();
	void LockFakePressed();
	void LockFakeRelease();
	void ReceiveBeginPlay();
	void OnWalkingOffLedge(FVector PreviousFloorImpactNormal, FVector PreviousFloorContactNormal, FVector PreviousLocation, float TimeDelta);
	void AirForgiveness();
	void ControlFastTapCheck();
	void ResetFastTap();
	void SwordShow();
	void SwordHide();
	void SwordRemove();
	void NoSword();
	void HasSword();
	void PlayerTick();
	void ReceiveTick(float DeltaSeconds);
	void FallTickCheck();
	void changertpcvalue(float B);
	void SwordHideExecute();
	void SpawnDecal();
	void FallDownStart();
	void FallDownCancel();
	void FallDownTimerTick();
	void HideEnd();
	void FallDownStop();
	void FallDownResume();
	void SlowTick();
	void MegaBlastAttack();
	void MusicCallback(enum class EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
	void JumpShowSwordsIdleInstant();
	void CancelEvent();
	void SwordHideNoCancel();
	void OnReachedJumpApex_Event_1();
	void BindApex();
	void CameraCloseGate();
	void CamVerticalOffset(bool Right, bool Reset);
	void CamZoom(bool Right, bool Reset);
	void Reset Surface Death();
	void ExecuteUbergraph_Player_Character_BP(int32_t EntryPoint);
	void VibrateStop__DelegateSignature();
	void UpdateCounter__DelegateSignature();
	void FluteOnopTempoSecond__DelegateSignature();
	void MusicIntroGlass__DelegateSignature();
	void Interact__DelegateSignature();
	void TakeHit__DelegateSignature();
	void FallWaterDeath__DelegateSignature();
	void FluteOnopTempo__DelegateSignature();
	void TriggerCutscene__DelegateSignature();
	void VoidEnter__DelegateSignature();
	void VoidExit__DelegateSignature();
	void Cancel__DelegateSignature();
	void RestartPlayer__DelegateSignature();
	void VoidOpenFirst__DelegateSignature();
	void InputOff__DelegateSignature();
	void InputOn__DelegateSignature();
	void WarpCall__DelegateSignature();
	void RestoreHealth__DelegateSignature();
	void LockCam__DelegateSignature();
	void QuestProgress__DelegateSignature(int32_t Amount, enum class E_DailyQuest Quest);
	void FireballCall__DelegateSignature();
	void DashCall__DelegateSignature();
	void OpenWeaponMenu__DelegateSignature();
	void AttackCall__DelegateSignature();
	void VerticalAttackCall__DelegateSignature();
	void DoubleJumpCall__DelegateSignature();
	void JumpCall__DelegateSignature();
	void ShieldCall__DelegateSignature();
	void SpinAttackCall__DelegateSignature();
	void SpiritHolderDeactivate__DelegateSignature();
	void SpiritHolderActivate__DelegateSignature();
	void DownSmash__DelegateSignature();
	void WallSlideCall__DelegateSignature();
	void FrameFreezeCall__DelegateSignature();
	void ActionActorNext__DelegateSignature();
	void Land__DelegateSignature();
	void Fall__DelegateSignature();
	void AttackDispatcher__DelegateSignature();
	void Die__DelegateSignature();
};

