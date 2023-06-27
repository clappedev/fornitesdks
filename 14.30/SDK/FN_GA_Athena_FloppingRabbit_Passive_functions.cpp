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

// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Athena_FloppingRabbit_Passive_C::SaveOutRod()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SaveOutRod");

	UGA_Athena_FloppingRabbit_Passive_C_SaveOutRod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HideBobber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortWeapon*             CurrentWeapon                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AB_FloppingRabbit_Weap_Athena_C* CastedToRabbitWeapon           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_FloppingRabbit_Passive_C::SetBobberHidden(bool HideBobber, class AFortWeapon** CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C** CastedToRabbitWeapon)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.SetBobberHidden");

	UGA_Athena_FloppingRabbit_Passive_C_SetBobberHidden_Params params;
	params.HideBobber = HideBobber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWeapon != nullptr)
		*CurrentWeapon = params.CurrentWeapon;
	if (CastedToRabbitWeapon != nullptr)
		*CastedToRabbitWeapon = params.CastedToRabbitWeapon;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Removed_DCA556AE47E7D8C25D9A27899D5C963C
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_FloppingRabbit_Passive_C::Removed_DCA556AE47E7D8C25D9A27899D5C963C()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Removed_DCA556AE47E7D8C25D9A27899D5C963C");

	UGA_Athena_FloppingRabbit_Passive_C_Removed_DCA556AE47E7D8C25D9A27899D5C963C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_FloppingRabbit_Passive_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_ActivateAbilityFromEvent");

	UGA_Athena_FloppingRabbit_Passive_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_FloppingRabbit_Passive_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.K2_OnEndAbility");

	UGA_Athena_FloppingRabbit_Passive_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeatIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_FloppingRabbit_Passive_C::Seat_Changed(int SeatIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.Seat Changed");

	UGA_Athena_FloppingRabbit_Passive_C_Seat_Changed_Params params;
	params.SeatIndex = SeatIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_FloppingRabbit_Passive_C::EndFishing()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.EndFishing");

	UGA_Athena_FloppingRabbit_Passive_C_EndFishing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_FloppingRabbit_Passive_C::ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive");

	UGA_Athena_FloppingRabbit_Passive_C_ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
