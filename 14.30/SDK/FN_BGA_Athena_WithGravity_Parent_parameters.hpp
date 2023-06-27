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

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init
struct ABGA_Athena_WithGravity_Parent_C_Init_Params
{
	struct FVector                                     GravHitNormal;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach
struct ABGA_Athena_WithGravity_Parent_C_OnAttach_Params
{
	class AActor*                                      AttachedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation
struct ABGA_Athena_WithGravity_Parent_C_RestartSimulation_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor
struct ABGA_Athena_WithGravity_Parent_C_AttachToBindedActor_Params
{
	class UPrimitiveComponent*                         AttachComp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA
struct ABGA_Athena_WithGravity_Parent_C_BounceBGA_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce
struct ABGA_Athena_WithGravity_Parent_C_CheckForSameClassToBounce_Params
{
	class AActor*                                      Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HitSameClass;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision
struct ABGA_Athena_WithGravity_Parent_C_OnRep_RepCollision_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA
struct ABGA_Athena_WithGravity_Parent_C_ForceBounceBGA_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation
struct ABGA_Athena_WithGravity_Parent_C_OnRep_bResumeSimulation_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed
struct ABGA_Athena_WithGravity_Parent_C_BaseDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding
struct ABGA_Athena_WithGravity_Parent_C_HandleBinding_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit
struct ABGA_Athena_WithGravity_Parent_C_ReceiveHit_Params
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

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied
struct ABGA_Athena_WithGravity_Parent_C_BaseDied_Params
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

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim
struct ABGA_Athena_WithGravity_Parent_C_StopSim_Params
{
	struct FHitResult                                  Hit;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay
struct ABGA_Athena_WithGravity_Parent_C_ReceiveBeginPlay_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse
struct ABGA_Athena_WithGravity_Parent_C_Impulse_Params
{
	float                                              DelayBeforeImpulse;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeCollision;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpulseOrigin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpulseAmount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SetCollisionAfterImpulse;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX
struct ABGA_Athena_WithGravity_Parent_C_PlayHitFX_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds
struct ABGA_Athena_WithGravity_Parent_C_SpawnFXSounds_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed
struct ABGA_Athena_WithGravity_Parent_C_AttachedWasDestroyed_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened
struct ABGA_Athena_WithGravity_Parent_C_SlidingDoorOpened_Params
{
};

// Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent
struct ABGA_Athena_WithGravity_Parent_C_ExecuteUbergraph_BGA_Athena_WithGravity_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
