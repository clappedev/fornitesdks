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

// Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals
struct UMinimalSquadMember_C_SetEmptyVisuals_Params
{
};

// Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals
struct UMinimalSquadMember_C_SetSitOutVisuals_Params
{
};

// Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals
struct UMinimalSquadMember_C_SetNotReadyVisuals_Params
{
};

// Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals
struct UMinimalSquadMember_C_SetReadyVisuals_Params
{
};

// Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged
struct UMinimalSquadMember_C_OnMemberGameReadinessChanged_Params
{
	EGameReadiness                                     ReadyStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished
struct UMinimalSquadMember_C_BP_OnTeamMemberEstablished_Params
{
	bool                                               bHasValidMember;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember
struct UMinimalSquadMember_C_ExecuteUbergraph_MinimalSquadMember_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
