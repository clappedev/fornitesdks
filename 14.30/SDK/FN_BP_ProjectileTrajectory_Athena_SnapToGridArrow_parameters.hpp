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

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.HandleGridSnapUpdates
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_HandleGridSnapUpdates_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ProjectileTrajectory_Athena_SnapToGridArrow.BP_ProjectileTrajectory_Athena_SnapToGridArrow_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow
struct ABP_ProjectileTrajectory_Athena_SnapToGridArrow_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapToGridArrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
