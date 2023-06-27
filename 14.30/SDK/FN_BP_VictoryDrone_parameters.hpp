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

// Function BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio
struct ABP_VictoryDrone_C_Added_Death_Audio_Params
{
	class USoundBase*                                  Sound_to_Spawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters
struct ABP_VictoryDrone_C_Decoy_FX_Parameters_Params
{
	TArray<struct FParticleSysParam>                   Instance_Parameters;                                      // (Parm, OutParm)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters
struct ABP_VictoryDrone_C_NPC_FX_Parameters_Params
{
	TArray<struct FParticleSysParam>                   Instance_Parameters;                                      // (Parm, OutParm)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
struct ABP_VictoryDrone_C_NotifyTeleportFinishedTriggered_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim
struct ABP_VictoryDrone_C_PlaySpawnAnim_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
struct ABP_VictoryDrone_C_InitDrone_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
struct ABP_VictoryDrone_C_ReceiveBeginPlay_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
struct ABP_VictoryDrone_C_OnSpawnOutAnimEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
struct ABP_VictoryDrone_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
struct ABP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
struct ABP_VictoryDrone_C_SpawnOutAnimEndedDispatcher__DelegateSignature_Params
{
	class ABP_VictoryDrone_C*                          Drone;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
