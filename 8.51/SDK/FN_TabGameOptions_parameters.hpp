#pragma once

// Fortnite (8.51) SDK
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

// Function TabGameOptions.TabGameOptions_C.Construct
struct UTabGameOptions_C_Construct_Params
{
};

// Function TabGameOptions.TabGameOptions_C.UpdateOptionsTab
struct UTabGameOptions_C_UpdateOptionsTab_Params
{
};

// Function TabGameOptions.TabGameOptions_C.CenterOnTab
struct UTabGameOptions_C_CenterOnTab_Params
{
};

// Function TabGameOptions.TabGameOptions_C.Tab Settings Changed
struct UTabGameOptions_C_Tab_Settings_Changed_Params
{
};

// Function TabGameOptions.TabGameOptions_C.BndEvt__CommonWidgetSwitcher
struct UTabGameOptions_C_BndEvt__CommonWidgetSwitcher_Params
{
	class UWidget*                                     ActiveWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TabGameOptions.TabGameOptions_C.BndEvt__GameTabs_K2Node_ComponentBoundEvent
struct UTabGameOptions_C_BndEvt__GameTabs_K2Node_ComponentBoundEvent_Params
{
	struct FName                                       TabId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function TabGameOptions.TabGameOptions_C.ExecuteUbergraph_TabGameOptions
struct UTabGameOptions_C_ExecuteUbergraph_TabGameOptions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
