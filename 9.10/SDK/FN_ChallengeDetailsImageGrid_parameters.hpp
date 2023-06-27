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

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnLockedToOwnedTransitions
struct UChallengeDetailsImageGrid_C_OnLockedToOwnedTransitions_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Tick
struct UChallengeDetailsImageGrid_C_Rollout_Tick_Params
{
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Start Rollout Tick
struct UChallengeDetailsImageGrid_C_Start_Rollout_Tick_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Stop Rollout Tick
struct UChallengeDetailsImageGrid_C_Stop_Rollout_Tick_Params
{
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnFocusLost
struct UChallengeDetailsImageGrid_C_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnRemovedFromFocusPath
struct UChallengeDetailsImageGrid_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnOwnedToCompleteTransitions
struct UChallengeDetailsImageGrid_C_OnOwnedToCompleteTransitions_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AdditionalTime;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Sound Failsafe
struct UChallengeDetailsImageGrid_C_Rollout_Sound_Failsafe_Params
{
};

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.ExecuteUbergraph_ChallengeDetailsImageGrid
struct UChallengeDetailsImageGrid_C_ExecuteUbergraph_ChallengeDetailsImageGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
