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

// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.GetPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerOrVehicle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PurpleMouse_Throw_C::GetPlayer(class AActor* PlayerOrVehicle, class AActor** Player)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.GetPlayer");

	UGA_Athena_PurpleMouse_Throw_C_GetPlayer_Params params;
	params.PlayerOrVehicle = PlayerOrVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player != nullptr)
		*Player = params.Player;
}


// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_PurpleMouse_Throw_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_ActivateAbility");

	UGA_Athena_PurpleMouse_Throw_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PurpleMouse_Throw_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.K2_OnEndAbility");

	UGA_Athena_PurpleMouse_Throw_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.ExecuteUbergraph_GA_Athena_PurpleMouse_Throw
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_PurpleMouse_Throw_C::ExecuteUbergraph_GA_Athena_PurpleMouse_Throw(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_PurpleMouse_Throw.GA_Athena_PurpleMouse_Throw_C.ExecuteUbergraph_GA_Athena_PurpleMouse_Throw");

	UGA_Athena_PurpleMouse_Throw_C_ExecuteUbergraph_GA_Athena_PurpleMouse_Throw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
