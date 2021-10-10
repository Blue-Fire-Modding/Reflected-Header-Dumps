// AnimBlueprintGeneratedClass VoidStone_AnimBP.VoidStone_AnimBP_C
// Size: 0x6c0 (Inherited: 0x270)
struct UVoidStone_AnimBP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x278(0x78)
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2f0(0x48)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x338(0x78)
	FAnimNode_Root AnimGraphNode_Root; // 0x3b0(0x30)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3e0(0xa0)
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x480(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x520(0x78)
	FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt; // 0x598(0xa0)
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x638(0x78)
	bool Opened; // 0x6b0(0x01)
	float Blend Time; // 0x6b4(0x04)
	bool IsChanging; // 0x6b8(0x01)
	int32_t StateChange; // 0x6bc(0x04)

	void AnimGraph(FPoseLink AnimGraph);
	void ExecuteUbergraph_VoidStone_AnimBP(int32_t EntryPoint);
};

