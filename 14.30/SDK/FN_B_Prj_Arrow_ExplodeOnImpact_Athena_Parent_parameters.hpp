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

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnRep_HitLocation
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_OnRep_HitLocation_Params
{
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.UserConstructionScript
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_UserConstructionScript_Params
{
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.Event_Building_Actor_Destroyed
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_Event_Building_Actor_Destroyed_Params
{
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ReceiveBeginPlay
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_ReceiveBeginPlay_Params
{
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnTouched
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_OnTouched_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               bIsOverlap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature_Params
{
	class AFortWaterBodyActor*                         WaterBody;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortWaterInteractionComponent*              WaterInteractionComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstBody;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C_ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
