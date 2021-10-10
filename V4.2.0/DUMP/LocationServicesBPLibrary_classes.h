// Class LocationServicesBPLibrary.LocationServices
// Size: 0x28 (Inherited: 0x28)
struct ULocationServices : UBlueprintFunctionLibrary {

	bool StopLocationServices();
	bool StartLocationServices();
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy);
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	ULocationServicesImpl* GetLocationServicesImpl();
	FLocationServicesData GetLastKnownLocation();
	bool AreLocationServicesEnabled();
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// Size: 0x38 (Inherited: 0x28)
struct ULocationServicesImpl : UObject {
	FMulticastInlineDelegate OnLocationChanged; // 0x28(0x10)
};

