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

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__FinishedFunc
struct AGCN_Loop_Snow_Whiteout_C_FadeinOut__FinishedFunc_Params
{
};

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.FadeinOut__UpdateFunc
struct AGCN_Loop_Snow_Whiteout_C_FadeinOut__UpdateFunc_Params
{
};

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ReceiveDestroyed
struct AGCN_Loop_Snow_Whiteout_C_ReceiveDestroyed_Params
{
};

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnRemoval
struct AGCN_Loop_Snow_Whiteout_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.OnLoopingStart
struct AGCN_Loop_Snow_Whiteout_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Loop_Snow_Whiteout.GCN_Loop_Snow_Whiteout_C.ExecuteUbergraph_GCN_Loop_Snow_Whiteout
struct AGCN_Loop_Snow_Whiteout_C_ExecuteUbergraph_GCN_Loop_Snow_Whiteout_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
