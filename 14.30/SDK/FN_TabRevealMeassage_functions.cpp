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

// Function TabRevealMeassage.TabRevealMeassage_C.AutoClose
// (Public, BlueprintCallable, BlueprintEvent)

void UTabRevealMeassage_C::AutoClose()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.AutoClose");

	UTabRevealMeassage_C_AutoClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabRevealMeassage_C::ToggleTimer(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.ToggleTimer");

	UTabRevealMeassage_C_ToggleTimer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UTabRevealMeassage_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.BP_OnActivated");

	UTabRevealMeassage_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabRevealMeassage_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.Construct");

	UTabRevealMeassage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.CloseWindow
// (BlueprintCallable, BlueprintEvent)

void UTabRevealMeassage_C::CloseWindow()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.CloseWindow");

	UTabRevealMeassage_C_CloseWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.ExecuteUbergraph_TabRevealMeassage
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabRevealMeassage_C::ExecuteUbergraph_TabRevealMeassage(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.ExecuteUbergraph_TabRevealMeassage");

	UTabRevealMeassage_C_ExecuteUbergraph_TabRevealMeassage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabRevealMeassage.TabRevealMeassage_C.TabMessageClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTabRevealMeassage_C::TabMessageClosed__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TabRevealMeassage.TabRevealMeassage_C.TabMessageClosed__DelegateSignature");

	UTabRevealMeassage_C_TabMessageClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
