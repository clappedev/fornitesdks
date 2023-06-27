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

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearOnly
struct AB_Prj_Athena_SuperTowerGrenade_C_ClearOnly_Params
{
	TArray<struct FVector>                             ClearedGridCells;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               DestroyFloorsQuickly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CallDynamicBuilder
struct AB_Prj_Athena_SuperTowerGrenade_C_CallDynamicBuilder_Params
{
	class AActor*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CalculateCardinalDirection
struct AB_Prj_Athena_SuperTowerGrenade_C_CalculateCardinalDirection_Params
{
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.HandleProps
struct AB_Prj_Athena_SuperTowerGrenade_C_HandleProps_Params
{
	TArray<class AActor*>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SpawnTires
struct AB_Prj_Athena_SuperTowerGrenade_C_SpawnTires_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ClearAndBuild
struct AB_Prj_Athena_SuperTowerGrenade_C_ClearAndBuild_Params
{
	TArray<struct FVector>                             ClearedGridCells;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               DestroyFloorsQuickly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.CreateBaseSection
struct AB_Prj_Athena_SuperTowerGrenade_C_CreateBaseSection_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.SetBaseDestination
struct AB_Prj_Athena_SuperTowerGrenade_C_SetBaseDestination_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.UserConstructionScript
struct AB_Prj_Athena_SuperTowerGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnStop
struct AB_Prj_Athena_SuperTowerGrenade_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.OnExploded
struct AB_Prj_Athena_SuperTowerGrenade_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveHit
struct AB_Prj_Athena_SuperTowerGrenade_C_ReceiveHit_Params
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

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_SuperTowerGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Handle Bounce
struct AB_Prj_Athena_SuperTowerGrenade_C_Handle_Bounce_Params
{
	struct FVector                                     Hit_Location;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.Delete another actor
struct AB_Prj_Athena_SuperTowerGrenade_C_Delete_another_actor_Params
{
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ReceiveEndPlay
struct AB_Prj_Athena_SuperTowerGrenade_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C.ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade
struct AB_Prj_Athena_SuperTowerGrenade_C_ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
