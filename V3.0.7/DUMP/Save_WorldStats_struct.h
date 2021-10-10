// UserDefinedStruct Save_WorldStats.Save_WorldStats
// Size: 0x94 (Inherited: 0x00)
struct FSave_WorldStats {
	AActor* CurrentLastCheckPoint_42_C5BEBFCD4803BE8A33ADC7BB805F1659; // 0x00(0x08)
	enum class CheckPoints LastCheckpoint_23_FC78BBD844822F9EFD6D35A326CE273E; // 0x08(0x01)
	TArray<enum class CheckPoints> UnlockedCheckpoints_21_6144C2C6487E06CE3693C88352E206EE; // 0x10(0x10)
	TArray<enum class StreamingChunks> VisitedAreas_38_6679BEEF461385E0A7E7F89324644F3E; // 0x20(0x10)
	FCheckpointInformation CheckpointInformation_26_C26C68704FEF4AEA139C42BE5D0CC7E5; // 0x30(0x60)
	int32_t Difficulty_41_05307CF5414F7F60F3190D964F157850; // 0x90(0x04)
};

