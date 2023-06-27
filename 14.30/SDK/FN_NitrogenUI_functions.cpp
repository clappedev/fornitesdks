// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NitrogenUI.NitrogenWidgetBase.OnExitVehicle
// (Event, Protected, BlueprintEvent)

void UNitrogenWidgetBase::OnExitVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenWidgetBase.OnExitVehicle");

	UNitrogenWidgetBase_OnExitVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenWidgetBase.OnEnterVehicleDriver
// (Event, Protected, BlueprintEvent)

void UNitrogenWidgetBase::OnEnterVehicleDriver()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenWidgetBase.OnEnterVehicleDriver");

	UNitrogenWidgetBase_OnEnterVehicleDriver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged
// (Native, Protected)
// Parameters:
// ENitrogenGamePhase             NewGamePhase                   (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenWidgetBase::HandleNitrogenGamePhaseChanged(ENitrogenGamePhase NewGamePhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenWidgetBase.HandleNitrogenGamePhaseChanged");

	UNitrogenWidgetBase_HandleNitrogenGamePhaseChanged_Params params;
	params.NewGamePhase = NewGamePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenWidgetBase.BP_BindToMutator
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortAthenaMutator_Nitrogen* Mutator                        (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenWidgetBase::BP_BindToMutator(class AFortAthenaMutator_Nitrogen* Mutator)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenWidgetBase.BP_BindToMutator");

	UNitrogenWidgetBase_BP_BindToMutator_Params params;
	params.Mutator = Mutator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareBonusWidget.ShowBonus
// (Native, Event, Protected, BlueprintEvent)

void UNitrogenFareBonusWidget::ShowBonus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareBonusWidget.ShowBonus");

	UNitrogenFareBonusWidget_ShowBonus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare
// (Final, Native, Protected)
// Parameters:
// bool                           bFareCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareBonusWidget::OnEndFare(bool bFareCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareBonusWidget.OnEndFare");

	UNitrogenFareBonusWidget_OnEndFare_Params params;
	params.bFareCompleted = bFareCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnBeginFare
// (Final, Native, Protected)

void UNitrogenFareBonusWidget::OnBeginFare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareBonusWidget.OnBeginFare");

	UNitrogenFareBonusWidget_OnBeginFare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FNitrogenBonusStat      BonusStat                      (Parm, OutParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAwardBonus               (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareBonusWidget::OnActiveBonusUpdated(float Value, bool ShouldAwardBonus, struct FNitrogenBonusStat* BonusStat)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareBonusWidget.OnActiveBonusUpdated");

	UNitrogenFareBonusWidget_OnActiveBonusUpdated_Params params;
	params.Value = Value;
	params.ShouldAwardBonus = ShouldAwardBonus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusStat != nullptr)
		*BonusStat = params.BonusStat;
}


// Function NitrogenUI.NitrogenFareBonusWidget.HideBonus
// (Event, Protected, BlueprintEvent)

void UNitrogenFareBonusWidget::HideBonus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareBonusWidget.HideBonus");

	UNitrogenFareBonusWidget_HideBonus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareInteractionWidget.UpdateTimerDisplay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareInteractionWidget::UpdateTimerDisplay(bool bCanceled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareInteractionWidget.UpdateTimerDisplay");

	UNitrogenFareInteractionWidget_UpdateTimerDisplay_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareInteractionWidget.OnEndInteraction
// (Final, Native, Private)

void UNitrogenFareInteractionWidget::OnEndInteraction()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareInteractionWidget.OnEndInteraction");

	UNitrogenFareInteractionWidget_OnEndInteraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareInteractionWidget.OnBeginInteraction
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FNitrogenFareInteractionData FareInteractionData            (ConstParm, Parm, OutParm, ReferenceParm)

void UNitrogenFareInteractionWidget::OnBeginInteraction(const struct FNitrogenFareInteractionData& FareInteractionData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareInteractionWidget.OnBeginInteraction");

	UNitrogenFareInteractionWidget_OnBeginInteraction_Params params;
	params.FareInteractionData = FareInteractionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenFareObjectiveDisplayState DisplayState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayAnimation                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::SetCurrentFareTimedDeliveryObjectiveState(ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareTimedDeliveryObjectiveState");

	UNitrogenFareMeterWidget_SetCurrentFareTimedDeliveryObjectiveState_Params params;
	params.DisplayState = DisplayState;
	params.bPlayAnimation = bPlayAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenFareObjectiveDisplayState DisplayState                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPlayAnimation                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::SetCurrentFareBonusObjectiveState(ENitrogenFareObjectiveDisplayState DisplayState, bool bPlayAnimation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBonusObjectiveState");

	UNitrogenFareMeterWidget_SetCurrentFareBonusObjectiveState_Params params;
	params.DisplayState = DisplayState;
	params.bPlayAnimation = bPlayAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Num                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::SetCurrentFareBaseRewardValue(int Num)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.SetCurrentFareBaseRewardValue");

	UNitrogenFareMeterWidget_SetCurrentFareBaseRewardValue_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           BonusCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::OnFareBonusFinshed(bool BonusCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.OnFareBonusFinshed");

	UNitrogenFareMeterWidget_OnFareBonusFinshed_Params params;
	params.BonusCompleted = BonusCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFareCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::OnEndFare(bool bFareCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.OnEndFare");

	UNitrogenFareMeterWidget_OnEndFare_Params params;
	params.bFareCompleted = bFareCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginInteraction
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FNitrogenFareInteractionData FareInteractionData            (ConstParm, Parm, OutParm, ReferenceParm)

void UNitrogenFareMeterWidget::OnBeginInteraction(const struct FNitrogenFareInteractionData& FareInteractionData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.OnBeginInteraction");

	UNitrogenFareMeterWidget_OnBeginInteraction_Params params;
	params.FareInteractionData = FareInteractionData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnBeginFare
// (Native, Event, Protected, BlueprintEvent)

void UNitrogenFareMeterWidget::OnBeginFare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.OnBeginFare");

	UNitrogenFareMeterWidget_OnBeginFare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FNitrogenBonusStat      BonusStat                      (Parm, OutParm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldAwardBonus              (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::OnActiveBonusUpdated(float Value, bool bShouldAwardBonus, struct FNitrogenBonusStat* BonusStat)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.OnActiveBonusUpdated");

	UNitrogenFareMeterWidget_OnActiveBonusUpdated_Params params;
	params.Value = Value;
	params.bShouldAwardBonus = bShouldAwardBonus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusStat != nullptr)
		*BonusStat = params.BonusStat;
}


// Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          RemainingTimeRatio             (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::FastDeliveryTimeUpdate(float RemainingTimeRatio)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.FastDeliveryTimeUpdate");

	UNitrogenFareMeterWidget_FastDeliveryTimeUpdate_Params params;
	params.RemainingTimeRatio = RemainingTimeRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          BonusProgressRatio             (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenFareMeterWidget::BonusProgressUpdate(float BonusProgressRatio)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenFareMeterWidget.BonusProgressUpdate");

	UNitrogenFareMeterWidget_BonusProgressUpdate_Params params;
	params.BonusProgressRatio = BonusProgressRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI
// (BlueprintCosmetic, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FNitrogenLeaderboardData> LeaderboardInfo                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            GoalScore                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenLeaderboardWidget::UpdateLeaderboardUI(TArray<struct FNitrogenLeaderboardData> LeaderboardInfo, int GoalScore)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenLeaderboardWidget.UpdateLeaderboardUI");

	UNitrogenLeaderboardWidget_UpdateLeaderboardUI_Params params;
	params.LeaderboardInfo = LeaderboardInfo;
	params.GoalScore = GoalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenMatchNearEndWidget.OnMatchNearEnd
// (Event, Protected, BlueprintEvent)

void UNitrogenMatchNearEndWidget::OnMatchNearEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenMatchNearEndWidget.OnMatchNearEnd");

	UNitrogenMatchNearEndWidget_OnMatchNearEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenMatchNearEndWidget.HandleTopScoreUpdated
// (Event, Protected, BlueprintEvent)

void UNitrogenMatchNearEndWidget::HandleTopScoreUpdated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenMatchNearEndWidget.HandleTopScoreUpdated");

	UNitrogenMatchNearEndWidget_HandleTopScoreUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenObjectiveWidgetState  NewObjectiveWidgetState        (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenObjectiveWidget::UpdateWidgetState(ENitrogenObjectiveWidgetState NewObjectiveWidgetState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.UpdateWidgetState");

	UNitrogenObjectiveWidget_UpdateWidgetState_Params params;
	params.NewObjectiveWidgetState = NewObjectiveWidgetState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInShouldBeHidden              (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenObjectiveWidget::SetShouldBeHidden(bool bInShouldBeHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.SetShouldBeHidden");

	UNitrogenObjectiveWidget_SetShouldBeHidden_Params params;
	params.bInShouldBeHidden = bInShouldBeHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                           bFareCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenObjectiveWidget::OnEndFare(bool bFareCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.OnEndFare");

	UNitrogenObjectiveWidget_OnEndFare_Params params;
	params.bFareCompleted = bFareCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.OnBeginFare
// (Final, Native, Private)

void UNitrogenObjectiveWidget::OnBeginFare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.OnBeginFare");

	UNitrogenObjectiveWidget_OnBeginFare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleExited
// (Final, Native, Private)

void UNitrogenObjectiveWidget::HandleVehicleExited()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleExited");

	UNitrogenObjectiveWidget_HandleVehicleExited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered
// (Final, Native, Private)
// Parameters:
// class AFortAthenaVehicle*      NewVehicle                     (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenObjectiveWidget::HandleVehicleEntered(class AFortAthenaVehicle* NewVehicle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenObjectiveWidget.HandleVehicleEntered");

	UNitrogenObjectiveWidget_HandleVehicleEntered_Params params;
	params.NewVehicle = NewVehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            CurrentPlayerTeamScore         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentPlayerTeamPlacement     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            GoalScore                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          SortedTeamScores               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UNitrogenPlacementWidget::OnPlayerScoringUpdate(int CurrentPlayerTeamScore, int CurrentPlayerTeamPlacement, int GoalScore, TArray<unsigned char> SortedTeamScores)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoringUpdate");

	UNitrogenPlacementWidget_OnPlayerScoringUpdate_Params params;
	params.CurrentPlayerTeamScore = CurrentPlayerTeamScore;
	params.CurrentPlayerTeamPlacement = CurrentPlayerTeamPlacement;
	params.GoalScore = GoalScore;
	params.SortedTeamScores = SortedTeamScores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewScore                       (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlacementWidget::OnPlayerScoreChanged(int NewScore)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.OnPlayerScoreChanged");

	UNitrogenPlacementWidget_OnPlayerScoreChanged_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            NewPlacement                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            OldPlacement                   (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlacementWidget::OnPlayerPlacementChanged(int NewPlacement, int OldPlacement)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.OnPlayerPlacementChanged");

	UNitrogenPlacementWidget_OnPlayerPlacementChanged_Params params;
	params.NewPlacement = NewPlacement;
	params.OldPlacement = OldPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            StarsGained                    (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlacementWidget::OnPlayerFareComplete(int StarsGained)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.OnPlayerFareComplete");

	UNitrogenPlacementWidget_OnPlayerFareComplete_Params params;
	params.StarsGained = StarsGained;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.OnEndFare
// (Final, Native, Private)
// Parameters:
// bool                           bFareCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlacementWidget::OnEndFare(bool bFareCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.OnEndFare");

	UNitrogenPlacementWidget_OnEndFare_Params params;
	params.bFareCompleted = bFareCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged
// (Final, Native, Private)
// Parameters:
// int                            Score                          (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenPlacementWidget::HandleScoreChanged(int Score)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenPlacementWidget.HandleScoreChanged");

	UNitrogenPlacementWidget_HandleScoreChanged_Params params;
	params.Score = Score;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// ENitrogenScoreReason           ScoreReason                    (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenScoreEventWidget::DisplayScoreEvent(ENitrogenScoreReason ScoreReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenScoreEventWidget.DisplayScoreEvent");

	UNitrogenScoreEventWidget_DisplayScoreEvent_Params params;
	params.ScoreReason = ScoreReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bInLead                        (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenScoreEventWidget::DisplayLeadChangedEvent(bool bInLead)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenScoreEventWidget.DisplayLeadChangedEvent");

	UNitrogenScoreEventWidget_DisplayLeadChangedEvent_Params params;
	params.bInLead = bInLead;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryTimeUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          TimePrecentage                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalObjectiveTime             (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryTimeUpdate(float TimePrecentage, float TotalObjectiveTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryTimeUpdate");

	UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryTimeUpdate_Params params;
	params.TimePrecentage = TimePrecentage;
	params.TotalObjectiveTime = TotalObjectiveTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryFailed
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bPlayAnimation                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryFailed(bool bPlayAnimation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryFailed");

	UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryFailed_Params params;
	params.bPlayAnimation = bPlayAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryCompleted
// (Event, Protected, BlueprintEvent)

void UNitrogenSpeedyBonusTimerWidget::OnSpeedyDeliveryCompleted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnSpeedyDeliveryCompleted");

	UNitrogenSpeedyBonusTimerWidget_OnSpeedyDeliveryCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnEndFare
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFareCompleted                 (Parm, ZeroConstructor, IsPlainOldData)

void UNitrogenSpeedyBonusTimerWidget::OnEndFare(bool bFareCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnEndFare");

	UNitrogenSpeedyBonusTimerWidget_OnEndFare_Params params;
	params.bFareCompleted = bFareCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnBeginFare
// (Native, Event, Protected, BlueprintEvent)

void UNitrogenSpeedyBonusTimerWidget::OnBeginFare()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function NitrogenUI.NitrogenSpeedyBonusTimerWidget.OnBeginFare");

	UNitrogenSpeedyBonusTimerWidget_OnBeginFare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
