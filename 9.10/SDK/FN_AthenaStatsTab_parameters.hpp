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

// Function AthenaStatsTab.AthenaStatsTab_C.Init Back Action
struct UAthenaStatsTab_C_Init_Back_Action_Params
{
};

// Function AthenaStatsTab.AthenaStatsTab_C.HandleBack
struct UAthenaStatsTab_C_HandleBack_Params
{
	bool                                               PassThrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.OnActivated
struct UAthenaStatsTab_C_OnActivated_Params
{
};

// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryFinished
struct UAthenaStatsTab_C_OnQueryFinished_Params
{
	bool                                               bWasSuccessful;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bHasStatsToDisplay;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__StatsTabList_K2Node_ComponentBoundEvent
struct UAthenaStatsTab_C_BndEvt__StatsTabList_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.OnQueryStarted
struct UAthenaStatsTab_C_OnQueryStarted_Params
{
};

// Function AthenaStatsTab.AthenaStatsTab_C.OnDeactivated
struct UAthenaStatsTab_C_OnDeactivated_Params
{
};

// Function AthenaStatsTab.AthenaStatsTab_C.Construct
struct UAthenaStatsTab_C_Construct_Params
{
};

// Function AthenaStatsTab.AthenaStatsTab_C.OnInputMethodChanged_Event_1
struct UAthenaStatsTab_C_OnInputMethodChanged_Event_1_Params
{
	ECommonInputType                                   bNewInputType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent
struct UAthenaStatsTab_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.SetPlatformButtonText
struct UAthenaStatsTab_C_SetPlatformButtonText_Params
{
	struct FText                                       PlatformButtonText;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent
struct UAthenaStatsTab_C_BndEvt__MobileCloseButton2_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
struct UAthenaStatsTab_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaStatsTab.AthenaStatsTab_C.ExecuteUbergraph_AthenaStatsTab
struct UAthenaStatsTab_C_ExecuteUbergraph_AthenaStatsTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
