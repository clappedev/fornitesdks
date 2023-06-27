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

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckForWater_
struct AB_Prj_Athena_BGASpawner_C_CheckForWater__Params
{
	struct FVector                                     CurrPos;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PosAboveWater;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.GetClosestPoint
struct AB_Prj_Athena_BGASpawner_C_GetClosestPoint_Params
{
	class UPrimitiveComponent*                         Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     StartingPoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.SpawnBGA_
struct AB_Prj_Athena_BGASpawner_C_SpawnBGA__Params
{
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               FromWater;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.WillBounceOffTarget
struct AB_Prj_Athena_BGASpawner_C_WillBounceOffTarget_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ReceiveHit
struct AB_Prj_Athena_BGASpawner_C_ReceiveHit_Params
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

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_BGASpawner_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.Held Water Impact
struct AB_Prj_Athena_BGASpawner_C_Held_Water_Impact_Params
{
};

// Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner
struct AB_Prj_Athena_BGASpawner_C_ExecuteUbergraph_B_Prj_Athena_BGASpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
