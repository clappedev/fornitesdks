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

// Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UStoreMain_Root_C::BP_GetDesiredFocusTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.BP_GetDesiredFocusTarget");

	UStoreMain_Root_C_BP_GetDesiredFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// ESlateVisibility               NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::GetVisibilityByChildrenPresence(class UPanelWidget* Panel, ESlateVisibility* NewParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.GetVisibilityByChildrenPresence");

	UStoreMain_Root_C_GetVisibilityByChildrenPresence_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::HandleAllOffersGenerated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleAllOffersGenerated");

	UStoreMain_Root_C_HandleAllOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* OfferInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleGenerateOffer(class UFortStoreFrontOfferInfo* OfferInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleGenerateOffer");

	UStoreMain_Root_C_HandleGenerateOffer_Params params;
	params.OfferInfo = OfferInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::PlayEquippedLockerMusic()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.PlayEquippedLockerMusic");

	UStoreMain_Root_C_PlayEquippedLockerMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleBack(bool* PassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleBack");

	UStoreMain_Root_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.HandleRedeem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::HandleRedeem(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.HandleRedeem");

	UStoreMain_Root_C_HandleRedeem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetupForCampaignUpsell()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetupForCampaignUpsell");

	UStoreMain_Root_C_SetupForCampaignUpsell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::SetupFirstFocusableTile()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.SetupFirstFocusableTile");

	UStoreMain_Root_C_SetupFirstFocusableTile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::LayoutVBuckTiles()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.LayoutVBuckTiles");

	UStoreMain_Root_C_LayoutVBuckTiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UStoreMain_Root_C::Get_Main_Tab_Reference()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Get Main Tab Reference");

	UStoreMain_Root_C_Get_Main_Tab_Reference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Condition                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::Start_Ambient_Sound(bool Condition)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Start Ambient Sound");

	UStoreMain_Root_C_Start_Ambient_Sound_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::UpdateCurrencyNotification()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.UpdateCurrencyNotification");

	UStoreMain_Root_C_UpdateCurrencyNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UStoreMain_Root_C::Focus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.Focus");

	UStoreMain_Root_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::NoOffersAvailable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.NoOffersAvailable");

	UStoreMain_Root_C_NoOffersAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnOffersGenerated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnOffersGenerated");

	UStoreMain_Root_C_OnOffersGenerated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.BP_OnActivated");

	UStoreMain_Root_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::BP_OnDeactivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.BP_OnDeactivated");

	UStoreMain_Root_C_BP_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::ClearOfferWidgets()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ClearOfferWidgets");

	UStoreMain_Root_C_ClearOfferWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnAddedToActivationStack()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnAddedToActivationStack");

	UStoreMain_Root_C_OnAddedToActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnRemovedFromActivationStack()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnRemovedFromActivationStack");

	UStoreMain_Root_C_OnRemovedFromActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           HasOtherPlatformCurrency       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   CurrencyMessageLocText         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStoreMain_Root_C::OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, const struct FText& CurrencyMessageLocText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnUpdateOtherPlatformMTXMessage");

	UStoreMain_Root_C_OnUpdateOtherPlatformMTXMessage_Params params;
	params.HasOtherPlatformCurrency = HasOtherPlatformCurrency;
	params.CurrencyMessageLocText = CurrencyMessageLocText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo* OfferData                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.GenerateOfferWidget");

	UStoreMain_Root_C_GenerateOfferWidget_Params params;
	params.OfferData = OfferData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnPurchasingDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnPurchasingDisabled");

	UStoreMain_Root_C_OnPurchasingDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnTransitionedBySwitcher()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnTransitionedBySwitcher");

	UStoreMain_Root_C_OnTransitionedBySwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers
// (Event, Protected, BlueprintEvent)

void UStoreMain_Root_C::OnStartReadingOffers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.OnStartReadingOffers");

	UStoreMain_Root_C_OnStartReadingOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStoreMain_Root_C::ExecuteUbergraph_StoreMain_Root(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StoreMain_Root.StoreMain_Root_C.ExecuteUbergraph_StoreMain_Root");

	UStoreMain_Root_C_ExecuteUbergraph_StoreMain_Root_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
