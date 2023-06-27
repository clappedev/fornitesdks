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

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Scalar_Narrow_C_GetPrimaryGamepadFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnValueChanged
struct USettingsListEntry_Scalar_Narrow_C_OnValueChanged_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnDefaultValueChanged
struct USettingsListEntry_Scalar_Narrow_C_OnDefaultValueChanged_Params
{
	float                                              DefaultValue;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseEnter
struct USettingsListEntry_Scalar_Narrow_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.OnMouseLeave
struct USettingsListEntry_Scalar_Narrow_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C.ExecuteUbergraph_SettingsListEntry_Scalar_Narrow
struct USettingsListEntry_Scalar_Narrow_C_ExecuteUbergraph_SettingsListEntry_Scalar_Narrow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
