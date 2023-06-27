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

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.OnMontageTriggered
struct UGA_Athena_JellyFish_AOE_Heal_C_OnMontageTriggered_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.MakeCustomMontageInfo
struct UGA_Athena_JellyFish_AOE_Heal_C_MakeCustomMontageInfo_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.SetupGE
struct UGA_Athena_JellyFish_AOE_Heal_C_SetupGE_Params
{
	struct FGameplayEffectSpecHandle                   Effect_Out;                                               // (Parm, OutParm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.HealthCalc
struct UGA_Athena_JellyFish_AOE_Heal_C_HealthCalc_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ShieldCalc
struct UGA_Athena_JellyFish_AOE_Heal_C_ShieldCalc_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CanActivateAbility
struct UGA_Athena_JellyFish_AOE_Heal_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Completed_39BB44CE4B5ACBFAF09C9C960F1A3644
struct UGA_Athena_JellyFish_AOE_Heal_C_Completed_39BB44CE4B5ACBFAF09C9C960F1A3644_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644
struct UGA_Athena_JellyFish_AOE_Heal_C_Cancelled_39BB44CE4B5ACBFAF09C9C960F1A3644_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644
struct UGA_Athena_JellyFish_AOE_Heal_C_Triggered_39BB44CE4B5ACBFAF09C9C960F1A3644_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C
struct UGA_Athena_JellyFish_AOE_Heal_C_Cancelled_D9F6D24A49ABE8D7AAC30785C1A8DF0C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C
struct UGA_Athena_JellyFish_AOE_Heal_C_Targeted_D9F6D24A49ABE8D7AAC30785C1A8DF0C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_ActivateAbility
struct UGA_Athena_JellyFish_AOE_Heal_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_OnEndAbility
struct UGA_Athena_JellyFish_AOE_Heal_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.K2_CommitExecute
struct UGA_Athena_JellyFish_AOE_Heal_C_K2_CommitExecute_Params
{
};

// Function GA_Athena_JellyFish_AOE_Heal.GA_Athena_JellyFish_AOE_Heal_C.ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal
struct UGA_Athena_JellyFish_AOE_Heal_C_ExecuteUbergraph_GA_Athena_JellyFish_AOE_Heal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
