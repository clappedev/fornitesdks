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

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ScrollSelectedItemIntoView
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ScrollSelectedItemIntoView_Params
{
	bool                                               FallBackToDefault;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimateScroll;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideScrollDestination;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.UpdateEntryBoxContents
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_UpdateEntryBoxContents_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultInitialChoiceIndex
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultInitialChoiceIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidgetPostDummy
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidgetPostDummy_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetSubtitleText
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandlePlayerRequestAnswer
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandlePlayerRequestAnswer_Params
{
	int                                                AnswerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.Construct
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_Construct_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleCommitCurrentAnswer_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleAnswerChanged
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleAnswerChanged_Params
{
	struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleQuestionChanged
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleQuestionChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonClicked
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonClicked_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonFocused
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonFocused_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget
struct UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
