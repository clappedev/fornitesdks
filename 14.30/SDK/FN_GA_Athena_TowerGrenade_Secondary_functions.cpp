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

// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_TowerGrenade_Secondary_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.SpawnTrajectoryIndicator");

	UGA_Athena_TowerGrenade_Secondary_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenade_Secondary_C::SetupDummyProjectileRed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.SetupDummyProjectileRed");

	UGA_Athena_TowerGrenade_Secondary_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.IsTrajectoryHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGA_Athena_TowerGrenade_Secondary_C::IsTrajectoryHidden()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.IsTrajectoryHidden");

	UGA_Athena_TowerGrenade_Secondary_C_IsTrajectoryHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_TowerGrenade_Secondary_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.K2_ActivateAbility");

	UGA_Athena_TowerGrenade_Secondary_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.CleanupTrajectory
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenade_Secondary_C::CleanupTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.CleanupTrajectory");

	UGA_Athena_TowerGrenade_Secondary_C_CleanupTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenade_Secondary_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.UpdateTrajectorySpline");

	UGA_Athena_TowerGrenade_Secondary_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.ExecuteUbergraph_GA_Athena_TowerGrenade_Secondary
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_TowerGrenade_Secondary_C::ExecuteUbergraph_GA_Athena_TowerGrenade_Secondary(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenade_Secondary.GA_Athena_TowerGrenade_Secondary_C.ExecuteUbergraph_GA_Athena_TowerGrenade_Secondary");

	UGA_Athena_TowerGrenade_Secondary_C_ExecuteUbergraph_GA_Athena_TowerGrenade_Secondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
