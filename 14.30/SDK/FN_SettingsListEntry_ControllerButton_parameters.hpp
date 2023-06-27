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

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.OnSettingAssigned
struct USettingsListEntry_ControllerButton_C_OnSettingAssigned_Params
{
	struct FText                                       ActionText;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C.ExecuteUbergraph_SettingsListEntry_ControllerButton
struct USettingsListEntry_ControllerButton_C_ExecuteUbergraph_SettingsListEntry_ControllerButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
