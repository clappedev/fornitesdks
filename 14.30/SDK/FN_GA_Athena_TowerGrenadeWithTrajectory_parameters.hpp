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

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Is Trajectory Hidden
struct UGA_Athena_TowerGrenadeWithTrajectory_C_Is_Trajectory_Hidden_Params
{
	bool                                               IsHidden;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SpawnTrajectoryIndicator
struct UGA_Athena_TowerGrenadeWithTrajectory_C_SpawnTrajectoryIndicator_Params
{
	bool                                               bSpawnOnEquip;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortProjectileTrajectory*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SetupDummyProjectileRed
struct UGA_Athena_TowerGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params
{
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.K2_ActivateAbility
struct UGA_Athena_TowerGrenadeWithTrajectory_C_K2_ActivateAbility_Params
{
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
struct UGA_Athena_TowerGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params
{
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Server_SpawnProjectile
struct UGA_Athena_TowerGrenadeWithTrajectory_C_Server_SpawnProjectile_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.UpdateTrajectorySpline
struct UGA_Athena_TowerGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params
{
};

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory
struct UGA_Athena_TowerGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
