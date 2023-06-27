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

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.CheckForGiftedTargets
struct AB_Prj_Athena_GiftBox_C_CheckForGiftedTargets_Params
{
	struct FVector                                     TraceLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.SpawnProps
struct AB_Prj_Athena_GiftBox_C_SpawnProps_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ClearOnly
struct AB_Prj_Athena_GiftBox_C_ClearOnly_Params
{
	TArray<struct FVector>                             ClearedGridCells;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               DestroyFloorsQuickly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.CallDynamicBuilder
struct AB_Prj_Athena_GiftBox_C_CallDynamicBuilder_Params
{
	class AActor*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.CalculateCardinalDirection
struct AB_Prj_Athena_GiftBox_C_CalculateCardinalDirection_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.HandleProps
struct AB_Prj_Athena_GiftBox_C_HandleProps_Params
{
	TArray<class AActor*>                              Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.SpawnContents
struct AB_Prj_Athena_GiftBox_C_SpawnContents_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ClearAndBuild
struct AB_Prj_Athena_GiftBox_C_ClearAndBuild_Params
{
	TArray<struct FVector>                             ClearedGridCells;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class AActor*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               DestroyFloorsQuickly;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.CreateBaseSection
struct AB_Prj_Athena_GiftBox_C_CreateBaseSection_Params
{
	struct FVector                                     ReferenceLocation;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              BGAClassArray;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FVector>                             BGALocationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FRotator>                            BGARotationArray;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.SetBaseDestination
struct AB_Prj_Athena_GiftBox_C_SetBaseDestination_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.UserConstructionScript
struct AB_Prj_Athena_GiftBox_C_UserConstructionScript_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.OnStop
struct AB_Prj_Athena_GiftBox_C_OnStop_Params
{
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.OnExploded
struct AB_Prj_Athena_GiftBox_C_OnExploded_Params
{
	TArray<class AActor*>                              HitActors;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                          HitResults;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ReceiveHit
struct AB_Prj_Athena_GiftBox_C_ReceiveHit_Params
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

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ReceiveBeginPlay
struct AB_Prj_Athena_GiftBox_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.Handle Bounce
struct AB_Prj_Athena_GiftBox_C_Handle_Bounce_Params
{
	struct FVector                                     Hit_Location;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.Delete another actor
struct AB_Prj_Athena_GiftBox_C_Delete_another_actor_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ReceiveEndPlay
struct AB_Prj_Athena_GiftBox_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.OnBeginPlayQuestCheck
struct AB_Prj_Athena_GiftBox_C_OnBeginPlayQuestCheck_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.Play Quest Success FX
struct AB_Prj_Athena_GiftBox_C_Play_Quest_Success_FX_Params
{
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_GiftBox_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_GiftBox.B_Prj_Athena_GiftBox_C.ExecuteUbergraph_B_Prj_Athena_GiftBox
struct AB_Prj_Athena_GiftBox_C_ExecuteUbergraph_B_Prj_Athena_GiftBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
