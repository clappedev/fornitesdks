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

// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Bonus Display Name and Brush
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGameplayTag            Tag                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// bool                           Condition                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// EFortRarity                    Rarity                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FSlateBrush             OutBrush_Brush_M               (CPF_Parm, CPF_OutParm)
// struct FText                   OutDisplayName                 (CPF_Parm, CPF_OutParm)
// struct FLinearColor            OutRarityColor                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Get_Bonus_Display_Name_and_Brush(const struct FGameplayTag& Tag, bool Condition, EFortRarity Rarity, struct FSlateBrush* OutBrush_Brush_M, struct FText* OutDisplayName, struct FLinearColor* OutRarityColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Bonus Display Name and Brush");

	UBP_FortExpeditionDetailsWidget_C_Get_Bonus_Display_Name_and_Brush_Params params;
	params.Tag = Tag;
	params.Condition = Condition;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBrush_Brush_M != nullptr)
		*OutBrush_Brush_M = params.OutBrush_Brush_M;
	if (OutDisplayName != nullptr)
		*OutDisplayName = params.OutDisplayName;
	if (OutRarityColor != nullptr)
		*OutRarityColor = params.OutRarityColor;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Bonus Criteria
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Bonus_Criteria(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Bonus Criteria");

	UBP_FortExpeditionDetailsWidget_C_Set_Bonus_Criteria_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Returns Data
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Expedition_Returns_Data(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Returns Data");

	UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Returns_Data_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set In Progress State
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     self2                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_In_Progress_State(class UFortExpeditionItem* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set In Progress State");

	UBP_FortExpeditionDetailsWidget_C_Set_In_Progress_State_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Remaining Expiration Time
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Remaining_Expiration_Time(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Remaining Expiration Time");

	UBP_FortExpeditionDetailsWidget_C_Set_Remaining_Expiration_Time_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Requirements
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* ItemDef                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Requirements(class UFortExpeditionItemDefinition* ItemDef)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Requirements");

	UBP_FortExpeditionDetailsWidget_C_Set_Requirements_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Open Build Expedition Squad
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionDetailsWidget_C::Open_Build_Expedition_Squad()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Open Build Expedition Squad");

	UBP_FortExpeditionDetailsWidget_C_Open_Build_Expedition_Squad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rating
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Rating(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rating");

	UBP_FortExpeditionDetailsWidget_C_Set_Rating_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rewards
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* Item_Def                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Rewards(class UFortExpeditionItemDefinition* Item_Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rewards");

	UBP_FortExpeditionDetailsWidget_C_Set_Rewards_Params params;
	params.Item_Def = Item_Def;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Duration
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItemDefinition* Item_Def                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Expedition_Duration(class UFortExpeditionItemDefinition* Item_Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Expedition Duration");

	UBP_FortExpeditionDetailsWidget_C_Set_Expedition_Duration_Params params;
	params.Item_Def = Item_Def;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Expedition Item Definition
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UFortExpeditionItemDefinition* Item_Def                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Get_Expedition_Item_Definition(class UFortItem* Item, class UFortExpeditionItemDefinition** Item_Def)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Get Expedition Item Definition");

	UBP_FortExpeditionDetailsWidget_C_Get_Expedition_Item_Definition_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Def != nullptr)
		*Item_Def = params.Item_Def;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Description
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Description(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Description");

	UBP_FortExpeditionDetailsWidget_C_Set_Description_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rarity
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Rarity(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Rarity");

	UBP_FortExpeditionDetailsWidget_C_Set_Rarity_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Name
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::Set_Name(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Set Name");

	UBP_FortExpeditionDetailsWidget_C_Set_Name_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Refresh Item Data
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionDetailsWidget_C::Refresh_Item_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Refresh Item Data");

	UBP_FortExpeditionDetailsWidget_C_Refresh_Item_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.DialogResult_11B7688B48FDD9A59A2D55A7B4F60124
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ResultName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWaitingForLatentActionCompletion (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FFortDialogExternalLatentActionHandle WaitingDialogHandle            (CPF_Parm)

void UBP_FortExpeditionDetailsWidget_C::DialogResult_11B7688B48FDD9A59A2D55A7B4F60124(EFortDialogResult Result, const struct FName& ResultName, bool bWaitingForLatentActionCompletion, const struct FFortDialogExternalLatentActionHandle& WaitingDialogHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.DialogResult_11B7688B48FDD9A59A2D55A7B4F60124");

	UBP_FortExpeditionDetailsWidget_C_DialogResult_11B7688B48FDD9A59A2D55A7B4F60124_Params params;
	params.Result = Result;
	params.ResultName = ResultName;
	params.bWaitingForLatentActionCompletion = bWaitingForLatentActionCompletion;
	params.WaitingDialogHandle = WaitingDialogHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.SetData
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem**    InItem                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::SetData(class UFortExpeditionItem** InItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.SetData");

	UBP_FortExpeditionDetailsWidget_C_SetData_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleOnExpeditionCompleted
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UFortExpeditionItem*     Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::HandleOnExpeditionCompleted(class UFortExpeditionItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleOnExpeditionCompleted");

	UBP_FortExpeditionDetailsWidget_C_HandleOnExpeditionCompleted_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature
// (FUNC_BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature");

	UBP_FortExpeditionDetailsWidget_C_BndEvt__ViewInfoButton_NoText_K2Node_ComponentBoundEvent_223_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UBP_FortExpeditionDetailsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.Construct");

	UBP_FortExpeditionDetailsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleAbandonExpedition
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionDetailsWidget_C::HandleAbandonExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.HandleAbandonExpedition");

	UBP_FortExpeditionDetailsWidget_C_HandleAbandonExpedition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.OnAbandonExpeditionCompleted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBP_FortExpeditionDetailsWidget_C::OnAbandonExpeditionCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.OnAbandonExpeditionCompleted");

	UBP_FortExpeditionDetailsWidget_C_OnAbandonExpeditionCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.ExecuteUbergraph_BP_FortExpeditionDetailsWidget
// (FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_FortExpeditionDetailsWidget_C::ExecuteUbergraph_BP_FortExpeditionDetailsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FortExpeditionDetailsWidget.BP_FortExpeditionDetailsWidget_C.ExecuteUbergraph_BP_FortExpeditionDetailsWidget");

	UBP_FortExpeditionDetailsWidget_C_ExecuteUbergraph_BP_FortExpeditionDetailsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
