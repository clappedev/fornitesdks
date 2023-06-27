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

// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.DestroyProjectileTrajectory
// (Private, BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::DestroyProjectileTrajectory()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.DestroyProjectileTrajectory");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_DestroyProjectileTrajectory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CalculateRotation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition* Playset                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::CalculateRotation(class UFortPlaysetItemDefinition* Playset, const struct FRotator& Rotation, struct FRotator* NewRotation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CalculateRotation");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_CalculateRotation_Params params;
	params.Playset = Playset;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::SetActivePlaysetOnPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetActivePlaysetOnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile_Reference           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::SetPlaysetData(class AFortProjectileBase* Projectile_Reference)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetPlaysetData");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetPlaysetData_Params params;
	params.Projectile_Reference = Projectile_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition* OutData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetupDummyProjectileRed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::SetupDummyProjectileRed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetupDummyProjectileRed");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_SetupDummyProjectileRed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.UpdateTrajectorySpline
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::UpdateTrajectorySpline()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.UpdateTrajectorySpline");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_UpdateTrajectorySpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CleanupTrajectoryDisplay
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::CleanupTrajectoryDisplay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CleanupTrajectoryDisplay");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_CleanupTrajectoryDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.Server_SpawnProjectile
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.Server_SpawnProjectile");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_Server_SpawnProjectile_Params params;
	params.Location = Location;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.InitTrajectoryVariables
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::InitTrajectoryVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.InitTrajectoryVariables");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_InitTrajectoryVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.AthenaProjectileSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     ProjectileReference            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.AthenaProjectileSpawned");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_AthenaProjectileSpawned_Params params;
	params.ProjectileReference = ProjectileReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.OnAbilityInputReleased
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::OnAbilityInputReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.OnAbilityInputReleased");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_OnAbilityInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PlaysetGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory");

	UGA_Athena_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
