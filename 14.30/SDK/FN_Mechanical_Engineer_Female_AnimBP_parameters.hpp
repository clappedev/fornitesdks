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

// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph
struct UMechanical_Engineer_Female_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation
struct UMechanical_Engineer_Female_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation
struct UMechanical_Engineer_Female_AnimBP_C_BlueprintInitializeAnimation_Params
{
};

// Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP
struct UMechanical_Engineer_Female_AnimBP_C_ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
