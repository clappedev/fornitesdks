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

// Function FortWaterBodyBP.FortWaterBodyBP_C.UserConstructionScript
struct AFortWaterBodyBP_C_UserConstructionScript_Params
{
};

// Function FortWaterBodyBP.FortWaterBodyBP_C.ReceiveBeginPlay
struct AFortWaterBodyBP_C_ReceiveBeginPlay_Params
{
};

// Function FortWaterBodyBP.FortWaterBodyBP_C.OnReceivedBulletImpact
struct AFortWaterBodyBP_C_OnReceivedBulletImpact_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function FortWaterBodyBP.FortWaterBodyBP_C.ExecuteUbergraph_FortWaterBodyBP
struct AFortWaterBodyBP_C_ExecuteUbergraph_FortWaterBodyBP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
