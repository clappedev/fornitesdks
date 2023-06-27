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

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.UserConstructionScript
struct AB_Prj_ThrownConsumable_C_UserConstructionScript_Params
{
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ReceiveBeginPlay
struct AB_Prj_ThrownConsumable_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnExploded
struct AB_Prj_ThrownConsumable_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnBounce
struct AB_Prj_ThrownConsumable_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.OnStop
struct AB_Prj_ThrownConsumable_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ResetSimulatedComponents
struct AB_Prj_ThrownConsumable_C_ResetSimulatedComponents_Params
{
};

// Function B_Prj_ThrownConsumable.B_Prj_ThrownConsumable_C.ExecuteUbergraph_B_Prj_ThrownConsumable
struct AB_Prj_ThrownConsumable_C_ExecuteUbergraph_B_Prj_ThrownConsumable_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
