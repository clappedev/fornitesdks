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

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner
struct ABP_ProjectileTrajectory_C_SetShouldUpdateFromOwner_Params
{
	bool                                               ShouldUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Owner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner
struct ABP_ProjectileTrajectory_C_UpdateFromTrajectoryOwner_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay
struct ABP_ProjectileTrajectory_C_ReceiveBeginPlay_Params
{
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick
struct ABP_ProjectileTrajectory_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline
struct ABP_ProjectileTrajectory_C_SetTrajectorySpline_Params
{
	TArray<struct FVector>                             SplinePoints;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             SplineTangents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory
struct ABP_ProjectileTrajectory_C_ExecuteUbergraph_BP_ProjectileTrajectory_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
