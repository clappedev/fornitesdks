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

// Function GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Interrogate_GC_C::K2_ActivateAbility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility");

	UGA_Interrogate_GC_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Interrogate_GC_C::ExecuteUbergraph_GA_Interrogate_GC(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC");

	UGA_Interrogate_GC_C_ExecuteUbergraph_GA_Interrogate_GC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
