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

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.GetPlaysetFromController
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_GetPlaysetFromController_Params
{
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UpdateScaleForPlayset
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UpdateScaleForPlayset_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.HandleGridSnapUpdates
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_HandleGridSnapUpdates_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.UserConstructionScript
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_UserConstructionScript_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ReceiveActorBeginOverlap
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ProjectileTrajectory_Athena_SnapBoxToGrid.BP_ProjectileTrajectory_Athena_SnapBoxToGrid_C.ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid
struct ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C_ExecuteUbergraph_BP_ProjectileTrajectory_Athena_SnapBoxToGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
