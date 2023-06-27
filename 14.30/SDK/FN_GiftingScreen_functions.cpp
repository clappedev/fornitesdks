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

// Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::HandleMoreInfoClicked(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.HandleMoreInfoClicked");

	UGiftingScreen_C_HandleMoreInfoClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function GiftingScreen.GiftingScreen_C.ToggleBackAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::ToggleBackAction(bool bEnable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.ToggleBackAction");

	UGiftingScreen_C_ToggleBackAction_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.HandleBackClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHandled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::HandleBackClicked(bool* bIsHandled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.HandleBackClicked");

	UGiftingScreen_C_HandleBackClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsHandled != nullptr)
		*bIsHandled = params.bIsHandled;
}


// Function GiftingScreen.GiftingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftingScreen_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.Construct");

	UGiftingScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnOfferSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* NewOfferInfo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnOfferSet(class UFortStoreFrontOfferInfo* NewOfferInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnOfferSet");

	UGiftingScreen_C_OnOfferSet_Params params;
	params.NewOfferInfo = NewOfferInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bGiftingToSelf                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnMoveToGiftWrapStep(bool bGiftingToSelf)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnMoveToGiftWrapStep");

	UGiftingScreen_C_OnMoveToGiftWrapStep_Params params;
	params.bGiftingToSelf = bGiftingToSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingScreen_C::BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UGiftingScreen_C_BndEvt__Tab_Recipients_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UGiftingScreen_C::OnMoveToFriendSelectStep()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnMoveToFriendSelectStep");

	UGiftingScreen_C_OnMoveToFriendSelectStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingScreen_C::BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UGiftingScreen_C_BndEvt__Tab_GiftWrap_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::OnBeginGiftingSubmission()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnBeginGiftingSubmission");

	UGiftingScreen_C_OnBeginGiftingSubmission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::OnEndGiftingSubmission(bool bSuccess)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.OnEndGiftingSubmission");

	UGiftingScreen_C_OnEndGiftingSubmission_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UGiftingScreen_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BP_OnActivated");

	UGiftingScreen_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGiftingScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UGiftingScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGiftingScreen_C::ExecuteUbergraph_GiftingScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function GiftingScreen.GiftingScreen_C.ExecuteUbergraph_GiftingScreen");

	UGiftingScreen_C_ExecuteUbergraph_GiftingScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
