#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0xB9 (0x659 - 0x5A0)
// WidgetBlueprintGeneratedClass TournamentEventWindowDetails.TournamentEventWindowDetails_C
class UTournamentEventWindowDetails_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      LeaderboardHover;                                  // 0x5A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshData;                                       // 0x5B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshTime;                                       // 0x5B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      RefreshDate;                                       // 0x5C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  AvgPointsPerGame;                                  // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_SubheaderBG;                                // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventsSimpleButton_C*                 Button_Leaderboard;                                // 0x5D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_LeaderboardButtonBG;                  // 0x5E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_isFuture;                     // 0x5E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      EliminationsInfo;                                  // 0x5F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EventDateText;                                     // 0x5F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EventTimeText;                                     // 0x600(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SquadInfoContainer;                  // 0x608(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  MatchesPlayedInfo;                                 // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MatchTypeText;                                     // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_LeaderboardButton;                         // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      PlacementInfo;                                     // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreBigStat_C*                  PointsScoredInfo;                                  // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TournamentContextText;                             // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventScoreRow_C*                      VictoryRoyaleInfo;                                 // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                  ViewLeaderboard;                                   // 0x648(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AllowLeaderboardAccess;                            // 0x658(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TournamentEventWindowDetails_C");
		return Clss;
	}

	void RefreshDataBP();
	void EventColorize();
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Leaderboard_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_TournamentEventWindowDetails(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, bool Temp_bool_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, class FText Temp_text_Variable3, enum class EFortShowdownMatchType Temp_byte_Variable4, int32 Temp_int_Variable, bool Temp_bool_Variable2, int32 Temp_int_Variable1, int32 Temp_int_Variable2, int32 Temp_int_Variable3, int32 Temp_int_Variable4, int32 Temp_int_Variable5, class FText CallFunc_GetText_ReturnValue, enum class EFortShowdownEventState CallFunc_GetEventState_ReturnValue, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Select_Default, int32 Temp_int_Variable6, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_GetText_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue1, int32 Temp_int_Variable7, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Variable8, class FText CallFunc_TextToUpper_ReturnValue1, enum class EFortShowdownEventState Temp_byte_Variable5, enum class EFortShowdownMatchType CallFunc_GetTournamentMatchType_ReturnValue1, int32 K2Node_Select1_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, float Temp_float_Variable, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_GetTournamentPinUnlockScore_ReturnValue, bool Temp_bool_Variable3, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue, class FText CallFunc_GetEventTimeAsText_ReturnValue, float K2Node_Select2_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue3, const struct FDateTime& CallFunc_GetEventEndTime_ReturnValue, const struct FDateTime& CallFunc_GetEventBeginTime_ReturnValue1, class FText CallFunc_GetEventTimeAsText_ReturnValue1, class FText CallFunc_GetEventDateAsText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, bool CallFunc_NotEqual_TextText_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_NotEqual_TextText_ReturnValue1, const struct FFortShowdownEventBestResultsSummary& CallFunc_GetEventResultsSummary_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select3_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 CallFunc_GetTournamentMatchCap_ReturnValue, float Temp_float_Variable1, bool Temp_bool_Variable4, class UCommonButton* K2Node_ComponentBoundEvent_Button2, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1, const class FString& CallFunc_GetTournamentId_ReturnValue, enum class ESlateVisibility K2Node_Select4_Default, const class FString& CallFunc_GetEventId_ReturnValue, float Temp_float_Variable2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_PauseAnimation_ReturnValue2, float CallFunc_GetStartTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue3, bool CallFunc_LessEqual_FloatFloat_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue4, float CallFunc_GetEndTime_ReturnValue1, float CallFunc_PauseAnimation_ReturnValue4, float CallFunc_Subtract_FloatFloat_ReturnValue1, float CallFunc_GetStartTime_ReturnValue2, float K2Node_Select5_Default, bool CallFunc_LessEqual_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue5, float CallFunc_PauseAnimation_ReturnValue5, float CallFunc_GetEndTime_ReturnValue2, float CallFunc_Add_FloatFloat_ReturnValue2, float CallFunc_Subtract_FloatFloat_ReturnValue2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue6, float K2Node_Select6_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue7);
	void ViewLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
