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

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_Line_Trace_for_Mesh_Angle_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveBeginPlay
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_ReceiveHit_Params
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

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Landed In Water
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_Landed_In_Water_Params
{
};

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.SpawnCurieBGA
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_SpawnCurieBGA_Params
{
};

// Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C_ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
