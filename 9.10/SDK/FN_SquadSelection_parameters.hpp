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

// Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged
struct USquadSelection_C_OnLocalPlayerParticipationChanged_Params
{
	bool                                               bIsParticipating;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SquadSelection.SquadSelection_C.BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent
struct USquadSelection_C_BndEvt__Mobile_CloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection
struct USquadSelection_C_ExecuteUbergraph_SquadSelection_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
