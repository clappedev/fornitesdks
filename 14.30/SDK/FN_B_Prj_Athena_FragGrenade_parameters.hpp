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

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc
struct AB_Prj_Athena_FragGrenade_C_PreExploWarning__FinishedFunc_Params
{
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc
struct AB_Prj_Athena_FragGrenade_C_PreExploWarning__UpdateFunc_Params
{
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded
struct AB_Prj_Athena_FragGrenade_C_FuseEnded_Params
{
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded
struct AB_Prj_Athena_FragGrenade_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce
struct AB_Prj_Athena_FragGrenade_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_FragGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell
struct AB_Prj_Athena_FragGrenade_C_Pre_Explo_Audio_Tell_Params
{
};

// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade
struct AB_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
