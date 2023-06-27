#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function B_Fragment_Container.B_Fragment_Container_C.IsOutlander
struct AB_Fragment_Container_C_IsOutlander_Params
{
	class AFortPawn*                                   Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsOutlander;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ForceFeedbackInteract
struct AB_Fragment_Container_C_ForceFeedbackInteract_Params
{
	bool                                               Soft;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOrbTaken
struct AB_Fragment_Container_C_OnRep_IsOrbTaken_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOn
struct AB_Fragment_Container_C_OnRep_IsOn_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetOutlander
struct AB_Fragment_Container_C_SetOutlander_Params
{
	class AActor*                                      NewOutlander;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.SetAwake
struct AB_Fragment_Container_C_SetAwake_Params
{
	bool                                               NewAwake;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UpdateShouldTick
struct AB_Fragment_Container_C_UpdateShouldTick_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetFailedInteractionString
struct AB_Fragment_Container_C_BlueprintGetFailedInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_IsOpen
struct AB_Fragment_Container_C_OnRep_IsOpen_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.DelayedDestroy
struct AB_Fragment_Container_C_DelayedDestroy_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnRep_BuffType
struct AB_Fragment_Container_C_OnRep_BuffType_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintGetInteractionString
struct AB_Fragment_Container_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintCanInteract
struct AB_Fragment_Container_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.UserConstructionScript
struct AB_Fragment_Container_C_UserConstructionScript_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__FinishedFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__FinishedFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__UpdateFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__UpdateFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__Up__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__Up__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.VerticalMovementTimeline__down__EventFunc
struct AB_Fragment_Container_C_VerticalMovementTimeline__down__EventFunc_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveBeginPlay
struct AB_Fragment_Container_C_ReceiveBeginPlay_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.OnDeathServer
struct AB_Fragment_Container_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnInteract
struct AB_Fragment_Container_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ActivateFX
struct AB_Fragment_Container_C_ActivateFX_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_108_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature
struct AB_Fragment_Container_C_BndEvt__Awaken_Collision_K2Node_ComponentBoundEvent_111_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.ReceiveTick
struct AB_Fragment_Container_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveUp
struct AB_Fragment_Container_C_MoveUp_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.PowerDown
struct AB_Fragment_Container_C_PowerDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MoveDown
struct AB_Fragment_Container_C_MoveDown_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ShowOnMiniMap
struct AB_Fragment_Container_C_ShowOnMiniMap_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.StartHide
struct AB_Fragment_Container_C_StartHide_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.Reset_Activation
struct AB_Fragment_Container_C_Reset_Activation_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.BlueprintOnBeginInteract
struct AB_Fragment_Container_C_BlueprintOnBeginInteract_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.MultiFeedback
struct AB_Fragment_Container_C_MultiFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.SoftFeedback
struct AB_Fragment_Container_C_SoftFeedback_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.PlayAnimation
struct AB_Fragment_Container_C_PlayAnimation_Params
{
	class UAnimSequence*                               AnimToPlay;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Fragment_Container.B_Fragment_Container_C.AnimationComplete
struct AB_Fragment_Container_C_AnimationComplete_Params
{
};

// Function B_Fragment_Container.B_Fragment_Container_C.ExecuteUbergraph_B_Fragment_Container
struct AB_Fragment_Container_C_ExecuteUbergraph_B_Fragment_Container_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
