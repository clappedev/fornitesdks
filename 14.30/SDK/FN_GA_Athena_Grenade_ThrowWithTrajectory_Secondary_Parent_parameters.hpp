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

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ShouldOnlyShowTrajectoryOnUse
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ShouldOnlyShowTrajectoryOnUse_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnTrajectoryIndicator
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryActor
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileTrajectoryActor_Params
{
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileTrajectoryPoints
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileTrajectoryPoints_Params
{
	TArray<struct FVector>                             OutSplinePoints;                                          // (Parm, OutParm)
	TArray<struct FVector>                             OutSplineTangents;                                        // (Parm, OutParm)
	struct FHitResult                                  OutHitResult;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialGravityScaleToUse
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileInitialGravityScaleToUse_Params
{
	float                                              GravityScaleToUse;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetProjectileInitialSpeedToUse
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetProjectileInitialSpeedToUse_Params
{
	float                                              ProjectileSpeedToUse;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectory
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_CleanupTrajectory_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PostThrowCleanup
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_PostThrowCleanup_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectorySpline
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SetupDummyProjectile
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SetupDummyProjectile_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSetup
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSetup_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawned
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSpawned_Params
{
	class AFortProjectileBase*                         SpawnedProjectile;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.SpawnThrownProjectile
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_SpawnThrownProjectile_Params
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

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetOwningPlayer
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetOwningPlayer_Params
{
	class AFortPlayerPawn*                             Player_Pawn;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.GetSpawnLocationAndRotation
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_GetSpawnLocationAndRotation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.PrethrowSetup
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_PrethrowSetup_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Completed_7CDE11F247AD13935CDDCCA29666AC3E
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Completed_7CDE11F247AD13935CDDCCA29666AC3E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Cancelled_7CDE11F247AD13935CDDCCA29666AC3E
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Cancelled_7CDE11F247AD13935CDDCCA29666AC3E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.Triggered_7CDE11F247AD13935CDDCCA29666AC3E
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_Triggered_7CDE11F247AD13935CDDCCA29666AC3E_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnFinish_79D5F1274D4E02F76A06EEAFF19FADF3_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnCancelled_2A7663C74EF65992AD4E1F86CA08C8B1_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnInterrupted_2A7663C74EF65992AD4E1F86CA08C8B1_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnBlendOut_2A7663C74EF65992AD4E1F86CA08C8B1_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnCompleted_2A7663C74EF65992AD4E1F86CA08C8B1_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_EventReceived_11F8FEDB4634DE47482E1B962FB8A5E6_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnSync_65BB2FE343979EBE180BC6A76D8BF92F
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnSync_65BB2FE343979EBE180BC6A76D8BF92F_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowProjectile
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ThrowProjectile_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.AttemptSpawnThrownProjectile
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_AttemptSpawnThrownProjectile_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_OnEndAbility
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_K2_OnEndAbility_Params
{
	bool                                               bWasCancelled;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.InitTrajectoryVariables
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_InitTrajectoryVariables_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnAbilityInputReleased
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.K2_ActivateAbility
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.CleanupTrajectoryIndicatorOnUnequip
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_CleanupTrajectoryIndicatorOnUnequip_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.UpdateTrajectory
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_UpdateTrajectory_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ThrowMontageStarted
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ThrowMontageStarted_Params
{
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_ExecuteUbergraph_GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent.GA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C.OnProjectileSpawn__DelegateSignature
struct UGA_Athena_Grenade_ThrowWithTrajectory_Secondary_Parent_C_OnProjectileSpawn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
