#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateTextStyle_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateCheckBox_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_MakeChoiceIndexText_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceIndexText_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText
struct UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceText_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct
struct UPlayerSurveyMultipleChoiceStandardListItem_C_Construct_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected
struct UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnSelected_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected
struct UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnDeselected_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData
struct UPlayerSurveyMultipleChoiceStandardListItem_C_SetChoiceData_Params
{
	struct FFortPlayerSurveyQuestionChoice             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex
struct UPlayerSurveyMultipleChoiceStandardListItem_C_SetIndex_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged
struct UPlayerSurveyMultipleChoiceStandardListItem_C_OnCurrentTextStyleChanged_Params
{
};

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem
struct UPlayerSurveyMultipleChoiceStandardListItem_C_ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
