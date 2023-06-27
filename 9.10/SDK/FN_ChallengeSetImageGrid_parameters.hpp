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

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ChangeSortFunction
struct UChallengeSetImageGrid_C_ChangeSortFunction_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.GetWidgetForFramingViewedItem
struct UChallengeSetImageGrid_C_GetWidgetForFramingViewedItem_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.SetDynamicColors
struct UChallengeSetImageGrid_C_SetDynamicColors_Params
{
	class UImage*                                      DetailsDynamicMaterialTarget;                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FFortChallengeSetStyle                      FortChallengeSetStyle;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.HandleBack
struct UChallengeSetImageGrid_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.OnChallengeSetEstablished
struct UChallengeSetImageGrid_C_OnChallengeSetEstablished_Params
{
	struct FFortChallengeSetStyle                      DisplayStyle;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsComplete;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.Construct
struct UChallengeSetImageGrid_C_Construct_Params
{
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
struct UChallengeSetImageGrid_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ChallengeSetImageGrid.ChallengeSetImageGrid_C.ExecuteUbergraph_ChallengeSetImageGrid
struct UChallengeSetImageGrid_C_ExecuteUbergraph_ChallengeSetImageGrid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
