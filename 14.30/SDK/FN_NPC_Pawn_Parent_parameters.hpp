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

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone
struct ANPC_Pawn_Parent_C_NPC_CheckIsInSafeZone_Params
{
	bool                                               TestSucceeded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isInSafeZone;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice
struct ANPC_Pawn_Parent_C_NPC_HandleAlertLevelVoice_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath
struct ANPC_Pawn_Parent_C_NPC_TryToDropLootOnDeath_Params
{
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               CanDropLoot;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling
struct ANPC_Pawn_Parent_C_NPC_ApplyGameplayEffectWithMMRScaling_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGameplayEffect*                             GE_Class;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard
struct ANPC_Pawn_Parent_C_NPC_SetLootCollectionPhaseCompleteToBlackboard_Params
{
	bool                                               LootCollectionPhaseComplete;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate
struct ANPC_Pawn_Parent_C_NPC_ResetOriginalRotationRate_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale
struct ANPC_Pawn_Parent_C_NPC_ResetOriginalGravityScale_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard
struct ANPC_Pawn_Parent_C_NPC_SetReturnGatheredLootToBlackboard_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue
struct ANPC_Pawn_Parent_C_NPC_GetScalableFloatHotfixValue_Params
{
	struct FScalableFloat                              ScalableFloatHotfix;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              AtLevel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AsBool;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                AsIntRounded;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              AsFloat;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid
struct ANPC_Pawn_Parent_C_NPC_ScalableFloatIsValid_Params
{
	struct FScalableFloat                              ScalableFloat;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped
struct ANPC_Pawn_Parent_C_NPC_PickupDropped_Params
{
	class AFortPickup*                                 FortPickupDropped;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed
struct ANPC_Pawn_Parent_C_NPC_PickupGrabbed_Params
{
	class AFortPickup*                                 FortPickupGrabbed;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory
struct ANPC_Pawn_Parent_C_OnRep_NPC_BestLootRarityInInventory_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed
struct ANPC_Pawn_Parent_C_NPC_SendGameplayCuePickupGrabbed_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage
struct ANPC_Pawn_Parent_C_NPC_PawnDebugMessage_Params
{
	struct FString                                     String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               OnlyWhenDebug;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation
struct ANPC_Pawn_Parent_C_NPC_GetInventoryInformation_Params
{
	bool                                               HasItemInInventory;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TotalNumberOfInventoryItems;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                LastInventoryItemIndex;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasEnoughItemsToDeliver;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumedEnoughItemsToBeConsideredFull;                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory
struct ANPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory_Params
{
	EFortRarity                                        NPC_BestLootRarityInInventory;                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel
struct ANPC_Pawn_Parent_C_OnRep_NPC_AlertLevel_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo
struct ANPC_Pawn_Parent_C_NPC_GetAlertLevelInfo_Params
{
	TEnumAsByte<Enum_NPC_AlertLevel>                   AlertLevel;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTag                                AlertLevelTag;                                            // (Parm, OutParm)
	bool                                               ValidDataFound;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTag
struct ANPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTag_Params
{
	class UGameplayEffect*                             RecentlyDamagedOverride;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh
struct ANPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer
struct ANPC_Pawn_Parent_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects
struct ANPC_Pawn_Parent_C_OnDamagePlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay
struct ANPC_Pawn_Parent_C_ReceiveBeginPlay_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems
struct ANPC_Pawn_Parent_C_GrantStartingItems_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay
struct ANPC_Pawn_Parent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged
struct ANPC_Pawn_Parent_C_WidgetVisibilityChanged_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle
struct ANPC_Pawn_Parent_C_NPC_ParentLaunchVehicle_Params
{
	class AActor*                                      Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot
struct ANPC_Pawn_Parent_C_TestLoot_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects
struct ANPC_Pawn_Parent_C_OnDeathPlayEffects_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AFortPawn*                                   InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetupHealthBarOnDeath
struct ANPC_Pawn_Parent_C_NPC_SetupHealthBarOnDeath_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed
struct ANPC_Pawn_Parent_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel
struct ANPC_Pawn_Parent_C_RequestUpdateNPCAlertLevel_Params
{
	TEnumAsByte<Enum_NPC_AlertLevel>                   NPC_AlertLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChanged
struct ANPC_Pawn_Parent_C_NPCAlertLevelChanged_Params
{
	TEnumAsByte<Enum_NPC_AlertLevel>                   NPC_AlertLevel;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO
struct ANPC_Pawn_Parent_C_NPC_InitializeIdleVO_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO
struct ANPC_Pawn_Parent_C_TriggerIdleVO_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer
struct ANPC_Pawn_Parent_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars
struct ANPC_Pawn_Parent_C_NPCEnableHealthBars_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars
struct ANPC_Pawn_Parent_C_NPCDisableHealthBars_Params
{
};

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent
struct ANPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
