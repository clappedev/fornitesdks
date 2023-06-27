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

// Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAccountPinLinkingWindow_C::BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature");

	UAccountPinLinkingWindow_C_BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.ExecuteUbergraph_AccountPinLinkingWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAccountPinLinkingWindow_C::ExecuteUbergraph_AccountPinLinkingWindow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AccountPinLinkingWindow.AccountPinLinkingWindow_C.ExecuteUbergraph_AccountPinLinkingWindow");

	UAccountPinLinkingWindow_C_ExecuteUbergraph_AccountPinLinkingWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
