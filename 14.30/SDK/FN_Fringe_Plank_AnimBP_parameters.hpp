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

// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
struct UFringe_Plank_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
struct UFringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
