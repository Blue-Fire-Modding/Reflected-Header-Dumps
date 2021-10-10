// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// Size: 0x2c0 (Inherited: 0x220)
struct ABP_Sky_Sphere_C : AActor {
	UStaticMeshComponent* SkySphereMesh; // 0x220(0x08)
	USceneComponent* Base; // 0x228(0x08)
	UMaterialInstanceDynamic* Sky material; // 0x230(0x08)
	bool Refresh material; // 0x238(0x01)
	ADirectionalLight* Directional light actor; // 0x240(0x08)
	bool Colors determined by sun position; // 0x248(0x01)
	float Sun height; // 0x24c(0x04)
	float Sun brightness; // 0x250(0x04)
	float Horizon falloff; // 0x254(0x04)
	FLinearColor Zenith Color; // 0x258(0x10)
	FLinearColor Horizon color; // 0x268(0x10)
	FLinearColor Cloud color; // 0x278(0x10)
	FLinearColor Overall color; // 0x288(0x10)
	float Cloud speed; // 0x298(0x04)
	float Cloud opacity; // 0x29c(0x04)
	float Stars brightness; // 0x2a0(0x04)
	UCurveLinearColor* Horizon color curve; // 0x2a8(0x08)
	UCurveLinearColor* Zenith color curve; // 0x2b0(0x08)
	UCurveLinearColor* Cloud color curve; // 0x2b8(0x08)

	void RefreshMaterial();
	void UpdateSunDirection();
	void UserConstructionScript();
};

