#pragma once

// Fortnite (8.51) SDK
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

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.GetSkeletalMeshes
struct AGCN_Loop_SirloinBotShroud_C_GetSkeletalMeshes_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Timeline
struct AGCN_Loop_SirloinBotShroud_C_Timeline_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnLoopingStart
struct AGCN_Loop_SirloinBotShroud_C_OnLoopingStart_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.OnRemoval
struct AGCN_Loop_SirloinBotShroud_C_OnRemoval_Params
{
	class AActor*                                      MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>            ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>                     AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraShake*                                BurstCameraShakeInstance;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ADecalActor*                                 BurstDecalInstance;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ReceiveTick
struct AGCN_Loop_SirloinBotShroud_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.BeginExpireTell
struct AGCN_Loop_SirloinBotShroud_C_BeginExpireTell_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ClearExpireTell
struct AGCN_Loop_SirloinBotShroud_C_ClearExpireTell_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExpireWarningTick
struct AGCN_Loop_SirloinBotShroud_C_ExpireWarningTick_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.UpdateTeamVisbility
struct AGCN_Loop_SirloinBotShroud_C_UpdateTeamVisbility_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.Audio Tick
struct AGCN_Loop_SirloinBotShroud_C_Audio_Tick_Params
{
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.StartedInteract
struct AGCN_Loop_SirloinBotShroud_C_StartedInteract_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.EndedInteract
struct AGCN_Loop_SirloinBotShroud_C_EndedInteract_Params
{
};

// Function GCN_Loop_SirloinBotShroud.GCN_Loop_SirloinBotShroud_C.ExecuteUbergraph_GCN_Loop_SirloinBotShroud
struct AGCN_Loop_SirloinBotShroud_C_ExecuteUbergraph_GCN_Loop_SirloinBotShroud_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
