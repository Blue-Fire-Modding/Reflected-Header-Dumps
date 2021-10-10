// WidgetBlueprintGeneratedClass Quest_Option.Quest_Option_C
// Size: 0x2c1 (Inherited: 0x230)
struct UQuest_Option_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	UTextBlock* Description; // 0x238(0x08)
	UImage* Image_1; // 0x240(0x08)
	UImage* Image_51; // 0x248(0x08)
	UImage* Image_116; // 0x250(0x08)
	UTextBlock* Name; // 0x258(0x08)
	USizeBox* SizeBox_1; // 0x260(0x08)
	enum class Quests Quest; // 0x268(0x01)
	FQuest_Struct QuestStruct; // 0x270(0x50)
	bool IsLocked; // 0x2c0(0x01)

	void Build(FSaveQuest_Struct QuestStruct);
	void Select();
	void Unselect();
	void Locked();
	void PreConstruct(bool IsDesignTime);
	void Completed(enum class ESlateVisibility InVisibility);
	void ExecuteUbergraph_Quest_Option(int32_t EntryPoint);
};

