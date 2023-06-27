#pragma once

// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
struct ABP_VictoryDrone_C_NotifyTeleportFinishedTriggered_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnOutAnim
struct ABP_VictoryDrone_C_PlaySpawnOutAnim_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
struct ABP_VictoryDrone_C_InitDrone_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.TriggerPlayerSpawnEffects
struct ABP_VictoryDrone_C_TriggerPlayerSpawnEffects_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.UserConstructionScript
struct ABP_VictoryDrone_C_UserConstructionScript_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
struct ABP_VictoryDrone_C_ReceiveBeginPlay_Params
{
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
struct ABP_VictoryDrone_C_OnSpawnOutAnimEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
struct ABP_VictoryDrone_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
struct ABP_VictoryDrone_C_ExecuteUbergraph_BP_VictoryDrone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
struct ABP_VictoryDrone_C_SpawnOutAnimEndedDispatcher__DelegateSignature_Params
{
	class ABP_VictoryDrone_C*                          Drone;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
