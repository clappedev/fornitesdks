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

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SCMachine_Passive_C::Check_Resurrection_Active(bool* bEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active");

	UGA_Athena_SCMachine_Passive_C_Check_Resurrection_Active_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bEnabled != nullptr)
		*bEnabled = params.bEnabled;
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::SaveOutPlayer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer");

	UGA_Athena_SCMachine_Passive_C_SaveOutPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::Spawn()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn");

	UGA_Athena_SCMachine_Passive_C_Spawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawnAthena*   FortPlayerPawnAthena           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SCMachine_Passive_C::HandleOnFortPlayerDied(class AFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied");

	UGA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied_Params params;
	params.FortPlayerPawnAthena = FortPlayerPawnAthena;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_SCMachine_Passive_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility");

	UGA_Athena_SCMachine_Passive_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_SCMachine_Passive_C::ExecuteUbergraph_GA_Athena_SCMachine_Passive(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive");

	UGA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
