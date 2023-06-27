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

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ShouldPlayNativeCurieFX
struct ABGA_GenericCurieFuel_Parent_C_ShouldPlayNativeCurieFX_Params
{
	EFortCurieNativeFXType                             FXType;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FFortNativeCurieFXResponse                  OutResponse;                                              // (Parm, OutParm)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.IgniteNearbyMaterials
struct ABGA_GenericCurieFuel_Parent_C_IgniteNearbyMaterials_Params
{
	struct FVector                                     SpherePos;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnRep_ResumeSimulation
struct ABGA_GenericCurieFuel_Parent_C_OnRep_ResumeSimulation_Params
{
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingActor
struct ABGA_GenericCurieFuel_Parent_C_HitBuildingActor_Params
{
	class UObject*                                     ObjectRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveObjectRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingWall
struct ABGA_GenericCurieFuel_Parent_C_HitBuildingWall_Params
{
	class UObject*                                     ObjectRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveObjectRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitVehicle
struct ABGA_GenericCurieFuel_Parent_C_HitVehicle_Params
{
	class UObject*                                     ObjectRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveObjectRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HandleHits
struct ABGA_GenericCurieFuel_Parent_C_HandleHits_Params
{
	class UObject*                                     ObjectRef;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveObjectRef;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.SelfIgnite
struct ABGA_GenericCurieFuel_Parent_C_SelfIgnite_Params
{
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieActive_112B241847E303B58BF962A699068D1C
struct ABGA_GenericCurieFuel_Parent_C_OnCurieActive_112B241847E303B58BF962A699068D1C_Params
{
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.AttachedComponentDied
struct ABGA_GenericCurieFuel_Parent_C_AttachedComponentDied_Params
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

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BaseDied
struct ABGA_GenericCurieFuel_Parent_C_BaseDied_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature
struct ABGA_GenericCurieFuel_Parent_C_BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieElementDetached_BP
struct ABGA_GenericCurieFuel_Parent_C_OnCurieElementDetached_BP_Params
{
	struct FCurieContainerHandle                       CurieContainerHandle;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                ElementTag;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveHit
struct ABGA_GenericCurieFuel_Parent_C_ReceiveHit_Params
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

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveBeginPlay
struct ABGA_GenericCurieFuel_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ExecuteUbergraph_BGA_GenericCurieFuel_Parent
struct ABGA_GenericCurieFuel_Parent_C_ExecuteUbergraph_BGA_GenericCurieFuel_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
