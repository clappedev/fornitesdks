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

// Function LMG_Anim_BP.LMG_Anim_BP_C.AnimGraph
struct ULMG_Anim_BP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function LMG_Anim_BP.LMG_Anim_BP_C.ExecuteUbergraph_LMG_Anim_BP
struct ULMG_Anim_BP_C_ExecuteUbergraph_LMG_Anim_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
