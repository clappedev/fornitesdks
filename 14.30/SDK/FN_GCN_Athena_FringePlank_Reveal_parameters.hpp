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

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.OnExecute
struct AGCN_Athena_FringePlank_Reveal_C_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.EndSweepFX
struct AGCN_Athena_FringePlank_Reveal_C_EndSweepFX_Params
{
};

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.ReceiveEndPlay
struct AGCN_Athena_FringePlank_Reveal_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.BeginSweepFX
struct AGCN_Athena_FringePlank_Reveal_C_BeginSweepFX_Params
{
};

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.PlayWorldSweep
struct AGCN_Athena_FringePlank_Reveal_C_PlayWorldSweep_Params
{
};

// Function GCN_Athena_FringePlank_Reveal.GCN_Athena_FringePlank_Reveal_C.ExecuteUbergraph_GCN_Athena_FringePlank_Reveal
struct AGCN_Athena_FringePlank_Reveal_C_ExecuteUbergraph_GCN_Athena_FringePlank_Reveal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
