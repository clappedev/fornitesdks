// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::SwitchToNextItemInOffer(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.SwitchToNextItemInOffer");

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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ScanOfferForVariants");

	UAthenaDirectAquisitionStyleScreen_C_ScanOfferForVariants_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannelTag              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::UpdateFromVariant(struct FGameplayTag VariantChannelTag, struct FGameplayTag VariantTag, bool IsOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.UpdateFromVariant");

	UAthenaDirectAquisitionStyleScreen_C_UpdateFromVariant_Params params;
	params.VariantChannelTag = VariantChannelTag;
	params.VariantTag = VariantTag;
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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.GetWidgetForFramingViewedItem");

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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.HandleBack");

	UAthenaDirectAquisitionStyleScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.Construct");

	UAthenaDirectAquisitionStyleScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet
// (Event, Public, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnOfferSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnOfferSet");

	UAthenaDirectAquisitionStyleScreen_C_OnOfferSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// struct FGameplayTag            VariantChannel                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag            VariantTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsOwned                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent(struct FGameplayTag VariantChannel, struct FGameplayTag VariantTag, bool IsOwned)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__Picker_VariantSelector_K2Node_ComponentBoundEvent_Params params;
	params.VariantChannel = VariantChannel;
	params.VariantTag = VariantTag;
	params.IsOwned = IsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnActivated");

	UAthenaDirectAquisitionStyleScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.OnDeactivated");

	UAthenaDirectAquisitionStyleScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Previous_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Previous_K2Node_ComponentBoundEvent");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Previous_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer
// (BlueprintCallable, BlueprintEvent)

void UAthenaDirectAquisitionStyleScreen_C::RebuildStylesFromOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.RebuildStylesFromOffer");

	UAthenaDirectAquisitionStyleScreen_C_RebuildStylesFromOffer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaDirectAquisitionStyleScreen_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent");

	UAthenaDirectAquisitionStyleScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_Params params;
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
	static auto fn = UObject::FindObject<UFunction>("Function AthenaDirectAquisitionStyleScreen.AthenaDirectAquisitionStyleScreen_C.ExecuteUbergraph_AthenaDirectAquisitionStyleScreen");

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
