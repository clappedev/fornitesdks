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

// Function ArgonRuntime.ArgonPlayerComponent.PlayFinishedRaceEmote
// (Final, Native, Public)

void UArgonPlayerComponent::PlayFinishedRaceEmote()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonPlayerComponent.PlayFinishedRaceEmote");

	UArgonPlayerComponent_PlayFinishedRaceEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_RotatePawnToCamera
// (Final, Native, Protected)

void UArgonPlayerComponent::OnRep_RotatePawnToCamera()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonPlayerComponent.OnRep_RotatePawnToCamera");

	UArgonPlayerComponent_OnRep_RotatePawnToCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_EntireSquadDiedServerTimeForRespawn
// (Final, Native, Public)

void UArgonPlayerComponent::OnRep_EntireSquadDiedServerTimeForRespawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonPlayerComponent.OnRep_EntireSquadDiedServerTimeForRespawn");

	UArgonPlayerComponent_OnRep_EntireSquadDiedServerTimeForRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonPlayerComponent.OnRep_ArgonMutator
// (Final, Native, Protected)

void UArgonPlayerComponent::OnRep_ArgonMutator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonPlayerComponent.OnRep_ArgonMutator");

	UArgonPlayerComponent_OnRep_ArgonMutator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged
// (Final, Native, Protected)
// Parameters:
// EArgonRacePhase                NewRacePhase                   (Parm, ZeroConstructor, IsPlainOldData)

void UArgonPlayerComponent::OnRacePhaseChanged(EArgonRacePhase NewRacePhase)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged");

	UArgonPlayerComponent_OnRacePhaseChanged_Params params;
	params.NewRacePhase = NewRacePhase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonStartingPlatform.OnRep_IsEnabled
// (Final, Native, Protected)

void AArgonStartingPlatform::OnRep_IsEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonStartingPlatform.OnRep_IsEnabled");

	AArgonStartingPlatform_OnRep_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UArgonTicketComponent::IsNearToPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer");

	UArgonTicketComponent_IsNearToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Hidden_Server_BP
// (Event, Protected, BlueprintEvent)

void AArgonTraversePoint::OnNewState_Hidden_Server_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonTraversePoint.OnNewState_Hidden_Server_BP");

	AArgonTraversePoint_OnNewState_Hidden_Server_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Active_Server_BP
// (Event, Protected, BlueprintEvent)

void AArgonTraversePoint::OnNewState_Active_Server_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonTraversePoint.OnNewState_Active_Server_BP");

	AArgonTraversePoint_OnNewState_Active_Server_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              Transform                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AArgonTraversePoint::ClientSpawnMarkerActor(const struct FTransform& Transform)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor");

	AArgonTraversePoint_ClientSpawnMarkerActor_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.SortClientTicketComponents
// (Final, Native, Private)

void AFortAthenaMutator_Argon::SortClientTicketComponents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.SortClientTicketComponents");

	AFortAthenaMutator_Argon_SortClientTicketComponents_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_TeamTicketCounts
// (Final, Native, Private)

void AFortAthenaMutator_Argon::OnRep_TeamTicketCounts()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_TeamTicketCounts");

	AFortAthenaMutator_Argon_OnRep_TeamTicketCounts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_RacingPlayersByPlace
// (Final, Native, Private)

void AFortAthenaMutator_Argon::OnRep_RacingPlayersByPlace()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_RacingPlayersByPlace");

	AFortAthenaMutator_Argon_OnRep_RacingPlayersByPlace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_NumSupplyDropClustersSpawned
// (Final, Native, Private)

void AFortAthenaMutator_Argon::OnRep_NumSupplyDropClustersSpawned()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_NumSupplyDropClustersSpawned");

	AFortAthenaMutator_Argon_OnRep_NumSupplyDropClustersSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_EndTraversePoint
// (Final, Native, Private)

void AFortAthenaMutator_Argon::OnRep_EndTraversePoint()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_EndTraversePoint");

	AFortAthenaMutator_Argon_OnRep_EndTraversePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_CurrentRaceState
// (Final, Native, Private)

void AFortAthenaMutator_Argon::OnRep_CurrentRaceState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_CurrentRaceState");

	AFortAthenaMutator_Argon_OnRep_CurrentRaceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched
// (Final, Native, Private)
// Parameters:
// class AAthenaTraversePoint*    PointActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerStateAthena*  TouchingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Argon::OnEndTraversePointTouched(class AAthenaTraversePoint* PointActor, class AFortPlayerStateAthena* TouchingPlayer)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched");

	AFortAthenaMutator_Argon_OnEndTraversePointTouched_Params params;
	params.PointActor = PointActor;
	params.TouchingPlayer = TouchingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Argon::IsUsingRespawnAndSpectateSelectMutator()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator");

	AFortAthenaMutator_Argon_IsUsingRespawnAndSpectateSelectMutator_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Argon::HasTeamFinishedRace(unsigned char Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace");

	AFortAthenaMutator_Argon_HasTeamFinishedRace_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Argon::HasPlayerFinishedRace(class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace");

	AFortAthenaMutator_Argon_HasPlayerFinishedRace_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete
// (Final, Native, Private)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void AFortAthenaMutator_Argon::HandlePlayerTeleportComplete(class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete");

	AFortAthenaMutator_Argon_HandlePlayerTeleportComplete_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGroupTeleportComplete
// (Final, Native, Private)

void AFortAthenaMutator_Argon::HandleGroupTeleportComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.HandleGroupTeleportComplete");

	AFortAthenaMutator_Argon_HandleGroupTeleportComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGameStartCountdownEnd
// (Final, Native, Private)

void AFortAthenaMutator_Argon::HandleGameStartCountdownEnd()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.HandleGameStartCountdownEnd");

	AFortAthenaMutator_Argon_HandleGameStartCountdownEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortWorldItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortWorldItemDefinition* AFortAthenaMutator_Argon::GetTicketItemDefinition()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition");

	AFortAthenaMutator_Argon_GetTicketItemDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortAthenaMutator_Argon::GetRandomStartingLineEmotePlayRate()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate");

	AFortAthenaMutator_Argon_GetRandomStartingLineEmotePlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFortAthenaMutator_Argon::GetRaceTimeElapsed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed");

	AFortAthenaMutator_Argon_GetRaceTimeElapsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          OutMyPercent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<float>                  OutSquadmatePcts               (Parm, OutParm, ZeroConstructor)
// unsigned char                  OutNumSquadTickets             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FArgonTeamProgressBarInfo> OutEnemyProgressInfos          (Parm, OutParm, ZeroConstructor)

void AFortAthenaMutator_Argon::GetProgressBarUIInfo(float* OutMyPercent, TArray<float>* OutSquadmatePcts, unsigned char* OutNumSquadTickets, TArray<struct FArgonTeamProgressBarInfo>* OutEnemyProgressInfos)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo");

	AFortAthenaMutator_Argon_GetProgressBarUIInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMyPercent != nullptr)
		*OutMyPercent = params.OutMyPercent;
	if (OutSquadmatePcts != nullptr)
		*OutSquadmatePcts = params.OutSquadmatePcts;
	if (OutNumSquadTickets != nullptr)
		*OutNumSquadTickets = params.OutNumSquadTickets;
	if (OutEnemyProgressInfos != nullptr)
		*OutEnemyProgressInfos = params.OutEnemyProgressInfos;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*  Player                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AFortAthenaMutator_Argon::GetPlayerTeamPlacement(class AFortPlayerStateAthena* Player)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement");

	AFortAthenaMutator_Argon_GetPlayerTeamPlacement_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AFortAthenaMutator_Argon::GetNumberOfTicketsTeamHasAcquired(unsigned char Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired");

	AFortAthenaMutator_Argon_GetNumberOfTicketsTeamHasAcquired_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AFortAthenaMutator_Argon::GetNumberOfTicketsNeededToFinishRace()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace");

	AFortAthenaMutator_Argon_GetNumberOfTicketsNeededToFinishRace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AArgonTraversePoint*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArgonTraversePoint* AFortAthenaMutator_Argon::GetEndTraversePoint()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint");

	AFortAthenaMutator_Argon_GetEndTraversePoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortPlayerStateAthena*  PlayerState                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFortAthenaMutator_Argon::DidPlayerCrossFinishLine(class AFortPlayerStateAthena* PlayerState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine");

	AFortAthenaMutator_Argon_DidPlayerCrossFinishLine_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonRuntime.FortCheatManager_Argon.ArgonTeleportToEndPoint
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)

void UFortCheatManager_Argon::ArgonTeleportToEndPoint()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonRuntime.FortCheatManager_Argon.ArgonTeleportToEndPoint");

	UFortCheatManager_Argon_ArgonTeleportToEndPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
