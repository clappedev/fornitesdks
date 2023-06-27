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

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath
struct UTournamentPayoutThresholdEntry_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath
struct UTournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet
struct UTournamentPayoutThresholdEntry_C_OnPayoutDataSet_Params
{
	int                                                EntryIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry
struct UTournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
