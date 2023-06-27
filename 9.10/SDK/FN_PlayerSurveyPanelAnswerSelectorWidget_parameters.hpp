#pragma once

// Fortnite (9.1) SDK
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

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetCurrentQuestion
struct UPlayerSurveyPanelAnswerSelectorWidget_C_GetCurrentQuestion_Params
{
	class UFortPlayerSurveyQuestion*                   Question;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.PropagateCurrentQuestion
struct UPlayerSurveyPanelAnswerSelectorWidget_C_PropagateCurrentQuestion_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetSubtitleText
struct UPlayerSurveyPanelAnswerSelectorWidget_C_GetSubtitleText_Params
{
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.CommitCurrentAnswer
struct UPlayerSurveyPanelAnswerSelectorWidget_C_CommitCurrentAnswer_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelAnswerSelectorWidget_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.SetCurrentChild
struct UPlayerSurveyPanelAnswerSelectorWidget_C_SetCurrentChild_Params
{
	class UFortPlayerSurveyAnswerWidgetBase*           Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ForcePropagateQuestion;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.UpdateCurrentChild
struct UPlayerSurveyPanelAnswerSelectorWidget_C_UpdateCurrentChild_Params
{
	bool                                               ForcePropagateQuestion;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildren
struct UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildren_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildrenLoop
struct UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildrenLoop_Params
{
	EFortPlayerSurveyQuestionType                      QuestionType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EFortPlayerSurveyQuestionPresentationStyle         PresentationStyle;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.Construct
struct UPlayerSurveyPanelAnswerSelectorWidget_C_Construct_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.OnInitialized
struct UPlayerSurveyPanelAnswerSelectorWidget_C_OnInitialized_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.HandleQuestionChanged
struct UPlayerSurveyPanelAnswerSelectorWidget_C_HandleQuestionChanged_Params
{
};

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget
struct UPlayerSurveyPanelAnswerSelectorWidget_C_ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
