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

// Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete
// (BlueprintCallable, BlueprintEvent)

void UHealthWarningScreen_C::HandleShowTimerComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete");

	UHealthWarningScreen_C_HandleShowTimerComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHealthWarningScreen_C::ExecuteUbergraph_HealthWarningScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen");

	UHealthWarningScreen_C_ExecuteUbergraph_HealthWarningScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UHealthWarningScreen_C::HealthWarningCompleted__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature");

	UHealthWarningScreen_C_HealthWarningCompleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
