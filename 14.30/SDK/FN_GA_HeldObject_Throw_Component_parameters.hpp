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

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_HeldObject_Throw_Component_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnTrajectoryIndicator
struct UGA_HeldObject_Throw_Component_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryActor
struct UGA_HeldObject_Throw_Component_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetProjectileTrajectoryPoints
struct UGA_HeldObject_Throw_Component_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupSplineActors
struct UGA_HeldObject_Throw_Component_C_SetupSplineActors_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_CanActivateAbility
struct UGA_HeldObject_Throw_Component_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayAbilitySpecHandle                  Handle;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Setup Late Trajectory Data
struct UGA_HeldObject_Throw_Component_C_Setup_Late_Trajectory_Data_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.HitValidSocket
struct UGA_HeldObject_Throw_Component_C_HitValidSocket_Params
{
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               CanSocket;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectileSocketed
struct UGA_HeldObject_Throw_Component_C_SetupDummyProjectileSocketed_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectory
struct UGA_HeldObject_Throw_Component_C_CleanupTrajectory_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PostThrowCleanup
struct UGA_HeldObject_Throw_Component_C_PostThrowCleanup_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectorySpline
struct UGA_HeldObject_Throw_Component_C_UpdateTrajectorySpline_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SetupDummyProjectile
struct UGA_HeldObject_Throw_Component_C_SetupDummyProjectile_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectSetup
struct UGA_HeldObject_Throw_Component_C_OnHeldObjectSetup_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnHeldObjectThrown
struct UGA_HeldObject_Throw_Component_C_OnHeldObjectThrown_Params
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.SpawnThrownProjectile
struct UGA_HeldObject_Throw_Component_C_SpawnThrownProjectile_Params
{
	class AFortProjectileBase*                         ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileSpawnLocation;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ProjectileSpawnDirection;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ProjectileInitialSpeed;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetOwningPlayer
struct UGA_HeldObject_Throw_Component_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.GetSpawnLocationAndRotation
struct UGA_HeldObject_Throw_Component_C_GetSpawnLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.PrethrowSetup
struct UGA_HeldObject_Throw_Component_C_PrethrowSetup_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Completed_A44500A44ED1BD047C0A7FB13050E377
struct UGA_HeldObject_Throw_Component_C_Completed_A44500A44ED1BD047C0A7FB13050E377_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Cancelled_A44500A44ED1BD047C0A7FB13050E377
struct UGA_HeldObject_Throw_Component_C_Cancelled_A44500A44ED1BD047C0A7FB13050E377_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Triggered_A44500A44ED1BD047C0A7FB13050E377
struct UGA_HeldObject_Throw_Component_C_Triggered_A44500A44ED1BD047C0A7FB13050E377_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnFinish_CE16214748EB548E38F0A4A5EBFDD545
struct UGA_HeldObject_Throw_Component_C_OnFinish_CE16214748EB548E38F0A4A5EBFDD545_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.Throw
struct UGA_HeldObject_Throw_Component_C_Throw_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.AttemptSpawnThrownProjectile
struct UGA_HeldObject_Throw_Component_C_AttemptSpawnThrownProjectile_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_OnEndAbility
struct UGA_HeldObject_Throw_Component_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.InitTrajectoryVariables
struct UGA_HeldObject_Throw_Component_C_InitTrajectoryVariables_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_HeldObject_Throw_Component_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.UpdateTrajectory
struct UGA_HeldObject_Throw_Component_C_UpdateTrajectory_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.K2_ActivateAbility
struct UGA_HeldObject_Throw_Component_C_K2_ActivateAbility_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.OnAbilityInputReleased
struct UGA_HeldObject_Throw_Component_C_OnAbilityInputReleased_Params
{
};

// Function GA_HeldObject_Throw_Component.GA_HeldObject_Throw_Component_C.ExecuteUbergraph_GA_HeldObject_Throw_Component
struct UGA_HeldObject_Throw_Component_C_ExecuteUbergraph_GA_HeldObject_Throw_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
