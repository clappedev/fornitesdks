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

// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.AnimGraph
struct UBP_Pistol_FC_SA_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
struct UBP_Pistol_FC_SA_C_ExecuteUbergraph_BP_Pistol_FC_SA_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
