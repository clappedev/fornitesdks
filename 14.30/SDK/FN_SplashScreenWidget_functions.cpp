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

// Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void USplashScreenWidget_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated");

	USplashScreenWidget_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// ECommonInputType               InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::OnInputMethodChanged(ECommonInputType InputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged");

	USplashScreenWidget_C_OnInputMethodChanged_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USplashScreenWidget_C::ExecuteUbergraph_SplashScreenWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget");

	USplashScreenWidget_C_ExecuteUbergraph_SplashScreenWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
