#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLinearChain
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChainLength                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChainIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()

void UChallengeQuestWidget_C::StyleAsLinearChain(int32 ChainLength, int32 ChainIndex, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue1)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsLinearChain");

	Params::UChallengeQuestWidget_C_StyleAsLinearChain_Params Parms;
	Parms.ChainLength = ChainLength;
	Parms.ChainIndex = ChainIndex;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LockedText                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeQuestWidget_C::StyleAsLocked(class FText LockedText)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsLocked");

	Params::UChallengeQuestWidget_C_StyleAsLocked_Params Parms;
	Parms.LockedText = LockedText;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsInvalid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsInvalid()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsInvalid");

	Params::UChallengeQuestWidget_C_StyleAsInvalid_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortTooltipUIContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortTooltipContext*         CallFunc_SpawnTooltipContext_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCombinedDescription_OutDescription                   ()
// bool                               CallFunc_GetCombinedDescription_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeQuestWidget_C::UpdateName(class UFortTooltipUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortTooltipContext* CallFunc_SpawnTooltipContext_ReturnValue, class FText CallFunc_GetCombinedDescription_OutDescription, bool CallFunc_GetCombinedDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateName");

	Params::UChallengeQuestWidget_C_UpdateName_Params Parms;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnTooltipContext_ReturnValue = CallFunc_SpawnTooltipContext_ReturnValue;
	Parms.CallFunc_GetCombinedDescription_OutDescription = CallFunc_GetCombinedDescription_OutDescription;
	Parms.CallFunc_GetCombinedDescription_ReturnValue = CallFunc_GetCombinedDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetAchievedCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OutTotalAchievedCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutTotalRequiredCount                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnCount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFortMcpQuestObjectiveInfo>CallFunc_GetObjectives_BP_ReturnValue                            (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_GetObjectiveNeededToComplete_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeQuestWidget_C::GetAchievedCount(int32* OutTotalAchievedCount, int32* OutTotalRequiredCount, int32 ReturnCount, TArray<struct FFortMcpQuestObjectiveInfo>& CallFunc_GetObjectives_BP_ReturnValue, int32 CallFunc_GetObjectiveNeededToComplete_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "GetAchievedCount");

	Params::UChallengeQuestWidget_C_GetAchievedCount_Params Parms;
	Parms.ReturnCount = ReturnCount;
	Parms.CallFunc_GetObjectives_BP_ReturnValue = CallFunc_GetObjectives_BP_ReturnValue;
	Parms.CallFunc_GetObjectiveNeededToComplete_ReturnValue = CallFunc_GetObjectiveNeededToComplete_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	if (OutTotalAchievedCount != nullptr)
		*OutTotalAchievedCount = Parms.OutTotalAchievedCount;

	if (OutTotalRequiredCount != nullptr)
		*OutTotalRequiredCount = Parms.OutTotalRequiredCount;

}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.GetQuestState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortQuestState         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EFortQuestState UChallengeQuestWidget_C::GetQuestState(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "GetQuestState");

	Params::UChallengeQuestWidget_C_GetQuestState_Params Parms;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
	return Parms.ReturnValue;

}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.UpdateProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestVisualStyle       CallFunc_GetVisualStyle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAchievedCount_OutTotalAchievedCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAchievedCount_OutTotalRequiredCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQuestVisualStyle       Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue1                             ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::UpdateProgress(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, enum class EQuestVisualStyle CallFunc_GetVisualStyle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetAchievedCount_OutTotalAchievedCount, int32 CallFunc_GetAchievedCount_OutTotalRequiredCount, enum class EQuestVisualStyle Temp_byte_Variable4, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select1_Default)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "UpdateProgress");

	Params::UChallengeQuestWidget_C_UpdateProgress_Params Parms;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.CallFunc_GetVisualStyle_ReturnValue = CallFunc_GetVisualStyle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAchievedCount_OutTotalAchievedCount = CallFunc_GetAchievedCount_OutTotalAchievedCount;
	Parms.CallFunc_GetAchievedCount_OutTotalRequiredCount = CallFunc_GetAchievedCount_OutTotalRequiredCount;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue1 = CallFunc_Conv_IntToText_ReturnValue1;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsIncomplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsIncomplete()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsIncomplete");

	Params::UChallengeQuestWidget_C_StyleAsIncomplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.StyleAsComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UChallengeQuestWidget_C::StyleAsComplete()
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "StyleAsComplete");

	Params::UChallengeQuestWidget_C_StyleAsComplete_Params Parms;

	UObject::ProcessEvent(Func, &Parms);
}

// Function ChallengeQuestWidget.ChallengeQuestWidget_C.SetQuestItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    QuestDefinition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortChallengeBundleInfo*    Bundle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetChallengeChainRewardInfo_ReturnValue                 ()
// struct FFortRewardInfo             CallFunc_GetRewardInfo_BP_ReturnValue                            ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsQuestDefALinearChain_ChainLength                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsQuestDefALinearChain_CurrentChainIndex                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestDefALinearChain_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortRewardInfo             CallFunc_GetRewardInfo_ReturnValue                               ()
// int32                              CallFunc_IsLinearChainQuest_ChainLength                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsLinearChainQuest_CurrentChainIndex                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLinearChainQuest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsLinearChainQuest_ChainLength1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsLinearChainQuest_CurrentChainIndex1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLinearChainQuest_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortChallengeBundleInfoLockedReasonCallFunc_IsUnlocked_LockedReason                                 (NoDestructor)
// bool                               CallFunc_IsUnlocked_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsReward_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortQuestState         CallFunc_GetQuestState_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeQuestWidget_C::SetQuestItem(class UFortQuestItem* Quest, class UFortQuestItemDefinition* QuestDefinition, class UFortChallengeBundleInfo* Bundle, const struct FFortRewardInfo& CallFunc_GetChallengeChainRewardInfo_ReturnValue, const struct FFortRewardInfo& CallFunc_GetRewardInfo_BP_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_IsQuestDefALinearChain_ChainLength, int32 CallFunc_IsQuestDefALinearChain_CurrentChainIndex, bool CallFunc_IsQuestDefALinearChain_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FFortRewardInfo& CallFunc_GetRewardInfo_ReturnValue, int32 CallFunc_IsLinearChainQuest_ChainLength, int32 CallFunc_IsLinearChainQuest_CurrentChainIndex, bool CallFunc_IsLinearChainQuest_ReturnValue, int32 CallFunc_IsLinearChainQuest_ChainLength1, int32 CallFunc_IsLinearChainQuest_CurrentChainIndex1, bool CallFunc_IsLinearChainQuest_ReturnValue1, const struct FFortChallengeBundleInfoLockedReason& CallFunc_IsUnlocked_LockedReason, bool CallFunc_IsUnlocked_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_ContainsReward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, enum class EFortQuestState CallFunc_GetQuestState_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ChallengeQuestWidget_C", "SetQuestItem");

	Params::UChallengeQuestWidget_C_SetQuestItem_Params Parms;
	Parms.Quest = Quest;
	Parms.QuestDefinition = QuestDefinition;
	Parms.Bundle = Bundle;
	Parms.CallFunc_GetChallengeChainRewardInfo_ReturnValue = CallFunc_GetChallengeChainRewardInfo_ReturnValue;
	Parms.CallFunc_GetRewardInfo_BP_ReturnValue = CallFunc_GetRewardInfo_BP_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsQuestDefALinearChain_ChainLength = CallFunc_IsQuestDefALinearChain_ChainLength;
	Parms.CallFunc_IsQuestDefALinearChain_CurrentChainIndex = CallFunc_IsQuestDefALinearChain_CurrentChainIndex;
	Parms.CallFunc_IsQuestDefALinearChain_ReturnValue = CallFunc_IsQuestDefALinearChain_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetRewardInfo_ReturnValue = CallFunc_GetRewardInfo_ReturnValue;
	Parms.CallFunc_IsLinearChainQuest_ChainLength = CallFunc_IsLinearChainQuest_ChainLength;
	Parms.CallFunc_IsLinearChainQuest_CurrentChainIndex = CallFunc_IsLinearChainQuest_CurrentChainIndex;
	Parms.CallFunc_IsLinearChainQuest_ReturnValue = CallFunc_IsLinearChainQuest_ReturnValue;
	Parms.CallFunc_IsLinearChainQuest_ChainLength1 = CallFunc_IsLinearChainQuest_ChainLength1;
	Parms.CallFunc_IsLinearChainQuest_CurrentChainIndex1 = CallFunc_IsLinearChainQuest_CurrentChainIndex1;
	Parms.CallFunc_IsLinearChainQuest_ReturnValue1 = CallFunc_IsLinearChainQuest_ReturnValue1;
	Parms.CallFunc_IsUnlocked_LockedReason = CallFunc_IsUnlocked_LockedReason;
	Parms.CallFunc_IsUnlocked_ReturnValue = CallFunc_IsUnlocked_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_ContainsReward_ReturnValue = CallFunc_ContainsReward_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_GetQuestState_ReturnValue = CallFunc_GetQuestState_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
