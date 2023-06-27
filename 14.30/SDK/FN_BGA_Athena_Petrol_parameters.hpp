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

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.IgniteNearbyMaterials
struct ABGA_Athena_Petrol_C_IgniteNearbyMaterials_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.Ignite Self
struct ABGA_Athena_Petrol_C_Ignite_Self_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnRep_Lit
struct ABGA_Athena_Petrol_C_OnRep_Lit_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.UserConstructionScript
struct ABGA_Athena_Petrol_C_UserConstructionScript_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ClientOnIgnite
struct ABGA_Athena_Petrol_C_ClientOnIgnite_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABGA_Athena_Petrol_C_BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
struct ABGA_Athena_Petrol_C_BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveBeginPlay
struct ABGA_Athena_Petrol_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.InteractingWithFire
struct ABGA_Athena_Petrol_C_InteractingWithFire_Params
{
	class AActor*                                      OverlappingActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ReceiveDestroyed
struct ABGA_Athena_Petrol_C_ReceiveDestroyed_Params
{
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieElementInteract_BP
struct ABGA_Athena_Petrol_C_OnCurieElementInteract_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCurieInteractParamsHandle                  InteractParamsHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.OnCurieStateDetached_BP
struct ABGA_Athena_Petrol_C_OnCurieStateDetached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                StateTag;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_Athena_Petrol.BGA_Athena_Petrol_C.ExecuteUbergraph_BGA_Athena_Petrol
struct ABGA_Athena_Petrol_C_ExecuteUbergraph_BGA_Athena_Petrol_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
