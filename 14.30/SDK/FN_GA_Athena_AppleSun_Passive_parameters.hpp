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

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.HasEnoughStacks
struct UGA_Athena_AppleSun_Passive_C_HasEnoughStacks_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.EventReceived_88451BF04FEA60EEE79926856BA05A42
struct UGA_Athena_AppleSun_Passive_C_EventReceived_88451BF04FEA60EEE79926856BA05A42_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_E2E08D9245B8C2437B278CACDF6A674C
struct UGA_Athena_AppleSun_Passive_C_Completed_E2E08D9245B8C2437B278CACDF6A674C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_E2E08D9245B8C2437B278CACDF6A674C
struct UGA_Athena_AppleSun_Passive_C_Cancelled_E2E08D9245B8C2437B278CACDF6A674C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_E2E08D9245B8C2437B278CACDF6A674C
struct UGA_Athena_AppleSun_Passive_C_Triggered_E2E08D9245B8C2437B278CACDF6A674C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Completed_6CF7877A4087E6390DA1828899D54EFB
struct UGA_Athena_AppleSun_Passive_C_Completed_6CF7877A4087E6390DA1828899D54EFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Cancelled_6CF7877A4087E6390DA1828899D54EFB
struct UGA_Athena_AppleSun_Passive_C_Cancelled_6CF7877A4087E6390DA1828899D54EFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Triggered_6CF7877A4087E6390DA1828899D54EFB
struct UGA_Athena_AppleSun_Passive_C_Triggered_6CF7877A4087E6390DA1828899D54EFB_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_ActivateAbility
struct UGA_Athena_AppleSun_Passive_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.K2_OnEndAbility
struct UGA_Athena_AppleSun_Passive_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.SpawnProjectile
struct UGA_Athena_AppleSun_Passive_C_SpawnProjectile_Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateCanCrashpad
struct UGA_Athena_AppleSun_Passive_C_UpdateCanCrashpad_Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.UpdateIsCloseToGround
struct UGA_Athena_AppleSun_Passive_C_UpdateIsCloseToGround_Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Throw_Server
struct UGA_Athena_AppleSun_Passive_C_Throw_Server_Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.Remove Item From Inventory?
struct UGA_Athena_AppleSun_Passive_C_Remove_Item_From_Inventory__Params
{
};

// Function GA_Athena_AppleSun_Passive.GA_Athena_AppleSun_Passive_C.ExecuteUbergraph_GA_Athena_AppleSun_Passive
struct UGA_Athena_AppleSun_Passive_C_ExecuteUbergraph_GA_Athena_AppleSun_Passive_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
