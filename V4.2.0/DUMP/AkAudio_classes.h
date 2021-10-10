// Class AkAudio.AkAcousticPortal
// Size: 0x2e8 (Inherited: 0x258)
struct AAkAcousticPortal : AVolume {
	enum class AkAcousticPortalState InitialState; // 0x258(0x01)
	float ObstructionRefreshInterval; // 0x25c(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x260(0x01)

	void OpenPortal();
	enum class AkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// Class AkAudio.AkPortalComponent
// Size: 0x1f0 (Inherited: 0x1f0)
struct UAkPortalComponent : USceneComponent {
};

// Class AkAudio.AkAudioType
// Size: 0x40 (Inherited: 0x28)
struct UAkAudioType : UObject {
	uint32_t ShortID; // 0x28(0x04)
	TArray<UObject*> UserData; // 0x30(0x10)
};

// Class AkAudio.AkAcousticTexture
// Size: 0x40 (Inherited: 0x40)
struct UAkAcousticTexture : UAkAudioType {
};

// Class AkAudio.AkAmbientSound
// Size: 0x260 (Inherited: 0x220)
struct AAkAmbientSound : AActor {
	UAkAudioEvent* AkAudioEvent; // 0x220(0x08)
	UAkComponent* AkComponent; // 0x228(0x08)
	bool StopWhenOwnerIsDestroyed; // 0x230(0x01)
	bool AutoPost; // 0x231(0x01)

	void StopAmbientSound();
	void StartAmbientSound();
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkAndroidInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkPlatformInfo
// Size: 0x70 (Inherited: 0x28)
struct UAkPlatformInfo : UObject {
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAssetData
// Size: 0x68 (Inherited: 0x28)
struct UAkAssetData : UObject {
	uint32_t CachedHash; // 0x28(0x04)
};

// Class AkAudio.AkAssetDataWithMedia
// Size: 0x88 (Inherited: 0x68)
struct UAkAssetDataWithMedia : UAkAssetData {
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x68(0x10)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x30 (Inherited: 0x28)
struct UAkAssetPlatformData : UObject {
	UAkAssetData* CurrentAssetData; // 0x28(0x08)
};

// Class AkAudio.AkAssetBase
// Size: 0x58 (Inherited: 0x40)
struct UAkAssetBase : UAkAudioType {
	UAkAssetPlatformData* PlatformAssetData; // 0x40(0x08)
};

// Class AkAudio.AkAudioBank
// Size: 0x128 (Inherited: 0x58)
struct UAkAudioBank : UAkAssetBase {
	bool AutoLoad; // 0x58(0x01)
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x60(0x50)
	TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xb0(0x50)
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0x100(0x08)
};

// Class AkAudio.AkAssetDataSwitchContainerData
// Size: 0x88 (Inherited: 0x28)
struct UAkAssetDataSwitchContainerData : UObject {
	TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28(0x28)
	UAkGroupValue* DefaultGroupValue; // 0x50(0x08)
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaList; // 0x58(0x10)
	TArray<UAkAssetDataSwitchContainerData*> Children; // 0x68(0x10)
};

// Class AkAudio.AkAssetDataSwitchContainer
// Size: 0xb0 (Inherited: 0x88)
struct UAkAssetDataSwitchContainer : UAkAssetDataWithMedia {
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x88(0x10)
	UAkGroupValue* DefaultGroupValue; // 0x98(0x08)
};

// Class AkAudio.AkAudioEventData
// Size: 0x278 (Inherited: 0xb0)
struct UAkAudioEventData : UAkAssetDataSwitchContainer {
	float MaxAttenuationRadius; // 0xb0(0x04)
	bool IsInfinite; // 0xb4(0x01)
	float MinimumDuration; // 0xb8(0x04)
	float MaximumDuration; // 0xbc(0x04)
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xc0(0x50)
	TSet<UAkAudioEvent*> PostedEvents; // 0x110(0x50)
	TSet<UAkAuxBus*> UserDefinedSends; // 0x160(0x50)
	TSet<UAkTrigger*> PostedTriggers; // 0x1b0(0x50)
	TSet<UAkGroupValue*> GroupValues; // 0x200(0x50)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe8 (Inherited: 0x58)
struct UAkAudioEvent : UAkAssetBase {
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58(0x50)
	UAkAudioBank* RequiredBank; // 0xa8(0x08)
	UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb8(0x08)
	float MaxAttenuationRadius; // 0xc0(0x04)
	bool IsInfinite; // 0xc4(0x01)
	float MinimumDuration; // 0xc8(0x04)
	float MaximumDuration; // 0xcc(0x04)

	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};

// Class AkAudio.AkGameObject
// Size: 0x210 (Inherited: 0x1f0)
struct UAkGameObject : USceneComponent {
	UAkAudioEvent* AkAudioEvent; // 0x1f0(0x08)
	FString EventName; // 0x1f8(0x10)

	void Stop();
	void PostAssociatedAkEventAsync(UObject* WorldContextObject, int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo, int32_t PlayingID);
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources);
	void PostAkEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32_t PlayingID, int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	int32_t PostAkEvent(UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources, FString in_EventName);
};

// Class AkAudio.AkComponent
// Size: 0x3d0 (Inherited: 0x210)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x210(0x01)
	enum class ECollisionChannel OcclusionCollisionChannel; // 0x218(0x01)
	char EnableSpotReflectors : 1; // 0x21c(0x01)
	UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	FString EarlyReflectionAuxBusName; // 0x228(0x10)
	int32_t EarlyReflectionOrder; // 0x238(0x04)
	float EarlyReflectionBusSendGain; // 0x23c(0x04)
	float EarlyReflectionMaxPathLength; // 0x240(0x04)
	float roomReverbAuxBusGain; // 0x244(0x04)
	int32_t diffractionMaxEdges; // 0x248(0x04)
	int32_t diffractionMaxPaths; // 0x24c(0x04)
	float diffractionMaxPathLength; // 0x250(0x04)
	char DrawFirstOrderReflections : 1; // 0x254(0x01)
	char DrawSecondOrderReflections : 1; // 0x254(0x01)
	char DrawHigherOrderReflections : 1; // 0x254(0x01)
	char DrawDiffraction : 1; // 0x254(0x01)
	bool StopWhenOwnerDestroyed; // 0x258(0x01)
	float AttenuationScalingFactor; // 0x25c(0x04)
	float OcclusionRefreshInterval; // 0x260(0x04)
	bool bUseReverbVolumes; // 0x264(0x01)

	void UseReverbVolumes(bool inUseReverbVolumes);
	void UseEarlyReflections(UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
	void SetSwitch(UAkSwitchValue* SwitchValue, FString SwitchGroup, FString SwitchState);
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
	void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);
	void SetOutputBusVolume(float BusVolume);
	void SetListeners(TArray<UAkComponent*> Listeners);
	void SetEarlyReflectionsVolume(float SendVolume);
	void SetEarlyReflectionsAuxBus(FString AuxBusName);
	void SetAttenuationScalingFactor(float Value);
	void PostTrigger(UAkTrigger* TriggerValue, FString Trigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t PlayingID, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	int32_t PostAkEventByName(FString in_EventName);
	void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32_t PlayingID, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	int32_t PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	void GetRTPCValue(UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, FString RTPC, int32_t PlayingID);
	float GetAttenuationRadius();
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x3e0 (Inherited: 0x3d0)
struct UAkAudioInputComponent : UAkComponent {

	int32_t PostAssociatedAudioInputEvent();
};

// Class AkAudio.AkAuxBus
// Size: 0x60 (Inherited: 0x58)
struct UAkAuxBus : UAkAssetBase {
	UAkAudioBank* RequiredBank; // 0x58(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0xb20 (Inherited: 0x120)
struct UAkCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x4b0(0x01)
	FDelegate CheckedStateDelegate; // 0x4b4(0x10)
	FCheckBoxStyle WidgetStyle; // 0x4c8(0x580)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xa48(0x01)
	bool IsFocusable; // 0xa49(0x01)
	FAkBoolPropertyToControl ThePropertyToControl; // 0xa50(0x10)
	FAkWwiseItemToControl ItemToControl; // 0xa60(0x40)
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xaa0(0x10)
	FMulticastInlineDelegate OnItemDropped; // 0xab0(0x10)
	FMulticastInlineDelegate OnPropertyDropped; // 0xac0(0x10)

	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(enum class ECheckBoxState InCheckedState);
	void SetAkItemId(FGuid ItemId);
	void SetAkBoolProperty(FString ItemProperty);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
	FString GetAkProperty();
	FGuid GetAkItemId();
};

// Class AkAudio.AkGameplayStatics
// Size: 0x28 (Inherited: 0x28)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
	void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName);
	void UnloadBankByName(FString BankName);
	void UnloadBankAsync(UAkAudioBank* Bank, FDelegate BankUnloadedCallback);
	void UnloadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(UObject* WorldContextObject);
	void StopAll();
	void StopActor(AActor* Actor);
	void StartProfilerCapture(FString Filename);
	void StartOutputCapture(FString Filename);
	void StartAllAmbientSounds(UObject* WorldContextObject);
	UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy);
	void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
	void SetState(UAkStateValue* StateValue, FName StateGroup, FName State);
	void SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, FString DeviceShareset);
	void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, AActor* Actor, FName RTPC);
	void SetReflectionsOrder(int32_t Order, bool RefreshPaths);
	void SetPanningRule(enum class PanningRule PanRule);
	void SetOutputBusVolume(float BusVolume, AActor* Actor);
	void SetOcclusionScalingFactor(float ScalingFactor);
	void SetOcclusionRefreshInterval(float RefreshInterval, AActor* Actor);
	void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, enum class AkMultiPositionType MultiPositionType);
	void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, enum class AkMultiPositionType MultiPositionType);
	void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<enum class AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, enum class AkMultiPositionType MultiPositionType);
	void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegate Completed);
	void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
	void SetBusConfig(FString BusName, enum class AkChannelConfiguration ChannelConfiguration);
	void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
	void PostEventByName(FString EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
	int32_t PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, FString EventName);
	void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
	int32_t PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, UObject* WorldContextObject);
	int32_t PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName);
	void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32_t PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo> ExternalSources, FLatentActionInfo LatentInfo);
	int32_t PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo> ExternalSources, FString EventName, FLatentActionInfo LatentInfo);
	void LoadInitBank();
	void LoadBanks(TArray<UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks);
	void LoadBankByName(FString BankName);
	void LoadBankAsync(UAkAudioBank* Bank, FDelegate BankLoadedCallback);
	void LoadBank(UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
	bool IsGame(UObject* WorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, FString DeviceShareset);
	void GetRTPCValue(UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float Value, enum class ERTPCValueType OutputValueType, AActor* Actor, FName RTPC);
	float GetOcclusionScalingFactor();
	FString GetCurrentAudioCulture();
	TArray<FString> GetAvailableAudioCultures();
	UObject* GetAkMediaAssetUserData(UAkMediaAsset* Instance, UObject* Type);
	UAkComponent* GetAkComponent(USceneComponent* AttachToComponent, bool ComponentCreated, FName AttachPointName, FVector Location, enum class EAttachLocation LocationType);
	UObject* GetAkAudioTypeUserData(UAkAudioType* Instance, UObject* Type);
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve);
	void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID);
	void ClearBanks();
	void CancelEventCallback(FDelegate PostEventCallback);
	void AddOutputCaptureMarker(FString MarkerText);
};

// Class AkAudio.AkCallbackInfo
// Size: 0x30 (Inherited: 0x28)
struct UAkCallbackInfo : UObject {
	UAkComponent* AkComponent; // 0x28(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	int32_t EventId; // 0x34(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {

	enum class EAkMidiEventType GetType();
	bool GetProgramChange(FAkMidiProgramChange AsProgramChange);
	bool GetPitchBend(FAkMidiPitchBend AsPitchBend);
	bool GetNoteOn(FAkMidiNoteOnOff AsNoteOn);
	bool GetNoteOff(FAkMidiNoteOnOff AsNoteOff);
	bool GetNoteAftertouch(FAkMidiNoteAftertouch AsNoteAftertouch);
	bool GetGeneric(FAkMidiGeneric AsGeneric);
	bool GetChannelAftertouch(FAkMidiChannelAftertouch AsChannelAftertouch);
	char GetChannel();
	bool GetCc(FAkMidiCc AsCc);
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38(0x04)
	int32_t Position; // 0x3c(0x04)
	FString Label; // 0x40(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x50 (Inherited: 0x38)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38(0x04)
	float EstimatedDuration; // 0x3c(0x04)
	int32_t AudioNodeID; // 0x40(0x04)
	int32_t MediaID; // 0x44(0x04)
	bool bStreaming; // 0x48(0x01)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x70 (Inherited: 0x30)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30(0x04)
	FAkSegmentInfo SegmentInfo; // 0x34(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x58(0x01)
	FString UserCueName; // 0x60(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x320 (Inherited: 0x1f0)
struct UAkGeometryComponent : USceneComponent {
	enum class AkMeshType MeshType; // 0x1f0(0x01)
	int32_t LOD; // 0x1f4(0x04)
	float WeldingThreshold; // 0x1f8(0x04)
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x200(0x50)
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x250(0x10)
	char bEnableDiffraction : 1; // 0x260(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x260(0x01)
	AActor* AssociatedRoom; // 0x268(0x08)
	FAkGeometryData GeometryData; // 0x280(0x50)

	void UpdateGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};

// Class AkAudio.AkGroupValue
// Size: 0x58 (Inherited: 0x40)
struct UAkGroupValue : UAkAudioType {
	uint32_t GroupShortID; // 0x40(0x04)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkHololensInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBankAssetData
// Size: 0x98 (Inherited: 0x88)
struct UAkInitBankAssetData : UAkAssetDataWithMedia {
	TArray<FAkPluginInfo> PluginInfos; // 0x88(0x10)
};

// Class AkAudio.AkInitBank
// Size: 0x78 (Inherited: 0x58)
struct UAkInitBank : UAkAssetBase {
	TArray<FString> AvailableAudioCultures; // 0x58(0x10)
	FString DefaultLanguage; // 0x68(0x10)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkIOSInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkAudioSession AudioSession; // 0x90(0x0c)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl INAkBoolPropertyToControl);
	FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl INAkBoolPropertyToControl);
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemBoolProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)

	void SetSearchText(FString newText);
	FString GetSelectedProperty();
	FString GetSearchText();
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x28 (Inherited: 0x28)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	FText Conv_FAkPropertyToControlToText(FAkPropertyToControl INAkPropertyToControl);
	FString Conv_FAkPropertyToControlToString(FAkPropertyToControl INAkPropertyToControl);
};

// Class AkAudio.AkItemProperties
// Size: 0x148 (Inherited: 0x108)
struct UAkItemProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	FMulticastInlineDelegate OnPropertyDragged; // 0x118(0x10)

	void SetSearchText(FString newText);
	FString GetSelectedProperty();
	FString GetSearchText();
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x1f0(0x01)
	UAkAuxBus* AuxBus; // 0x1f8(0x08)
	FString AuxBusName; // 0x200(0x10)
	float SendLevel; // 0x210(0x04)
	float FadeRate; // 0x214(0x04)
	float Priority; // 0x218(0x04)
	UAkLateReverbComponent* NextLowerPriorityComponent; // 0x220(0x08)
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLinuxInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkLuminInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkLuminInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkLuminPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkLuminPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkMacInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMediaAssetData
// Size: 0x40 (Inherited: 0x28)
struct UAkMediaAssetData : UObject {
	bool IsStreamed; // 0x28(0x01)
	bool UseDeviceMemory; // 0x29(0x01)
};

// Class AkAudio.AkMediaAsset
// Size: 0x58 (Inherited: 0x28)
struct UAkMediaAsset : UObject {
	uint32_t ID; // 0x28(0x04)
	TArray<UObject*> UserData; // 0x30(0x10)
	UAkMediaAssetData* CurrentMediaAssetData; // 0x40(0x08)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x58 (Inherited: 0x58)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0xb8 (Inherited: 0x58)
struct UAkExternalMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkPS4InitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88(0x28)
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0(0x40)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x290 (Inherited: 0x258)
struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x258(0x01)
	UAkAuxBus* AuxBus; // 0x260(0x08)
	FString AuxBusName; // 0x268(0x10)
	float SendLevel; // 0x278(0x04)
	float FadeRate; // 0x27c(0x04)
	float Priority; // 0x280(0x04)
	UAkLateReverbComponent* LateReverbComponent; // 0x288(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x240 (Inherited: 0x210)
struct UAkRoomComponent : UAkGameObject {
	char bEnable : 1; // 0x210(0x01)
	UAkRoomComponent* NextLowerPriorityComponent; // 0x218(0x08)
	float Priority; // 0x220(0x04)
	float WallOcclusion; // 0x224(0x04)
	float AuxSendLevel; // 0x228(0x04)
	bool AutoPost; // 0x22c(0x01)
};

// Class AkAudio.AkRtpc
// Size: 0x40 (Inherited: 0x40)
struct UAkRtpc : UAkAudioType {
};

// Class AkAudio.AkSettings
// Size: 0x140 (Inherited: 0x28)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28(0x01)
	FFilePath WwiseProjectPath; // 0x30(0x10)
	FDirectoryPath WwiseSoundDataFolder; // 0x40(0x10)
	bool bAutoConnectToWAAPI; // 0x50(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51(0x01)
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58(0x50)
	bool SplitSwitchContainerMedia; // 0xa8(0x01)
	bool SplitMediaPerFolder; // 0xa9(0x01)
	bool UseEventBasedPackaging; // 0xaa(0x01)
	bool EnableAutomaticAssetSynchronization; // 0xab(0x01)
	FString CommandletCommitMessage; // 0xb0(0x10)
	TMap<FString, FString> UnrealCultureToWwiseCulture; // 0xc0(0x50)
	bool AskedToUseNewAssetManagement; // 0x110(0x01)
	bool bEnableMultiCoreRendering; // 0x111(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x112(0x01)
	bool FixupRedirectorsDuringMigration; // 0x113(0x01)
	FDirectoryPath WwiseWindowsInstallationPath; // 0x118(0x10)
	FFilePath WwiseMacInstallationPath; // 0x128(0x10)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x80 (Inherited: 0x28)
struct UAkSettingsPerUser : UObject {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x28(0x10)
	FFilePath WwiseMacInstallationPath; // 0x38(0x10)
	bool EnableAutomaticAssetSynchronization; // 0x48(0x01)
	FString WaapiIPAddress; // 0x50(0x10)
	uint32_t WaapiPort; // 0x60(0x04)
	bool bAutoConnectToWAAPI; // 0x64(0x01)
	bool AutoSyncSelection; // 0x65(0x01)
	bool SuppressWwiseProjectPathWarnings; // 0x66(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x67(0x01)
};

// Class AkAudio.AkSlider
// Size: 0x530 (Inherited: 0x108)
struct UAkSlider : UWidget {
	float Value; // 0x108(0x04)
	FDelegate ValueDelegate; // 0x10c(0x10)
	FSliderStyle WidgetStyle; // 0x120(0x340)
	enum class EOrientation Orientation; // 0x460(0x01)
	FLinearColor SliderBarColor; // 0x464(0x10)
	FLinearColor SliderHandleColor; // 0x474(0x10)
	bool IndentHandle; // 0x484(0x01)
	bool Locked; // 0x485(0x01)
	float StepSize; // 0x488(0x04)
	bool IsFocusable; // 0x48c(0x01)
	FAkPropertyToControl ThePropertyToControl; // 0x490(0x10)
	FAkWwiseItemToControl ItemToControl; // 0x4a0(0x40)
	FMulticastInlineDelegate OnValueChanged; // 0x4e0(0x10)
	FMulticastInlineDelegate OnItemDropped; // 0x4f0(0x10)
	FMulticastInlineDelegate OnPropertyDropped; // 0x500(0x10)

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(FLinearColor InValue);
	void SetSliderBarColor(FLinearColor InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	void SetAkSliderItemProperty(FString ItemProperty);
	void SetAkSliderItemId(FGuid ItemId);
	float GetValue();
	FString GetAkSliderItemProperty();
	FGuid GetAkSliderItemId();
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x270 (Inherited: 0x258)
struct AAkSpatialAudioVolume : AVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258(0x08)
	UAkLateReverbComponent* LateReverb; // 0x260(0x08)
	UAkRoomComponent* Room; // 0x268(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x248 (Inherited: 0x220)
struct AAkSpotReflector : AActor {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x220(0x08)
	FString EarlyReflectionAuxBusName; // 0x228(0x10)
	UAkAcousticTexture* AcousticTexture; // 0x238(0x08)
	float DistanceScalingFactor; // 0x240(0x04)
	float Level; // 0x244(0x04)
};

// Class AkAudio.AkStadiaInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkStadiaInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)
};

// Class AkAudio.AkQuailInitializationSettings
// Size: 0xf0 (Inherited: 0xf0)
struct UAkQuailInitializationSettings : UAkStadiaInitializationSettings {
};

// Class AkAudio.AkStadiaPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkStadiaPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkQuailPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkQuailPlatformInfo : UAkStadiaPlatformInfo {
};

// Class AkAudio.AkStateValue
// Size: 0x58 (Inherited: 0x58)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x230 (Inherited: 0x1f0)
struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x1f0(0x01)
	TArray<FAkPoly> AcousticPolys; // 0x1f8(0x10)
	char bEnableDiffraction : 1; // 0x208(0x01)
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x208(0x01)
	AActor* AssociatedRoom; // 0x210(0x08)

	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0xf0 (Inherited: 0x28)
struct UAkSwitchInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90(0x28)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8(0x38)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x58 (Inherited: 0x58)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x40 (Inherited: 0x40)
struct UAkTrigger : UAkAudioType {
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x100 (Inherited: 0x28)
struct UAkTVOSInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkAudioSession AudioSession; // 0x90(0x0c)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x28)
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x34)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId SubscriptionId, bool UnsubscriptionDone);
	FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri WaapiUri, FAKWaapiJsonObject WaapiOptions, FDelegate Callback, FAkWaapiSubscriptionId SubscriptionId, bool SubscriptionDone);
	void SetSubscriptionID(FAkWaapiSubscriptionId Subscription, int32_t ID);
	bool RegisterWaapiProjectLoadedCallback(FDelegate Callback);
	bool RegisterWaapiConnectionLostCallback(FDelegate Callback);
	int32_t GetSubscriptionID(FAkWaapiSubscriptionId Subscription);
	FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId INAkWaapiSubscriptionId);
	FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId INAkWaapiSubscriptionId);
	FAKWaapiJsonObject CallWaapi(FAkWaapiUri WaapiUri, FAKWaapiJsonObject WaapiArgs, FAKWaapiJsonObject WaapiOptions);
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x28 (Inherited: 0x28)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames INAkWaapiFieldNames);
	FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames INAkWaapiFieldNames);
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames FieldName, FString FieldValue, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames FieldName, float FieldValue, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames FieldName, bool FieldValue, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames FieldName, TArray<FString> FieldStringValues, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames FieldName, TArray<FAKWaapiJsonObject> FieldObjectValues, FAKWaapiJsonObject Target);
	FString GetStringField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	float GetNumberField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	int32_t GetIntegerField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	bool GetBoolField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames FieldName, FAKWaapiJsonObject Target);
	FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);
	FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x28 (Inherited: 0x28)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	FText Conv_FAkWaapiUriToText(FAkWaapiUri INAkWaapiUri);
	FString Conv_FAkWaapiUriToString(FAkWaapiUri INAkWaapiUri);
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWindowsInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkWinGDKInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28(0x68)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x40)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkWinAnvilInitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkWinAnvilInitializationSettings : UAkWinGDKInitializationSettings {
};

// Class AkAudio.AkWinGDKPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWinGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWinAnvilPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkWinAnvilPlatformInfo : UAkWinGDKPlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x148 (Inherited: 0x108)
struct UAkWwiseTree : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)

	void SetSearchText(FString newText);
	FAkWwiseObjectDetails GetSelectedItem();
	FString GetSearchText();
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x168 (Inherited: 0x108)
struct UAkWwiseTreeSelector : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108(0x10)
	FMulticastInlineDelegate OnItemDragged; // 0x118(0x10)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneGDKInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0xf8 (Inherited: 0xf8)
struct UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0xf8 (Inherited: 0x28)
struct UAkXboxOneInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28(0x60)
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88(0x08)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90(0x28)
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8(0x3c)

	void MigrateMultiCoreRendering(bool NewValue);
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x70 (Inherited: 0x70)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.InterpTrackAkAudioEvent
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	TArray<FAkAudioEventTrackKey> Events; // 0x90(0x10)
	char bContinueEventOnMatineeEnd : 1; // 0xa0(0x01)
};

// Class AkAudio.InterpTrackAkAudioRTPC
// Size: 0xa8 (Inherited: 0x90)
struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	FString Param; // 0x90(0x10)
	char bPlayOnReverse : 1; // 0xa0(0x01)
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0(0x01)
};

// Class AkAudio.InterpTrackInstAkAudioEvent
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
};

// Class AkAudio.InterpTrackInstAkAudioRTPC
// Size: 0x30 (Inherited: 0x28)
struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28(0x04)
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x1c8 (Inherited: 0xe0)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	UAkAudioEvent* Event; // 0x120(0x08)
	bool RetriggerEvent; // 0x128(0x01)
	int32_t ScrubTailLengthMs; // 0x12c(0x04)
	bool StopAtSectionEnd; // 0x130(0x01)
	FString EventName; // 0x138(0x10)
	float MaxSourceDuration; // 0x168(0x04)
	FString MaxDurationSourceID; // 0x170(0x10)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0x70 (Inherited: 0x58)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x58(0x10)
	char bIsAMasterTrack : 1; // 0x68(0x01)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x248 (Inherited: 0xe0)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	UAkRtpc* RTPC; // 0xe0(0x08)
	FString Name; // 0xe8(0x10)
	FRichCurve FloatCurve; // 0xf8(0x80)
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178(0x30)
	FMovieSceneFloatChannel RTPCChannel; // 0x1a8(0xa0)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0x70 (Inherited: 0x70)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
};

// Class AkAudio.PostEventAsync
// Size: 0xa0 (Inherited: 0x30)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30(0x10)

	UPostEventAsync* PostEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask, FDelegate PostEventCallback, TArray<FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0x80 (Inherited: 0x30)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30(0x10)

	UPostEventAtLocationAsync* PostEventAtLocationAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
	void PollPostEventFuture();
};

