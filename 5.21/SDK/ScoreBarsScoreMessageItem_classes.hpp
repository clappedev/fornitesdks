#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x48 (0x2A0 - 0x258)
// WidgetBlueprintGeneratedClass ScoreBarsScoreMessageItem.ScoreBarsScoreMessageItem_C
class UScoreBarsScoreMessageItem_C : public UFortUIMessageItemWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      Disappear;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      StackBump;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      Appear;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              _Size_Box__Message_Size;                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemStackCounter_C*                   ItemStackCounter;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Label;                                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Base_Delta;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScoreMessageNumber_C*                 ScoreValueWidget;                                  // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ScoreBarsScoreMessageItem_C");
		return Clss;
	}

	void OnAppearAnimationFinished();
	void ClearScoreValueWidget();
	void GetScoreValueWidget(class UWidget** Widget);
	void Setup(int32 Base_Delta, class FText Name_Text, class UScoreMessageNumber_C* In_Score_Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void UpdateValues(int32 CallFunc_Multiply_IntInt_ReturnValue);
	void OnStackSizeChanged(int32 OldStackSize);
	void OnBeginRemove();
	void ExecuteUbergraph_ScoreBarsScoreMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
