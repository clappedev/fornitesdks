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

// Function RebootVanIndicator.RebootVanIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URebootVanIndicator_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootVanIndicator.RebootVanIndicator_C.Construct");

	URebootVanIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URebootVanIndicator_C::ExecuteUbergraph_RebootVanIndicator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator");

	URebootVanIndicator_C_ExecuteUbergraph_RebootVanIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
