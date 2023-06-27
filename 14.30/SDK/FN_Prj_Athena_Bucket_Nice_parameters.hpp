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

// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail
struct APrj_Athena_Bucket_Nice_C_OnRep_TurnOffTrail_Params
{
};

// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded
struct APrj_Athena_Bucket_Nice_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice
struct APrj_Athena_Bucket_Nice_C_ExecuteUbergraph_Prj_Athena_Bucket_Nice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
