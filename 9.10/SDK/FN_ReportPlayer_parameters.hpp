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

// Function ReportPlayer.ReportPlayer_C.PlayBackgroundImageAnim
struct UReportPlayer_C_PlayBackgroundImageAnim_Params
{
};

// Function ReportPlayer.ReportPlayer_C.ResetAnims
struct UReportPlayer_C_ResetAnims_Params
{
};

// Function ReportPlayer.ReportPlayer_C.ResetSwitcherStates
struct UReportPlayer_C_ResetSwitcherStates_Params
{
};

// Function ReportPlayer.ReportPlayer_C.ClearStackingEntries
struct UReportPlayer_C_ClearStackingEntries_Params
{
};

// Function ReportPlayer.ReportPlayer_C.RemoveStackedEntriesByStep
struct UReportPlayer_C_RemoveStackedEntriesByStep_Params
{
	EPlayerReportingStep                               CurrentStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.HandleDisplayNewReportPlayerEntryItemSelection
struct UReportPlayer_C_HandleDisplayNewReportPlayerEntryItemSelection_Params
{
	EPlayerReportingStep                               DisplayedStep;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayedText;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ReportPlayer.ReportPlayer_C.DisableTabsByCurrentStep
struct UReportPlayer_C_DisableTabsByCurrentStep_Params
{
	EPlayerReportingStep                               CurStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.HandleTabsByCurrentStep
struct UReportPlayer_C_HandleTabsByCurrentStep_Params
{
	EPlayerReportingStep                               CurStep;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.SetEnableTabButton
struct UReportPlayer_C_SetEnableTabButton_Params
{
	class UIconTextButton_C*                           InTabButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.EnableTabByCurrentStep
struct UReportPlayer_C_EnableTabByCurrentStep_Params
{
	EPlayerReportingStep                               CurrentStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.HandleBottomBarBackButtonClicked
struct UReportPlayer_C_HandleBottomBarBackButtonClicked_Params
{
	bool                                               Passhtrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnLoaded
struct UReportPlayer_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.Construct
struct UReportPlayer_C_Construct_Params
{
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnTabClicked
struct UReportPlayer_C_OnTabClicked_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnActivated
struct UReportPlayer_C_OnActivated_Params
{
};

// Function ReportPlayer.ReportPlayer_C.OnPopulateView
struct UReportPlayer_C_OnPopulateView_Params
{
	EPlayerReportingStep                               CurrentStep;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnListViewSelectionMade
struct UReportPlayer_C_OnListViewSelectionMade_Params
{
	EPlayerReportingStep                               ReportingStep;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SelectedText;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Send_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__Button_Send_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent
struct UReportPlayer_C_BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnInitialized
struct UReportPlayer_C_OnInitialized_Params
{
};

// Function ReportPlayer.ReportPlayer_C.PreConstruct
struct UReportPlayer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.OnFeedbackSentCallback
struct UReportPlayer_C_OnFeedbackSentCallback_Params
{
	bool                                               Succeeded;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.BndEvt__IconTextButton_C
struct UReportPlayer_C_BndEvt__IconTextButton_C_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer
struct UReportPlayer_C_ExecuteUbergraph_ReportPlayer_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
