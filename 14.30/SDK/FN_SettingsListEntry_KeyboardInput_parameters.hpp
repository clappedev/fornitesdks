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

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText
struct USettingsListEntry_KeyboardInput_C_OnUpdateKeyText_Params
{
	struct FText                                       PrimaryKeyText;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       SecondaryKeyText;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter
struct USettingsListEntry_KeyboardInput_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave
struct USettingsListEntry_KeyboardInput_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput
struct USettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
