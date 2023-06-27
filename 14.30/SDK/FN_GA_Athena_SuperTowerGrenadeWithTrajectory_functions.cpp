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

// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SpawnTrajectoryIndicator
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSpawnOnEquip                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortProjectileTrajectory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AFortProjectileTrajectory* UGA_Athena_SuperTowerGrenadeWithTrajectory_C::SpawnTrajectoryIndicator(bool bSpawnOnEquip)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SpawnTrajectoryIndicator");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_SpawnTrajectoryIndicator_Params params;
	params.bSpawnOnEquip = bSpawnOnEquip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::SetupDummyProjectileRed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.SetupDummyProjectileRed");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SuperTowerGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SuperTowerGrenadeWithTrajectory.GA_Athena_SuperTowerGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory");

	UGA_Athena_SuperTowerGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_SuperTowerGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
