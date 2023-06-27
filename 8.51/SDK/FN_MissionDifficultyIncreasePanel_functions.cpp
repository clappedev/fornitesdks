// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.GetIsGroupMission
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsGroupMission                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMissionDifficultyIncreasePanel_C::GetIsGroupMission(bool* IsGroupMission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.GetIsGroupMission");

	UMissionDifficultyIncreasePanel_C_GetIsGroupMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsGroupMission != nullptr)
		*IsGroupMission = params.IsGroupMission;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UnbindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::UnbindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UnbindDelegates");

	UMissionDifficultyIncreasePanel_C_UnbindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.BindDelegates");

	UMissionDifficultyIncreasePanel_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HideLockoutState
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::HideLockoutState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HideLockoutState");

	UMissionDifficultyIncreasePanel_C_HideLockoutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.DifficultyVoteUpdated
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortVoteStatus                VoteStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FVoter>          Voters                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMissionDifficultyIncreasePanel_C::DifficultyVoteUpdated(EFortVoteStatus VoteStatus, TArray<struct FVoter>* Voters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.DifficultyVoteUpdated");

	UMissionDifficultyIncreasePanel_C_DifficultyVoteUpdated_Params params;
	params.VoteStatus = VoteStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Voters != nullptr)
		*Voters = params.Voters;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateLockoutTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::UpdateLockoutTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateLockoutTimer");

	UMissionDifficultyIncreasePanel_C_UpdateLockoutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowLockoutState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::ShowLockoutState()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowLockoutState");

	UMissionDifficultyIncreasePanel_C_ShowLockoutState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-IntroReset
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Reward_IntroReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-IntroReset");

	UMissionDifficultyIncreasePanel_C_Reward_IntroReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Rewad-IntroRewind
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Rewad_IntroRewind()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Rewad-IntroRewind");

	UMissionDifficultyIncreasePanel_C_Rewad_IntroRewind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-ListAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Reward_ListAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Reward-ListAnim");

	UMissionDifficultyIncreasePanel_C_Reward_ListAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Leave-Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Leave_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Leave-Anim");

	UMissionDifficultyIncreasePanel_C_Leave_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Hover-Anim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Hover_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Hover-Anim");

	UMissionDifficultyIncreasePanel_C_Hover_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateDifficultyRating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::UpdateDifficultyRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateDifficultyRating");

	UMissionDifficultyIncreasePanel_C_UpdateDifficultyRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateRewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::UpdateRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.UpdateRewards");

	UMissionDifficultyIncreasePanel_C_UpdateRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowPanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForceFinalState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDifficultyIncreasePanel_C::ShowPanel(bool ForceFinalState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ShowPanel");

	UMissionDifficultyIncreasePanel_C_ShowPanel_Params params;
	params.ForceFinalState = ForceFinalState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanel
// (BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::HidePanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanel");

	UMissionDifficultyIncreasePanel_C_HidePanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.InfoObjectUpdated
// (Event, Protected, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::InfoObjectUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.InfoObjectUpdated");

	UMissionDifficultyIncreasePanel_C_InfoObjectUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Construct");

	UMissionDifficultyIncreasePanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.Destruct");

	UMissionDifficultyIncreasePanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.RewardAnimTrigger
// (BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::RewardAnimTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.RewardAnimTrigger");

	UMissionDifficultyIncreasePanel_C_RewardAnimTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HandleHidePanelFinished
// (BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::HandleHidePanelFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HandleHidePanelFinished");

	UMissionDifficultyIncreasePanel_C_HandleHidePanelFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.OnActiveVoteChangedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortVoteType                  VoteType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsVoteActive                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteResult                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDifficultyIncreasePanel_C::OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int VoteResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.OnActiveVoteChangedBP");

	UMissionDifficultyIncreasePanel_C_OnActiveVoteChangedBP_Params params;
	params.VoteType = VoteType;
	params.bIsVoteActive = bIsVoteActive;
	params.VoteResult = VoteResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ExecuteUbergraph_MissionDifficultyIncreasePanel
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionDifficultyIncreasePanel_C::ExecuteUbergraph_MissionDifficultyIncreasePanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.ExecuteUbergraph_MissionDifficultyIncreasePanel");

	UMissionDifficultyIncreasePanel_C_ExecuteUbergraph_MissionDifficultyIncreasePanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanelAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::HidePanelAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.HidePanelAnimFinished__DelegateSignature");

	UMissionDifficultyIncreasePanel_C_HidePanelAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.LockoutEndedAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMissionDifficultyIncreasePanel_C::LockoutEndedAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionDifficultyIncreasePanel.MissionDifficultyIncreasePanel_C.LockoutEndedAnimFinished__DelegateSignature");

	UMissionDifficultyIncreasePanel_C_LockoutEndedAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
