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

// Function TournamentModal.TournamentModal_C.OnActivated
struct UTournamentModal_C_OnActivated_Params
{
};

// Function TournamentModal.TournamentModal_C.OnTournamentSet
struct UTournamentModal_C_OnTournamentSet_Params
{
	struct FLinearColor                                LeftColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RightColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal
struct UTournamentModal_C_ExecuteUbergraph_TournamentModal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
