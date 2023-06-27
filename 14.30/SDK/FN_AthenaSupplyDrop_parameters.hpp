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

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnVehicle
struct AAthenaSupplyDrop_C_SpawnVehicle_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Analytics
struct AAthenaSupplyDrop_C_Analytics_Params
{
	TArray<struct FFortItemEntry>                      ItemsToSpawn;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnSetCustomDepthStencilValue
struct AAthenaSupplyDrop_C_OnSetCustomDepthStencilValue_Params
{
	TArray<class UPrimitiveComponent*>                 PrimComponents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bUseCustomDepth;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StencilValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutConsume;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.HandleProjectileMovementStop
struct AAthenaSupplyDrop_C_HandleProjectileMovementStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ForceSetLocationOnLanding
struct AAthenaSupplyDrop_C_ForceSetLocationOnLanding_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_LandingLocation
struct AAthenaSupplyDrop_C_OnRep_LandingLocation_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.AlmostLanded
struct AAthenaSupplyDrop_C_AlmostLanded_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DisableFlare
struct AAthenaSupplyDrop_C_DisableFlare_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFallHeightAndSpeed
struct AAthenaSupplyDrop_C_InitFallHeightAndSpeed_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.PlayLandingFX
struct AAthenaSupplyDrop_C_PlayLandingFX_Params
{
	bool                                               bSpawnVFX;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.InitFall
struct AAthenaSupplyDrop_C_InitFall_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_BalloonPopped
struct AAthenaSupplyDrop_C_OnRep_BalloonPopped_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BalloonDestroyed
struct AAthenaSupplyDrop_C_BalloonDestroyed_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UpdateReticleLocation
struct AAthenaSupplyDrop_C_UpdateReticleLocation_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OpenSupplyDrop
struct AAthenaSupplyDrop_C_OpenSupplyDrop_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnRep_Opened
struct AAthenaSupplyDrop_C_OnRep_Opened_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Setup Bind To Building Actor
struct AAthenaSupplyDrop_C_Setup_Bind_To_Building_Actor_Params
{
	class UObject*                                     Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintGetInteractionString
struct AAthenaSupplyDrop_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.GetLootSpawnLocation
struct AAthenaSupplyDrop_C_GetLootSpawnLocation_Params
{
	struct FVector                                     LootSpawnLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SpawnLoot
struct AAthenaSupplyDrop_C_SpawnLoot_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintCanInteract
struct AAthenaSupplyDrop_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.UserConstructionScript
struct AAthenaSupplyDrop_C_UserConstructionScript_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ReceiveBeginPlay
struct AAthenaSupplyDrop_C_ReceiveBeginPlay_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLandingLocationChanged
struct AAthenaSupplyDrop_C_OnLandingLocationChanged_Params
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

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Multicast_ApplyGravityForFall
struct AAthenaSupplyDrop_C_Multicast_ApplyGravityForFall_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathServer
struct AAthenaSupplyDrop_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BlueprintOnInteract
struct AAthenaSupplyDrop_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDeathPlayEffects
struct AAthenaSupplyDrop_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BeginFallAudioTimeline
struct AAthenaSupplyDrop_C_BeginFallAudioTimeline_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.StopFallAudioTimeline
struct AAthenaSupplyDrop_C_StopFallAudioTimeline_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnLanding
struct AAthenaSupplyDrop_C_OnLanding_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.TimerCheckPlayerDistance
struct AAthenaSupplyDrop_C_TimerCheckPlayerDistance_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.DestroyGroundComponents
struct AAthenaSupplyDrop_C_DestroyGroundComponents_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.Play Looted Dialogue
struct AAthenaSupplyDrop_C_Play_Looted_Dialogue_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature
struct AAthenaSupplyDrop_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.SetupQuestData
struct AAthenaSupplyDrop_C_SetupQuestData_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature
struct AAthenaSupplyDrop_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.OnDelayedSpawnLoot
struct AAthenaSupplyDrop_C_OnDelayedSpawnLoot_Params
{
};

// Function AthenaSupplyDrop.AthenaSupplyDrop_C.ExecuteUbergraph_AthenaSupplyDrop
struct AAthenaSupplyDrop_C_ExecuteUbergraph_AthenaSupplyDrop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
