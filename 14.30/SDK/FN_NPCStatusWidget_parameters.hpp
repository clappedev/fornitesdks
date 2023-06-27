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

// Function NPCStatusWidget.NPCStatusWidget_C.Construct
struct UNPCStatusWidget_C_Construct_Params
{
};

// Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus
struct UNPCStatusWidget_C_EventUpdateStatus_Params
{
	float                                              Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus
struct UNPCStatusWidget_C_EventHideStatus_Params
{
};

// Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration
struct UNPCStatusWidget_C_ChangeWidgetVisibleDuration_Params
{
	float                                              StatusWidgetVisibleDuration;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget
struct UNPCStatusWidget_C_ExecuteUbergraph_NPCStatusWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature
struct UNPCStatusWidget_C_VisibilityChanged__DelegateSignature_Params
{
	bool                                               bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
