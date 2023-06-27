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

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_HeldState
struct ABLGA_BattleLab_Parent_C_OnRep_HeldState_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetBeenThrownPlaced
struct ABLGA_BattleLab_Parent_C_SetBeenThrownPlaced_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetCanFirstInteract
struct ABLGA_BattleLab_Parent_C_GetCanFirstInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_AttachTransform
struct ABLGA_BattleLab_Parent_C_OnRep_AttachTransform_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.SetAttachDefaultTransform
struct ABLGA_BattleLab_Parent_C_SetAttachDefaultTransform_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.GetAttachComponent
struct ABLGA_BattleLab_Parent_C_GetAttachComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.FindAttachAngle
struct ABLGA_BattleLab_Parent_C_FindAttachAngle_Params
{
	struct FVector                                     HitLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionTime
struct ABLGA_BattleLab_Parent_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintGetInteractionString
struct ABLGA_BattleLab_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ShouldDie
struct ABLGA_BattleLab_Parent_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepHideActor
struct ABLGA_BattleLab_Parent_C_OnRep_RepHideActor_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnRep_RepStartMoving
struct ABLGA_BattleLab_Parent_C_OnRep_RepStartMoving_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintCanInteract
struct ABLGA_BattleLab_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnDeathServer
struct ABLGA_BattleLab_Parent_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.HideActor
struct ABLGA_BattleLab_Parent_C_HideActor_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.PlayGenericDeath
struct ABLGA_BattleLab_Parent_C_PlayGenericDeath_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveHit
struct ABLGA_BattleLab_Parent_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BlueprintOnInteract
struct ABLGA_BattleLab_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.AttachSetup
struct ABLGA_BattleLab_Parent_C_AttachSetup_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveBeginPlay
struct ABLGA_BattleLab_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ResetRelativeTransformOnAttach
struct ABLGA_BattleLab_Parent_C_ResetRelativeTransformOnAttach_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnFirstInteract
struct ABLGA_BattleLab_Parent_C_OnFirstInteract_Params
{
	class AFortPawn*                                   Interacting_Pawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnSecondInteract
struct ABLGA_BattleLab_Parent_C_OnSecondInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ReceiveDestroyed
struct ABLGA_BattleLab_Parent_C_ReceiveDestroyed_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature_Params
{
	struct FVector                                     ReplicatedVelocity;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnBaseDeviceStartedMoving
struct ABLGA_BattleLab_Parent_C_OnBaseDeviceStartedMoving_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature
struct ABLGA_BattleLab_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature_Params
{
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnHeldObjectStateChangedClient
struct ABLGA_BattleLab_Parent_C_OnHeldObjectStateChangedClient_Params
{
	TEnumAsByte<EBL_HeldState>                         HeldState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.ExecuteUbergraph_BLGA_BattleLab_Parent
struct ABLGA_BattleLab_Parent_C_ExecuteUbergraph_BLGA_BattleLab_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C.OnStartedMoving__DelegateSignature
struct ABLGA_BattleLab_Parent_C_OnStartedMoving__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
