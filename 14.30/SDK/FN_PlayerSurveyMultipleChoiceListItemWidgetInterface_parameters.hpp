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

// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetIndex
struct UPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetIndex_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetChoiceData
struct UPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetChoiceData_Params
{
	struct FFortPlayerSurveyQuestionChoice             Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
