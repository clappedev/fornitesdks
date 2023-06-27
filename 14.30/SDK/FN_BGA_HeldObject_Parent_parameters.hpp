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

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.Server Only Handle Attach To Vehicle
struct ABGA_HeldObject_Parent_C_Server_Only_Handle_Attach_To_Vehicle_Params
{
	struct FVector                                     HitLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponentToAttachTo;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDetachFromVehicle
struct ABGA_HeldObject_Parent_C_OnDetachFromVehicle_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnAttachedToVehicle
struct ABGA_HeldObject_Parent_C_OnAttachedToVehicle_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_IsAttachedToVehicle
struct ABGA_HeldObject_Parent_C_OnRep_IsAttachedToVehicle_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetBeenThrownPlaced
struct ABGA_HeldObject_Parent_C_SetBeenThrownPlaced_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetCanFirstInteract
struct ABGA_HeldObject_Parent_C_GetCanFirstInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_AttachTransform
struct ABGA_HeldObject_Parent_C_OnRep_AttachTransform_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.SetAttachDefaultTransform
struct ABGA_HeldObject_Parent_C_SetAttachDefaultTransform_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.GetAttachComponent
struct ABGA_HeldObject_Parent_C_GetAttachComponent_Params
{
	class USceneComponent*                             Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.FindAttachAngle
struct ABGA_HeldObject_Parent_C_FindAttachAngle_Params
{
	struct FVector                                     HitLoc;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionTime
struct ABGA_HeldObject_Parent_C_BlueprintGetInteractionTime_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutInteractionTime;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintGetInteractionString
struct ABGA_HeldObject_Parent_C_BlueprintGetInteractionString_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ShouldDie
struct ABGA_HeldObject_Parent_C_ShouldDie_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 EventInstigator;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepHideActor
struct ABGA_HeldObject_Parent_C_OnRep_RepHideActor_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnRep_RepStartMoving
struct ABGA_HeldObject_Parent_C_OnRep_RepStartMoving_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintCanInteract
struct ABGA_HeldObject_Parent_C_BlueprintCanInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETInteractionType>                     InteractionType;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnReady_BC2B03BE47B5044C184341970EAD7AAB
struct ABGA_HeldObject_Parent_C_OnReady_BC2B03BE47B5044C184341970EAD7AAB_Params
{
	class AFortGameStateAthena*                        GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylist*                               Playlist;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       PlaylistContextTags;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnDeathServer
struct ABGA_HeldObject_Parent_C_OnDeathServer_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.HideActor
struct ABGA_HeldObject_Parent_C_HideActor_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.PlayGenericDeath
struct ABGA_HeldObject_Parent_C_PlayGenericDeath_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.AttachSetup
struct ABGA_HeldObject_Parent_C_AttachSetup_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveBeginPlay
struct ABGA_HeldObject_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ResetRelativeTransformOnAttach
struct ABGA_HeldObject_Parent_C_ResetRelativeTransformOnAttach_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveHit
struct ABGA_HeldObject_Parent_C_ReceiveHit_Params
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

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnFirstInteract
struct ABGA_HeldObject_Parent_C_OnFirstInteract_Params
{
	class AFortPawn*                                   Interacting_Pawn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature
struct ABGA_HeldObject_Parent_C_BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnSecondInteract
struct ABGA_HeldObject_Parent_C_OnSecondInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ReceiveDestroyed
struct ABGA_HeldObject_Parent_C_ReceiveDestroyed_Params
{
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.BlueprintOnInteract
struct ABGA_HeldObject_Parent_C_BlueprintOnInteract_Params
{
	class AFortPawn*                                   InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInteractionBeingAttempted>            InteractionBeingAttempted;                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.OnVehicleDestroyed
struct ABGA_HeldObject_Parent_C_OnVehicleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_HeldObject_Parent.BGA_HeldObject_Parent_C.ExecuteUbergraph_BGA_HeldObject_Parent
struct ABGA_HeldObject_Parent_C_ExecuteUbergraph_BGA_HeldObject_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
