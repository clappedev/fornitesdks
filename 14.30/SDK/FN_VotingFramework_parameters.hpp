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

// Function VotingFramework.VoteBroadcasterComponent.VoteStart
struct UVoteBroadcasterComponent_VoteStart_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoteId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
struct UVoteBroadcasterComponent_VoteSetup_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoteId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
struct UVoteBroadcasterComponent_VoteSessionShutdown_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
struct UVoteBroadcasterComponent_VoteSessionSetup_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingVoteId;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EVoteSessionNetworkType                            NetworkType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
struct UVoteBroadcasterComponent_VoteSessionComplete_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
struct UVoteBroadcasterComponent_VoteEnd_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoteId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       WinningVoteSelectionId;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
struct UVoteBroadcasterComponent_ServerSubmitVotesAggregated_Params
{
	struct FName                                       VoteSessionId;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoteId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       VoteSelectionId;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                VoteDelta;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted
struct UVoteBroadcasterComponent_OnVoteCasted_Params
{
	struct FUniqueNetIdRepl                            UserNetId;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteSelectionId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VotingFramework.VoteListenerComponent.OnVoteStart
struct UVoteListenerComponent_OnVoteStart_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EVoteState                                         VoteState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteListenerComponent.OnVoteSetup
struct UVoteListenerComponent_OnVoteSetup_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EVoteState                                         VoteState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting
struct UVoteListenerComponent_OnVoteSessionVoting_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StartingVoteId;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	EVoteSessionState                                  SessionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
struct UVoteListenerComponent_OnVoteSessionShutdown_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup
struct UVoteListenerComponent_OnVoteSessionSetup_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StartingVoteId;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	EVoteSessionNetworkType                            NetworkType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EVoteSessionState                                  SessionState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete
struct UVoteListenerComponent_OnVoteSessionComplete_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VotingFramework.VoteListenerComponent.OnVoteEnd
struct UVoteListenerComponent_OnVoteEnd_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                WinningVoteSelectionId;                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	EVoteState                                         VoteState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteListenerComponent.OnVoteChange
struct UVoteListenerComponent_OnVoteChange_Params
{
	struct FGameplayTag                                VoteSessionId;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteId;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                VoteSelectionId;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ServerVoteTotal;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AllServersVoteTotal;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
struct UVoteResponderComponent_ServerCastVoteSelection_Params
{
	struct FUniqueNetIdRepl                            InUserId;                                                 // (ConstParm, Parm, ReferenceParm)
	struct FCastedVote                                 CastedVote;                                               // (ConstParm, Parm, ReferenceParm)
};

// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
struct UVoteResponderComponent_CastManualVoteSelectionAtIndex_Params
{
	class APlayerState*                                InPlayerState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectionIndex;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
struct UVoteResponderComponent_CastManualVoteSelection_Params
{
	class APlayerState*                                InPlayerState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                VoteSelection;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
struct UVoteResponderComponent_CastDefaultVoteSelection_Params
{
	class APlayerState*                                InPlayerState;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
