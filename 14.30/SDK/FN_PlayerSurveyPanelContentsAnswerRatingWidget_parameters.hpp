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

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetSubtitleText
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_OnInitialized_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQuestionChanged
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQuestionChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
