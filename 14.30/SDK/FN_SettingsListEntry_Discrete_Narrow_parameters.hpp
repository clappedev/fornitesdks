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

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Discrete_Narrow_C_GetPrimaryGamepadFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseEnter
struct USettingsListEntry_Discrete_Narrow_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.OnMouseLeave
struct USettingsListEntry_Discrete_Narrow_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C.ExecuteUbergraph_SettingsListEntry_Discrete_Narrow
struct USettingsListEntry_Discrete_Narrow_C_ExecuteUbergraph_SettingsListEntry_Discrete_Narrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
