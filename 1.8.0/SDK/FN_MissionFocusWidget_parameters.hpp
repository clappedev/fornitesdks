#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionFocusWidget.MissionFocusWidget_C.UpdateVisibility
struct UMissionFocusWidget_C_UpdateVisibility_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.HandleFocusedMission
struct UMissionFocusWidget_C_HandleFocusedMission_Params
{
	class AFortMission*                                FocusedMission;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionFocusWidget.MissionFocusWidget_C.HandleTimerComponentChanged
struct UMissionFocusWidget_C_HandleTimerComponentChanged_Params
{
	class UFortMissionTimerComponent*                  TimerComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionFocusWidget.MissionFocusWidget_C.UpdateTimer
struct UMissionFocusWidget_C_UpdateTimer_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.Construct
struct UMissionFocusWidget_C_Construct_Params
{
};

// Function MissionFocusWidget.MissionFocusWidget_C.ExecuteUbergraph_MissionFocusWidget
struct UMissionFocusWidget_C_ExecuteUbergraph_MissionFocusWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
