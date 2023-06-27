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

// Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature
struct AProp_TirePile_Tower_C_BndEvt__Jump_Collision_K2Node_ComponentBoundEvent_252_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.Reset Bounce Sound
struct AProp_TirePile_Tower_C_Reset_Bounce_Sound_Params
{
};

// Function Prop_TirePile_Tower.Prop_TirePile_Tower_C.ExecuteUbergraph_Prop_TirePile_Tower
struct AProp_TirePile_Tower_C_ExecuteUbergraph_Prop_TirePile_Tower_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
