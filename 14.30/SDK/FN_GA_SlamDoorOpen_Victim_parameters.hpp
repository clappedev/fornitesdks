#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.K2_ActivateAbilityFromEvent
struct UGA_SlamDoorOpen_Victim_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SlamDoorOpen_Victim.GA_SlamDoorOpen_Victim_C.ExecuteUbergraph_GA_SlamDoorOpen_Victim
struct UGA_SlamDoorOpen_Victim_C_ExecuteUbergraph_GA_SlamDoorOpen_Victim_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
