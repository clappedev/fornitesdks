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

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetShouldUpdateFromOwner
struct ABP_ProjectileTrajectory_ExplosiveBow_C_SetShouldUpdateFromOwner_Params
{
	bool                                               ShouldUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Interval;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.UpdateFromTrajectoryOwner
struct ABP_ProjectileTrajectory_ExplosiveBow_C_UpdateFromTrajectoryOwner_Params
{
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySplineInternal
struct ABP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectorySplineInternal_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_ExplosiveBow_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.Pulse
struct ABP_ProjectileTrajectory_ExplosiveBow_C_Pulse_Params
{
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_ExplosiveBow_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ProjectileTrajectory_ExplosiveBow.BP_ProjectileTrajectory_ExplosiveBow_C.ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow
struct ABP_ProjectileTrajectory_ExplosiveBow_C_ExecuteUbergraph_BP_ProjectileTrajectory_ExplosiveBow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
