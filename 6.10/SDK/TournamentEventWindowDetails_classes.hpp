#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x78 (0x600 - 0x588)
// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
class UTournamentEventWindowDetails_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      RefreshData;                                       // 0x590(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshTime;                                       // 0x598(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshDate;                                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_isFuture;                     // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      EliminationsInfo;                                  // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EventDateText;                                     // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EventTimeText;                                     // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SquadInfoContainer;                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  MatchesPlayedInfo;                                 // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchTypeText;                                     // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      PlacementInfo;                                     // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  PointsScoredInfo;                                  // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentContextText;                             // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      VictoryRoyaleInfo;                                 // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TournamentEventWindowDetails_C");
		return Clss;
	}

	void RefreshDataBP();
	void ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint, const struct FFortShowdownEventBestResultsSummary& CallFunc_GetEventResultsSummary_ReturnValue, class FText Temp_text_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText Temp_text_Variable1, class FText Temp_text_Variable2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, class FText Temp_text_Variable3, enum class EFortShowdownMatchType Temp_byte_Variable2, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, bool Temp_bool_64EBE1CD4989DF0E505BA38D18DC4503_Variable, class FText CallFunc_GetText_ReturnValue, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue, class FText K2Node_Select_Default, int32 Temp_int_Variable5, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetText_ReturnValue1, int32 Temp_int_Variable6, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable7, class FText CallFunc_TextToUpper_ReturnValue1, enum class EFortShowdownEventState Temp_byte_Variable3, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue1, int32 K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select2_Default, float CallFunc_GetStartTime_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, float CallFunc_GetEndTime_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, float Temp_float_Variable, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, class FText CallFunc_GetEventTimeAsText_ReturnValue, class FText CallFunc_GetEventTimeAsText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool Temp_bool_Variable1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float K2Node_Select3_Default, bool CallFunc_NotEqual_TextText_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue1, class FText CallFunc_GetEventDateAsText_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
