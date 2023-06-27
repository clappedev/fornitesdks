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

// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Vehicle_ExitHoldEvent_C::EventReceived_7AE1D485464AEC7EB429C3877D33AF69(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69");

	UGA_Vehicle_ExitHoldEvent_C_EventReceived_7AE1D485464AEC7EB429C3877D33AF69_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Vehicle_ExitHoldEvent_C::EventReceived_209BF560404B83EBEAA8DD8090C443AC(const struct FGameplayEventData& Payload)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC");

	UGA_Vehicle_ExitHoldEvent_C_EventReceived_209BF560404B83EBEAA8DD8090C443AC_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Vehicle_ExitHoldEvent_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility");

	UGA_Vehicle_ExitHoldEvent_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Vehicle_ExitHoldEvent_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility");

	UGA_Vehicle_ExitHoldEvent_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Vehicle_ExitHoldEvent_C::ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent");

	UGA_Vehicle_ExitHoldEvent_C_ExecuteUbergraph_GA_Vehicle_ExitHoldEvent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
