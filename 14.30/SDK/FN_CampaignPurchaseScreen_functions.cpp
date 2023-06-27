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

// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCampaignPurchaseScreen_C::IsMinorShutdownWarningEnabled(bool* Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled");

	UCampaignPurchaseScreen_C_IsMinorShutdownWarningEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignPurchaseScreen_C::InitializeRedeemButton()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton");

	UCampaignPurchaseScreen_C_InitializeRedeemButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCampaignPurchaseScreen_C::IsBusyMatchmaking()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking");

	UCampaignPurchaseScreen_C_IsBusyMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignPurchaseScreen_C::Update()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update");

	UCampaignPurchaseScreen_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignPurchaseScreen_C::AdvanceTextureCycle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle");

	UCampaignPurchaseScreen_C_AdvanceTextureCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle
// (Public, BlueprintCallable, BlueprintEvent)

void UCampaignPurchaseScreen_C::InitializeTextureCycle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle");

	UCampaignPurchaseScreen_C_InitializeTextureCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignPurchaseScreen_C::ToggleTimer(bool Enabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer");

	UCampaignPurchaseScreen_C_ToggleTimer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCampaignPurchaseScreen_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct");

	UCampaignPurchaseScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignPurchaseScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	UCampaignPurchaseScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCampaignPurchaseScreen_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	UCampaignPurchaseScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UCampaignPurchaseScreen_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated");

	UCampaignPurchaseScreen_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed
// (Event, Protected, BlueprintEvent)

void UCampaignPurchaseScreen_C::OnImageCycleTimeElapsed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed");

	UCampaignPurchaseScreen_C_OnImageCycleTimeElapsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCampaignPurchaseScreen_C::ExecuteUbergraph_CampaignPurchaseScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen");

	UCampaignPurchaseScreen_C_ExecuteUbergraph_CampaignPurchaseScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
