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

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetBalanceValues
struct UGA_Athena_EnvCampFire_C_SetBalanceValues_Params
{
	bool                                               Stoke;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetCustomTargetingTrans
struct UGA_Athena_EnvCampFire_C_SetCustomTargetingTrans_Params
{
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.GetCustomAbilitySourceTransform
struct UGA_Athena_EnvCampFire_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Cancelled_EDAB937443020D47385625B06E892DF0
struct UGA_Athena_EnvCampFire_C_Cancelled_EDAB937443020D47385625B06E892DF0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.Targeted_EDAB937443020D47385625B06E892DF0
struct UGA_Athena_EnvCampFire_C_Targeted_EDAB937443020D47385625B06E892DF0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4
struct UGA_Athena_EnvCampFire_C_EventReceived_63E2BB3E47E5E63C7A4A0A8C45DC23E4_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_OnEndAbility
struct UGA_Athena_EnvCampFire_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ApplyHeal
struct UGA_Athena_EnvCampFire_C_ApplyHeal_Params
{
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.K2_ActivateAbilityFromEvent
struct UGA_Athena_EnvCampFire_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.FinishStoke
struct UGA_Athena_EnvCampFire_C_FinishStoke_Params
{
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.SetIsStoked
struct UGA_Athena_EnvCampFire_C_SetIsStoked_Params
{
	bool                                               IsStoked;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.EndEvent
struct UGA_Athena_EnvCampFire_C_EndEvent_Params
{
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ForceEndAbility
struct UGA_Athena_EnvCampFire_C_ForceEndAbility_Params
{
};

// Function GA_Athena_EnvCampFire.GA_Athena_EnvCampFire_C.ExecuteUbergraph_GA_Athena_EnvCampFire
struct UGA_Athena_EnvCampFire_C_ExecuteUbergraph_GA_Athena_EnvCampFire_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
