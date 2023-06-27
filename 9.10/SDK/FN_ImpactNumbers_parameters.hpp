#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ImpactNumbers.ImpactNumbers_C.init a new number set
struct AImpactNumbers_C_init_a_new_number_set_Params
{
	struct FFortDamageNumberInfo                       NewDamageHitInfoStruct;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FTransform                                  OutCameraTransform;                                       // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutNumberLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ImpactNumbers.ImpactNumbers_C.OnNewDamageNumber
struct AImpactNumbers_C_OnNewDamageNumber_Params
{
	struct FFortDamageNumberInfo                       NewDamageNumberInfo;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ImpactNumbers.ImpactNumbers_C.ExecuteUbergraph_ImpactNumbers
struct AImpactNumbers_C_ExecuteUbergraph_ImpactNumbers_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
