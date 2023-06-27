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

// Function NitrogenUI.NitrogenWidgetBase.OnExitVehicle
struct UNitrogenWidgetBase_OnExitVehicle_Params
{
};

// Function NitrogenUI.NitrogenWidgetBase.OnEnterVehicleDriver
struct UNitrogenWidgetBase_OnEnterVehicleDriver_Params
{
};

// Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged
struct UNitrogenWidgetBase_HandleNitrogenGamePhaseChanged_Params
{
	ENitrogenGamePhase                                 NewGamePhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenWidgetBase.BP_BindToMutator
struct UNitrogenWidgetBase_BP_BindToMutator_Params
{
	class AFortAthenaMutator_Nitrogen*                 Mutator;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareBonusWidget.ShowBonus
struct UNitrogenFareBonusWidget_ShowBonus_Params
{
};

// Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare
struct UNitrogenFareBonusWidget_OnEndFare_Params
{
	bool                                               bFareCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareBonusWidget.OnBeginFare
struct UNitrogenFareBonusWidget_OnBeginFare_Params
{
};

// Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated
struct UNitrogenFareBonusWidget_OnActiveBonusUpdated_Params
{
	struct FNitrogenBonusStat                          BonusStat;                                                // (Parm, OutParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldAwardBonus;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareBonusWidget.HideBonus
struct UNitrogenFareBonusWidget_HideBonus_Params
{
};

// Function NitrogenUI.NitrogenFareInteractionWidget.UpdateTimerDisplay
struct UNitrogenFareInteractionWidget_UpdateTimerDisplay_Params
{
	bool                                               bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareInteractionWidget.OnEndInteraction
struct UNitrogenFareInteractionWidget_OnEndInteraction_Params
{
};

// Function NitrogenUI.NitrogenFareInteractionWidget.OnBeginInteraction
struct UNitrogenFareInteractionWidget_OnBeginInteraction_Params
{
	struct FNitrogenFareInteractionData                FareInteractionData;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState
struct UNitrogenFareMeterWidget_SetCurrentFareTimedDeliveryObjectiveState_Params
{
	ENitrogenFareObjectiveDisplayState                 DisplayState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayAnimation;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState
struct UNitrogenFareMeterWidget_SetCurrentFareBonusObjectiveState_Params
{
	ENitrogenFareObjectiveDisplayState                 DisplayState;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayAnimation;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue
struct UNitrogenFareMeterWidget_SetCurrentFareBaseRewardValue_Params
{
	int                                                Num;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed
struct UNitrogenFareMeterWidget_OnFareBonusFinshed_Params
{
	bool                                               BonusCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare
struct UNitrogenFareMeterWidget_OnEndFare_Params
{
	bool                                               bFareCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginInteraction
struct UNitrogenFareMeterWidget_OnBeginInteraction_Params
{
	struct FNitrogenFareInteractionData                FareInteractionData;                                      // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginFare
struct UNitrogenFareMeterWidget_OnBeginFare_Params
{
};

// Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated
struct UNitrogenFareMeterWidget_OnActiveBonusUpdated_Params
{
	struct FNitrogenBonusStat                          BonusStat;                                                // (Parm, OutParm)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldAwardBonus;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate
struct UNitrogenFareMeterWidget_FastDeliveryTimeUpdate_Params
{
	float                                              RemainingTimeRatio;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate
struct UNitrogenFareMeterWidget_BonusProgressUpdate_Params
{
	float                                              BonusProgressRatio;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI
struct UNitrogenLeaderboardWidget_UpdateLeaderboardUI_Params
{
	TArray<struct FNitrogenLeaderboardData>            LeaderboardInfo;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                GoalScore;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenMatchNearEndWidget.OnMatchNearEnd
struct UNitrogenMatchNearEndWidget_OnMatchNearEnd_Params
{
};

// Function NitrogenUI.NitrogenMatchNearEndWidget.HandleTopScoreUpdated
struct UNitrogenMatchNearEndWidget_HandleTopScoreUpdated_Params
{
};

// Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState
struct UNitrogenObjectiveWidget_UpdateWidgetState_Params
{
	ENitrogenObjectiveWidgetState                      NewObjectiveWidgetState;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden
struct UNitrogenObjectiveWidget_SetShouldBeHidden_Params
{
	bool                                               bInShouldBeHidden;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare
struct UNitrogenObjectiveWidget_OnEndFare_Params
{
	bool                                               bFareCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenObjectiveWidget.OnBeginFare
struct UNitrogenObjectiveWidget_OnBeginFare_Params
{
};

// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleExited
struct UNitrogenObjectiveWidget_HandleVehicleExited_Params
{
};

// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered
struct UNitrogenObjectiveWidget_HandleVehicleEntered_Params
{
	class AFortAthenaVehicle*                          NewVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate
struct UNitrogenPlacementWidget_OnPlayerScoringUpdate_Params
{
	int                                                CurrentPlayerTeamScore;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                CurrentPlayerTeamPlacement;                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                GoalScore;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              SortedTeamScores;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged
struct UNitrogenPlacementWidget_OnPlayerScoreChanged_Params
{
	int                                                NewScore;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged
struct UNitrogenPlacementWidget_OnPlayerPlacementChanged_Params
{
	int                                                NewPlacement;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OldPlacement;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete
struct UNitrogenPlacementWidget_OnPlayerFareComplete_Params
{
	int                                                StarsGained;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenPlacementWidget.OnEndFare
struct UNitrogenPlacementWidget_OnEndFare_Params
{
	bool                                               bFareCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged
struct UNitrogenPlacementWidget_HandleScoreChanged_Params
{
	int                                                Score;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent
struct UNitrogenScoreEventWidget_DisplayScoreEvent_Params
{
	ENitrogenScoreReason                               ScoreReason;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent
struct UNitrogenScoreEventWidget_DisplayLeadChangedEvent_Params
{
	bool                                               bInLead;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryTimeUpdate
struct UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryTimeUpdate_Params
{
	float                                              TimePrecentage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TotalObjectiveTime;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryFailed
struct UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryFailed_Params
{
	bool                                               bPlayAnimation;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryCompleted
struct UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryCompleted_Params
{
};

// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnEndFare
struct UNitrogenSpeedyBonusTimerWidget_OnEndFare_Params
{
	bool                                               bFareCompleted;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnBeginFare
struct UNitrogenSpeedyBonusTimerWidget_OnBeginFare_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
