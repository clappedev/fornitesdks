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

// Function RestartClient.RestartClient_C.OnButtonSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           InbShouldExit                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URestartClient_C::OnButtonSet(bool InbShouldExit, bool bShouldShow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RestartClient.RestartClient_C.OnButtonSet");

	URestartClient_C_OnButtonSet_Params params;
	params.InbShouldExit = InbShouldExit;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URestartClient_C::BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	URestartClient_C_BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RestartClient.RestartClient_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URestartClient_C::OnInitialized()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RestartClient.RestartClient_C.OnInitialized");

	URestartClient_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URestartClient_C::ExecuteUbergraph_RestartClient(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient");

	URestartClient_C_ExecuteUbergraph_RestartClient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
