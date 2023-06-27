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

// Function LoginScreen.LoginScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginScreen_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.Construct");

	ULoginScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	ULoginScreen_C_BndEvt__Switcher_ScreenContents_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.OnEnterState_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIState                   PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::OnEnterState_2(EFortUIState PreviousUIState)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.OnEnterState_2");

	ULoginScreen_C_OnEnterState_2_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginScreen_C::ExecuteUbergraph_LoginScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen");

	ULoginScreen_C_ExecuteUbergraph_LoginScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
