#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaRotator.AthenaRotator_C.ConfigureForOneDirectionMode
struct UAthenaRotator_C_ConfigureForOneDirectionMode_Params
{
	bool                                               UseOneDirectionalMode;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.ChangeDirection
struct UAthenaRotator_C_ChangeDirection_Params
{
	bool                                               bDirection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.Construct
struct UAthenaRotator_C_Construct_Params
{
};

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonLeft_K2Node_ComponentBoundEvent
struct UAthenaRotator_C_BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.BndEvt__ButtonRight_K2Node_ComponentBoundEvent
struct UAthenaRotator_C_BndEvt__ButtonRight_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.Tick
struct UAthenaRotator_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.PreConstruct
struct UAthenaRotator_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaRotator.AthenaRotator_C.BP_OnClicked
struct UAthenaRotator_C_BP_OnClicked_Params
{
};

// Function AthenaRotator.AthenaRotator_C.ExecuteUbergraph_AthenaRotator
struct UAthenaRotator_C_ExecuteUbergraph_AthenaRotator_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
