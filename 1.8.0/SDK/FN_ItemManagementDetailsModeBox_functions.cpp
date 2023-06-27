// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UnbindEvents");

	UItemManagementDetailsModeBox_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshTransferAction
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RefreshTransferAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshTransferAction");

	UItemManagementDetailsModeBox_C_RefreshTransferAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTransfer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleTransfer(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTransfer");

	UItemManagementDetailsModeBox_C_HandleTransfer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTransfer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterTransfer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTransfer");

	UItemManagementDetailsModeBox_C_RegisterTransfer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspectUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterInspectUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspectUpgrade");

	UItemManagementDetailsModeBox_C_RegisterInspectUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleQuickbarContentsChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortQuickBars                 QuickbarIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleQuickbarContentsChanged");

	UItemManagementDetailsModeBox_C_HandleQuickbarContentsChanged_Params params;
	params.QuickbarIndex = QuickbarIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterLeaveInventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterLeaveInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterLeaveInventory");

	UItemManagementDetailsModeBox_C_RegisterLeaveInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshMulchAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RefreshMulchAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshMulchAction");

	UItemManagementDetailsModeBox_C_RefreshMulchAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInputMethodChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInputMethodChanged");

	UItemManagementDetailsModeBox_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftAndSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleCraftAndSlot(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraftAndSlot");

	UItemManagementDetailsModeBox_C_HandleCraftAndSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraftAndSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterCraftAndSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraftAndSlot");

	UItemManagementDetailsModeBox_C_RegisterCraftAndSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshCraftActions
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RefreshCraftActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RefreshCraftActions");

	UItemManagementDetailsModeBox_C_RefreshCraftActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::HandleWorldItemsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemsChanged");

	UItemManagementDetailsModeBox_C_HandleWorldItemsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemListChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortWorldItem*>  ItemsAdded                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UFortWorldItem*>  ItemsRemoved                   (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemManagementDetailsModeBox_C::HandleWorldItemListChanged(TArray<class UFortWorldItem*>* ItemsAdded, TArray<class UFortWorldItem*>* ItemsRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleWorldItemListChanged");

	UItemManagementDetailsModeBox_C_HandleWorldItemListChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsAdded != nullptr)
		*ItemsAdded = params.ItemsAdded;
	if (ItemsRemoved != nullptr)
		*ItemsRemoved = params.ItemsRemoved;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInventoryInspect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterInventoryInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInventoryInspect");

	UItemManagementDetailsModeBox_C_RegisterInventoryInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetTabStyling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::SetTabStyling(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetTabStyling");

	UItemManagementDetailsModeBox_C_SetTabStyling_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetItemVisualization
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::SetItemVisualization()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetItemVisualization");

	UItemManagementDetailsModeBox_C_SetItemVisualization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UpdateConsumeItemButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::UpdateConsumeItemButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.UpdateConsumeItemButtonState");

	UItemManagementDetailsModeBox_C_UpdateConsumeItemButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetupDetailPanels
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::SetupDetailPanels()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.SetupDetailPanels");

	UItemManagementDetailsModeBox_C_SetupDetailPanels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleEquip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleEquip(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleEquip");

	UItemManagementDetailsModeBox_C_HandleEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterEquip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterEquip");

	UItemManagementDetailsModeBox_C_RegisterEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTrack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleTrack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleTrack");

	UItemManagementDetailsModeBox_C_HandleTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTrack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterTrack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterTrack");

	UItemManagementDetailsModeBox_C_RegisterTrack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCompare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterCompare()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCompare");

	UItemManagementDetailsModeBox_C_RegisterCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterConsumeItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterConsumeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterConsumeItem");

	UItemManagementDetailsModeBox_C_RegisterConsumeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterSort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InGame                         (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::RegisterSort(bool InGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterSort");

	UItemManagementDetailsModeBox_C_RegisterSort_Params params;
	params.InGame = InGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterBack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterBack");

	UItemManagementDetailsModeBox_C_RegisterBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterInspect()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterInspect");

	UItemManagementDetailsModeBox_C_RegisterInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterRetire
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterRetire()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterRetire");

	UItemManagementDetailsModeBox_C_RegisterRetire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMulch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterMulch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterMulch");

	UItemManagementDetailsModeBox_C_RegisterMulch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterCraft()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterCraft");

	UItemManagementDetailsModeBox_C_RegisterCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterDrop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::RegisterDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.RegisterDrop");

	UItemManagementDetailsModeBox_C_RegisterDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDrop
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleDrop(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDrop");

	UItemManagementDetailsModeBox_C_HandleDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ShowSelection
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::ShowSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ShowSelection");

	UItemManagementDetailsModeBox_C_ShowSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleCraft(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCraft");

	UItemManagementDetailsModeBox_C_HandleCraft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleConsumeItem(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItem");

	UItemManagementDetailsModeBox_C_HandleConsumeItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.TrySetupInputHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementDetailsModeBox_C::TrySetupInputHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.TrySetupInputHandling");

	UItemManagementDetailsModeBox_C_TrySetupInputHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSort
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleSort(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleSort");

	UItemManagementDetailsModeBox_C_HandleSort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMulch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleMulch(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleMulch");

	UItemManagementDetailsModeBox_C_HandleMulch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCompare
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleCompare(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleCompare");

	UItemManagementDetailsModeBox_C_HandleCompare_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInspect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleInspect(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleInspect");

	UItemManagementDetailsModeBox_C_HandleInspect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleClose
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::HandleClose(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleClose");

	UItemManagementDetailsModeBox_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ActiveWidgetIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature");

	UItemManagementDetailsModeBox_C_BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)

void UItemManagementDetailsModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleDifferentItemToDetailSetBP");

	UItemManagementDetailsModeBox_C_HandleDifferentItemToDetailSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementDetailsModeBox_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnActivated");

	UItemManagementDetailsModeBox_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature");

	UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OPI_K2Node_ComponentBoundEvent_4_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature");

	UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OP_K2Node_ComponentBoundEvent_15_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature");

	UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_OI_K2Node_ComponentBoundEvent_27_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItemProgressChangedBP
// (Event, Protected, BlueprintEvent)

void UItemManagementDetailsModeBox_C::HandleConsumeItemProgressChangedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.HandleConsumeItemProgressChangedBP");

	UItemManagementDetailsModeBox_C_HandleConsumeItemProgressChangedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.BndEvt__DetailPanelTabList-MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature");

	UItemManagementDetailsModeBox_C_BndEvt__DetailPanelTabList_MSB_K2Node_ComponentBoundEvent_18_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UItemManagementDetailsModeBox_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.OnDeactivated");

	UItemManagementDetailsModeBox_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemManagementDetailsModeBox_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.Construct");

	UItemManagementDetailsModeBox_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ExecuteUbergraph_ItemManagementDetailsModeBox
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementDetailsModeBox_C::ExecuteUbergraph_ItemManagementDetailsModeBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementDetailsModeBox.ItemManagementDetailsModeBox_C.ExecuteUbergraph_ItemManagementDetailsModeBox");

	UItemManagementDetailsModeBox_C_ExecuteUbergraph_ItemManagementDetailsModeBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
