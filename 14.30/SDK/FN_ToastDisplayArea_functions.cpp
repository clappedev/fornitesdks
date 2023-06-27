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

// Function ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast
// (BlueprintCallable, BlueprintEvent)

void UToastDisplayArea_C::TestFrontendToast()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast");

	UToastDisplayArea_C_TestFrontendToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UToastDisplayArea_C::ExecuteUbergraph_ToastDisplayArea(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea");

	UToastDisplayArea_C_ExecuteUbergraph_ToastDisplayArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
