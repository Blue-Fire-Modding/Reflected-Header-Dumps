// Class CustomMeshComponent.CustomMeshComponent
// Size: 0x440 (Inherited: 0x430)
struct UCustomMeshComponent : UMeshComponent {

	bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<FCustomMeshTriangle> Triangles);
};

