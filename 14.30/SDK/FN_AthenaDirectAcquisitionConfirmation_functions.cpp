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

// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNumToPurchse                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::SetPurchaseNumber(int InNumToPurchse)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetPurchaseNumber");

	UAthenaDirectAcquisitionConfirmation_C_SetPurchaseNumber_Params params;
	params.InNumToPurchse = InNumToPurchse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateCatalogOfferName()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateCatalogOfferName");

	UAthenaDirectAcquisitionConfirmation_C_UpdateCatalogOfferName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateItemList()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateItemList");

	UAthenaDirectAcquisitionConfirmation_C_UpdateItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 PriceContainer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              NormalPriceText                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 SalePriceContainer             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              SalePriceText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  CurrencyImage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::SetupPrice(class UWidget* PriceContainer, class UTextBlock* NormalPriceText, class UWidget* SalePriceContainer, class UTextBlock* SalePriceText, class UImage* CurrencyImage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.SetupPrice");

	UAthenaDirectAcquisitionConfirmation_C_SetupPrice_Params params;
	params.PriceContainer = PriceContainer;
	params.NormalPriceText = NormalPriceText;
	params.SalePriceContainer = SalePriceContainer;
	params.SalePriceText = SalePriceText;
	params.CurrencyImage = CurrencyImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::UpdateFromOffer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.UpdateFromOffer");

	UAthenaDirectAcquisitionConfirmation_C_UpdateFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::BP_OnOfferSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnOfferSet");

	UAthenaDirectAcquisitionConfirmation_C_BP_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BP_OnActivated");

	UAthenaDirectAcquisitionConfirmation_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Construct");

	UAthenaDirectAcquisitionConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_171_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAcquisitionConfirmation_C::ExecuteUbergraph_AthenaDirectAcquisitionConfirmation(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.ExecuteUbergraph_AthenaDirectAcquisitionConfirmation");

	UAthenaDirectAcquisitionConfirmation_C_ExecuteUbergraph_AthenaDirectAcquisitionConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Decline__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Decline__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_Decline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAcquisitionConfirmation_C::Confirm__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAcquisitionConfirmation.AthenaDirectAcquisitionConfirmation_C.Confirm__DelegateSignature");

	UAthenaDirectAcquisitionConfirmation_C_Confirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
