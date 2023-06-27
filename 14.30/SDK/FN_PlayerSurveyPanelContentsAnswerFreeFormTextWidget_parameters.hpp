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

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetSubtitleText
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetSubtitleText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateLimitsText
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateLimitsText_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandlePlayerEnterAnswer
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandlePlayerEnterAnswer_Params
{
	struct FString                                     AnswerString;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateHintText
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateHintText_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateEntryText
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateEntryText_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.Construct
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_Construct_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleAnswerChanged
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleAnswerChanged_Params
{
	struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleCommitCurrentAnswer
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleCommitCurrentAnswer_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleQuestionChanged
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleQuestionChanged_Params
{
};

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget
struct UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
