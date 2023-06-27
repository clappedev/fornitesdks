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

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_CanActivateAbility
struct UGA_Athena_HidingProp_JumpOut_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.K2_ActivateAbility
struct UGA_Athena_HidingProp_JumpOut_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C.ExecuteUbergraph_GA_Athena_HidingProp_JumpOut
struct UGA_Athena_HidingProp_JumpOut_C_ExecuteUbergraph_GA_Athena_HidingProp_JumpOut_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
