#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{

// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetIndex(int32 Value)
{
	static auto Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetIndex");

	Params::UPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetIndex_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

// Function PlayerSurveyMultipleChoiceListItemWidgetInterface.PlayerSurveyMultipleChoiceListItemWidgetInterface_C.SetChoiceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyQuestionChoiceValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerSurveyMultipleChoiceListItemWidgetInterface_C::SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value)
{
	static auto Func = Class->GetFunction("PlayerSurveyMultipleChoiceListItemWidgetInterface_C", "SetChoiceData");

	Params::UPlayerSurveyMultipleChoiceListItemWidgetInterface_C_SetChoiceData_Params Parms;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
