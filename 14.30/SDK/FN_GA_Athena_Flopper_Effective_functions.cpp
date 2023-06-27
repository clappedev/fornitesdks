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

// Function GA_Athena_Flopper_Effective.GA_Athena_Flopper_Effective_C.K2_CommitExecute
// (Event, Public, BlueprintEvent)

void UGA_Athena_Flopper_Effective_C::K2_CommitExecute()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Flopper_Effective.GA_Athena_Flopper_Effective_C.K2_CommitExecute");

	UGA_Athena_Flopper_Effective_C_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GA_Athena_Flopper_Effective.GA_Athena_Flopper_Effective_C.ExecuteUbergraph_GA_Athena_Flopper_Effective
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGA_Athena_Flopper_Effective_C::ExecuteUbergraph_GA_Athena_Flopper_Effective(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GA_Athena_Flopper_Effective.GA_Athena_Flopper_Effective_C.ExecuteUbergraph_GA_Athena_Flopper_Effective");

	UGA_Athena_Flopper_Effective_C_ExecuteUbergraph_GA_Athena_Flopper_Effective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
