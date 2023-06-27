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

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.OnMontageTriggered
struct UGA_Athena_MedConsumable_Parent_C_OnMontageTriggered_Params
{
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.MakeCustomMontageInfo
struct UGA_Athena_MedConsumable_Parent_C_MakeCustomMontageInfo_Params
{
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.SetupGE
struct UGA_Athena_MedConsumable_Parent_C_SetupGE_Params
{
	struct FGameplayEffectSpecHandle                   Effect_Out;                                               // (Parm, OutParm)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.HealthCalc
struct UGA_Athena_MedConsumable_Parent_C_HealthCalc_Params
{
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ShieldCalc
struct UGA_Athena_MedConsumable_Parent_C_ShieldCalc_Params
{
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_CanActivateAbility
struct UGA_Athena_MedConsumable_Parent_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Completed_4C02BFB04B18D9E79F84848FFE6D2C32
struct UGA_Athena_MedConsumable_Parent_C_Completed_4C02BFB04B18D9E79F84848FFE6D2C32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32
struct UGA_Athena_MedConsumable_Parent_C_Cancelled_4C02BFB04B18D9E79F84848FFE6D2C32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.Triggered_4C02BFB04B18D9E79F84848FFE6D2C32
struct UGA_Athena_MedConsumable_Parent_C_Triggered_4C02BFB04B18D9E79F84848FFE6D2C32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_ActivateAbility
struct UGA_Athena_MedConsumable_Parent_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.K2_OnEndAbility
struct UGA_Athena_MedConsumable_Parent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_MedConsumable_Parent.GA_Athena_MedConsumable_Parent_C.ExecuteUbergraph_GA_Athena_MedConsumable_Parent
struct UGA_Athena_MedConsumable_Parent_C_ExecuteUbergraph_GA_Athena_MedConsumable_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
