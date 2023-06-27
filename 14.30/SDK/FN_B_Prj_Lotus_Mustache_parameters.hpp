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

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnRep_Impact Location
struct AB_Prj_Lotus_Mustache_C_OnRep_Impact_Location_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.ReceiveBeginPlay
struct AB_Prj_Lotus_Mustache_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnStop
struct AB_Prj_Lotus_Mustache_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Play Explosion Sound
struct AB_Prj_Lotus_Mustache_C_Play_Explosion_Sound_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Reset Explosion Sound
struct AB_Prj_Lotus_Mustache_C_Reset_Explosion_Sound_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Timeout
struct AB_Prj_Lotus_Mustache_C_Timeout_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.Explosion VFX
struct AB_Prj_Lotus_Mustache_C_Explosion_VFX_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnHomingPassedTarget
struct AB_Prj_Lotus_Mustache_C_OnHomingPassedTarget_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnReachedLockTargetDistanceThreshold
struct AB_Prj_Lotus_Mustache_C_OnReachedLockTargetDistanceThreshold_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnBounce
struct AB_Prj_Lotus_Mustache_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnExploded
struct AB_Prj_Lotus_Mustache_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.SpawnedBandageFx
struct AB_Prj_Lotus_Mustache_C_SpawnedBandageFx_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Lotus_Mustache_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.SpawnBandage
struct AB_Prj_Lotus_Mustache_C_SpawnBandage_Params
{
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.OnTouched
struct AB_Prj_Lotus_Mustache_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Lotus_Mustache.B_Prj_Lotus_Mustache_C.ExecuteUbergraph_B_Prj_Lotus_Mustache
struct AB_Prj_Lotus_Mustache_C_ExecuteUbergraph_B_Prj_Lotus_Mustache_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
