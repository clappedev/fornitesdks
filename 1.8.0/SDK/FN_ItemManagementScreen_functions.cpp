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

// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleMulchItemsCallback(int Quantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchItemsCallback");

	UItemManagementScreen_C_HandleMulchItemsCallback_Params params;
	params.Quantity = Quantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::GetMaxTransferCount(class UFortItem* Item, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.GetMaxTransferCount");

	UItemManagementScreen_C_GetMaxTransferCount_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::CompleteItemDrop(class UFortItem* Item, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemDrop");

	UItemManagementScreen_C_CompleteItemDrop_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleDropItemsCallback(int Quantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemsCallback");

	UItemManagementScreen_C_HandleDropItemsCallback_Params params;
	params.Quantity = Quantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleDrop(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDrop");

	UItemManagementScreen_C_HandleDrop_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::CompleteItemTransfer(class UFortItem* Item, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CompleteItemTransfer");

	UItemManagementScreen_C_CompleteItemTransfer_Params params;
	params.Item = Item;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleTransferItemsCallback(int Quantity, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemsCallback");

	UItemManagementScreen_C_HandleTransferItemsCallback_Params params;
	params.Quantity = Quantity;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.DestroyQuantitySelector
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::DestroyQuantitySelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.DestroyQuantitySelector");

	UItemManagementScreen_C_DestroyQuantitySelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Title                          (Parm)
// struct FText                   ConfirmText                    (Parm)
// int                            InitialQuantity                (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxQuantity                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::CreateQuantitySelector(class UFortItem* Item, const struct FText& Title, const struct FText& ConfirmText, int InitialQuantity, int MaxQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CreateQuantitySelector");

	UItemManagementScreen_C_CreateQuantitySelector_Params params;
	params.Item = Item;
	params.Title = Title;
	params.ConfirmText = ConfirmText;
	params.InitialQuantity = InitialQuantity;
	params.MaxQuantity = MaxQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToTransfer                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleTransfer(class UFortItem* ItemToTransfer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleTransfer");

	UItemManagementScreen_C_HandleTransfer_Params params;
	params.ItemToTransfer = ItemToTransfer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortCraftFailCause            FailCause                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::ShowCraftError(EFortCraftFailCause FailCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ShowCraftError");

	UItemManagementScreen_C_ShowCraftError_Params params;
	params.FailCause = FailCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSchematicItem*      SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::CraftAndSlot(class UFortSchematicItem* SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.CraftAndSlot");

	UItemManagementScreen_C_CraftAndSlot_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleEquip(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquip");

	UItemManagementScreen_C_HandleEquip_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::SizeInventoryPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.SizeInventoryPanel");

	UItemManagementScreen_C_SizeInventoryPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (Parm)
// class UDragDropOperation**     Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UItemManagementScreen_C::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnDrop");

	UItemManagementScreen_C_OnDrop_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ItemDescription                (Parm, OutParm)

void UItemManagementScreen_C::GetDescriptionText(struct FText* ItemDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.GetDescriptionText");

	UItemManagementScreen_C_GetDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToInspect                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleInspect(class UFortItem* ItemToInspect)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspect");

	UItemManagementScreen_C_HandleInspect_Params params;
	params.ItemToInspect = ItemToInspect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleClose
// (Public, BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::HandleClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleClose");

	UItemManagementScreen_C_HandleClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40");

	UItemManagementScreen_C_DialogResult_EF030FF4438BB62E1CCFDFBCCE5EFA40_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA");

	UItemManagementScreen_C_OnMCPRequestComplete_D020DD864A3EFC9A31973C87076269CA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP
// (Event, Public, BlueprintEvent)

void UItemManagementScreen_C::HandleDifferentItemManagementModeSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDifferentItemManagementModeSetBP");

	UItemManagementScreen_C_HandleDifferentItemManagementModeSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleEquipItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleEquipItemBP");

	UItemManagementScreen_C_HandleEquipItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortSchematicItem**     SchematicItem                  (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleCraftItemBP(class UFortSchematicItem** SchematicItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleCraftItemBP");

	UItemManagementScreen_C_HandleCraftItemBP_Params params;
	params.SchematicItem = SchematicItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh
// (BlueprintCallable, BlueprintEvent)

void UItemManagementScreen_C::DefaultActionRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.DefaultActionRefresh");

	UItemManagementScreen_C_DefaultActionRefresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemManagementScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.OnActivated");

	UItemManagementScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortConsumableAccountItem** ConsumableItem                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleConsumeItemBP(class UFortConsumableAccountItem** ConsumableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleConsumeItemBP");

	UItemManagementScreen_C_HandleConsumeItemBP_Params params;
	params.ConsumableItem = ConsumableItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleInspectItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleInspectItemBP");

	UItemManagementScreen_C_HandleInspectItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleTransferItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleTransferItemBP");

	UItemManagementScreen_C_HandleTransferItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleDropItemBP(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleDropItemBP");

	UItemManagementScreen_C_HandleDropItemBP_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortItem**              Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::HandleMulchQuantitySelection(class UFortItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.HandleMulchQuantitySelection");

	UItemManagementScreen_C_HandleMulchQuantitySelection_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemManagementScreen_C::ExecuteUbergraph_ItemManagementScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemManagementScreen.ItemManagementScreen_C.ExecuteUbergraph_ItemManagementScreen");

	UItemManagementScreen_C_ExecuteUbergraph_ItemManagementScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
