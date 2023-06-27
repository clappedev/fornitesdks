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

// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Athena_DangerGrape_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.K2_ActivateAbility");

	UGA_Athena_DangerGrape_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.ExecuteUbergraph_GA_Athena_DangerGrape
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_DangerGrape_C::ExecuteUbergraph_GA_Athena_DangerGrape(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_DangerGrape.GA_Athena_DangerGrape_C.ExecuteUbergraph_GA_Athena_DangerGrape");

	UGA_Athena_DangerGrape_C_ExecuteUbergraph_GA_Athena_DangerGrape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
