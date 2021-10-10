// Class GameAnalytics.GameAnalytics
// Size: 0x28 (Inherited: 0x28)
struct UGameAnalytics : UObject {

	void SetCustomDimension03(FString CustomDimension);
	void SetCustomDimension02(FString CustomDimension);
	void SetCustomDimension01(FString CustomDimension);
	void OnQuit();
	bool IsRemoteConfigsReady();
	FString GetRemoteConfigsValueAsStringWithDefaultValue(FString Key, FString DefaultValue);
	FString GetRemoteConfigsValueAsString(FString Key);
	FString GetRemoteConfigsContentAsString();
	FString GetABTestingVariantId();
	FString GetABTestingId();
	void AddResourceEvent(enum class EGAResourceFlowType FlowType, FString Currency, float Amount, FString ItemType, FString ItemId);
	void AddProgressionEventWithOneTwoThreeAndScore(enum class EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03, int32_t Score);
	void AddProgressionEventWithOneTwoAndThree(enum class EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, FString Progression03);
	void AddProgressionEventWithOneTwoAndScore(enum class EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02, int32_t Score);
	void AddProgressionEventWithOneAndTwo(enum class EGAProgressionStatus ProgressionStatus, FString Progression01, FString Progression02);
	void AddProgressionEventWithOneAndScore(enum class EGAProgressionStatus ProgressionStatus, FString Progression01, int32_t Score);
	void AddProgressionEventWithOne(enum class EGAProgressionStatus ProgressionStatus, FString Progression01);
	void AddErrorEvent(enum class EGAErrorSeverity Severity, FString Message);
	void AddDesignEventWithValue(FString EventId, float Value);
	void AddDesignEvent(FString EventId);
	void AddBusinessEventIOS(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt);
	void AddBusinessEventAndroid(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType, FString Receipt, FString Signature);
	void AddBusinessEventAndAutoFetchReceipt(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType);
	void AddBusinessEvent(FString Currency, int32_t Amount, FString ItemType, FString ItemId, FString CartType);
	void AddAdEventWithNoAdReason(enum class EGAAdAction Action, enum class EGAAdType adType, FString adSdkName, FString adPlacement, enum class EGAAdError noAdReason);
	void AddAdEventWithDuration(enum class EGAAdAction Action, enum class EGAAdType adType, FString adSdkName, FString adPlacement, int64_t Duration);
	void AddAdEvent(enum class EGAAdAction Action, enum class EGAAdType adType, FString adSdkName, FString adPlacement);
};

