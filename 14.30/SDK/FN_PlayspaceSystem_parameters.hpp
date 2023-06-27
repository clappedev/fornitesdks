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

// Function PlayspaceSystem.GameplayVolume.UpdateSize
struct AGameplayVolume_UpdateSize_Params
{
	struct FVector                                     NewScale;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap
struct UOverlapComponent_OnEndActorOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap
struct UOverlapComponent_OnBeginActorOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers
struct APlayspace_OnRep_PlayspaceUsers_Params
{
};

// Function PlayspaceSystem.Playspace.OnRep_MatchStartTime
struct APlayspace_OnRep_MatchStartTime_Params
{
};

// Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded
struct APlayspace_OnRep_bMatchHasEnded_Params
{
};

// Function PlayspaceSystem.Playspace.OnRep_bIsInitialized
struct APlayspace_OnRep_bIsInitialized_Params
{
};

// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning
struct UPlayspaceControllerComponent_PlayerSpawning_ServerMarkReadyForSpawning_Params
{
};

// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo
struct UPlayspaceControllerComponent_PlayerSpawning_OnRep_ReplicatedSpawnInfo_Params
{
};

// Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo
struct UPlayspaceControllerComponent_PlayerSpawning_GetSpawnInfo_Params
{
	struct FReplicatedSpawnInfo                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents
struct UPlayspaceManagerComponent_ProcessOverlapEvents_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume
struct UPlayspaceManagerComponent_OnPlayerEndOverlapGameplayVolume_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayVolume*                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume
struct UPlayspaceManagerComponent_OnPlayerBeginOverlapGameplayVolume_Params
{
	class APlayerState*                                PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AGameplayVolume*                             Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
