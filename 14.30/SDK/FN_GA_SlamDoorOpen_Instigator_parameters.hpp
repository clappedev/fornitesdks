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

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Completed_6B6649DA4284DCE7779BA98D6543CFFB
struct UGA_SlamDoorOpen_Instigator_C_Completed_6B6649DA4284DCE7779BA98D6543CFFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Cancelled_6B6649DA4284DCE7779BA98D6543CFFB
struct UGA_SlamDoorOpen_Instigator_C_Cancelled_6B6649DA4284DCE7779BA98D6543CFFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.Triggered_6B6649DA4284DCE7779BA98D6543CFFB
struct UGA_SlamDoorOpen_Instigator_C_Triggered_6B6649DA4284DCE7779BA98D6543CFFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.K2_ActivateAbilityFromEvent
struct UGA_SlamDoorOpen_Instigator_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_SlamDoorOpen_Instigator.GA_SlamDoorOpen_Instigator_C.ExecuteUbergraph_GA_SlamDoorOpen_Instigator
struct UGA_SlamDoorOpen_Instigator_C_ExecuteUbergraph_GA_SlamDoorOpen_Instigator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
