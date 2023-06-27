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

// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
