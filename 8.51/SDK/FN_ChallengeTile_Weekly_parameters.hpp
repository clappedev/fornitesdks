#pragma once

// Fortnite (8.51) SDK
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

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.SetDynamicColors
struct UChallengeTile_Weekly_C_SetDynamicColors_Params
{
	class UImage*                                      WeeklyDynamicMaterialTarget;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortChallengeSetStyle                      FortChallengeSetStyle;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.OnChallengeSetEstablished
struct UChallengeTile_Weekly_C_OnChallengeSetEstablished_Params
{
	struct FFortChallengeSetStyle                      DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsComplete;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocked;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.BP_OnHovered
struct UChallengeTile_Weekly_C_BP_OnHovered_Params
{
};

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.BP_OnUnhovered
struct UChallengeTile_Weekly_C_BP_OnUnhovered_Params
{
};

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.OnContainsPartyAssistedChallengeChanged
struct UChallengeTile_Weekly_C_OnContainsPartyAssistedChallengeChanged_Params
{
	bool                                               bHasPartyAssistedChallenge;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeTile_Weekly.ChallengeTile_Weekly_C.ExecuteUbergraph_ChallengeTile_Weekly
struct UChallengeTile_Weekly_C_ExecuteUbergraph_ChallengeTile_Weekly_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
