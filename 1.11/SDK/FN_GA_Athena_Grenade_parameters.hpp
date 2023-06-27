#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ThrowAthenaGrenade
struct UGA_Athena_Grenade_C_ThrowAthenaGrenade_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Completed_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Completed_6845367B4931B42A6C8BF6A6664F2203_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Cancelled_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Cancelled_6845367B4931B42A6C8BF6A6664F2203_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Triggered_6845367B4931B42A6C8BF6A6664F2203
struct UGA_Athena_Grenade_C_Triggered_6845367B4931B42A6C8BF6A6664F2203_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Destroyed_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Destroyed_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Exploded_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Exploded_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Stopped_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Stopped_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Bounced_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Bounced_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Touched_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Touched_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.Created_9688DEB14FA370B967517191C2B710DA
struct UGA_Athena_Grenade_C_Created_9688DEB14FA370B967517191C2B710DA_Params
{
	struct FProjectileEventData                        ProjectileData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.K2_ActivateAbility
struct UGA_Athena_Grenade_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Grenade.GA_Athena_Grenade_C.ExecuteUbergraph_GA_Athena_Grenade
struct UGA_Athena_Grenade_C_ExecuteUbergraph_GA_Athena_Grenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
