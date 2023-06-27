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

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetPlaysetData
struct AB_Prj_Athena_PlaysetGrenade_C_SetPlaysetData_Params
{
	class UFortPlaysetItemDefinition*                  NewPlayset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.CalculateCardinalDirection
struct AB_Prj_Athena_PlaysetGrenade_C_CalculateCardinalDirection_Params
{
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SetBaseDestination
struct AB_Prj_Athena_PlaysetGrenade_C_SetBaseDestination_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.UserConstructionScript
struct AB_Prj_Athena_PlaysetGrenade_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnLoaded_3645F4484F4ECED813C69D92F55C7A1F
struct AB_Prj_Athena_PlaysetGrenade_C_OnLoaded_3645F4484F4ECED813C69D92F55C7A1F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnStop
struct AB_Prj_Athena_PlaysetGrenade_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.OnExploded
struct AB_Prj_Athena_PlaysetGrenade_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveHit
struct AB_Prj_Athena_PlaysetGrenade_C_ReceiveHit_Params
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

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_PlaysetGrenade_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ReceiveEndPlay
struct AB_Prj_Athena_PlaysetGrenade_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.SpawnPlayspaceServer
struct AB_Prj_Athena_PlaysetGrenade_C_SpawnPlayspaceServer_Params
{
	class UFortPlaysetItemDefinition*                  Playset;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.Play Spawn Prefab Sound
struct AB_Prj_Athena_PlaysetGrenade_C_Play_Spawn_Prefab_Sound_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C.ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade
struct AB_Prj_Athena_PlaysetGrenade_C_ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
