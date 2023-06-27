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

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnRep_TurnOffFX
struct APrj_Athena_Bucket_Old_C_OnRep_TurnOffFX_Params
{
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveHit
struct APrj_Athena_Bucket_Old_C_ReceiveHit_Params
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

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnExploded
struct APrj_Athena_Bucket_Old_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature
struct APrj_Athena_Bucket_Old_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.PlayHitSound
struct APrj_Athena_Bucket_Old_C_PlayHitSound_Params
{
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveBeginPlay
struct APrj_Athena_Bucket_Old_C_ReceiveBeginPlay_Params
{
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.Held Water Impact
struct APrj_Athena_Bucket_Old_C_Held_Water_Impact_Params
{
};

// Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ExecuteUbergraph_Prj_Athena_Bucket_Old
struct APrj_Athena_Bucket_Old_C_ExecuteUbergraph_Prj_Athena_Bucket_Old_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
