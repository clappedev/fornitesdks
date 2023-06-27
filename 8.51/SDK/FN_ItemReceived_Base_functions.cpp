// Fortnite (8.51) SDK
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

// Function ItemReceived_Base.ItemReceived_Base_C.GetWidgetForFramingViewedItem
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UItemReceived_Base_C::GetWidgetForFramingViewedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.GetWidgetForFramingViewedItem");

	UItemReceived_Base_C_GetWidgetForFramingViewedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Increment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::HandleSelectionIncrement(bool Increment, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleSelectionIncrement");

	UItemReceived_Base_C_HandleSelectionIncrement_Params params;
	params.Increment = Increment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Nav_Enum                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::HandleRight(EUINavigation Nav_Enum, class UWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleRight");

	UItemReceived_Base_C_HandleRight_Params params;
	params.Nav_Enum = Nav_Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation_Enum                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 NewParam                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::HandleLeft(EUINavigation Navigation_Enum, class UWidget** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleLeft");

	UItemReceived_Base_C_HandleLeft_Params params;
	params.Navigation_Enum = Navigation_Enum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo Loot                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemReceived_Base_C::UpdateFromHoverState(struct FFortReceivedItemLootInfo Loot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromHoverState");

	UItemReceived_Base_C_UpdateFromHoverState_Params params;
	params.Loot = Loot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UItemCardWidget_C*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UItemCardWidget_C* UItemReceived_Base_C::AddItemCard(struct FFortReceivedItemLootInfo NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.AddItemCard");

	UItemReceived_Base_C_AddItemCard_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortReceivedItemLootInfo Loot                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Select                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::UpdateFromItemReceivedInfo(struct FFortReceivedItemLootInfo Loot, bool Select)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateFromItemReceivedInfo");

	UItemReceived_Base_C_UpdateFromItemReceivedInfo_Params params;
	params.Loot = Loot;
	params.Select = Select;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.HandleBack");

	UItemReceived_Base_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemReceived_Base_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Construct");

	UItemReceived_Base_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent");

	UItemReceived_Base_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bFromSelf                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::OnGiftBoxItemSet(bool bFromSelf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnGiftBoxItemSet");

	UItemReceived_Base_C_OnGiftBoxItemSet_Params params;
	params.bFromSelf = bFromSelf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.SelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CenterWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::SelectItem(int Index, bool CenterWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.SelectItem");

	UItemReceived_Base_C_SelectItem_Params params;
	params.Index = Index;
	params.CenterWidget = CenterWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::AnimateRollout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.AnimateRollout");

	UItemReceived_Base_C_AnimateRollout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Who                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::UpdateRarityFlare(bool NewParam, int Who)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.UpdateRarityFlare");

	UItemReceived_Base_C_UpdateRarityFlare_Params params;
	params.NewParam = NewParam;
	params.Who = Who;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::BndEvt__EquipButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__EquipButton_K2Node_ComponentBoundEvent");

	UItemReceived_Base_C_BndEvt__EquipButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnInputModeChanged");

	UItemReceived_Base_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::Rollout_Items_Received()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.Rollout Items Received");

	UItemReceived_Base_C_Rollout_Items_Received_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemReceived_Base_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.BndEvt__IconTextButton_C");

	UItemReceived_Base_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.ShowNextItem
// (BlueprintCallable, BlueprintEvent)

void UItemReceived_Base_C::ShowNextItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.ShowNextItem");

	UItemReceived_Base_C_ShowNextItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemReceived_Base_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.OnActivated");

	UItemReceived_Base_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemReceived_Base_C::ExecuteUbergraph_ItemReceived_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemReceived_Base.ItemReceived_Base_C.ExecuteUbergraph_ItemReceived_Base");

	UItemReceived_Base_C_ExecuteUbergraph_ItemReceived_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
