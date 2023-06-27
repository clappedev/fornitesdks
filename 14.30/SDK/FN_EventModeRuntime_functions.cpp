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

// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
// (Final, Native, Private)
// Parameters:
// class APawn*                   PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void UFortGameFrameworkComponent_EventMode::OnPlayerPawnPossessed(class APawn* PossessedPawn)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed");

	UFortGameFrameworkComponent_EventMode_OnPlayerPawnPossessed_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
// (Final, Native, Private)

void UFortGameFrameworkComponent_EventMode::OnExitVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle");

	UFortGameFrameworkComponent_EventMode_OnExitVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
// (Final, Native, Private)

void UFortGameFrameworkComponent_EventMode::OnEnterVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle");

	UFortGameFrameworkComponent_EventMode_OnEnterVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusing()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing");

	UFortGameFrameworkComponent_EventMode_GetIsFocusing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFortGameFrameworkComponent_EventMode::GetIsFocusAvailable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable");

	UFortGameFrameworkComponent_EventMode_GetIsFocusAvailable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFortGameFrameworkComponent_EventMode::GetIsEventModeActive()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive");

	UFortGameFrameworkComponent_EventMode_GetIsEventModeActive_Params params;

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
