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

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Creative Effect Data
struct APlayerPawn_Athena_C_Get_Creative_Effect_Data_Params
{
	struct FFCreativeEffectColorIndex                  Effect_Color;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated
struct APlayerPawn_Athena_C_handleCvarsUpdated_Params
{
	struct FString                                     CVarName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation
struct APlayerPawn_Athena_C_OnRep_PlayerAimRotation_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint
struct APlayerPawn_Athena_C_GetAimPoint_Params
{
	struct FRotator                                    ControlRotation;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.validateRimLight
struct APlayerPawn_Athena_C_validateRimLight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy
struct APlayerPawn_Athena_C_PawnIsDecoy_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC
struct APlayerPawn_Athena_C_PawnIsNPC_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject
struct APlayerPawn_Athena_C_RemoveSkeletalMeshComponentsFromWeaponObject_Params
{
	class AFortWeapon*                                 WeaponObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject
struct APlayerPawn_Athena_C_AddSkeletalMeshComponentsFromWeaponObject_Params
{
	class AFortWeapon*                                 WeaponObject;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup
struct APlayerPawn_Athena_C_GalileoMaterialSetup_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight
struct APlayerPawn_Athena_C_Get_Highest_Priority_Highlight_Params
{
	class UObject*                                     Source;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FPawnHighlight                              Top_Priority;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source
struct APlayerPawn_Athena_C_Highlight_Pawn_from_Source_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPawnHighlight                              Highlight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Only_Update_If_Current;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source
struct APlayerPawn_Athena_C_Remove_Pawn_Highlight_from_Source_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight
struct APlayerPawn_Athena_C_ApplyPawnHighlight_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPawnHighlight                              HitGlow;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn
struct APlayerPawn_Athena_C_OnRep_PlayRespawnFXOnSpawn_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut
struct APlayerPawn_Athena_C_LockonSearchCompleteTimedOut_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted
struct APlayerPawn_Athena_C_OnLockOnSearchCompleted_Params
{
	bool                                               bConsumeEvent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress
struct APlayerPawn_Athena_C_SetPartyInProgress_Params
{
	bool                                               bIsPartyInProgress;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight
struct APlayerPawn_Athena_C_CleanUpTeleportationFXLight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats
struct APlayerPawn_Athena_C_RestoreCharacterMats_Params
{
	bool                                               bFullyCompleted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden
struct APlayerPawn_Athena_C_SetPetHidden_Params
{
	bool                                               NewHidden;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx
struct APlayerPawn_Athena_C_SetupDissolveFx_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX
struct APlayerPawn_Athena_C_CleanupDissolveFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx
struct APlayerPawn_Athena_C_UpdateDissolveFx_Params
{
	float                                              Scalar_Transition;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_ZHeight;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scalar_LightIntensity;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight
struct APlayerPawn_Athena_C_SpawnTeleportationLight_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds
struct APlayerPawn_Athena_C_FindBounds_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut
struct APlayerPawn_Athena_C_QueueTeleportOut_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn
struct APlayerPawn_Athena_C_QueueTeleportIn_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract
struct APlayerPawn_Athena_C_OnStartLongInteract_Params
{
	class AActor*                                      ReceivingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bConsumeEvent;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bSkipSetInteractDuration;                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Out_bSkipStartAnimation;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EItemInteractionType                               Out_ItemInteractionType;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup
struct APlayerPawn_Athena_C_InWarmup_Params
{
	bool                                               bInWarmup;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio
struct APlayerPawn_Athena_C_StopLoopingAudio_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio
struct APlayerPawn_Athena_C_EnableWaterAudio_Params
{
	bool                                               Is_Entering_Water;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY
struct APlayerPawn_Athena_C_GetLocationInCircle_XY_Params
{
	struct FVector                                     LocationLocalSpace;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio
struct APlayerPawn_Athena_C_InitAthenaFoleyAudio_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript
struct APlayerPawn_Athena_C_UserConstructionScript_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc
struct APlayerPawn_Athena_C_Timeline_0__FinishedFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc
struct APlayerPawn_Athena_C_Timeline_0__UpdateFunc_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed
struct APlayerPawn_Athena_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay
struct APlayerPawn_Athena_C_ReceiveBeginPlay_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed
struct APlayerPawn_Athena_C_ReceiveDestroyed_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged
struct APlayerPawn_Athena_C_SafeZoneStatusChanged_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping
struct APlayerPawn_Athena_C_GameplayCue_Athena_Equipping_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects
struct APlayerPawn_Athena_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO
struct APlayerPawn_Athena_C_GameplayCue_Athena_Player_BeingRevivedFromDBNO_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX
struct APlayerPawn_Athena_C_RemoveStormFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOResurrect_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume
struct APlayerPawn_Athena_C_OnEnteredWaterVolume_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume
struct APlayerPawn_Athena_C_OnExitedWaterVolume_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus
struct APlayerPawn_Athena_C_NotifyTeammateSkydivedFromBus_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay
struct APlayerPawn_Athena_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy
struct APlayerPawn_Athena_C_OnLeftReplayRelevancy_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy
struct APlayerPawn_Athena_C_OnEnteredReplayRelevancy_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted
struct APlayerPawn_Athena_C_OnCharacterCustomizationCompleted_Params
{
	class AFortPlayerPawn*                             Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup
struct APlayerPawn_Athena_C_OnResInDuringWarmup_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX
struct APlayerPawn_Athena_C_AddStormFX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag
struct APlayerPawn_Athena_C_SetSafeZonePhaseAndGameplayCueTag_Params
{
	int                                                InSafeZonePhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnGameplayCue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged
struct APlayerPawn_Athena_C_SetSafeZoneTagWhenChanged_Params
{
	int                                                NewWhichSafeZoneTag;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                GameplayTag;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSpawnGameplayCue;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged
struct APlayerPawn_Athena_C_OnOutsideSafeZonePhaseChanged_Params
{
	int                                                SafeZonePhase;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCue_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage
struct APlayerPawn_Athena_C_OnReceivedStormSurgeDamage_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft
struct APlayerPawn_Athena_C_MeleeSwingLeft_Params
{
	bool                                               First_Left;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight
struct APlayerPawn_Athena_C_MeleeSwingRight_Params
{
	bool                                               First_Right;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter
struct APlayerPawn_Athena_C_GameplayCue_Abilities_Activation_DBNOEnter_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals
struct APlayerPawn_Athena_C_ActivateInvincibleVisuals_Params
{
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading
struct APlayerPawn_Athena_C_GameplayCue_Athena_Reloading_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds
struct APlayerPawn_Athena_C_TeleportInNSeconds_Params
{
	float                                              SecondsTillTeleport;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC
struct APlayerPawn_Athena_C_ClientRunSnowGC_Params
{
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport
struct APlayerPawn_Athena_C_WhiteoutAndTeleport_Params
{
	struct FVector                                     DestLocation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Instant;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost
struct APlayerPawn_Athena_C_GameplayCue_Athena_Boost_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost
struct APlayerPawn_Athena_C_OnCreativeStopGhost_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost
struct APlayerPawn_Athena_C_OnCreativeStartGhost_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End
struct APlayerPawn_Athena_C_MeleeSwingLeft_End_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End
struct APlayerPawn_Athena_C_MeleeSwingRight_End_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue
struct APlayerPawn_Athena_C_AddSafeZoneGameplayCue_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient
struct APlayerPawn_Athena_C_RemoveSafeZoneGameplayCueServerToClient_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit
struct APlayerPawn_Athena_C_OnSuccessfulBuildingEdit_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX
struct APlayerPawn_Athena_C_Play_Respawn_FX_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset
struct APlayerPawn_Athena_C_OnSpawnImmunityTimeReset_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody
struct APlayerPawn_Athena_C_OnEnteredWaterBody_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody
struct APlayerPawn_Athena_C_OnExitedWaterBody_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLastBody;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged
struct APlayerPawn_Athena_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>                         PrevMovementMode;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PrevCustomMode;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      NewCustomMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost
struct APlayerPawn_Athena_C_OnBeginWaterSprintBoost_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp
struct APlayerPawn_Athena_C_isHiddingInProp_Params
{
	bool                                               IsHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ServerSetCreativeEffectColorIndex
struct APlayerPawn_Athena_C_ServerSetCreativeEffectColorIndex_Params
{
	struct FFCreativeEffectColorIndex                  Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported
struct APlayerPawn_Athena_C_OnLandscapeCheckFailedAndTeleported_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp
struct APlayerPawn_Athena_C_ScalePlayerUp_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown
struct APlayerPawn_Athena_C_ScalePlayerDown_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed
struct APlayerPawn_Athena_C_OnTetheredExitPressed_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased
struct APlayerPawn_Athena_C_OnTetheredExitReleased_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted
struct APlayerPawn_Athena_C_OnTetherStarted_Params
{
	class APawn*                                       LastTetherPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded
struct APlayerPawn_Athena_C_OnTetherEnded_Params
{
	class APawn*                                       LastTetherPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick
struct APlayerPawn_Athena_C_StartAImRotationTick_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick
struct APlayerPawn_Athena_C_EndRotationTick_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation
struct APlayerPawn_Athena_C_ReplicateAimRotation_Params
{
	struct FRotator                                    PlayerAimRotation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick
struct APlayerPawn_Athena_C_AimTick_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena
struct APlayerPawn_Athena_C_ExecuteUbergraph_PlayerPawn_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature
struct APlayerPawn_Athena_C_CCPM_isHiddenInProp__DelegateSignature_Params
{
	bool                                               IsHidden;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft2__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight2__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeftEnd__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature
struct APlayerPawn_Athena_C_SwingRightEnd__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature
struct APlayerPawn_Athena_C_onFadeToWhiteTeleported__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature
struct APlayerPawn_Athena_C_SwingLeft__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature
struct APlayerPawn_Athena_C_SwingRight__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature
struct APlayerPawn_Athena_C_ResOut__DelegateSignature_Params
{
};

// Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature
struct APlayerPawn_Athena_C_ResIn__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
