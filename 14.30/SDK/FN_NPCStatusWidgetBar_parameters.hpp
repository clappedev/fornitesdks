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

// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct
struct UNPCStatusWidgetBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent
struct UNPCStatusWidgetBar_C_SetPercent_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar
struct UNPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
