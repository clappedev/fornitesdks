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

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.UpdateCapturePointsCounted
struct AFortAthenaMutator_Hydrogen_UpdateCapturePointsCounted_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.TickHydrogenStormShield
struct AFortAthenaMutator_Hydrogen_TickHydrogenStormShield_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetupSafeZoneRoute
struct AFortAthenaMutator_Hydrogen_SetupSafeZoneRoute_Params
{
	struct FVector                                     StartVector;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndVector;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.SetCapturePointFillAmount
struct AFortAthenaMutator_Hydrogen_SetCapturePointFillAmount_Params
{
	class AHydrogenObjectiveActor*                     InCapturePointActor;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InPlayerTeam;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.PositionHydrogenStormShield
struct AFortAthenaMutator_Hydrogen_PositionHydrogenStormShield_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OwningTeamChange
struct AFortAthenaMutator_Hydrogen_OwningTeamChange_Params
{
	class AHydrogenObjectiveActor*                     Objective;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OldTeam;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_WinningTeam
struct AFortAthenaMutator_Hydrogen_OnRep_WinningTeam_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnRep_HydrogenTeamPointsChanged
struct AFortAthenaMutator_Hydrogen_OnRep_HydrogenTeamPointsChanged_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.OnGamePhaseStepChanged
struct AFortAthenaMutator_Hydrogen_OnGamePhaseStepChanged_Params
{
	TScriptInterface<class UFortSafeZoneInterface>     SafeZoneInterfaceConst;                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	EAthenaGamePhaseStep                               GamePhaseStep;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.IsInStormShield
struct AFortAthenaMutator_Hydrogen_IsInStormShield_Params
{
	struct FVector                                     TestLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GotoNextStormShieldNode
struct AFortAthenaMutator_Hydrogen_GotoNextStormShieldNode_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveObjectiveAccolade
struct AFortAthenaMutator_Hydrogen_GiveObjectiveAccolade_Params
{
	class AFortPlayerControllerAthena*                 FortController;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GiveEOMBonusAccolade
struct AFortAthenaMutator_Hydrogen_GiveEOMBonusAccolade_Params
{
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetTimeToNextNode
struct AFortAthenaMutator_Hydrogen_GetTimeToNextNode_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetStormSpeed
struct AFortAthenaMutator_Hydrogen_GetStormSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetSortedActivePointIndices
struct AFortAthenaMutator_Hydrogen_GetSortedActivePointIndices_Params
{
	TArray<int>                                        OutSortedIndices;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetOwnedCapturePointCount
struct AFortAthenaMutator_Hydrogen_GetOwnedCapturePointCount_Params
{
	int                                                InIndex;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetNextActorOnPathLocation
struct AFortAthenaMutator_Hydrogen_GetNextActorOnPathLocation_Params
{
	int                                                InPathIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetAllCapturePoints
struct AFortAthenaMutator_Hydrogen_GetAllCapturePoints_Params
{
	TArray<class AHydrogenObjectiveActor*>             ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.GetActorOnPathLocation
struct AFortAthenaMutator_Hydrogen_GetActorOnPathLocation_Params
{
	int                                                InPathIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.EndGame
struct AFortAthenaMutator_Hydrogen_EndGame_Params
{
	unsigned char                                      Winner;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.CheckVictoryPoints
struct AFortAthenaMutator_Hydrogen_CheckVictoryPoints_Params
{
	float                                              TimePassed;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasWinnerBeenDeclared
struct AFortAthenaMutator_Hydrogen_bHasWinnerBeenDeclared_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.bHasStormStarted
struct AFortAthenaMutator_Hydrogen_bHasStormStarted_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.AddBonusVictoryPointsForLockedCapturePoints
struct AFortAthenaMutator_Hydrogen_AddBonusVictoryPointsForLockedCapturePoints_Params
{
	unsigned char                                      InTeam;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.FortAthenaMutator_Hydrogen.ActivateTheStormShield
struct AFortAthenaMutator_Hydrogen_ActivateTheStormShield_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.WaitForMutator
struct AHydrogenObjectiveActor_WaitForMutator_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.SetUpMaterialInstanceDynamic
struct AHydrogenObjectiveActor_SetUpMaterialInstanceDynamic_Params
{
	struct FSlateBrush                                 MapIconBrush;                                             // (Parm, OutParm)
	class UMaterialInstanceDynamic*                    DrawBrushMID;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.SetActive
struct AHydrogenObjectiveActor_SetActive_Params
{
	bool                                               bInIsActive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.ProcessOverlap
struct AHydrogenObjectiveActor_ProcessOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.PlayContestedMapTimeline
struct AHydrogenObjectiveActor_PlayContestedMapTimeline_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnTimelineFlashing
struct AHydrogenObjectiveActor_OnTimelineFlashing_Params
{
	float                                              IconOpacity;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_TeamsOnCapturePoint
struct AHydrogenObjectiveActor_OnRep_TeamsOnCapturePoint_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_OwningTeam
struct AHydrogenObjectiveActor_OnRep_OwningTeam_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_HydrogenCaptureStateEnum
struct AHydrogenObjectiveActor_OnRep_HydrogenCaptureStateEnum_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnRep_bIsActive
struct AHydrogenObjectiveActor_OnRep_bIsActive_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnOverlapBegin
struct AHydrogenObjectiveActor_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnMutatorAvailable
struct AHydrogenObjectiveActor_OnMutatorAvailable_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.OnComponentBeginOverlap
struct AHydrogenObjectiveActor_OnComponentBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.GetIsActive
struct AHydrogenObjectiveActor_GetIsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function HydrogenRuntime.HydrogenObjectiveActor.FlashIcon
struct AHydrogenObjectiveActor_FlashIcon_Params
{
};

// Function HydrogenRuntime.HydrogenObjectiveActor.CheckForStorm
struct AHydrogenObjectiveActor_CheckForStorm_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
