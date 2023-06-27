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

// Function GA_FuelEquipped.GA_FuelEquipped_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_FuelEquipped_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_FuelEquipped.GA_FuelEquipped_C.K2_ActivateAbility");

	UGA_FuelEquipped_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_FuelEquipped.GA_FuelEquipped_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bWasCancelled                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_FuelEquipped_C::K2_OnEndAbility(bool bWasCancelled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_FuelEquipped.GA_FuelEquipped_C.K2_OnEndAbility");

	UGA_FuelEquipped_C_K2_OnEndAbility_Params params;
	params.bWasCancelled = bWasCancelled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_FuelEquipped.GA_FuelEquipped_C.ExecuteUbergraph_GA_FuelEquipped
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_FuelEquipped_C::ExecuteUbergraph_GA_FuelEquipped(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_FuelEquipped.GA_FuelEquipped_C.ExecuteUbergraph_GA_FuelEquipped");

	UGA_FuelEquipped_C_ExecuteUbergraph_GA_FuelEquipped_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
