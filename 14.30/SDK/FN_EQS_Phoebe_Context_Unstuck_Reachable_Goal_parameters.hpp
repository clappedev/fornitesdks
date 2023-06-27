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

// Function EQS_Phoebe_Context_Unstuck_Reachable_Goal.EQS_Phoebe_Context_Unstuck_Reachable_Goal_C.ProvideSingleLocation
struct UEQS_Phoebe_Context_Unstuck_Reachable_Goal_C_ProvideSingleLocation_Params
{
	class UObject*                                     QuerierObject;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      QuerierActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResultingLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
