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

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_ThrowConsumable_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnTrajectoryIndicator
struct UGA_ThrowConsumable_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryActor
struct UGA_ThrowConsumable_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileTrajectoryPoints
struct UGA_ThrowConsumable_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileAdditionalThrowAngleToUse
struct UGA_ThrowConsumable_C_GetProjectileAdditionalThrowAngleToUse_Params
{
	float                                              AdditionalThrowAngleToUse;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialGravityScaleToUse
struct UGA_ThrowConsumable_C_GetProjectileInitialGravityScaleToUse_Params
{
	float                                              GravityScaleToUse;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetProjectileInitialSpeedToUse
struct UGA_ThrowConsumable_C_GetProjectileInitialSpeedToUse_Params
{
	float                                              ProjectileSpeedToUse;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectory
struct UGA_ThrowConsumable_C_CleanupTrajectory_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PostThrowCleanup
struct UGA_ThrowConsumable_C_PostThrowCleanup_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectorySpline
struct UGA_ThrowConsumable_C_UpdateTrajectorySpline_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SetupDummyProjectile
struct UGA_ThrowConsumable_C_SetupDummyProjectile_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSetup
struct UGA_ThrowConsumable_C_OnProjectileSetup_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawned
struct UGA_ThrowConsumable_C_OnProjectileSpawned_Params
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.SpawnThrownProjectile
struct UGA_ThrowConsumable_C_SpawnThrownProjectile_Params
{
	class AFortProjectileBase*                         ProjectileClass;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ProjectileSpawnLocation;                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ProjectileSpawnDirection;                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FFortGameplayEffectContainerSpec            HitEffectContainerSpec;                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FFortGameplayEffectContainerSpec            ExplosionEffectContainerSpec;                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ProjectileInitialSpeed;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileGravityScale;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetOwningPlayer
struct UGA_ThrowConsumable_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.GetSpawnLocationAndRotation
struct UGA_ThrowConsumable_C_GetSpawnLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.PrethrowSetup
struct UGA_ThrowConsumable_C_PrethrowSetup_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Completed_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_ThrowConsumable_C_Completed_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_ThrowConsumable_C_Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.Triggered_01C5B37D48E3DC6F82DDC58640CE2A27
struct UGA_ThrowConsumable_C_Triggered_01C5B37D48E3DC6F82DDC58640CE2A27_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnFinish_96367E244486362FDDE5ED87D909C17B
struct UGA_ThrowConsumable_C_OnFinish_96367E244486362FDDE5ED87D909C17B_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_ThrowConsumable_C_OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_ThrowConsumable_C_OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_ThrowConsumable_C_OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D
struct UGA_ThrowConsumable_C_OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowProjectile
struct UGA_ThrowConsumable_C_ThrowProjectile_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.AttemptSpawnThrownProjectile
struct UGA_ThrowConsumable_C_AttemptSpawnThrownProjectile_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_OnEndAbility
struct UGA_ThrowConsumable_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.InitTrajectoryVariables
struct UGA_ThrowConsumable_C_InitTrajectoryVariables_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnAbilityInputReleased
struct UGA_ThrowConsumable_C_OnAbilityInputReleased_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.K2_ActivateAbility
struct UGA_ThrowConsumable_C_K2_ActivateAbility_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_ThrowConsumable_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.UpdateTrajectory
struct UGA_ThrowConsumable_C_UpdateTrajectory_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ThrowMontageStarted
struct UGA_ThrowConsumable_C_ThrowMontageStarted_Params
{
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.ExecuteUbergraph_GA_ThrowConsumable
struct UGA_ThrowConsumable_C_ExecuteUbergraph_GA_ThrowConsumable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_ThrowConsumable.GA_ThrowConsumable_C.OnProjectileSpawn__DelegateSignature
struct UGA_ThrowConsumable_C_OnProjectileSpawn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
