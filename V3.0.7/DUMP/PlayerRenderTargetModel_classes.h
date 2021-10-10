// BlueprintGeneratedClass PlayerRenderTargetModel.PlayerRenderTargetModel_C
// Size: 0x564 (Inherited: 0x4c0)
struct APlayerRenderTargetModel_C : ACharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x4c8(0x08)
	USceneComponent* Scene; // 0x4d0(0x08)
	USkeletalMeshComponent* Hair_SkelM; // 0x4d8(0x08)
	UStaticMeshComponent* Hair_SM; // 0x4e0(0x08)
	UStaticMeshComponent* IdleSword_L; // 0x4e8(0x08)
	UStaticMeshComponent* Sword_R; // 0x4f0(0x08)
	UStaticMeshComponent* Sword_L; // 0x4f8(0x08)
	UStaticMeshComponent* IdleSword_R; // 0x500(0x08)
	UStaticMeshComponent* Mask; // 0x508(0x08)
	UPointLightComponent* SelfLight; // 0x510(0x08)
	float Rot_Alpha_744134A547C9E5E5004FDDB2DBB96929; // 0x518(0x04)
	enum class ETimelineDirection Rot__Direction_744134A547C9E5E5004FDDB2DBB96929; // 0x51c(0x01)
	UTimelineComponent* Rot; // 0x520(0x08)
	UMaterialInstanceDynamic* Face_Mat; // 0x528(0x08)
	UMaterialInstanceDynamic* Clothes_Mat; // 0x530(0x08)
	UMaterialInstanceDynamic* Body_Mat; // 0x538(0x08)
	UMaterialInstanceDynamic* Sword_Mat; // 0x540(0x08)
	UMaterialInstanceDynamic* BodMat; // 0x548(0x08)
	UMaterialInstanceDynamic* HairMat; // 0x550(0x08)
	FRotator RotStart; // 0x558(0x0c)

	void UserConstructionScript();
	void Rot__FinishedFunc();
	void Rot__UpdateFunc();
	void ReceiveBeginPlay();
	void RefreshPlayer(bool Swords, enum class Weapons Sword, enum class Tunics Tunic);
	void RotateNewPosition(FRotator Rot);
	void ExecuteUbergraph_PlayerRenderTargetModel(int32_t EntryPoint);
};

