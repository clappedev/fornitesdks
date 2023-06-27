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

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ViewVaultItemWithBackpack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemToRepresent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::ViewVaultItemWithBackpack(class UFortItemDefinition* ItemToRepresent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ViewVaultItemWithBackpack");

	UAthenaDirectAquisitionStyleScreen_C_ViewVaultItemWithBackpack_Params params;
	params.ItemToRepresent = ItemToRepresent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SetupCharacterItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::SetupCharacterItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SetupCharacterItem");

	UAthenaDirectAquisitionStyleScreen_C_SetupCharacterItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetOfferGrantedItemDef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortAccountItemDefinition* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFortAccountItemDefinition* UAthenaDirectAquisitionStyleScreen_C::GetOfferGrantedItemDef()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetOfferGrantedItemDef");

	UAthenaDirectAquisitionStyleScreen_C_GetOfferGrantedItemDef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::RebuildStylesFromOffer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer");

	UAthenaDirectAquisitionStyleScreen_C_RebuildStylesFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::SwitchToNextItemInOffer(int Direction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer");

	UAthenaDirectAquisitionStyleScreen_C_SwitchToNextItemInOffer_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::ScanOfferForVariants()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants");

	UAthenaDirectAquisitionStyleScreen_C_ScanOfferForVariants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannelTag              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 Variant_CustomData             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::UpdateFromVariant(const struct FGameplayTag& VariantChannelTag, const struct FGameplayTag& VariantTag, const struct FString& Variant_CustomData, bool IsOwned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant");

	UAthenaDirectAquisitionStyleScreen_C_UpdateFromVariant_Params params;
	params.VariantChannelTag = VariantChannelTag;
	params.VariantTag = VariantTag;
	params.Variant_CustomData = Variant_CustomData;
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UAthenaDirectAquisitionStyleScreen_C::GetWidgetForFramingViewedItem()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem");

	UAthenaDirectAquisitionStyleScreen_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::HandleBack(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack");

	UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::BP_OnOfferSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnOfferSet");

	UAthenaDirectAquisitionStyleScreen_C_BP_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnActivated");

	UAthenaDirectAquisitionStyleScreen_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::BP_OnDeactivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BP_OnDeactivated");

	UAthenaDirectAquisitionStyleScreen_C_BP_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnVariantChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannel                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FString                 VariantCustomData              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::OnVariantChanged(const struct FGameplayTag& VariantChannel, const struct FGameplayTag& VariantTag, const struct FString& VariantCustomData, bool IsOwned)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnVariantChanged");

	UAthenaDirectAquisitionStyleScreen_C_OnVariantChanged_Params params;
	params.VariantChannel = VariantChannel;
	params.VariantTag = VariantTag;
	params.VariantCustomData = VariantCustomData;
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::ExecuteUbergraph_AthenaDirectAquisitionStyleScreen(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen");

	UAthenaDirectAquisitionStyleScreen_C_ExecuteUbergraph_AthenaDirectAquisitionStyleScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
