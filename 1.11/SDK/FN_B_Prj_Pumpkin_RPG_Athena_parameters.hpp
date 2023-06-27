#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ShouldPlayPostProcess
struct AB_Prj_Pumpkin_RPG_Athena_C_ShouldPlayPostProcess_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.UserConstructionScript
struct AB_Prj_Pumpkin_RPG_Athena_C_UserConstructionScript_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__FinishedFunc
struct AB_Prj_Pumpkin_RPG_Athena_C_PPFader__FinishedFunc_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.PPFader__UpdateFunc
struct AB_Prj_Pumpkin_RPG_Athena_C_PPFader__UpdateFunc_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveTick
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnExploded
struct AB_Prj_Pumpkin_RPG_Athena_C_OnExploded_Params
{
	TArray<class AActor*>*                             HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FHitResult>*                         HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.FuseTimerMax
struct AB_Prj_Pumpkin_RPG_Athena_C_FuseTimerMax_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveBeginPlay
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnStop
struct AB_Prj_Pumpkin_RPG_Athena_C_OnStop_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.OnBounce
struct AB_Prj_Pumpkin_RPG_Athena_C_OnBounce_Params
{
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ReceiveDestroyed
struct AB_Prj_Pumpkin_RPG_Athena_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Pumpkin_RPG_Athena.B_Prj_Pumpkin_RPG_Athena_C.ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena
struct AB_Prj_Pumpkin_RPG_Athena_C_ExecuteUbergraph_B_Prj_Pumpkin_RPG_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
