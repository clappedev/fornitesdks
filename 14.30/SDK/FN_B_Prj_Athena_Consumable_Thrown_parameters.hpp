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

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Pickup
struct AB_Prj_Athena_Consumable_Thrown_C_OnRep_Pickup_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnRep_Impact Location
struct AB_Prj_Athena_Consumable_Thrown_C_OnRep_Impact_Location_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ReceiveBeginPlay
struct AB_Prj_Athena_Consumable_Thrown_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnStop
struct AB_Prj_Athena_Consumable_Thrown_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Timeout
struct AB_Prj_Athena_Consumable_Thrown_C_Timeout_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnHomingPassedTarget
struct AB_Prj_Athena_Consumable_Thrown_C_OnHomingPassedTarget_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnReachedLockTargetDistanceThreshold
struct AB_Prj_Athena_Consumable_Thrown_C_OnReachedLockTargetDistanceThreshold_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnBounce
struct AB_Prj_Athena_Consumable_Thrown_C_OnBounce_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.OnExploded
struct AB_Prj_Athena_Consumable_Thrown_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnedItemFx
struct AB_Prj_Athena_Consumable_Thrown_C_SpawnedItemFx_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.Mark
struct AB_Prj_Athena_Consumable_Thrown_C_Mark_Params
{
	class AActor*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_Consumable_Thrown_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.SpawnItem
struct AB_Prj_Athena_Consumable_Thrown_C_SpawnItem_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.WaterImpactItemFX
struct AB_Prj_Athena_Consumable_Thrown_C_WaterImpactItemFX_Params
{
};

// Function B_Prj_Athena_Consumable_Thrown.B_Prj_Athena_Consumable_Thrown_C.ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown
struct AB_Prj_Athena_Consumable_Thrown_C_ExecuteUbergraph_B_Prj_Athena_Consumable_Thrown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
