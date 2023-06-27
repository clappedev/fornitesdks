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

// Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated_2
// (BlueprintCallable, BlueprintEvent)

void UPlayedBeforeSelect_C::OnActivated_2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated_2");

	UPlayedBeforeSelect_C_OnActivated_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayedBeforeSelect_C::ExecuteUbergraph_PlayedBeforeSelect(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect");

	UPlayedBeforeSelect_C_ExecuteUbergraph_PlayedBeforeSelect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
