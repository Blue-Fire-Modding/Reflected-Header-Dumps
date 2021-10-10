// AnimBlueprintGeneratedClass Von_Cinematics_AnimBP.Von_Cinematics_AnimBP_C
// Size: 0x578 (Inherited: 0x270)
struct UVon_Cinematics_AnimBP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_Root AnimGraphNode_Root; // 0x278(0x30)
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x2a8(0xa0)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x348(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x390(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x408(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x480(0x78)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x4f8(0x78)
	int32_t SetCurrentAnim; // 0x570(0x04)
	float Blend Time; // 0x574(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_Von_Cinematics_AnimBP(int32_t EntryPoint);
};

