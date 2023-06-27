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

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ResetSimulatedComponents
struct AB_Prj_ThrownConsumable_Parent_C_ResetSimulatedComponents_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnRep_bSimulationRunning
struct AB_Prj_ThrownConsumable_Parent_C_OnRep_bSimulationRunning_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocityPawn
struct AB_Prj_ThrownConsumable_Parent_C_SetBounceVelocityPawn_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocity
struct AB_Prj_ThrownConsumable_Parent_C_SetBounceVelocity_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.FuseEnded
struct AB_Prj_ThrownConsumable_Parent_C_FuseEnded_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveAnyDamage
struct AB_Prj_ThrownConsumable_Parent_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_ThrownConsumable_Parent_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct AB_Prj_ThrownConsumable_Parent_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_BuildingActorDied
struct AB_Prj_ThrownConsumable_Parent_C_Event_BuildingActorDied_Params
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

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_OnVehicleDestroyed
struct AB_Prj_ThrownConsumable_Parent_C_Event_OnVehicleDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.RestartSimulating
struct AB_Prj_ThrownConsumable_Parent_C_RestartSimulating_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnBounce
struct AB_Prj_ThrownConsumable_Parent_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnExploded
struct AB_Prj_ThrownConsumable_Parent_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveBeginPlay
struct AB_Prj_ThrownConsumable_Parent_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ExecuteUbergraph_B_Prj_ThrownConsumable_Parent
struct AB_Prj_ThrownConsumable_Parent_C_ExecuteUbergraph_B_Prj_ThrownConsumable_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
