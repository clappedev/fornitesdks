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

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Throw_HeldObject_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnTrajectoryIndicator
struct UGA_Throw_HeldObject_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryActor
struct UGA_Throw_HeldObject_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetProjectileTrajectoryPoints
struct UGA_Throw_HeldObject_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.HitValidSocket
struct UGA_Throw_HeldObject_C_HitValidSocket_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CanSocket;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectileSocketed
struct UGA_Throw_HeldObject_C_SetupDummyProjectileSocketed_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectory
struct UGA_Throw_HeldObject_C_CleanupTrajectory_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PostThrowCleanup
struct UGA_Throw_HeldObject_C_PostThrowCleanup_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectorySpline
struct UGA_Throw_HeldObject_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SetupDummyProjectile
struct UGA_Throw_HeldObject_C_SetupDummyProjectile_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectSetup
struct UGA_Throw_HeldObject_C_OnHeldObjectSetup_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnHeldObjectThrown
struct UGA_Throw_HeldObject_C_OnHeldObjectThrown_Params
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.SpawnThrownProjectile
struct UGA_Throw_HeldObject_C_SpawnThrownProjectile_Params
{
	class AFortProjectileBase*                         ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileSpawnLocation;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ProjectileSpawnDirection;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ProjectileInitialSpeed;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetOwningPlayer
struct UGA_Throw_HeldObject_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.GetSpawnLocationAndRotation
struct UGA_Throw_HeldObject_C_GetSpawnLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.PrethrowSetup
struct UGA_Throw_HeldObject_C_PrethrowSetup_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Completed_9DD11B80484829AF1E8DC5ACFC965E7A
struct UGA_Throw_HeldObject_C_Completed_9DD11B80484829AF1E8DC5ACFC965E7A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A
struct UGA_Throw_HeldObject_C_Cancelled_9DD11B80484829AF1E8DC5ACFC965E7A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.Triggered_9DD11B80484829AF1E8DC5ACFC965E7A
struct UGA_Throw_HeldObject_C_Triggered_9DD11B80484829AF1E8DC5ACFC965E7A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnFinish_5115EDCE4339523BE389D09CA4A2AECC
struct UGA_Throw_HeldObject_C_OnFinish_5115EDCE4339523BE389D09CA4A2AECC_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.AttemptSpawnThrownProjectile
struct UGA_Throw_HeldObject_C_AttemptSpawnThrownProjectile_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_OnEndAbility
struct UGA_Throw_HeldObject_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ThrowProjectile
struct UGA_Throw_HeldObject_C_ThrowProjectile_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.InitTrajectoryVariables
struct UGA_Throw_HeldObject_C_InitTrajectoryVariables_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Throw_HeldObject_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.UpdateTrajectory
struct UGA_Throw_HeldObject_C_UpdateTrajectory_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.K2_ActivateAbility
struct UGA_Throw_HeldObject_C_K2_ActivateAbility_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.OnAbilityInputReleased
struct UGA_Throw_HeldObject_C_OnAbilityInputReleased_Params
{
};

// Function GA_Throw_HeldObject.GA_Throw_HeldObject_C.ExecuteUbergraph_GA_Throw_HeldObject
struct UGA_Throw_HeldObject_C_ExecuteUbergraph_GA_Throw_HeldObject_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
