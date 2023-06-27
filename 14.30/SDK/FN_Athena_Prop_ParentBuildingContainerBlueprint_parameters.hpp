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

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_GetTimeOfDayBlueprintDefaultVariables_Params
{
	struct FTimeOfDayBlueprintDefaultVariables         OutVariables;                                             // (Parm, OutParm)
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_UserConstructionScript_Params
{
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_ReceiveBeginPlay_Params
{
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>                         CurrentDayPhase;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFortDayPhase>                         PreviousDayPhase;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAtCreation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_Loop_Animation_Curve_Params
{
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData                             Data;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnSetSearched_Params
{
};

// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
