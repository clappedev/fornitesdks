#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
struct UAthenaSpectatorHUD_C_SetupCameraMode_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.AddTeamMemberIndicator
struct UAthenaSpectatorHUD_C_AddTeamMemberIndicator_Params
{
	class AFortPlayerStateAthena*                      Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Team_Member_Index;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
struct UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                HUDElementTagToCheck;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     HUDElement;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDElementVisibilityChanged
struct UAthenaSpectatorHUD_C_OnHUDElementVisibilityChanged_Params
{
	struct FGameplayTagContainer                       HiddenHUDElementTags;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
struct UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params
{
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CreateInterestIndicatorWidget
struct UAthenaSpectatorHUD_C_CreateInterestIndicatorWidget_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestRemoved
struct UAthenaSpectatorHUD_C_HandleOnPointOfInterestRemoved_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestAdded
struct UAthenaSpectatorHUD_C_HandleOnPointOfInterestAdded_Params
{
	class AActor*                                      PointOfInterest;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  DisplayImage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
struct UAthenaSpectatorHUD_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
struct UAthenaSpectatorHUD_C_HandleFocusChat_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
struct UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
struct UAthenaSpectatorHUD_C_ToggleChat_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
struct UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
struct UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params
{
	bool                                               InidicatorsEnabled;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
struct UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params
{
	bool                                               IsTargeting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
struct UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHandleAction
struct UAthenaSpectatorHUD_C_OnHandleAction_Params
{
	struct FEventReply                                 Result;                                                   // (Parm, OutParm)
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
struct UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget*                                 CursorModeContentCustomWidget;                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnDeclined_96D6B69B40224C661B08D9B34525EE86
struct UAthenaSpectatorHUD_C_OnDeclined_96D6B69B40224C661B08D9B34525EE86_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnConfirmed_96D6B69B40224C661B08D9B34525EE86
struct UAthenaSpectatorHUD_C_OnConfirmed_96D6B69B40224C661B08D9B34525EE86_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.QuestsCompleted
struct UAthenaSpectatorHUD_C_QuestsCompleted_Params
{
	TArray<class UFortQuestItem*>                      Quests;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
struct UAthenaSpectatorHUD_C_OnEnterState_Params
{
	EFortUIState*                                      PreviousUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
struct UAthenaSpectatorHUD_C_Construct_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
struct UAthenaSpectatorHUD_C_Destruct_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputMethodChanged
struct UAthenaSpectatorHUD_C_HandleInputMethodChanged_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
struct UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
struct UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params
{
	struct FGameplayTagContainer                       FailedReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       FailureText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over
struct UAthenaSpectatorHUD_C_Prepare_Game_Over_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died
struct UAthenaSpectatorHUD_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI
struct UAthenaSpectatorHUD_C_PrepareToShowEndGameUI_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won
struct UAthenaSpectatorHUD_C_On_Player_Won_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived
struct UAthenaSpectatorHUD_C_OnRevived_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived
struct UAthenaSpectatorHUD_C_HandleRevived_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won
struct UAthenaSpectatorHUD_C_On_Team_Won_Params
{
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
struct UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FContentPushState*                          State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
struct UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
