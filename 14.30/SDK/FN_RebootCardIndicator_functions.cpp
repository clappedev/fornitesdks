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

// Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URebootCardIndicator_C::bp_UpdateCountdownText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText");

	URebootCardIndicator_C_bp_UpdateCountdownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          StartTimeLocalWorld            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTimeLocalWorld              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URebootCardIndicator_C::SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown");

	URebootCardIndicator_C_SetupCountdown_Params params;
	params.StartTimeLocalWorld = StartTimeLocalWorld;
	params.EndTimeLocalWorld = EndTimeLocalWorld;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText
// (BlueprintCallable, BlueprintEvent)

void URebootCardIndicator_C::UpdateCountdownText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText");

	URebootCardIndicator_C_UpdateCountdownText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSelf                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URebootCardIndicator_C::HandleDisplayForSelf(bool bSelf)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf");

	URebootCardIndicator_C_HandleDisplayForSelf_Params params;
	params.bSelf = bSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URebootCardIndicator_C::ExecuteUbergraph_RebootCardIndicator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator");

	URebootCardIndicator_C_ExecuteUbergraph_RebootCardIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
