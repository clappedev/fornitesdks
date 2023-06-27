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

// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.EventReceived_701E84994BAF28AF698A42AD84CCF06E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_HeldObject_AbilityWeapon_C::EventReceived_701E84994BAF28AF698A42AD84CCF06E(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.EventReceived_701E84994BAF28AF698A42AD84CCF06E");

	UGA_HeldObject_AbilityWeapon_C_EventReceived_701E84994BAF28AF698A42AD84CCF06E_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_HeldObject_AbilityWeapon_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_ActivateAbility");

	UGA_HeldObject_AbilityWeapon_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_AbilityWeapon_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.K2_OnEndAbility");

	UGA_HeldObject_AbilityWeapon_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.ExecuteUbergraph_GA_HeldObject_AbilityWeapon
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_HeldObject_AbilityWeapon_C::ExecuteUbergraph_GA_HeldObject_AbilityWeapon(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_HeldObject_AbilityWeapon.GA_HeldObject_AbilityWeapon_C.ExecuteUbergraph_GA_HeldObject_AbilityWeapon");

	UGA_HeldObject_AbilityWeapon_C_ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
