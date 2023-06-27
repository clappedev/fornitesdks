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

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.On Player Step
struct AGCN_Athena_SneakySnowman_C_On_Player_Step_Params
{
};

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnRemoval
struct AGCN_Athena_SneakySnowman_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.OnLoopingStart
struct AGCN_Athena_SneakySnowman_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ReceiveBeginPlay
struct AGCN_Athena_SneakySnowman_C_ReceiveBeginPlay_Params
{
};

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.BeginPlay_Multicast
struct AGCN_Athena_SneakySnowman_C_BeginPlay_Multicast_Params
{
};

// Function GCN_Athena_SneakySnowman.GCN_Athena_SneakySnowman_C.ExecuteUbergraph_GCN_Athena_SneakySnowman
struct AGCN_Athena_SneakySnowman_C_ExecuteUbergraph_GCN_Athena_SneakySnowman_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif