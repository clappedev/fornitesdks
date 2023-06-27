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

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
struct UFortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed_Params
{
	class APawn*                                       PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
struct UFortGameFrameworkComponent_EventMode_OnExitVehicle_Params
{
};

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
struct UFortGameFrameworkComponent_EventMode_OnEnterVehicle_Params
{
};

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
struct UFortGameFrameworkComponent_EventMode_GetIsFocusing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
struct UFortGameFrameworkComponent_EventMode_GetIsFocusAvailable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
struct UFortGameFrameworkComponent_EventMode_GetIsEventModeActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
