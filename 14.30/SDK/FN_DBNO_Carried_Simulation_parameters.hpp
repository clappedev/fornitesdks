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

// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.AnimGraph
struct UDBNO_Carried_Simulation_C_AnimGraph_Params
{
	struct FPoseLink                                   InPose;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintUpdateAnimation
struct UDBNO_Carried_Simulation_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.BlueprintInitializeAnimation
struct UDBNO_Carried_Simulation_C_BlueprintInitializeAnimation_Params
{
};

// Function DBNO_Carried_Simulation.DBNO_Carried_Simulation_C.ExecuteUbergraph_DBNO_Carried_Simulation
struct UDBNO_Carried_Simulation_C_ExecuteUbergraph_DBNO_Carried_Simulation_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
