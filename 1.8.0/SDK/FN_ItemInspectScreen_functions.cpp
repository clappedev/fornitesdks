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

// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemInspectionMode        NewInspectMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetInspectModeForChildPanels(EFortItemInspectionMode NewInspectMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetInspectModeForChildPanels");

	UItemInspectScreen_C_SetInspectModeForChildPanels_Params params;
	params.NewInspectMode = NewInspectMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetTabButtonStyle(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetTabButtonStyle");

	UItemInspectScreen_C_SetTabButtonStyle_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowPreviewLabel               (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::ShowPreviewHeader(bool ShowPreviewLabel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ShowPreviewHeader");

	UItemInspectScreen_C_ShowPreviewHeader_Params params;
	params.ShowPreviewLabel = ShowPreviewLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshCallout");

	UItemInspectScreen_C_RefreshCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshActionHandlers");

	UItemInspectScreen_C_RefreshActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortItemInstanceQuantityPair> ResultingItems                 (Parm, OutParm, ZeroConstructor, ReferenceParm)

void UItemInspectScreen_C::HandleEvolutionComplete(TArray<struct FFortItemInstanceQuantityPair>* ResultingItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionComplete");

	UItemInspectScreen_C_HandleEvolutionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResultingItems != nullptr)
		*ResultingItems = params.ResultingItems;
}


// Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::RefreshOnUpgrade()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.RefreshOnUpgrade");

	UItemInspectScreen_C_RefreshOnUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleCursorModeChanging(bool IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleCursorModeChanging");

	UItemInspectScreen_C_HandleCursorModeChanging_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               ItemToInspect                  (Parm, ZeroConstructor, IsPlainOldData)
// EFortItemInspectionMode        Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAllowUpgrading           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAllowEvolution           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldAllowFavoriting          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowPreviewDisplay       (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::OpenItemInspect__Function_(class UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavoriting, bool ShouldShowPreviewDisplay)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect (Function)");

	UItemInspectScreen_C_OpenItemInspect__Function__Params params;
	params.ItemToInspect = ItemToInspect;
	params.Mode = Mode;
	params.ShouldAllowUpgrading = ShouldAllowUpgrading;
	params.ShouldAllowEvolution = ShouldAllowEvolution;
	params.ShouldAllowFavoriting = ShouldAllowFavoriting;
	params.ShouldShowPreviewDisplay = ShouldShowPreviewDisplay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::ResetDetailsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ResetDetailsPanel");

	UItemInspectScreen_C_ResetDetailsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::SetupActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetupActionHandlers");

	UItemInspectScreen_C_SetupActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               EvolutionItem                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::GetFirstEvolutionOption(class UFortItem** EvolutionItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.GetFirstEvolutionOption");

	UItemInspectScreen_C_GetFirstEvolutionOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EvolutionItem != nullptr)
		*EvolutionItem = params.EvolutionItem;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceSelected(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceSelected");

	UItemInspectScreen_C_HandleEvolutionChoiceSelected_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceUnhovered(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceUnhovered");

	UItemInspectScreen_C_HandleEvolutionChoiceUnhovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolutionChoiceHovered(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolutionChoiceHovered");

	UItemInspectScreen_C_HandleEvolutionChoiceHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortItemInspectionMode        NewInspectMode                 (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetInspectMode(EFortItemInspectionMode NewInspectMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetInspectMode");

	UItemInspectScreen_C_SetInspectMode_Params params;
	params.NewInspectMode = NewInspectMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleUpgrade(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleUpgrade");

	UItemInspectScreen_C_HandleUpgrade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleEvolution(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleEvolution");

	UItemInspectScreen_C_HandleEvolution_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleView(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleView");

	UItemInspectScreen_C_HandleView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleFavorite(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleFavorite");

	UItemInspectScreen_C_HandleFavorite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.HandleBack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::HandleBack(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.HandleBack");

	UItemInspectScreen_C_HandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::SetItemToRepresent(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.SetItemToRepresent");

	UItemInspectScreen_C_SetItemToRepresent_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203
// (BlueprintCallable, BlueprintEvent)

void UItemInspectScreen_C::OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203");

	UItemInspectScreen_C_OnMCPRequestComplete_5E880EAB4E8645A0B59BA29917400203_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature");

	UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_4_OnEvolutionConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature");

	UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_1_OnUpgradeCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bItemChanged                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAmmoChanged                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIngredientsChanged            (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature");

	UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_9_FortOnItemChangedDelegate__DelegateSignature_Params params;
	params.bItemChanged = bItemChanged;
	params.bAmmoChanged = bAmmoChanged;
	params.bIngredientsChanged = bIngredientsChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature");

	UItemInspectScreen_C_BndEvt__ItemInspectUpgradeConfirmation_K2Node_ComponentBoundEvent_0_OnUpgradeConfirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature");

	UItemInspectScreen_C_BndEvt__InspectedItem_K2Node_ComponentBoundEvent_10_FortOnItemDestroyedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.Construct");

	UItemInspectScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            RecipeIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature(class UFortItem* Item, int RecipeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature");

	UItemInspectScreen_C_BndEvt__ItemInspectEvolutionConfirmation_K2Node_ComponentBoundEvent_2_OnEvolutionOptionSelected__DelegateSignature_Params params;
	params.Item = Item;
	params.RecipeIndex = RecipeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature
// (BlueprintEvent)

void UItemInspectScreen_C::BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature");

	UItemInspectScreen_C_BndEvt__ItemInspectUpgradeCallout_K2Node_ComponentBoundEvent_444_OnRequestUpgrade__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnActivated");

	UItemInspectScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem**              ItemToInspect                  (Parm, ZeroConstructor, IsPlainOldData)
// EFortItemInspectionMode*       Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldAllowUpgrading           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldAllowEvolution           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldAllowFavorite            (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsTemporaryItem                (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::OpenItemInspect(class UFortItem** ItemToInspect, EFortItemInspectionMode* Mode, bool* ShouldAllowUpgrading, bool* ShouldAllowEvolution, bool* ShouldAllowFavorite, bool* IsTemporaryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OpenItemInspect");

	UItemInspectScreen_C_OpenItemInspect_Params params;
	params.ItemToInspect = ItemToInspect;
	params.Mode = Mode;
	params.ShouldAllowUpgrading = ShouldAllowUpgrading;
	params.ShouldAllowEvolution = ShouldAllowEvolution;
	params.ShouldAllowFavorite = ShouldAllowFavorite;
	params.IsTemporaryItem = IsTemporaryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemInspectScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.Destruct");

	UItemInspectScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UItemInspectScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.OnDeactivated");

	UItemInspectScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.BndEvt__DetailPanelTabList-PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature");

	UItemInspectScreen_C_BndEvt__DetailPanelTabList_PC_K2Node_ComponentBoundEvent_385_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UItemInspectScreen_C::ExecuteUbergraph_ItemInspectScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ItemInspectScreen.ItemInspectScreen_C.ExecuteUbergraph_ItemInspectScreen");

	UItemInspectScreen_C_ExecuteUbergraph_ItemInspectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
