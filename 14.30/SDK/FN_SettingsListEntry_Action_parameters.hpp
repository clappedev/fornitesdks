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

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.GetPrimaryGamepadFocusWidget
struct USettingsListEntry_Action_C_GetPrimaryGamepadFocusWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnSettingAssigned
struct USettingsListEntry_Action_C_OnSettingAssigned_Params
{
	struct FText                                       ActionText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseEnter
struct USettingsListEntry_Action_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.OnMouseLeave
struct USettingsListEntry_Action_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_Action.SettingsListEntry_Action_C.ExecuteUbergraph_SettingsListEntry_Action
struct USettingsListEntry_Action_C_ExecuteUbergraph_SettingsListEntry_Action_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
