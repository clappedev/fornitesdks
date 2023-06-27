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

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateActionDisplay
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateActionDisplay_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateQuestionAnswerDisplay
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateQuestionAnswerDisplay_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateValidDisplay
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateValidDisplay_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateSelectionCountText
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateSelectionCountText_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestToggleChoice
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandlePlayerRequestToggleChoice_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ScrollSelectedItemIntoView
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_ScrollSelectedItemIntoView_Params
{
	bool                                               FallBackToDefault;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AnimateScroll;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideScrollDestination;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.UpdateEntryBoxContents
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_UpdateEntryBoxContents_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultInitialChoiceIndex
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultInitialChoiceIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidgetPostDummy
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultFocusedWidgetPostDummy_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetSubtitleText
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandlePlayerRequestAnswer
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandlePlayerRequestAnswer_Params
{
	TArray<struct FFortPlayerSurveyAnswerMultipleSelectionSingleAnswer> AnswerChoices;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.Construct
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_Construct_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleCommitCurrentAnswer_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleAnswerChanged
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleAnswerChanged_Params
{
	struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleQuestionChanged
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleQuestionChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleButtonClicked
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleButtonClicked_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.HandleFocusChanged
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_HandleFocusChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerMultipleSelectionWidget.PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget
struct UPlayerSurveyPanelContentsAnswerMultipleSelectionWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleSelectionWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
