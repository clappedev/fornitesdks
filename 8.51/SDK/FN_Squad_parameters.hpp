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

// Function Squad.Squad_C.OnLoaded
struct USquad_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Squad.Squad_C.OnSquadAssigned
struct USquad_C_OnSquadAssigned_Params
{
	struct FAthenaTeamDisplayInfo                      SquadStyle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Squad.Squad_C.OnSquadIsEmptyChanged
struct USquad_C_OnSquadIsEmptyChanged_Params
{
	bool                                               bSquadIsEmpty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Squad.Squad_C.ExecuteUbergraph_Squad
struct USquad_C_ExecuteUbergraph_Squad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
