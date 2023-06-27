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

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.OnTouched
struct AB_Prj_Ranged_DrillRocket_Athena_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveHit
struct AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveHit_Params
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

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Re-Sim
struct AB_Prj_Ranged_DrillRocket_Athena_C_Re_Sim_Params
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

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DamageTicks
struct AB_Prj_Ranged_DrillRocket_Athena_C_DamageTicks_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveTick
struct AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveBeginPlay
struct AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Fired Rocket
struct AB_Prj_Ranged_DrillRocket_Athena_C_Fired_Rocket_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.DistanceCheck
struct AB_Prj_Ranged_DrillRocket_Athena_C_DistanceCheck_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ReceiveDestroyed
struct AB_Prj_Ranged_DrillRocket_Athena_C_ReceiveDestroyed_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Do Impulse
struct AB_Prj_Ranged_DrillRocket_Athena_C_Do_Impulse_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.Add Gravity
struct AB_Prj_Ranged_DrillRocket_Athena_C_Add_Gravity_Params
{
};

// Function B_Prj_Ranged_DrillRocket_Athena.B_Prj_Ranged_DrillRocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena
struct AB_Prj_Ranged_DrillRocket_Athena_C_ExecuteUbergraph_B_Prj_Ranged_DrillRocket_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
