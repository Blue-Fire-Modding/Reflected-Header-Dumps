// WidgetBlueprintGeneratedClass DebugLevel.DebugLevel_C
// Size: 0x260 (Inherited: 0x230)
struct UDebugLevel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Chunk; // 0x238(0x08)
	TArray<FString> All Levels; // 0x240(0x10)
	TArray<FString> Visible Levels; // 0x250(0x10)

	void Update(enum class StreamingChunks Chunk, FName Void Name);
	void ExecuteUbergraph_DebugLevel(int32_t EntryPoint);
};

