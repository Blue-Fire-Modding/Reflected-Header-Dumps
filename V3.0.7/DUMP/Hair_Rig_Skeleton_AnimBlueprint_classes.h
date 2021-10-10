// AnimBlueprintGeneratedClass Hair_Rig_Skeleton_AnimBlueprint.Hair_Rig_Skeleton_AnimBlueprint_C
// Size: 0x2b4 (Inherited: 0x270)
struct UHair_Rig_Skeleton_AnimBlueprint_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FVector Force; // 0x2a8(0x0c)

	void AnimGraph(FPoseLink AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Hair_Rig_Skeleton_AnimBlueprint(int32_t EntryPoint);
};

