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

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_SortedTeamDataByScore
struct AFortAthenaMutator_Nitrogen_OnRep_SortedTeamDataByScore_Params
{
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_NitrogenGamePhase
struct AFortAthenaMutator_Nitrogen_OnRep_NitrogenGamePhase_Params
{
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnRep_CurrentFares
struct AFortAthenaMutator_Nitrogen_OnRep_CurrentFares_Params
{
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehiclePlayerExit
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehiclePlayerExit_Params
{
	class AFortPlayerControllerAthena*                 PlayerController;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AFortAthenaVehicle*                          Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDriverChanged
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDriverChanged_Params
{
	class AFortPlayerControllerAthena*                 NewController;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AFortAthenaVehicle*                          Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.OnNitrogenVehicleDestroyed
struct AFortAthenaMutator_Nitrogen_OnNitrogenVehicleDestroyed_Params
{
	class AActor*                                      VehicleDestroyed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandlePlayerTeleportComplete
struct AFortAthenaMutator_Nitrogen_HandlePlayerTeleportComplete_Params
{
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGroupTeleportComplete
struct AFortAthenaMutator_Nitrogen_HandleGroupTeleportComplete_Params
{
};

// Function NitrogenRuntime.FortAthenaMutator_Nitrogen.HandleGameStartCountdownEnd
struct AFortAthenaMutator_Nitrogen_HandleGameStartCountdownEnd_Params
{
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToSquadStartAtIndex
struct UFortCheatManager_Nitrogen_TeleportToSquadStartAtIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortSquadStartSearchParamData              SearchParam;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     TeleportReasonString;                                     // (Parm, OutParm, ZeroConstructor)
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenSpawnActor
struct UFortCheatManager_Nitrogen_TeleportToNitrogenSpawnActor_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.TeleportToNitrogenRespawnActor
struct UFortCheatManager_Nitrogen_TeleportToNitrogenRespawnActor_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.SpawnNitrogenFare
struct UFortCheatManager_Nitrogen_SpawnNitrogenFare_Params
{
	float                                              PickUpDistance;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DropOffDistance;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenScore
struct UFortCheatManager_Nitrogen_SetNitrogenScore_Params
{
	int                                                Score;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ScoreReason;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.SetNitrogenNavDestinationToCurrentLocation
struct UFortCheatManager_Nitrogen_SetNitrogenNavDestinationToCurrentLocation_Params
{
};

// Function NitrogenRuntime.FortCheatManager_Nitrogen.CompleteNitrogenFare
struct UFortCheatManager_Nitrogen_CompleteNitrogenFare_Params
{
};

// Function NitrogenRuntime.NitrogenFare.PickUpPointOverlapped
struct ANitrogenFare_PickUpPointOverlapped_Params
{
	class AAthenaTraversePoint*                        TraversePoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.PickUpPointExited
struct ANitrogenFare_PickUpPointExited_Params
{
	class AAthenaTraversePoint*                        TraversePoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.OnVehicleEndPlay
struct ANitrogenFare_OnVehicleEndPlay_Params
{
	class AActor*                                      DestroyedVehicle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.OnVehicleDriverChanged
struct ANitrogenFare_OnVehicleDriverChanged_Params
{
	class AFortPlayerControllerAthena*                 NewDriver;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AFortAthenaVehicle*                          Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.OnVehicleDestroyed
struct ANitrogenFare_OnVehicleDestroyed_Params
{
	class AFortDagwoodVehicle*                         DestroyedVehicle;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.OnRep_PassengerPickedUp
struct ANitrogenFare_OnRep_PassengerPickedUp_Params
{
};

// Function NitrogenRuntime.NitrogenFare.GetRewardValue
struct ANitrogenFare_GetRewardValue_Params
{
	int                                                ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.DropOffPointOverlapped
struct ANitrogenFare_DropOffPointOverlapped_Params
{
	class AAthenaTraversePoint*                        TraversePoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFare.DropOffPointExited
struct ANitrogenFare_DropOffPointExited_Params
{
	class AAthenaTraversePoint*                        TraversePoint;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AFortPlayerStateAthena*                      PlayerState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFareValueIndicator.OnRep_IndicatorValue
struct ANitrogenFareValueIndicator_OnRep_IndicatorValue_Params
{
};

// Function NitrogenRuntime.NitrogenFareValueIndicator.OnFareIndicatorValueChanged
struct ANitrogenFareValueIndicator_OnFareIndicatorValueChanged_Params
{
	unsigned char                                      NewIndicatorValue;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenNavArrow.UpdatePulseSpeedForDistance
struct ANitrogenNavArrow_UpdatePulseSpeedForDistance_Params
{
};

// Function NitrogenRuntime.NitrogenNavArrow.UpdatePrimaryColorForDistance
struct ANitrogenNavArrow_UpdatePrimaryColorForDistance_Params
{
};

// Function NitrogenRuntime.NitrogenNavArrow.ThrowArrowToDestination
struct ANitrogenNavArrow_ThrowArrowToDestination_Params
{
};

// Function NitrogenRuntime.NitrogenNavArrow.RecallArrowToOwner
struct ANitrogenNavArrow_RecallArrowToOwner_Params
{
};

// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_PassengerState
struct UNitrogenPassengerPawnComponent_OnRep_PassengerState_Params
{
};

// Function NitrogenRuntime.NitrogenPassengerPawnComponent.OnRep_FareValueIndicator
struct UNitrogenPassengerPawnComponent_OnRep_FareValueIndicator_Params
{
};

// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientPlayDeathEffects
struct UNitrogenPassengerPawnComponent_ClientPlayDeathEffects_Params
{
};

// Function NitrogenRuntime.NitrogenPassengerPawnComponent.ClientHandleFinishedCharacterCustomization
struct UNitrogenPassengerPawnComponent_ClientHandleFinishedCharacterCustomization_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenPickup.OnRep_TeamHidden
struct ANitrogenPickup_OnRep_TeamHidden_Params
{
};

// Function NitrogenRuntime.NitrogenPickup.OnNitrogenPickupOverlapped
struct ANitrogenPickup_OnNitrogenPickupOverlapped_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenFareDataRepActor.OnRep_FareRepData
struct ANitrogenFareDataRepActor_OnRep_FareRepData_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareInteractionData
struct UNitrogenPlayerComponent_OnRep_FareInteractionData_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_FareDataRepActor
struct UNitrogenPlayerComponent_OnRep_FareDataRepActor_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnRep_CachedMutator
struct UNitrogenPlayerComponent_OnRep_CachedMutator_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnNitrogenGamePhaseChanged
struct UNitrogenPlayerComponent_OnNitrogenGamePhaseChanged_Params
{
	ENitrogenGamePhase                                 NewGamePhase;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnGameStarted
struct UNitrogenPlayerComponent_OnGameStarted_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnExitVehicle
struct UNitrogenPlayerComponent_OnExitVehicle_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehiclePassenger
struct UNitrogenPlayerComponent_OnEnterVehiclePassenger_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.OnEnterVehicleDriver
struct UNitrogenPlayerComponent_OnEnterVehicleDriver_Params
{
};

// Function NitrogenRuntime.NitrogenPlayerComponent.HandleVehicleDestroyedBuildingActor
struct UNitrogenPlayerComponent_HandleVehicleDestroyedBuildingActor_Params
{
	class AFortAthenaVehicle*                          Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABuildingActor*                              BuildingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromDropOff
struct UNitrogenPlayerComponent_GetDistanceFromDropOff_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenPlayerComponent.GetDistanceFromClosestPassenger
struct UNitrogenPlayerComponent_GetDistanceFromClosestPassenger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenPlayerComponent.ClientHandleLoadingScreenStateChanged
struct UNitrogenPlayerComponent_ClientHandleLoadingScreenStateChanged_Params
{
	class AFortPlayerControllerAthena*                 PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableLoadScreen;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       HUDReasonText;                                            // (Parm)
};

// Function NitrogenRuntime.NitrogenTraversePoint.OnEndOverlap
struct ANitrogenTraversePoint_OnEndOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenTraversePoint.OnClientVisibiltyUpdated
struct ANitrogenTraversePoint_OnClientVisibiltyUpdated_Params
{
	bool                                               bNewHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenTraversePoint.OnClientInteracted
struct ANitrogenTraversePoint_OnClientInteracted_Params
{
	bool                                               bOwnedByClient;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetSparksCounts
struct UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetSparksCounts_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenVehicleComponent.TimelineBoostFXUpdate_JetFlamesHeight
struct UNitrogenVehicleComponent_TimelineBoostFXUpdate_JetFlamesHeight_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenVehicleComponent.SetBoostFXActive
struct UNitrogenVehicleComponent_SetBoostFXActive_Params
{
	bool                                               bActive;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenVehicleComponent.IsVehicleUnderCleanupWaterDepth
struct UNitrogenVehicleComponent_IsVehicleUnderCleanupWaterDepth_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NitrogenRuntime.NitrogenVehicleComponent.HandleVehicleOnHit
struct UNitrogenVehicleComponent_HandleVehicleOnHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
