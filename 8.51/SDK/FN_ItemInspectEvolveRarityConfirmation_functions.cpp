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

// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetMissingCatalystRestrictionDescription
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Description                    (Parm, OutParm)

void UItemInspectEvolveRarityConfirmation_C::GetMissingCatalystRestrictionDescription(struct FText* Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetMissingCatalystRestrictionDescription");

	UItemInspectEvolveRarityConfirmation_C_GetMissingCatalystRestrictionDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Description != nullptr)
		*Description = params.Description;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Get Temp Item Based on Current Level
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               NewItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::Get_Temp_Item_Based_on_Current_Level(class UFortItem* Item, class UFortItem** NewItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Get Temp Item Based on Current Level");

	UItemInspectEvolveRarityConfirmation_C_Get_Temp_Item_Based_on_Current_Level_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewItem != nullptr)
		*NewItem = params.NewItem;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionRestrictions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::SetEvolutionRestrictions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionRestrictions");

	UItemInspectEvolveRarityConfirmation_C_SetEvolutionRestrictions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ClearEvolutionRepresented
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::ClearEvolutionRepresented()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ClearEvolutionRepresented");

	UItemInspectEvolveRarityConfirmation_C_ClearEvolutionRepresented_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::OnShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnShow");

	UItemInspectEvolveRarityConfirmation_C_OnShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetNumEvolutionOptions
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumRecipes                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::GetNumEvolutionOptions(int* NumRecipes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.GetNumEvolutionOptions");

	UItemInspectEvolveRarityConfirmation_C_GetNumEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumRecipes != nullptr)
		*NumRecipes = params.NumRecipes;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetupEvolutionOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::SetupEvolutionOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetupEvolutionOptions");

	UItemInspectEvolveRarityConfirmation_C_SetupEvolutionOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.HandleEvolutionOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::HandleEvolutionOptionSelected(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.HandleEvolutionOptionSelected");

	UItemInspectEvolveRarityConfirmation_C_HandleEvolutionOptionSelected_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EvolutionIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               EvolutionItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::SetEvolutionToRepresent(int EvolutionIndex, class UFortItem* EvolutionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetEvolutionToRepresent");

	UItemInspectEvolveRarityConfirmation_C_SetEvolutionToRepresent_Params params;
	params.EvolutionIndex = EvolutionIndex;
	params.EvolutionItem = EvolutionItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetItemToRepresent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.SetItemToRepresent");

	UItemInspectEvolveRarityConfirmation_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.DialogResult");

	UItemInspectEvolveRarityConfirmation_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnLoaded_B045239149A9BA6AA5661B97B6BFDD46
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::OnLoaded_B045239149A9BA6AA5661B97B6BFDD46(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnLoaded_B045239149A9BA6AA5661B97B6BFDD46");

	UItemInspectEvolveRarityConfirmation_C_OnLoaded_B045239149A9BA6AA5661B97B6BFDD46_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent");

	UItemInspectEvolveRarityConfirmation_C_BndEvt__UpgradeConfirmButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.Construct");

	UItemInspectEvolveRarityConfirmation_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.EventGetMissingCatalystRestrictionDescription
// (BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::EventGetMissingCatalystRestrictionDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.EventGetMissingCatalystRestrictionDescription");

	UItemInspectEvolveRarityConfirmation_C_EventGetMissingCatalystRestrictionDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ExecuteUbergraph_ItemInspectEvolveRarityConfirmation
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::ExecuteUbergraph_ItemInspectEvolveRarityConfirmation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.ExecuteUbergraph_ItemInspectEvolveRarityConfirmation");

	UItemInspectEvolveRarityConfirmation_C_ExecuteUbergraph_ItemInspectEvolveRarityConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionSelected__DelegateSignature");

	UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionUnhovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionUnhovered__DelegateSignature");

	UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionUnhovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionOptionHovered__DelegateSignature(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionOptionHovered__DelegateSignature");

	UItemInspectEvolveRarityConfirmation_C_OnEvolutionOptionHovered__DelegateSignature_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UItemInspectEvolveRarityConfirmation_C::OnEvolutionConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectEvolveRarityConfirmation.ItemInspectEvolveRarityConfirmation_C.OnEvolutionConfirm__DelegateSignature");

	UItemInspectEvolveRarityConfirmation_C_OnEvolutionConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
