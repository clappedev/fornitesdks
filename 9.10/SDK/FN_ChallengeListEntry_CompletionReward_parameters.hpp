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

// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnRewardInfoSet
struct UChallengeListEntry_CompletionReward_C_OnRewardInfoSet_Params
{
	bool                                               bIsCompleted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortChallengeSetStyle                      DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseEnter
struct UChallengeListEntry_CompletionReward_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.OnMouseLeave
struct UChallengeListEntry_CompletionReward_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeListEntry_CompletionReward.ChallengeListEntry_CompletionReward_C.ExecuteUbergraph_ChallengeListEntry_CompletionReward
struct UChallengeListEntry_CompletionReward_C_ExecuteUbergraph_ChallengeListEntry_CompletionReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
