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

// Function B_HidingProp.B_HidingProp_C.Allow Cosmetics For Pawn
struct AB_HidingProp_C_Allow_Cosmetics_For_Pawn_Params
{
	class AFortPawn*                                   Pawn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.OnRep_ContainsPlayer
struct AB_HidingProp_C_OnRep_ContainsPlayer_Params
{
};

// Function B_HidingProp.B_HidingProp_C.OnRep_IsTeleporter
struct AB_HidingProp_C_OnRep_IsTeleporter_Params
{
};

// Function B_HidingProp.B_HidingProp_C.CheckCanUsePassage
struct AB_HidingProp_C_CheckCanUsePassage_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.IsInInfiltrationLTM
struct AB_HidingProp_C_IsInInfiltrationLTM_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.OnRep_Teleporting
struct AB_HidingProp_C_OnRep_Teleporting_Params
{
};

// Function B_HidingProp.B_HidingProp_C.BlueprintGetFailedInteractionString
struct AB_HidingProp_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_HidingProp.B_HidingProp_C.RemoveHiddenPlayer
struct AB_HidingProp_C_RemoveHiddenPlayer_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.AddHiddenPlayer
struct AB_HidingProp_C_AddHiddenPlayer_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.OnRep_HidingPlayers
struct AB_HidingProp_C_OnRep_HidingPlayers_Params
{
};

// Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionTime
struct AB_HidingProp_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.BlueprintGetInteractionString
struct AB_HidingProp_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_HidingProp.B_HidingProp_C.BlueprintCanInteract
struct AB_HidingProp_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.OnReady_64CBF02E419FF250B433D5B2A6E5D744
struct AB_HidingProp_C_OnReady_64CBF02E419FF250B433D5B2A6E5D744_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_HidingProp.B_HidingProp_C.OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141
struct AB_HidingProp_C_OnCurieActive_F2BFC8C54691C42FB5230BA7B7DEE141_Params
{
};

// Function B_HidingProp.B_HidingProp_C.BlueprintOnInteract
struct AB_HidingProp_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.OnDeathServer
struct AB_HidingProp_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_HidingProp.B_HidingProp_C.BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct AB_HidingProp_C_BndEvt__S_Athena_Launchpad_Collision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.LandedOnHayStack
struct AB_HidingProp_C_LandedOnHayStack_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z_Velocity_Mag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.LaunchPlayersOffTop
struct AB_HidingProp_C_LaunchPlayersOffTop_Params
{
	class AFortPlayerPawn*                             PlayerPawn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.ReceiveActorBeginOverlap
struct AB_HidingProp_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.StopHidingLoop
struct AB_HidingProp_C_StopHidingLoop_Params
{
};

// Function B_HidingProp.B_HidingProp_C.HidingPlayerCountChanged
struct AB_HidingProp_C_HidingPlayerCountChanged_Params
{
};

// Function B_HidingProp.B_HidingProp_C.InteractEnter
struct AB_HidingProp_C_InteractEnter_Params
{
};

// Function B_HidingProp.B_HidingProp_C.EndHidingAnalyticSession
struct AB_HidingProp_C_EndHidingAnalyticSession_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EEnvironmentalItemEndReason                        EndReason;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.WatchForPlayerDeath
struct AB_HidingProp_C_WatchForPlayerDeath_Params
{
	class AFortPawn*                                   FortPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.Pawn Died
struct AB_HidingProp_C_Pawn_Died_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.StopHiding
struct AB_HidingProp_C_StopHiding_Params
{
	class AFortPawn*                                   Pawn;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.ReceiveBeginPlay
struct AB_HidingProp_C_ReceiveBeginPlay_Params
{
};

// Function B_HidingProp.B_HidingProp_C.Teleport
struct AB_HidingProp_C_Teleport_Params
{
	class AActor*                                      Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.IgnorePawnCollision
struct AB_HidingProp_C_IgnorePawnCollision_Params
{
	class AFortPawn*                                   Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              InIgnoreDuration;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.ToggleCameraCollisionForClients
struct AB_HidingProp_C_ToggleCameraCollisionForClients_Params
{
};

// Function B_HidingProp.B_HidingProp_C.StartHiding
struct AB_HidingProp_C_StartHiding_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_HidingProp.B_HidingProp_C.TurnClientCameraCollisionOn
struct AB_HidingProp_C_TurnClientCameraCollisionOn_Params
{
};

// Function B_HidingProp.B_HidingProp_C.AddGameplayCue
struct AB_HidingProp_C_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayCueParameters                      CueParameters;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_HidingProp.B_HidingProp_C.RemoveGameplayCue
struct AB_HidingProp_C_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayCueParameters                      CueParameters;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_HidingProp.B_HidingProp_C.ExecuteGameplayCue
struct AB_HidingProp_C_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayCueParameters                      CueParameters;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_HidingProp.B_HidingProp_C.OnMatchStarted
struct AB_HidingProp_C_OnMatchStarted_Params
{
};

// Function B_HidingProp.B_HidingProp_C.ExecuteUbergraph_B_HidingProp
struct AB_HidingProp_C_ExecuteUbergraph_B_HidingProp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
