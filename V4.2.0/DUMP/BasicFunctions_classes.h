// BlueprintGeneratedClass BasicFunctions.BasicFunctions_C
// Size: 0x28 (Inherited: 0x28)
struct UBasicFunctions_C : UBlueprintFunctionLibrary {

	void Get Language String(int32_t Index, UBlueFire_Game_Instance_C* Game Instance, UObject* __WorldContext, FString String);
	void SaveSettings(UBlueFire_Game_Instance_C* GameInstance, UObject* __WorldContext);
	void StadiaFPS(UBlueFire_Game_Instance_C* BFGameInstance, UObject* __WorldContext);
	void StadiaInputFix(bool LoadPrevious, UObject* __WorldContext);
	void ChangeKeyboardLayout(enum class KeyboardType NewKeyboard, bool DebugIgnoreStadia, UObject* __WorldContext);
	void GetBlueFireLanguageBasic(bool UseDefaultLanguage, UBlueFire_Game_Instance_C* Game Instance, UObject* __WorldContext, int32_t Index, FString Language);
	void SetDefaultInputOkAndBackBasic(UBlueFire_Game_Instance_C* Blue Fire Game Instance, UObject* __WorldContext);
	void GetChunkNameBasic(enum class StreamingChunks Area, UObject* __WorldContext, FText Name);
	void GetUIPlatformBasic(UBlueFire_Game_Instance_C* Blue Fire Game Instance, enum class PlatformInput Action - OldINPUT, UObject* __WorldContext, UMaterialInstance* UIMaterial, bool NonSquareSize, FVector2D Size);
	void SaveGameBasic(bool HiddenSave, UObject* __WorldContext);
};

