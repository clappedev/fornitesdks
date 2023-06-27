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

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentHit
struct UEntityActorCollisionComponent_OnNativeComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentEndOverlap
struct UEntityActorCollisionComponent_OnNativeComponentEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorCollisionComponent.OnNativeComponentBeginOverlap
struct UEntityActorCollisionComponent_OnNativeComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function EntityActor.EntityActorPositionComponent.OnRootComponentChanged
struct UEntityActorPositionComponent_OnRootComponentChanged_Params
{
	class USceneComponent*                             InRootComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsRootComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorRotationComponent.OnRootComponentChanged
struct UEntityActorRotationComponent_OnRootComponentChanged_Params
{
	class USceneComponent*                             InRootComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsRootComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorScaleComponent.OnRootComponentChanged
struct UEntityActorScaleComponent_OnRootComponentChanged_Params
{
	class USceneComponent*                             InRootComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsRootComponent;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetWorldSize
struct UEntityActorTextDisplayComponent_SetWorldSize_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetVerticalAlignment
struct UEntityActorTextDisplayComponent_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalTextAligment>                 Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetTextRenderColor
struct UEntityActorTextDisplayComponent_SetTextRenderColor_Params
{
	struct FColor                                      Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetText
struct UEntityActorTextDisplayComponent_SetText_Params
{
	struct FText                                       Text;                                                     // (Parm)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeScale
struct UEntityActorTextDisplayComponent_SetRelativeScale_Params
{
	struct FVector                                     RelativeScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeRotation
struct UEntityActorTextDisplayComponent_SetRelativeRotation_Params
{
	struct FRotator                                    RelativeRotation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetRelativeLocation
struct UEntityActorTextDisplayComponent_SetRelativeLocation_Params
{
	struct FVector                                     RelativeLocation;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.SetHorizontalAlignment
struct UEntityActorTextDisplayComponent_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizTextAligment>                    Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetWorldSize
struct UEntityActorTextDisplayComponent_GetWorldSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetVerticalAlignment
struct UEntityActorTextDisplayComponent_GetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalTextAligment>                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetTextRenderColor
struct UEntityActorTextDisplayComponent_GetTextRenderColor_Params
{
	struct FColor                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetText
struct UEntityActorTextDisplayComponent_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetRelativeLocation
struct UEntityActorTextDisplayComponent_GetRelativeLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntityActor.EntityActorTextDisplayComponent.GetHorizontalAlignment
struct UEntityActorTextDisplayComponent_GetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizTextAligment>                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EntityActor.EntityDynamicActivationComponent.OnRep_TransitionTarget
struct UEntityDynamicActivationComponent_OnRep_TransitionTarget_Params
{
};

// Function EntityActor.EntityDynamicActivationComponent.OnEnabledChanged
struct UEntityDynamicActivationComponent_OnEnabledChanged_Params
{
	bool                                               bIsEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
