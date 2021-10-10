// Class PROA34.BFGameInstance
// Size: 0x1d8 (Inherited: 0x198)
struct UBFGameInstance : UGameInstance {
	FString PlayerNickname; // 0x198(0x10)
	bool IsUserLogged; // 0x1a8(0x01)
	bool ForceLogin; // 0x1a9(0x01)
	int32_t CurrentControllerIndex; // 0x1ac(0x04)
	int32_t AmountUsersLogged; // 0x1b0(0x04)

	void SetAchievementStat(FString Stat, int32_t Value);
	void OnPlayerUserLoginChanged(bool isLogin, int32_t UserId, int32_t UserIndex);
	void OnPlayerLogoutComplete(int32_t LocalUserNum, bool bWasSuccessful);
	void OnPlayerLogout();
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus);
	void OnPlayerLoginChanged(int32_t PlayerNum);
	void OnPlayerGameSessionIDChanged(FString sessionData);
	void OnControllerDisconectedEvent(int32_t Type);
	void OnControllerConnectedEvent(int32_t Type);
	void NativeOnPhysicalControllerConnectionEvent(bool IsConnected, int32_t PlatformUserId, int32_t GameUserId, int32_t ControllerIndex);
	void NativeOnPhysicalButtonPressedEvent(int32_t ControllerIndex, int32_t GameUserId);
	void NativeOnLoginUICloseEvent(int32_t LocalPlayerNum);
	void NativeOnControllerPairingEvent(int32_t ControllerIndex, int32_t NewUserId, int32_t OldUserId);
	int32_t GetXboxType();
	FName GetOnlinePlatform();
};

// Class PROA34.ColoredBoxComponent
// Size: 0x430 (Inherited: 0x430)
struct UColoredBoxComponent : UBoxComponent {
};

// Class PROA34.ColoredShapeComponent
// Size: 0x420 (Inherited: 0x420)
struct UColoredShapeComponent : UShapeComponent {
};

// Class PROA34.CopyAndPasteOnClipboard
// Size: 0x28 (Inherited: 0x28)
struct UCopyAndPasteOnClipboard : UBlueprintFunctionLibrary {

	FString PasteCodeFromClipboard();
	void CopyCodeToClipboard(FString code);
};

// Class PROA34.PROA34GameModeBase
// Size: 0x2c0 (Inherited: 0x2c0)
struct APROA34GameModeBase : AGameModeBase {
};

// Class PROA34.RobiFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct URobiFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsRobiValid(UObject* Object);
	bool IsInFrustum(AActor* Actor);
};

// Class PROA34.RobiObject
// Size: 0x220 (Inherited: 0x220)
struct ARobiObject : AActor {

	bool IsRobiValid(UObject* Object);
};

// Class PROA34.RobiTraceHandler
// Size: 0x220 (Inherited: 0x220)
struct ARobiTraceHandler : AActor {

	void TraceHandlerF(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceHandlerE(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceHandlerD(FVector Start, FVector EndA, FVector EndB, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceHandlerC(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceHandlerB(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceHandlerA(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	bool TraceForTarget(AActor* ActorPlayer, FVector OffsetLock, AActor* ActorTarget, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void TraceForPickUp(AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void SpinAttackHandler(AActor* ActorPlayer, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void SpellDamageHandler(FVector SpellDamageLocation, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler19(AActor* ActorPlayer, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler18(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler17(FVector Start, FVector End, FVector InVec, FVector CapsuleHitImpactNormal, AActor* ActorPlayer, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler16(FVector StartA, FVector EndA, FRotator Orientation, FVector StartB, FVector EndB, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler15(FVector Start, FVector End, FRotator Orientation, bool ComplexTrace, FVector StartA, FVector EndA, FVector StartB, FVector EndB, FVector StartC, FVector EndC, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler14(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler13(FVector Start, FVector End, FVector HalfSize, TArray<AActor*> ActorsToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler12(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler11(FVector Start, FVector End, float Radius, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler10(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler09(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler08(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler07(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler06(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler05(FVector StartA, FVector EndA, FVector StartB, FVector EndB, FRotator Orientation, bool Initial, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler04(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler03(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler02(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void PlayerHandler01(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void HandlerAttackC(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void HandlerAttackB(FVector Start, FVector End, FVector HalfSize, FRotator Orientation, TArray<AActor*> ActorsToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void HandlerAttackA(FVector Start, FVector End, TArray<AActor*> ActorsToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void EnemyHandler01(AActor* ActorEnemy, AActor* ActorPlayer, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void EnemyFunc03(AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void EnemyFunc02(AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void CamTraceHandler02(FVector Start, FVector End, AActor* ActorToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void CamHandler01(AActor* ActorPlayer, bool HaveHammerKing, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
	void CameraHandlerLogic(FVector StartA, FVector EndA, float RadiusA, FVector StartB, FVector EndB, float RadiusB, TArray<AActor*> ActorsToIgnore, FDelegate Callback, bool EnableDrawDebug, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
};

// Class PROA34.ScreenshotActor
// Size: 0x228 (Inherited: 0x220)
struct AScreenshotActor : AActor {
	USceneCaptureComponent2D* Camera; // 0x220(0x08)

	void SetCameraToPlayerView(enum class EViewCaptureOutcomes Outcome);
	void CapturePlayersView(enum class EViewCaptureOutcomes Outcome, int32_t Resolution, TArray<FColor> ColorData);
};

// Class PROA34.ScreenshotSaveGame
// Size: 0x38 (Inherited: 0x28)
struct UScreenshotSaveGame : USaveGame {
	TArray<char> BinaryTexture; // 0x28(0x10)
};

// Class PROA34.TestBench
// Size: 0x238 (Inherited: 0x220)
struct ATestBench : AActor {
	FString SlotName; // 0x220(0x10)
	UTexture2D* LoadedTexture; // 0x230(0x08)

	void SaveGame();
	void LoadGame();
};

// Class PROA34.VoidMaker_ControllerC
// Size: 0x4c0 (Inherited: 0x4c0)
struct AVoidMaker_ControllerC : ACharacter {
};

// Class PROA34.VoidMaker_Controller_PadreC
// Size: 0x578 (Inherited: 0x570)
struct AVoidMaker_Controller_PadreC : APlayerController {
};

