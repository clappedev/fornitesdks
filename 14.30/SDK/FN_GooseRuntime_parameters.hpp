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

// Function GooseRuntime.AthenaGoosePickup.SetStaticMesh
struct AAthenaGoosePickup_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewStaticMesh;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInterface*>                  MaterialsToSwap;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                InDisplayIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.AthenaGoosePickup.OnStartDespawnWarning_Client
struct AAthenaGoosePickup_OnStartDespawnWarning_Client_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnRep_PickupState
struct AAthenaGoosePickup_OnRep_PickupState_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnRep_DisplayIndex
struct AAthenaGoosePickup_OnRep_DisplayIndex_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnRep_bIsDespawning
struct AAthenaGoosePickup_OnRep_bIsDespawning_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Server
struct AAthenaGoosePickup_OnImpactedByPlane_Server_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Client
struct AAthenaGoosePickup_OnImpactedByPlane_Client_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnFalling_Server
struct AAthenaGoosePickup_OnFalling_Server_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnFalling_Client
struct AAthenaGoosePickup_OnFalling_Client_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnDeployed_Server
struct AAthenaGoosePickup_OnDeployed_Server_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnDeployed_Client
struct AAthenaGoosePickup_OnDeployed_Client_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.OnCollide
struct AAthenaGoosePickup_OnCollide_Params
{
	class AActor*                                      CollidingActor;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Server
struct AAthenaGoosePickup_DeployTimerUp_Server_Params
{
};

// Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Client
struct AAthenaGoosePickup_DeployTimerUp_Client_Params
{
};

// Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleStolen
struct AFortAthenaMutator_Goose_OnVehicleStolen_Params
{
	unsigned char                                      OldID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewID;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleDied
struct AFortAthenaMutator_Goose_OnVehicleDied_Params
{
	class AFortAthenaVehicle*                          DestroyedVehicle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       InTags;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
	class AController*                                 EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortAthenaMutator_Goose.OnPlaylistLoaded
struct AFortAthenaMutator_Goose_OnPlaylistLoaded_Params
{
	struct FName                                       PlaylistName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContainerTags;                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GooseRuntime.FortAthenaMutator_Goose.OnPawnDied
struct AFortAthenaMutator_Goose_OnPawnDied_Params
{
	class AFortPlayerPawnAthena*                       PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortAthenaMutator_Goose.OnGamePhaseChanged
struct AFortAthenaMutator_Goose_OnGamePhaseChanged_Params
{
	EAthenaGamePhase                                   NewPhase;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseUpgradePlaneGuns
struct UFortCheatManager_Goose_GooseUpgradePlaneGuns_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseToggleDrops
struct UFortCheatManager_Goose_GooseToggleDrops_Params
{
	bool                                               bToggleValue;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseStealPlane
struct UFortCheatManager_Goose_GooseStealPlane_Params
{
};

// Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneLives
struct UFortCheatManager_Goose_GooseSetPlaneLives_Params
{
	int                                                NewLives;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneHealthPercent
struct UFortCheatManager_Goose_GooseSetPlaneHealthPercent_Params
{
	float                                              Percent;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseKillPlaneSquad
struct UFortCheatManager_Goose_GooseKillPlaneSquad_Params
{
};

// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneHealthGE
struct UFortCheatManager_Goose_GooseGivePlaneHealthGE_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneEffect
struct UFortCheatManager_Goose_GooseGivePlaneEffect_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneBoostGE
struct UFortCheatManager_Goose_GooseGivePlaneBoostGE_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
