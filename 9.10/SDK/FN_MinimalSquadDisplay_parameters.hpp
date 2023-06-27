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

// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnLoaded
struct UMinimalSquadDisplay_C_OnLoaded_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadAssigned
struct UMinimalSquadDisplay_C_OnSquadAssigned_Params
{
	struct FAthenaTeamDisplayInfo                      SquadStyle;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function MinimalSquadDisplay.MinimalSquadDisplay_C.OnSquadIsEmptyChanged
struct UMinimalSquadDisplay_C_OnSquadIsEmptyChanged_Params
{
	bool                                               bSquadIsEmpty;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMultipleSquadsPopulated;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MinimalSquadDisplay.MinimalSquadDisplay_C.ExecuteUbergraph_MinimalSquadDisplay
struct UMinimalSquadDisplay_C_ExecuteUbergraph_MinimalSquadDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
