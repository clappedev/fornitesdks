// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsesRechargeableBoost         (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaVehicleDashboardWidget_Valet::SetVehicleUsesRechargableBoost(bool bUsesRechargeableBoost)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.SetVehicleUsesRechargableBoost");

	UFortAthenaVehicleDashboardWidget_Valet_SetVehicleUsesRechargableBoost_Params params;
	params.bUsesRechargeableBoost = bUsesRechargeableBoost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnValetNameUpdated
// (Event, Protected, BlueprintEvent)

void UFortAthenaVehicleDashboardWidget_Valet::OnValetNameUpdated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnValetNameUpdated");

	UFortAthenaVehicleDashboardWidget_Valet_OnValetNameUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          BoostPercent                   (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaVehicleDashboardWidget_Valet::OnUpdateRechargeableBoostPercent(float BoostPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnUpdateRechargeableBoostPercent");

	UFortAthenaVehicleDashboardWidget_Valet_OnUpdateRechargeableBoostPercent_Params params;
	params.BoostPercent = BoostPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          NormalizedRPM                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortAthenaVehicleDashboardWidget_Valet::OnRPMChanged(float NormalizedRPM)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRPMChanged");

	UFortAthenaVehicleDashboardWidget_Valet_OnRPMChanged_Params params;
	params.NormalizedRPM = NormalizedRPM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRechargableBoostFilled
// (Event, Protected, BlueprintEvent)

void UFortAthenaVehicleDashboardWidget_Valet::OnRechargableBoostFilled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.OnRechargableBoostFilled");

	UFortAthenaVehicleDashboardWidget_Valet_OnRechargableBoostFilled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortDagwoodVehicle*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortDagwoodVehicle* UFortAthenaVehicleDashboardWidget_Valet::GetDagwoodVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ValetUI.FortAthenaVehicleDashboardWidget_Valet.GetDagwoodVehicle");

	UFortAthenaVehicleDashboardWidget_Valet_GetDagwoodVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
