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

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ShouldShowConfirmCancelDialog
struct UPlayerSurveyPanelContents_C_ShouldShowConfirmCancelDialog_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ResetSurvey
struct UPlayerSurveyPanelContents_C_ResetSurvey_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.GetDefaultFocusedWidget
struct UPlayerSurveyPanelContents_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     Result;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionChanged
struct UPlayerSurveyPanelContents_C_HandleQuestionChanged_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionText
struct UPlayerSurveyPanelContents_C_UpdateQuestionText_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleAnswerChanged
struct UPlayerSurveyPanelContents_C_HandleAnswerChanged_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateNextButtonState
struct UPlayerSurveyPanelContents_C_UpdateNextButtonState_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNumQuestionsChanged
struct UPlayerSurveyPanelContents_C_HandleNumQuestionsChanged_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNavigationStateChanged
struct UPlayerSurveyPanelContents_C_HandleNavigationStateChanged_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleIndexChanged
struct UPlayerSurveyPanelContents_C_HandleIndexChanged_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FinishSurvey
struct UPlayerSurveyPanelContents_C_FinishSurvey_Params
{
	EFortPlayerSurveyFinishReason                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSurveyDescription
struct UPlayerSurveyPanelContents_C_UpdateSurveyDescription_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionNumberLabel
struct UPlayerSurveyPanelContents_C_UpdateQuestionNumberLabel_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.DialogResult
struct UPlayerSurveyPanelContents_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.Construct
struct UPlayerSurveyPanelContents_C_Construct_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleSurveyChanged
struct UPlayerSurveyPanelContents_C_HandleSurveyChanged_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionsChanged
struct UPlayerSurveyPanelContents_C_HandleQuestionsChanged_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnInitialized
struct UPlayerSurveyPanelContents_C_OnInitialized_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent
struct UPlayerSurveyPanelContents_C_BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__FinishButton_K2Node_ComponentBoundEvent
struct UPlayerSurveyPanelContents_C_BndEvt__FinishButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
struct UPlayerSurveyPanelContents_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleDescriptionChanged
struct UPlayerSurveyPanelContents_C_HandleDescriptionChanged_Params
{
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ExecuteUbergraph_PlayerSurveyPanelContents
struct UPlayerSurveyPanelContents_C_ExecuteUbergraph_PlayerSurveyPanelContents_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnSurveyEnded__DelegateSignature
struct UPlayerSurveyPanelContents_C_OnSurveyEnded__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
