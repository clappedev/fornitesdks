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

// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaysetItemDefinition* OutData                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_GetActivePlaysetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutData != nullptr)
		*OutData = params.OutData;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_OnEndAbility");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*     Projectile_Reference           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetPlaysetData(class AFortProjectileBase* Projectile_Reference)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetPlaysetData_Params params;
	params.Projectile_Reference = Projectile_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::SetActivePlaysetOnPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_SetActivePlaysetOnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C::ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory");

	UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C_ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
