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

// Function ArgonRuntime.ArgonPlayerComponent.PlayFinishedRaceEmote
struct UArgonPlayerComponent_PlayFinishedRaceEmote_Params
{
};

// Function ArgonRuntime.ArgonPlayerComponent.OnRep_RotatePawnToCamera
struct UArgonPlayerComponent_OnRep_RotatePawnToCamera_Params
{
};

// Function ArgonRuntime.ArgonPlayerComponent.OnRep_EntireSquadDiedServerTimeForRespawn
struct UArgonPlayerComponent_OnRep_EntireSquadDiedServerTimeForRespawn_Params
{
};

// Function ArgonRuntime.ArgonPlayerComponent.OnRep_ArgonMutator
struct UArgonPlayerComponent_OnRep_ArgonMutator_Params
{
};

// Function ArgonRuntime.ArgonPlayerComponent.OnRacePhaseChanged
struct UArgonPlayerComponent_OnRacePhaseChanged_Params
{
	EArgonRacePhase                                    NewRacePhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArgonRuntime.ArgonStartingPlatform.OnRep_IsEnabled
struct AArgonStartingPlatform_OnRep_IsEnabled_Params
{
};

// Function ArgonRuntime.ArgonTicketComponent.IsNearToPlayer
struct UArgonTicketComponent_IsNearToPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Hidden_Server_BP
struct AArgonTraversePoint_OnNewState_Hidden_Server_BP_Params
{
};

// Function ArgonRuntime.ArgonTraversePoint.OnNewState_Active_Server_BP
struct AArgonTraversePoint_OnNewState_Active_Server_BP_Params
{
};

// Function ArgonRuntime.ArgonTraversePoint.ClientSpawnMarkerActor
struct AArgonTraversePoint_ClientSpawnMarkerActor_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.SortClientTicketComponents
struct AFortAthenaMutator_Argon_SortClientTicketComponents_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_TeamTicketCounts
struct AFortAthenaMutator_Argon_OnRep_TeamTicketCounts_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_RacingPlayersByPlace
struct AFortAthenaMutator_Argon_OnRep_RacingPlayersByPlace_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_NumSupplyDropClustersSpawned
struct AFortAthenaMutator_Argon_OnRep_NumSupplyDropClustersSpawned_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_EndTraversePoint
struct AFortAthenaMutator_Argon_OnRep_EndTraversePoint_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnRep_CurrentRaceState
struct AFortAthenaMutator_Argon_OnRep_CurrentRaceState_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.OnEndTraversePointTouched
struct AFortAthenaMutator_Argon_OnEndTraversePointTouched_Params
{
	class AAthenaTraversePoint*                        PointActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      TouchingPlayer;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.IsUsingRespawnAndSpectateSelectMutator
struct AFortAthenaMutator_Argon_IsUsingRespawnAndSpectateSelectMutator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.HasTeamFinishedRace
struct AFortAthenaMutator_Argon_HasTeamFinishedRace_Params
{
	unsigned char                                      Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.HasPlayerFinishedRace
struct AFortAthenaMutator_Argon_HasPlayerFinishedRace_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.HandlePlayerTeleportComplete
struct AFortAthenaMutator_Argon_HandlePlayerTeleportComplete_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGroupTeleportComplete
struct AFortAthenaMutator_Argon_HandleGroupTeleportComplete_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.HandleGameStartCountdownEnd
struct AFortAthenaMutator_Argon_HandleGameStartCountdownEnd_Params
{
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetTicketItemDefinition
struct AFortAthenaMutator_Argon_GetTicketItemDefinition_Params
{
	class UFortWorldItemDefinition*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetRandomStartingLineEmotePlayRate
struct AFortAthenaMutator_Argon_GetRandomStartingLineEmotePlayRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetRaceTimeElapsed
struct AFortAthenaMutator_Argon_GetRaceTimeElapsed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetProgressBarUIInfo
struct AFortAthenaMutator_Argon_GetProgressBarUIInfo_Params
{
	float                                              OutMyPercent;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      OutSquadmatePcts;                                         // (Parm, OutParm, ZeroConstructor)
	unsigned char                                      OutNumSquadTickets;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FArgonTeamProgressBarInfo>           OutEnemyProgressInfos;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetPlayerTeamPlacement
struct AFortAthenaMutator_Argon_GetPlayerTeamPlacement_Params
{
	class AFortPlayerStateAthena*                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsTeamHasAcquired
struct AFortAthenaMutator_Argon_GetNumberOfTicketsTeamHasAcquired_Params
{
	unsigned char                                      Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetNumberOfTicketsNeededToFinishRace
struct AFortAthenaMutator_Argon_GetNumberOfTicketsNeededToFinishRace_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.GetEndTraversePoint
struct AFortAthenaMutator_Argon_GetEndTraversePoint_Params
{
	class AArgonTraversePoint*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortAthenaMutator_Argon.DidPlayerCrossFinishLine
struct AFortAthenaMutator_Argon_DidPlayerCrossFinishLine_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ArgonRuntime.FortCheatManager_Argon.ArgonTeleportToEndPoint
struct UFortCheatManager_Argon_ArgonTeleportToEndPoint_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
