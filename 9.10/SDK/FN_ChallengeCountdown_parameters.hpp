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

// Function ChallengeCountdown.ChallengeCountdown_C.PreConstruct
struct UChallengeCountdown_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeCountdown.ChallengeCountdown_C.Construct
struct UChallengeCountdown_C_Construct_Params
{
};

// Function ChallengeCountdown.ChallengeCountdown_C.OnChallengeSet
struct UChallengeCountdown_C_OnChallengeSet_Params
{
	struct FTimerDisplayData                           DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeCountdown.ChallengeCountdown_C.ExecuteUbergraph_ChallengeCountdown
struct UChallengeCountdown_C_ExecuteUbergraph_ChallengeCountdown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
