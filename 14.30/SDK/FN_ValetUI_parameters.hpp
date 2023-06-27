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

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost
struct UFortAthenaVehicleDashboardWidget_Valet_SetVehicleUsesRechargableBoost_Params
{
	bool                                               bUsesRechargeableBoost;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnValetNameUpdated
struct UFortAthenaVehicleDashboardWidget_Valet_OnValetNameUpdated_Params
{
};

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent
struct UFortAthenaVehicleDashboardWidget_Valet_OnUpdateRechargeableBoostPercent_Params
{
	float                                              BoostPercent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged
struct UFortAthenaVehicleDashboardWidget_Valet_OnRPMChanged_Params
{
	float                                              NormalizedRPM;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRechargableBoostFilled
struct UFortAthenaVehicleDashboardWidget_Valet_OnRechargableBoostFilled_Params
{
};

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle
struct UFortAthenaVehicleDashboardWidget_Valet_GetDagwoodVehicle_Params
{
	class AFortDagwoodVehicle*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
