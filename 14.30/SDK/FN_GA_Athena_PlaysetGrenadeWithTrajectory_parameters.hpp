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

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.DestroyProjectileTrajectory
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_DestroyProjectileTrajectory_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CalculateRotation
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_CalculateRotation_Params
{
	class UFortPlaysetItemDefinition*                  Playset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetActivePlaysetOnPlayer_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetPlaysetData_Params
{
	class AFortProjectileBase*                         Projectile_Reference;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData_Params
{
	class UFortPlaysetItemDefinition*                  OutData;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetupDummyProjectileRed
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.InitTrajectoryVariables
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_InitTrajectoryVariables_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.AthenaProjectileSpawned
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_AthenaProjectileSpawned_Params
{
	class AFortProjectileBase*                         ProjectileReference;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.OnAbilityInputReleased
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_OnAbilityInputReleased_Params
{
};

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
