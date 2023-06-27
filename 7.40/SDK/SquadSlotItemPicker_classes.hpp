#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x30 (0x408 - 0x3D8)
// WidgetBlueprintGeneratedClass SquadSlotItemPicker.SquadSlotItemPicker_C
class USquadSlotItemPicker_C : public UFortSquadSlotItemPicker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideSort;                                          // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      ShowSort;                                          // 0x3E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Show_Items;                                        // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hide_Items;                                        // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      SortText;                                          // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadSlotItemPicker_C");
		return Clss;
	}

	void Construct();
	void HandleChangeSort();
	void HandleSortChanged(enum class ESquadSlotSortType CurrentSortType, enum class ESquadSlotType NewParam);
	void ExecuteUbergraph_SquadSlotItemPicker(int32 EntryPoint, enum class ESquadSlotSortType Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class ESquadSlotType Temp_byte_Variable1, class FText Temp_text_Variable4, class FText Temp_text_Variable5, class FText Temp_text_Variable6, class FText Temp_text_Variable7, class FText Temp_text_Variable8, class FText Temp_text_Variable9, class FText Temp_text_Variable10, class FText Temp_text_Variable11, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, enum class ESquadSlotSortType K2Node_CustomEvent_CurrentSortType, enum class ESquadSlotType K2Node_CustomEvent_NewParam, class FText K2Node_Select_Default, class FText K2Node_Select1_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
