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

// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.SetVariablesFromRows
struct UGA_LowGravity_Jump_UsingJump_C_SetVariablesFromRows_Params
{
};

// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ShouldAbilityRespondToEvent
struct UGA_LowGravity_Jump_UsingJump_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.K2_ActivateAbilityFromEvent
struct UGA_LowGravity_Jump_UsingJump_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_LowGravity_Jump_UsingJump.GA_LowGravity_Jump_UsingJump_C.ExecuteUbergraph_GA_LowGravity_Jump_UsingJump
struct UGA_LowGravity_Jump_UsingJump_C_ExecuteUbergraph_GA_LowGravity_Jump_UsingJump_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
