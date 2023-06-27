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

// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.AnimGraph
struct UGrapplingHookGun_AnimBP_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.BlueprintUpdateAnimation
struct UGrapplingHookGun_AnimBP_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GrapplingHookGun_AnimBP.GrapplingHookGun_AnimBP_C.ExecuteUbergraph_GrapplingHookGun_AnimBP
struct UGrapplingHookGun_AnimBP_C_ExecuteUbergraph_GrapplingHookGun_AnimBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
