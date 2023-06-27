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

// Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_Slurp_OLD_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_ActivateAbility");

	UGA_Athena_Slurp_OLD_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Slurp_OLD_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_OnEndAbility");

	UGA_Athena_Slurp_OLD_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ApplyHealthOrShield
// (BlueprintCallable, BlueprintEvent)

void UGA_Athena_Slurp_OLD_C::ApplyHealthOrShield()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ApplyHealthOrShield");

	UGA_Athena_Slurp_OLD_C_ApplyHealthOrShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ExecuteUbergraph_GA_Athena_Slurp_OLD
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Slurp_OLD_C::ExecuteUbergraph_GA_Athena_Slurp_OLD(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ExecuteUbergraph_GA_Athena_Slurp_OLD");

	UGA_Athena_Slurp_OLD_C_ExecuteUbergraph_GA_Athena_Slurp_OLD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
