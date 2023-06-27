#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandlePlayerRequestAnswer_Params
{
	int                                                AnswerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
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

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentAnswer_Params
{
	bool                                               IsSet;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FFortPlayerSurveyAnswerMultipleChoice       Result;                                                   // (Parm, OutParm)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateAnswerDisplay
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateAnswerDisplay_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentQuestion
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentQuestion_Params
{
	class UFortPlayerSurveyQuestionMultipleChoice*     Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateRatingButtons_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateText_Params
{
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

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQAChanged
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQAChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_Construct_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleAnswerChanged
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleAnswerChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params
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
