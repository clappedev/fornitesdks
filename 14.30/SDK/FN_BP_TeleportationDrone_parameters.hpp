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

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim
struct ABP_TeleportationDrone_C_PlaySpawnAnim_Params
{
};

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.InitDrone
struct ABP_TeleportationDrone_C_InitDrone_Params
{
};

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay
struct ABP_TeleportationDrone_C_ReceiveBeginPlay_Params
{
};

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded
struct ABP_TeleportationDrone_C_OnSpawnOutAnimEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick
struct ABP_TeleportationDrone_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone
struct ABP_TeleportationDrone_C_ExecuteUbergraph_BP_TeleportationDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
