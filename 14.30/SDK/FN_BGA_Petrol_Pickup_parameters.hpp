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

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnLocalInteract
struct ABGA_Petrol_Pickup_C_BlueprintOnLocalInteract_Params
{
	class AFortPlayerPawn*                             InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.CalcVehicleImpulse
struct ABGA_Petrol_Pickup_C_CalcVehicleImpulse_Params
{
	class AActor*                                      Vehicle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Magnitude;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Vector;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ShouldDie
struct ABGA_Petrol_Pickup_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_LastHit
struct ABGA_Petrol_Pickup_C_OnRep_LastHit_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_ShouldExplode
struct ABGA_Petrol_Pickup_C_OnRep_ShouldExplode_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintCanInteract
struct ABGA_Petrol_Pickup_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionString
struct ABGA_Petrol_Pickup_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionTime
struct ABGA_Petrol_Pickup_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnInteract
struct ABGA_Petrol_Pickup_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveDestroyed
struct ABGA_Petrol_Pickup_C_ReceiveDestroyed_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDamageServer
struct ABGA_Petrol_Pickup_C_OnDamageServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnCurieFireballs
struct ABGA_Petrol_Pickup_C_SpawnCurieFireballs_Params
{
	class AFortPawn*                                   Explodeinstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDeathServer
struct ABGA_Petrol_Pickup_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetFuseAndDrop
struct ABGA_Petrol_Pickup_C_SetFuseAndDrop_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnFireBallsExplodeAndDie
struct ABGA_Petrol_Pickup_C_SpawnFireBallsExplodeAndDie_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExplodeAndDie
struct ABGA_Petrol_Pickup_C_ExplodeAndDie_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetHeldItemInfo
struct ABGA_Petrol_Pickup_C_SetHeldItemInfo_Params
{
	TScriptInterface<class UFortInventoryOwnerInterface> InventoryInterface;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGuid                                       Guid;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AFortWeapon*                                 WeaponAttachedTo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.DropHeldItem
struct ABGA_Petrol_Pickup_C_DropHeldItem_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.HideAndDestroy
struct ABGA_Petrol_Pickup_C_HideAndDestroy_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.(ServerOnly)HideAndDestroy
struct ABGA_Petrol_Pickup_C__ServerOnly_HideAndDestroy_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel
struct ABGA_Petrol_Pickup_C_Refuel_Params
{
	int                                                FuelToAdd;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveBeginPlay
struct ABGA_Petrol_Pickup_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct ABGA_Petrol_Pickup_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteract_BP
struct ABGA_Petrol_Pickup_C_OnCurieElementInteract_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteractBegun_BP
struct ABGA_Petrol_Pickup_C_OnCurieElementInteractBegun_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExecuteUbergraph_BGA_Petrol_Pickup
struct ABGA_Petrol_Pickup_C_ExecuteUbergraph_BGA_Petrol_Pickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
