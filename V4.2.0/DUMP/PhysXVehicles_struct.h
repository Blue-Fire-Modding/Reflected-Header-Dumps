// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// Size: 0xe0 (Inherited: 0xc8)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 (Inherited: 0x00)
struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x6f0 (Inherited: 0x6e0)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy {
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// Size: 0x08 (Inherited: 0x00)
struct FVehicleInputRate {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// Size: 0x14 (Inherited: 0x00)
struct FReplicatedVehicleState {
	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
};

// ScriptStruct PhysXVehicles.WheelSetup
// Size: 0x20 (Inherited: 0x00)
struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x00(0x08)
	FName BoneName; // 0x08(0x08)
	FVector AdditionalOffset; // 0x10(0x0c)
	bool bDisableSteering; // 0x1c(0x01)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	TArray<FVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float ClutchStrength; // 0x28(0x04)
};

// ScriptStruct PhysXVehicles.VehicleGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float DampingRateFullThrottle; // 0x90(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x04)
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// Size: 0x1c (Inherited: 0x00)
struct FVehicleDifferential4WData {
	enum class EVehicleDifferential4W DifferentialType; // 0x00(0x01)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CentreBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)
};

