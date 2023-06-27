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

// Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Lotus_Athena_ApplyHeal_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.K2_ActivateAbility");

	UGA_Lotus_Athena_ApplyHeal_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Lotus_Athena_ApplyHeal_C::ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal");

	UGA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
