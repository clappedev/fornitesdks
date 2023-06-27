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

// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged
struct UFortContextualTutorial_VehicleValetLowFuel_HandleVehicleStateChanged_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      NewVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OldVehicle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation
struct UFortContextualTutorial_VehicleValetLowFuel_HandleStartSkydivingForActivation_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.UpdateVehicleFuelLeak
struct AFortDagwoodVehicle_UpdateVehicleFuelLeak_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.StartFade
struct AFortDagwoodVehicle_StartFade_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.SetOnFire
struct AFortDagwoodVehicle_SetOnFire_Params
{
	bool                                               bNewFire;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.SetNormalizedAudioRPM
struct AFortDagwoodVehicle_SetNormalizedAudioRPM_Params
{
	float                                              InRPM;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.SetFuel
struct AFortDagwoodVehicle_SetFuel_Params
{
	float                                              NewFuel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
struct AFortDagwoodVehicle_OnTickAudioFade_Params
{
	float                                              FadeParam;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController
struct AFortDagwoodVehicle_OnTickAudioController_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
struct AFortDagwoodVehicle_OnStopHandbrake_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
struct AFortDagwoodVehicle_OnStartHandbrake_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnStartCriticalHealth
struct AFortDagwoodVehicle_OnStartCriticalHealth_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnSpawnLeakProjectile
struct AFortDagwoodVehicle_OnSpawnLeakProjectile_Params
{
	class AFortProjectileBase*                         SpawnProjectile;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
struct AFortDagwoodVehicle_OnServerAltInteract_Params
{
	class AFortPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage
struct AFortDagwoodVehicle_OnRimScrapeDamage_Params
{
	int                                                TireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires
struct AFortDagwoodVehicle_OnRep_Tires_Params
{
	TArray<ETireStates>                                PrevTireStates;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
struct AFortDagwoodVehicle_OnRep_RandSeed_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
struct AFortDagwoodVehicle_OnRep_PoppedTireReaction_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
struct AFortDagwoodVehicle_OnRep_IsInoperable_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnRep_Exploded
struct AFortDagwoodVehicle_OnRep_Exploded_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire
struct AFortDagwoodVehicle_OnPoppedTire_Params
{
	int                                                TireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnLowFuel
struct AFortDagwoodVehicle_OnLowFuel_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStop
struct AFortDagwoodVehicle_OnLeakingFuelStop_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStart
struct AFortDagwoodVehicle_OnLeakingFuelStart_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
struct AFortDagwoodVehicle_OnInoperableChanged_Params
{
	bool                                               bInoperable;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel
struct AFortDagwoodVehicle_OnGainedFuel_Params
{
	float                                              NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
struct AFortDagwoodVehicle_OnFlipImpactDamage_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnFireStop
struct AFortDagwoodVehicle_OnFireStop_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnFireStart
struct AFortDagwoodVehicle_OnFireStart_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnExplode
struct AFortDagwoodVehicle_OnExplode_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnExitRoad
struct AFortDagwoodVehicle_OnExitRoad_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnExitLandscape
struct AFortDagwoodVehicle_OnExitLandscape_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnEnterLandscape
struct AFortDagwoodVehicle_OnEnterLandscape_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnEnteredRoad
struct AFortDagwoodVehicle_OnEnteredRoad_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnEmptyFuel
struct AFortDagwoodVehicle_OnEmptyFuel_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
struct AFortDagwoodVehicle_OnDestroyedPropFromCollision_Params
{
	class ABuildingActor*                              BuildingHitActor;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
struct AFortDagwoodVehicle_OnClientBeginAltInteract_Params
{
	class AFortPawn*                                   Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.OnBoostReady
struct AFortDagwoodVehicle_OnBoostReady_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed
struct AFortDagwoodVehicle_OnBoostFailed_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.NativeOnOutOfFuel
struct AFortDagwoodVehicle_NativeOnOutOfFuel_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.NativeOnLowFuel
struct AFortDagwoodVehicle_NativeOnLowFuel_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged
struct AFortDagwoodVehicle_NativeOnFuelChanged_Params
{
	float                                              NewFuelPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OldFuelPercent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
struct AFortDagwoodVehicle_NativeCalculateAccelRumbleIntensity_Params
{
	float                                              MaxIntensity;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.MakeOperable
struct AFortDagwoodVehicle_MakeOperable_Params
{
	bool                                               bAddGas;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.MakeInoperable
struct AFortDagwoodVehicle_MakeInoperable_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold
struct AFortDagwoodVehicle_IsVehicleAcceleratingWithSpeedThreshold_Params
{
	float                                              SpeedThreshold;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding
struct AFortDagwoodVehicle_IsTireSkidding_Params
{
	float                                              MinSpeedForSkid;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleForSkid;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedForPeelout;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedForBraking;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsOnRoad
struct AFortDagwoodVehicle_IsOnRoad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape
struct AFortDagwoodVehicle_IsOnLandscape_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsOnDirt
struct AFortDagwoodVehicle_IsOnDirt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsOffroad
struct AFortDagwoodVehicle_IsOffroad_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
struct AFortDagwoodVehicle_IsNativeBPTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.IsInoperable
struct AFortDagwoodVehicle_IsInoperable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetTireSurface
struct AFortDagwoodVehicle_GetTireSurface_Params
{
	ETireLocations                                     TireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETireSurfaces                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetTireState
struct AFortDagwoodVehicle_GetTireState_Params
{
	int                                                TireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
struct AFortDagwoodVehicle_GetTireHealthPercent_Params
{
	ETireLocations                                     TireIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetPlayerFacingName
struct AFortDagwoodVehicle_GetPlayerFacingName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ValetRuntime.FortDagwoodVehicle.GetOnFire
struct AFortDagwoodVehicle_GetOnFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetNormalizedAudioRPM
struct AFortDagwoodVehicle_GetNormalizedAudioRPM_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetHUDTopSpeed
struct AFortDagwoodVehicle_GetHUDTopSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity
struct AFortDagwoodVehicle_GetFuelCapacity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetFuel
struct AFortDagwoodVehicle_GetFuel_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.GetBumpiness
struct AFortDagwoodVehicle_GetBumpiness_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
struct AFortDagwoodVehicle_ForwardOrReverseInputPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
struct AFortDagwoodVehicle_CleanupLoopingPooledFX_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostStarted
struct AFortDagwoodVehicle_BP_OnBoostStarted_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostFinished
struct AFortDagwoodVehicle_BP_OnBoostFinished_Params
{
};

// Function ValetRuntime.FortDagwoodVehicle.AreAnyTiresPopped
struct AFortDagwoodVehicle_AreAnyTiresPopped_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
struct UFortDagwoodVehicleManager_UpdatePropReplacement_Params
{
};

// Function ValetRuntime.FortDagwoodVehicleManager.SetVehicleFuel
struct UFortDagwoodVehicleManager_SetVehicleFuel_Params
{
	float                                              NewFuel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicleManager.ServerSetVehicleFuel
struct UFortDagwoodVehicleManager_ServerSetVehicleFuel_Params
{
	float                                              NewFuel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
struct UFortDagwoodVehicleManager_OnVehicleSpawnsUpdated_Params
{
	class UFortVehicleItemDefinition*                  VehicleItemDef;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              SpawnedVehicles;                                          // (Parm, OutParm, ZeroConstructor)
	int                                                NewVehicleCount;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
struct UFortDagwoodVehicleManager_OnVehicleSpawned_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
struct UFortDagwoodVehicleManager_CustomHandleActorStreamedInEditor_Params
{
	class AActor*                                      SourceActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortValetAudioController.Update_Native
struct AFortValetAudioController_Update_Native_Params
{
};

// Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
struct AFortValetAudioController_OnSuspensionCollision_Native_Params
{
	bool                                               OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutMagnitude;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ValetRuntime.FortValetAudioController.CacheValetVehicle
struct AFortValetAudioController_CacheValetVehicle_Params
{
	class AFortDagwoodVehicle*                         InVehicle;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
