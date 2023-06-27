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

// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Is Trajectory Hidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHidden                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_TowerGrenadeWithTrajectory_C::Is_Trajectory_Hidden(bool* IsHidden)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Is Trajectory Hidden");

	UGA_Athena_TowerGrenadeWithTrajectory_C_Is_Trajectory_Hidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHidden != nullptr)
		*IsHidden = params.IsHidden;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_TowerGrenadeWithTrajectory_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SpawnTrajectoryIndicator");

	UGA_Athena_TowerGrenadeWithTrajectory_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::SetupDummyProjectileRed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.SetupDummyProjectileRed");

	UGA_Athena_TowerGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_TowerGrenadeWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_TowerGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_TowerGrenadeWithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_TowerGrenadeWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_TowerGrenadeWithTrajectory_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_TowerGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_TowerGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_TowerGrenadeWithTrajectory.GA_Athena_TowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory");

	UGA_Athena_TowerGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_TowerGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
