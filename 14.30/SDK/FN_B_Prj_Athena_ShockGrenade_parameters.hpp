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

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.CalculateLaunchVel
struct AB_Prj_Athena_ShockGrenade_C_CalculateLaunchVel_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Handle Pawn Detach RC
struct AB_Prj_Athena_ShockGrenade_C_Handle_Pawn_Detach_RC_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.UserConstructionScript
struct AB_Prj_Athena_ShockGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_ShockGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnStop
struct AB_Prj_Athena_ShockGrenade_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.Stop_Rotation
struct AB_Prj_Athena_ShockGrenade_C_Stop_Rotation_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnExploded
struct AB_Prj_Athena_ShockGrenade_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Prj_Athena_ShockGrenade_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchDeimos
struct AB_Prj_Athena_ShockGrenade_C_LaunchDeimos_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.OnTouched
struct AB_Prj_Athena_ShockGrenade_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature
struct AB_Prj_Athena_ShockGrenade_C_BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_ShockGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchPlayerVehicle
struct AB_Prj_Athena_ShockGrenade_C_LaunchPlayerVehicle_Params
{
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.LaunchBuldingActors
struct AB_Prj_Athena_ShockGrenade_C_LaunchBuldingActors_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_ShockGrenade.B_Prj_Athena_ShockGrenade_C.ExecuteUbergraph_B_Prj_Athena_ShockGrenade
struct AB_Prj_Athena_ShockGrenade_C_ExecuteUbergraph_B_Prj_Athena_ShockGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
