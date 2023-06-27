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

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces
struct ABP_FluidSim_FN_C_GetFortnitePawnForces_Params
{
};

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn
struct ABP_FluidSim_FN_C_GetLocalPawn_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces
struct ABP_FluidSim_FN_C_GetPlayerPawnForces_Params
{
};

// Function BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN
struct ABP_FluidSim_FN_C_ExecuteUbergraph_BP_FluidSim_FN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
