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

// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::SetupCurrencyImage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage");

	UStoreMain_OfferDetails_C_SetupCurrencyImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::UpdatePurchaseButton()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton");

	UStoreMain_OfferDetails_C_UpdatePurchaseButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::InitDetailAttributes()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes");

	UStoreMain_OfferDetails_C_InitDetailAttributes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UStoreMain_OfferDetails_C::SetPurchaseButtonText(const struct FText& ButtonText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText");

	UStoreMain_OfferDetails_C_SetPurchaseButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStoreMain_OfferDetails_C::IsGiftingStorefrontOffer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer");

	UStoreMain_OfferDetails_C_IsGiftingStorefrontOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortMtxOfferData*       DataAsset                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::GetCurrencyABAssetFromQuantity(int Quantity, class UFortMtxOfferData** DataAsset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity");

	UStoreMain_OfferDetails_C_GetCurrencyABAssetFromQuantity_Params params;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataAsset != nullptr)
		*DataAsset = params.DataAsset;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::InitCurrency()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency");

	UStoreMain_OfferDetails_C_InitCurrency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::InitStoreTypeVisuals()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals");

	UStoreMain_OfferDetails_C_InitStoreTypeVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::UnregisterInput()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput");

	UStoreMain_OfferDetails_C_UnregisterInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::RegisterInput()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput");

	UStoreMain_OfferDetails_C_RegisterInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::PopDetails()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails");

	UStoreMain_OfferDetails_C_PopDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_OfferDetails_C::Init()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init");

	UStoreMain_OfferDetails_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::HandleBack(bool* PassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack");

	UStoreMain_OfferDetails_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::ResetPurchaseButtonText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText");

	UStoreMain_OfferDetails_C_ResetPurchaseButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::OnPurchasingStarted()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted");

	UStoreMain_OfferDetails_C_OnPurchasingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet
// (Event, Public, BlueprintEvent)

void UStoreMain_OfferDetails_C::BP_OnOfferSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet");

	UStoreMain_OfferDetails_C_BP_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_OfferDetails_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated");

	UStoreMain_OfferDetails_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_OfferDetails_C::ExecuteUbergraph_StoreMain_OfferDetails(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails");

	UStoreMain_OfferDetails_C_ExecuteUbergraph_StoreMain_OfferDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
