#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionAlertIndicator.MissionAlertIndicator_C.Config
struct UMissionAlertIndicator_C_Config_Params
{
	EFortMissionAlertCategory                          inCategory;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionAlertIndicator.MissionAlertIndicator_C.Update
struct UMissionAlertIndicator_C_Update_Params
{
};

// Function MissionAlertIndicator.MissionAlertIndicator_C.ToggleTimer
struct UMissionAlertIndicator_C_ToggleTimer_Params
{
	bool                                               IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
