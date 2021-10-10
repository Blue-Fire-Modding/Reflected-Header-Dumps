// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x290 (Inherited: 0x138)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x140(0x01)
	char bReverseAsBrake : 1; // 0x140(0x01)
	char bUseRVOAvoidance : 1; // 0x140(0x01)
	char bRawHandbrakeInput : 1; // 0x140(0x01)
	char bRawGearUpInput : 1; // 0x140(0x01)
	char bRawGearDownInput : 1; // 0x140(0x01)
	char bWasAvoidanceUpdated : 1; // 0x144(0x01)
	float Mass; // 0x148(0x04)
	TArray<FWheelSetup> WheelSetups; // 0x150(0x10)
	float DragCoefficient; // 0x160(0x04)
	float ChassisWidth; // 0x164(0x04)
	float ChassisHeight; // 0x168(0x04)
	float DragArea; // 0x16c(0x04)
	float EstimatedMaxEngineSpeed; // 0x170(0x04)
	float MaxEngineRPM; // 0x174(0x04)
	float DebugDragMagnitude; // 0x178(0x04)
	FVector InertiaTensorScale; // 0x17c(0x0c)
	float MinNormalizedTireLoad; // 0x188(0x04)
	float MinNormalizedTireLoadFiltered; // 0x18c(0x04)
	float MaxNormalizedTireLoad; // 0x190(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x194(0x04)
	float ThresholdLongitudinalSpeed; // 0x198(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x19c(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1a0(0x04)
	TArray<UVehicleWheel*> Wheels; // 0x1a8(0x10)
	float RVOAvoidanceRadius; // 0x1d0(0x04)
	float RVOAvoidanceHeight; // 0x1d4(0x04)
	float AvoidanceConsiderationRadius; // 0x1d8(0x04)
	float RVOSteeringStep; // 0x1dc(0x04)
	float RVOThrottleStep; // 0x1e0(0x04)
	int32_t AvoidanceUID; // 0x1e4(0x04)
	FNavAvoidanceMask AvoidanceGroup; // 0x1e8(0x04)
	FNavAvoidanceMask GroupsToAvoid; // 0x1ec(0x04)
	FNavAvoidanceMask GroupsToIgnore; // 0x1f0(0x04)
	float AvoidanceWeight; // 0x1f4(0x04)
	FVector PendingLaunchVelocity; // 0x1f8(0x0c)
	FReplicatedVehicleState ReplicatedState; // 0x204(0x14)
	float RawSteeringInput; // 0x21c(0x04)
	float RawThrottleInput; // 0x220(0x04)
	float RawBrakeInput; // 0x224(0x04)
	float SteeringInput; // 0x228(0x04)
	float ThrottleInput; // 0x22c(0x04)
	float BrakeInput; // 0x230(0x04)
	float HandbrakeInput; // 0x234(0x04)
	float IdleBrakeInput; // 0x238(0x04)
	float StopThreshold; // 0x23c(0x04)
	float WrongDirectionThreshold; // 0x240(0x04)
	FVehicleInputRate ThrottleInputRate; // 0x244(0x08)
	FVehicleInputRate BrakeInputRate; // 0x24c(0x08)
	FVehicleInputRate HandbrakeInputRate; // 0x254(0x08)
	FVehicleInputRate SteeringInputRate; // 0x25c(0x08)
	AController* OverrideController; // 0x288(0x08)

	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int32_t GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(FNavAvoidanceMask GroupMask);
	void SetGroupsToIgnore(int32_t GroupFlags);
	void SetGroupsToAvoidMask(FNavAvoidanceMask GroupMask);
	void SetGroupsToAvoid(int32_t GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(FNavAvoidanceMask GroupMask);
	void SetAvoidanceGroup(int32_t GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear);
	bool GetUseAutoGears();
	int32_t GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int32_t GetCurrentGear();
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x290 (Inherited: 0x290)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex);
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex);
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
};

// Class PhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30(0x04)
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size: 0x980 (Inherited: 0x270)
struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970(0x08)

	AWheeledVehicle* GetVehicle();
};

// Class PhysXVehicles.VehicleWheel
// Size: 0xf0 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	UStaticMesh* CollisionMesh; // 0x28(0x08)
	bool bDontCreateShape; // 0x30(0x01)
	bool bAutoAdjustCollisionSize; // 0x31(0x01)
	FVector Offset; // 0x34(0x0c)
	float ShapeRadius; // 0x40(0x04)
	float ShapeWidth; // 0x44(0x04)
	float Mass; // 0x48(0x04)
	float DampingRate; // 0x4c(0x04)
	float SteerAngle; // 0x50(0x04)
	bool bAffectedByHandbrake; // 0x54(0x01)
	UTireType* TireType; // 0x58(0x08)
	UTireConfig* TireConfig; // 0x60(0x08)
	float LatStiffMaxLoad; // 0x68(0x04)
	float LatStiffValue; // 0x6c(0x04)
	float LongStiffValue; // 0x70(0x04)
	float SuspensionForceOffset; // 0x74(0x04)
	float SuspensionMaxRaise; // 0x78(0x04)
	float SuspensionMaxDrop; // 0x7c(0x04)
	float SuspensionNaturalFrequency; // 0x80(0x04)
	float SuspensionDampingRatio; // 0x84(0x04)
	enum class EWheelSweepType SweepType; // 0x88(0x01)
	float MaxBrakeTorque; // 0x8c(0x04)
	float MaxHandBrakeTorque; // 0x90(0x04)
	UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x08)
	int32_t WheelIndex; // 0xa0(0x04)
	float DebugLongSlip; // 0xa4(0x04)
	float DebugLatSlip; // 0xa8(0x04)
	float DebugNormalizedTireLoad; // 0xac(0x04)
	float DebugWheelTorque; // 0xb4(0x04)
	float DebugLongForce; // 0xb8(0x04)
	float DebugLatForce; // 0xbc(0x04)
	FVector Location; // 0xc0(0x0c)
	FVector OldLocation; // 0xcc(0x0c)
	FVector Velocity; // 0xd8(0x0c)

	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
};

// Class PhysXVehicles.WheeledVehicle
// Size: 0x290 (Inherited: 0x280)
struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280(0x08)
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288(0x08)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x408 (Inherited: 0x290)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290(0xa0)
	FVehicleDifferential4WData DifferentialSetup; // 0x330(0x1c)
	float AckermannAccuracy; // 0x34c(0x04)
	FVehicleTransmissionData TransmissionSetup; // 0x350(0x30)
	FRuntimeFloatCurve SteeringCurve; // 0x380(0x88)
};

