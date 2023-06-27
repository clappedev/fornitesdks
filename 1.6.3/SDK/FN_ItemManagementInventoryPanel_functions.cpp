// Fortnite SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.PrepOpeningInventory
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::PrepOpeningInventory(const struct FName& ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.PrepOpeningInventory");

	UItemManagementInventoryPanel_C_PrepOpeningInventory_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByItem
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::SelectTrapByItem(class UFortItem* Item, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByItem");

	UItemManagementInventoryPanel_C_SelectTrapByItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByTag
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_Parm)
// bool                           Success                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::SelectTrapByTag(const struct FGameplayTag& Tag, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SelectTrapByTag");

	UItemManagementInventoryPanel_C_SelectTrapByTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleMulchQuantityCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Quantity                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::HandleMulchQuantityCallback(int Quantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleMulchQuantityCallback");

	UItemManagementInventoryPanel_C_HandleMulchQuantityCallback_Params params;
	params.Quantity = Quantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.DestroyMulchQuantitySelector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::DestroyMulchQuantitySelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.DestroyMulchQuantitySelector");

	UItemManagementInventoryPanel_C_DestroyMulchQuantitySelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.CreateMulchQuantitySelector
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::CreateMulchQuantitySelector(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.CreateMulchQuantitySelector");

	UItemManagementInventoryPanel_C_CreateMulchQuantitySelector_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HideEquipSlotDragTargets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HideEquipSlotDragTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HideEquipSlotDragTargets");

	UItemManagementInventoryPanel_C_HideEquipSlotDragTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ShowEquipSlotDragTargets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::ShowEquipSlotDragTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ShowEquipSlotDragTargets");

	UItemManagementInventoryPanel_C_ShowEquipSlotDragTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandlePinnedSchematicsChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandlePinnedSchematicsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandlePinnedSchematicsChanged");

	UItemManagementInventoryPanel_C_HandlePinnedSchematicsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.GetSelectedEquipSlot
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Slot                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::GetSelectedEquipSlot(int* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.GetSelectedEquipSlot");

	UItemManagementInventoryPanel_C_GetSelectedEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ProcessSlotAction
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::ProcessSlotAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ProcessSlotAction");

	UItemManagementInventoryPanel_C_ProcessSlotAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlotsVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::UpdateEquipSlotsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlotsVisibility");

	UItemManagementInventoryPanel_C_UpdateEquipSlotsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlots
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::UpdateEquipSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateEquipSlots");

	UItemManagementInventoryPanel_C_UpdateEquipSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateRecycleInfo
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::UpdateRecycleInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.UpdateRecycleInfo");

	UItemManagementInventoryPanel_C_UpdateRecycleInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SetUniqueFeatures
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::SetUniqueFeatures()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.SetUniqueFeatures");

	UItemManagementInventoryPanel_C_SetUniqueFeatures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFilterSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleDifferentFilterSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFilterSetBP");

	UItemManagementInventoryPanel_C_HandleDifferentFilterSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentSortTypeSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleDifferentSortTypeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentSortTypeSetBP");

	UItemManagementInventoryPanel_C_HandleDifferentSortTypeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature");

	UItemManagementInventoryPanel_C_BndEvt__SortTypeButton_K2Node_ComponentBoundEvent_36_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentItemManagementModeSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementInventoryPanel_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleSetOfItemsToMulchChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleSetOfItemsToMulchChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleSetOfItemsToMulchChangedBP");

	UItemManagementInventoryPanel_C_HandleSetOfItemsToMulchChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Construct");

	UItemManagementInventoryPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.Destruct");

	UItemManagementInventoryPanel_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature(class UObject* Item, bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature");

	UItemManagementInventoryPanel_C_BndEvt__CraftingTileView_K2Node_ComponentBoundEvent_126_OnListViewItemSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFrontendInventoryFilterSetBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleDifferentFrontendInventoryFilterSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleDifferentFrontendInventoryFilterSetBP");

	UItemManagementInventoryPanel_C_HandleDifferentFrontendInventoryFilterSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleQuickBarChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UItemManagementInventoryPanel_C::HandleQuickBarChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleQuickBarChangedBP");

	UItemManagementInventoryPanel_C_HandleQuickBarChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleMulchQuantitySelection
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::HandleMulchQuantitySelection(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleMulchQuantitySelection");

	UItemManagementInventoryPanel_C_HandleMulchQuantitySelection_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	UItemManagementInventoryPanel_C_BndEvt__SortTypeButtonWorldItems_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleCursorModeChangedBP
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// bool*                          bCursorModeEnabled             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName*                  ActionName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UUserWidget**            CursorModeContentWidget        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::HandleCursorModeChangedBP(bool* bCursorModeEnabled, struct FName* ActionName, class UUserWidget** CursorModeContentWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.HandleCursorModeChangedBP");

	UItemManagementInventoryPanel_C_HandleCursorModeChangedBP_Params params;
	params.bCursorModeEnabled = bCursorModeEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentWidget = CursorModeContentWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ExecuteUbergraph_ItemManagementInventoryPanel
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UItemManagementInventoryPanel_C::ExecuteUbergraph_ItemManagementInventoryPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementInventoryPanel.ItemManagementInventoryPanel_C.ExecuteUbergraph_ItemManagementInventoryPanel");

	UItemManagementInventoryPanel_C_ExecuteUbergraph_ItemManagementInventoryPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
