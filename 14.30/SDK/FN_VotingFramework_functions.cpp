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

// Function VotingFramework.VoteBroadcasterComponent.VoteStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VoteId                         (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteStart(const struct FName& VoteSessionId, const struct FName& VoteId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteStart");

	UVoteBroadcasterComponent_VoteStart_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VoteId                         (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteSetup(const struct FName& VoteSessionId, const struct FName& VoteId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteSetup");

	UVoteBroadcasterComponent_VoteSetup_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteSessionShutdown(const struct FName& VoteSessionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown");

	UVoteBroadcasterComponent_VoteSessionShutdown_Params params;
	params.VoteSessionId = VoteSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   StartingVoteId                 (Parm, ZeroConstructor, IsPlainOldData)
// EVoteSessionNetworkType        NetworkType                    (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteSessionSetup(const struct FName& VoteSessionId, const struct FName& StartingVoteId, EVoteSessionNetworkType NetworkType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup");

	UVoteBroadcasterComponent_VoteSessionSetup_Params params;
	params.VoteSessionId = VoteSessionId;
	params.StartingVoteId = StartingVoteId;
	params.NetworkType = NetworkType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteSessionComplete(const struct FName& VoteSessionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete");

	UVoteBroadcasterComponent_VoteSessionComplete_Params params;
	params.VoteSessionId = VoteSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VoteId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   WinningVoteSelectionId         (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::VoteEnd(const struct FName& VoteSessionId, const struct FName& VoteId, const struct FName& WinningVoteSelectionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.VoteEnd");

	UVoteBroadcasterComponent_VoteEnd_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.WinningVoteSelectionId = WinningVoteSelectionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FName                   VoteSessionId                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VoteId                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   VoteSelectionId                (Parm, ZeroConstructor, IsPlainOldData)
// int                            VoteDelta                      (Parm, ZeroConstructor, IsPlainOldData)

void UVoteBroadcasterComponent::ServerSubmitVotesAggregated(const struct FName& VoteSessionId, const struct FName& VoteId, const struct FName& VoteSelectionId, int VoteDelta)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated");

	UVoteBroadcasterComponent_ServerSubmitVotesAggregated_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.VoteSelectionId = VoteSelectionId;
	params.VoteDelta = VoteDelta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FUniqueNetIdRepl        UserNetId                      (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteId                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteSelectionId                (ConstParm, Parm, OutParm, ReferenceParm)

void UVoteBroadcasterComponent::OnVoteCasted(const struct FUniqueNetIdRepl& UserNetId, const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted");

	UVoteBroadcasterComponent_OnVoteCasted_Params params;
	params.UserNetId = UserNetId;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.VoteSelectionId = VoteSelectionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteStart
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteId                         (ConstParm, Parm, OutParm, ReferenceParm)
// EVoteState                     VoteState                      (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteStart(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteStart");

	UVoteListenerComponent_OnVoteStart_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.VoteState = VoteState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSetup
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteId                         (ConstParm, Parm, OutParm, ReferenceParm)
// EVoteState                     VoteState                      (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, EVoteState VoteState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteSetup");

	UVoteListenerComponent_OnVoteSetup_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.VoteState = VoteState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StartingVoteId                 (ConstParm, Parm, OutParm, ReferenceParm)
// EVoteSessionState              SessionState                   (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteSessionVoting(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionState SessionState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting");

	UVoteListenerComponent_OnVoteSessionVoting_Params params;
	params.VoteSessionId = VoteSessionId;
	params.StartingVoteId = StartingVoteId;
	params.SessionState = SessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)

void UVoteListenerComponent::OnVoteSessionShutdown(const struct FGameplayTag& VoteSessionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown");

	UVoteListenerComponent_OnVoteSessionShutdown_Params params;
	params.VoteSessionId = VoteSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            StartingVoteId                 (ConstParm, Parm, OutParm, ReferenceParm)
// EVoteSessionNetworkType        NetworkType                    (Parm, ZeroConstructor, IsPlainOldData)
// EVoteSessionState              SessionState                   (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteSessionSetup(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& StartingVoteId, EVoteSessionNetworkType NetworkType, EVoteSessionState SessionState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup");

	UVoteListenerComponent_OnVoteSessionSetup_Params params;
	params.VoteSessionId = VoteSessionId;
	params.StartingVoteId = StartingVoteId;
	params.NetworkType = NetworkType;
	params.SessionState = SessionState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)

void UVoteListenerComponent::OnVoteSessionComplete(const struct FGameplayTag& VoteSessionId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete");

	UVoteListenerComponent_OnVoteSessionComplete_Params params;
	params.VoteSessionId = VoteSessionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteEnd
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteId                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            WinningVoteSelectionId         (ConstParm, Parm, OutParm, ReferenceParm)
// EVoteState                     VoteState                      (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteEnd(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& WinningVoteSelectionId, EVoteState VoteState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteEnd");

	UVoteListenerComponent_OnVoteEnd_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.WinningVoteSelectionId = WinningVoteSelectionId;
	params.VoteState = VoteState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteListenerComponent.OnVoteChange
// (Native, Protected, HasOutParms)
// Parameters:
// struct FGameplayTag            VoteSessionId                  (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteId                         (ConstParm, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            VoteSelectionId                (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ServerVoteTotal                (Parm, ZeroConstructor, IsPlainOldData)
// int                            AllServersVoteTotal            (Parm, ZeroConstructor, IsPlainOldData)

void UVoteListenerComponent::OnVoteChange(const struct FGameplayTag& VoteSessionId, const struct FGameplayTag& VoteId, const struct FGameplayTag& VoteSelectionId, int ServerVoteTotal, int AllServersVoteTotal)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteListenerComponent.OnVoteChange");

	UVoteListenerComponent_OnVoteChange_Params params;
	params.VoteSessionId = VoteSessionId;
	params.VoteId = VoteId;
	params.VoteSelectionId = VoteSelectionId;
	params.ServerVoteTotal = ServerVoteTotal;
	params.AllServersVoteTotal = AllServersVoteTotal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FUniqueNetIdRepl        InUserId                       (ConstParm, Parm, ReferenceParm)
// struct FCastedVote             CastedVote                     (ConstParm, Parm, ReferenceParm)

void UVoteResponderComponent::ServerCastVoteSelection(const struct FUniqueNetIdRepl& InUserId, const struct FCastedVote& CastedVote)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection");

	UVoteResponderComponent_ServerCastVoteSelection_Params params;
	params.InUserId = InUserId;
	params.CastedVote = CastedVote;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectionIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResponderComponent::CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int SelectionIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex");

	UVoteResponderComponent_CastManualVoteSelectionAtIndex_Params params;
	params.InPlayerState = InPlayerState;
	params.SelectionIndex = SelectionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTag            VoteSelection                  (ConstParm, Parm, OutParm, ReferenceParm)

void UVoteResponderComponent::CastManualVoteSelection(class APlayerState* InPlayerState, const struct FGameplayTag& VoteSelection)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteResponderComponent.CastManualVoteSelection");

	UVoteResponderComponent_CastManualVoteSelection_Params params;
	params.InPlayerState = InPlayerState;
	params.VoteSelection = VoteSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerState*            InPlayerState                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UVoteResponderComponent::CastDefaultVoteSelection(class APlayerState* InPlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection");

	UVoteResponderComponent_CastDefaultVoteSelection_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
