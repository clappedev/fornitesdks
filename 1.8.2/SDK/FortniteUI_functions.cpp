
#include "../SDK.h"

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function FortniteUI.FortItemCardBase.PortBrushSize
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortItemCardBase::STATIC_PortBrushSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemCardBase.PortBrushSize");

	UFortItemCardBase_PortBrushSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaMatchReadyDesktopPopup.UserDismissedDialog
// (Final, Native, Public, BlueprintCallable)

void UAthenaMatchReadyDesktopPopup::UserDismissedDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaMatchReadyDesktopPopup.UserDismissedDialog");

	UAthenaMatchReadyDesktopPopup_UserDismissedDialog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAbilitySystemContext.RemoveDelegatesFromWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortAbilitySystemContext::RemoveDelegatesFromWidget(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAbilitySystemContext.RemoveDelegatesFromWidget");

	UFortAbilitySystemContext_RemoveDelegatesFromWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAbilitySystemContext.RegisterForAttributeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortAbilitySystemContext::RegisterForAttributeChanged(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAbilitySystemContext.RegisterForAttributeChanged");

	UFortAbilitySystemContext_RegisterForAttributeChanged_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAccountStatsContext.CanShowAccountStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortAccountStatsContext::CanShowAccountStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAccountStatsContext.CanShowAccountStats");

	UFortAccountStatsContext_CanShowAccountStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo  Result                         (ConstParm, Parm, OutParm, ReferenceParm)

void UFortAccountWidgetBase::OnAccountInfoChanged(const struct FFortPublicAccountInfo& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged");

	UFortAccountWidgetBase_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged
// (Final, Native, Protected)

void UFortAccountWidgetBase::HandleCurrentlyViewedAccountInfoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged");

	UFortAccountWidgetBase_HandleCurrentlyViewedAccountInfoChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonReward
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortAccountWidgetBase::GetNextSeasonReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAccountWidgetBase.GetNextSeasonReward");

	UFortAccountWidgetBase_GetNextSeasonReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortAccountWidgetBase::GetNextSeasonChaseReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward");

	UFortAccountWidgetBase_GetNextSeasonChaseReward_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTabButtonInterface.SetTabLabelInfo
// (Native, Event, Public, HasOutParms, BlueprintEvent)

void UFortTabButtonInterface::SetTabLabelInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTabButtonInterface.SetTabLabelInfo");

	UFortTabButtonInterface_SetTabLabelInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDailyRewards.TryGetDailyRewardsData
// (Final, Native, Private, HasOutParms, BlueprintCallable)

void UFortDailyRewards::TryGetDailyRewardsData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDailyRewards.TryGetDailyRewardsData");

	UFortDailyRewards_TryGetDailyRewardsData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDailyRewards.SetupDailyRewards
// (Event, Public, BlueprintEvent)

void UFortDailyRewards::SetupDailyRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDailyRewards.SetupDailyRewards");

	UFortDailyRewards_SetupDailyRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDailyRewards.FinishedClaiming
// (Final, Native, Public, BlueprintCallable)

void UFortDailyRewards::FinishedClaiming()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDailyRewards.FinishedClaiming");

	UFortDailyRewards_FinishedClaiming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDailyRewards.ClaimResultReceived
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortDailyRewards::ClaimResultReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDailyRewards.ClaimResultReceived");

	UFortDailyRewards_ClaimResultReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.UpdateEula
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::UpdateEula()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.UpdateEula");

	UFortOptionsMenu_UpdateEula_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.ShowVideoOptions
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::ShowVideoOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.ShowVideoOptions");

	UFortOptionsMenu_ShowVideoOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.ShowInputOptions
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::ShowInputOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.ShowInputOptions");

	UFortOptionsMenu_ShowInputOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.ShowGameOptions
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::ShowGameOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.ShowGameOptions");

	UFortOptionsMenu_ShowGameOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.ShowControllerOptions
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::ShowControllerOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.ShowControllerOptions");

	UFortOptionsMenu_ShowControllerOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.ResetClientHUDSettings
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::ResetClientHUDSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.ResetClientHUDSettings");

	UFortOptionsMenu_ResetClientHUDSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.OnVideoAccept
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::OnVideoAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.OnVideoAccept");

	UFortOptionsMenu_OnVideoAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.OnResetToDefaults
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::OnResetToDefaults()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.OnResetToDefaults");

	UFortOptionsMenu_OnResetToDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.OnReset
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.OnReset");

	UFortOptionsMenu_OnReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.OnApply
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.OnApply");

	UFortOptionsMenu_OnApply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::NeedsVideoChangeConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.NeedsVideoChangeConfirmation");

	UFortOptionsMenu_NeedsVideoChangeConfirmation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation
// (Final, Native, Private, BlueprintCallable)

void UFortOptionsMenu::NeedsLanguageChangeConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.NeedsLanguageChangeConfirmation");

	UFortOptionsMenu_NeedsLanguageChangeConfirmation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.HandleSettingsErrorMessageClosed
// (Event, Protected, BlueprintEvent)

void UFortOptionsMenu::HandleSettingsErrorMessageClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.HandleSettingsErrorMessageClosed");

	UFortOptionsMenu_HandleSettingsErrorMessageClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOptionsMenu.HandleBenchmarkComplete
// (Event, Protected, BlueprintEvent)

void UFortOptionsMenu::HandleBenchmarkComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOptionsMenu.HandleBenchmarkComplete");

	UFortOptionsMenu_HandleBenchmarkComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortFrontendInventoryFilterFunctionLibrary.ToText
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UFortFrontendInventoryFilterFunctionLibrary::STATIC_ToText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortFrontendInventoryFilterFunctionLibrary.ToText");

	UFortFrontendInventoryFilterFunctionLibrary_ToText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAthenaNewsWidget.GetText
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortAthenaNewsWidget::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAthenaNewsWidget.GetText");

	UFortAthenaNewsWidget_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortCheatMenuFactory.AddStoreCheatMenu
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonUserWidget*       Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortCheatMenuFactory::STATIC_AddStoreCheatMenu(class UCommonUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortCheatMenuFactory.AddStoreCheatMenu");

	UFortCheatMenuFactory_AddStoreCheatMenu_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortCheatMenuFactory.AddGrantCheatMenu
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UCommonUserWidget*       Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortCheatMenuFactory::STATIC_AddGrantCheatMenu(class UCommonUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortCheatMenuFactory.AddGrantCheatMenu");

	UFortCheatMenuFactory_AddGrantCheatMenu_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionExpiresWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortExpeditionExpiresWidget::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionExpiresWidget.SetData");

	UFortExpeditionExpiresWidget_SetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
// (Native, Event, Protected, BlueprintEvent)

void UFortExpeditionExpiresWidget::OnExpeditionExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated");

	UFortExpeditionExpiresWidget_OnExpeditionExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionListItemWidget.OnItemChanged
// (Native, Event, Protected, BlueprintEvent)

void UFortExpeditionListItemWidget::OnItemChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionListItemWidget.OnItemChanged");

	UFortExpeditionListItemWidget_OnItemChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionPickVehicleWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortExpeditionPickVehicleWidget::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionPickVehicleWidget.SetData");

	UFortExpeditionPickVehicleWidget_SetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionReturnsWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortExpeditionReturnsWidget::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionReturnsWidget.SetData");

	UFortExpeditionReturnsWidget_SetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
// (Native, Event, Protected, BlueprintEvent)

void UFortExpeditionReturnsWidget::OnExpeditionInProgressUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated");

	UFortExpeditionReturnsWidget_OnExpeditionInProgressUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortExpeditionUtilities::STATIC_TotalUnseenExpeditionsForTab(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.TotalUnseenExpeditionsForTab");

	UFortExpeditionUtilities_TotalUnseenExpeditionsForTab_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.IsSquadOnExpedition
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortExpeditionUtilities::STATIC_IsSquadOnExpedition(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.IsSquadOnExpedition");

	UFortExpeditionUtilities_IsSquadOnExpedition_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition
// (Final, Native, Static, Public, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetVehicleTagRequiredForExpedition()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetVehicleTagRequiredForExpedition");

	UFortExpeditionUtilities_GetVehicleTagRequiredForExpedition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetVehicleTagFromSquadId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetVehicleTagFromSquadId()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetVehicleTagFromSquadId");

	UFortExpeditionUtilities_GetVehicleTagFromSquadId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortExpeditionUtilities::STATIC_GetTotalExpeditionVehiclesAvailable(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetTotalExpeditionVehiclesAvailable");

	UFortExpeditionUtilities_GetTotalExpeditionVehiclesAvailable_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetMatchedCriteriaTags
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetMatchedCriteriaTags()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetMatchedCriteriaTags");

	UFortExpeditionUtilities_GetMatchedCriteriaTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetExpeditionSquadsThatMatchRequirements()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadsThatMatchRequirements");

	UFortExpeditionUtilities_GetExpeditionSquadsThatMatchRequirements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadPower
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetExpeditionSquadPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetExpeditionSquadPower");

	UFortExpeditionUtilities_GetExpeditionSquadPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.GetAllExpeditionSquadIds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_GetAllExpeditionSquadIds()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.GetAllExpeditionSquadIds");

	UFortExpeditionUtilities_GetAllExpeditionSquadIds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.CalculateTotalPower
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_CalculateTotalPower()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.CalculateTotalPower");

	UFortExpeditionUtilities_CalculateTotalPower_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_CalculateGlobalAndItemRatingModValuesBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.CalculateGlobalAndItemRatingModValuesBP");

	UFortExpeditionUtilities_CalculateGlobalAndItemRatingModValuesBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess
// (Final, Native, Static, Public, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_CalculateExpeditionPercentageChanceForSuccess()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.CalculateExpeditionPercentageChanceForSuccess");

	UFortExpeditionUtilities_CalculateExpeditionPercentageChanceForSuccess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.AreExpeditionsUnlocked
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortExpeditionUtilities::STATIC_AreExpeditionsUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.AreExpeditionsUnlocked");

	UFortExpeditionUtilities_AreExpeditionsUnlocked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortExpeditionUtilities.AreAnyExpeditionsComplete
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortExpeditionUtilities::STATIC_AreAnyExpeditionsComplete(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortExpeditionUtilities.AreAnyExpeditionsComplete");

	UFortExpeditionUtilities_AreAnyExpeditionsComplete_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayOutroTransitionBP
// (Event, Protected, BlueprintEvent)

void UFortSkillTreeCanvasEntityInterface::PlayOutroTransitionBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayOutroTransitionBP");

	UFortSkillTreeCanvasEntityInterface_PlayOutroTransitionBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayIntroTransitionBP
// (Event, Protected, BlueprintEvent)

void UFortSkillTreeCanvasEntityInterface::PlayIntroTransitionBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSkillTreeCanvasEntityInterface.PlayIntroTransitionBP");

	UFortSkillTreeCanvasEntityInterface_PlayIntroTransitionBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHeroNotificationHandler.OnFortItemUpdated
// (Final, Native, Private)

void UFortHeroNotificationHandler::OnFortItemUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHeroNotificationHandler.OnFortItemUpdated");

	UFortHeroNotificationHandler_OnFortItemUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.TryGetHomebaseNodeState
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFortHomebaseNodeItemUtilities::STATIC_TryGetHomebaseNodeState(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.TryGetHomebaseNodeState");

	UFortHomebaseNodeItemUtilities_TryGetHomebaseNodeState_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_IsSquadSlotUnseen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.IsSquadSlotUnseen");

	UFortHomebaseNodeItemUtilities_IsSquadSlotUnseen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_IsHomebaseNodeItemUnseenForTagContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.IsHomebaseNodeItemUnseenForTagContainer");

	UFortHomebaseNodeItemUtilities_IsHomebaseNodeItemUnseenForTagContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodePageNames
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodePageNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodePageNames");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodePageNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItems
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodeItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItems");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodeItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodeItemNameForTagContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemNameForTagContainer");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemNameForTagContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodeItemForTagContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForTagContainer");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForTagContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodeItemForSquadSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItemForSquadSlot");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodeItemForSquadSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItem
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_GetHomebaseNodeItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.GetHomebaseNodeItem");

	UFortHomebaseNodeItemUtilities_GetHomebaseNodeItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType
// (Final, Native, Static, Public, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_AreAnyHomebaseNodeItemsUnseenForSquadType()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadType");

	UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)

void UFortHomebaseNodeItemUtilities::STATIC_AreAnyHomebaseNodeItemsUnseenForSquadId()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHomebaseNodeItemUtilities.AreAnyHomebaseNodeItemsUnseenForSquadId");

	UFortHomebaseNodeItemUtilities_AreAnyHomebaseNodeItemsUnseenForSquadId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaHUDGamePhaseChangingBase.UpdateMessaging
// (Event, Protected, HasOutParms, BlueprintEvent)

void UAthenaHUDGamePhaseChangingBase::UpdateMessaging()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaHUDGamePhaseChangingBase.UpdateMessaging");

	UAthenaHUDGamePhaseChangingBase_UpdateMessaging_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged
// (Final, Native, Private)

void UAthenaHUDGamePhaseChangingBase::HandleGamePhaseStepChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaHUDGamePhaseChangingBase.HandleGamePhaseStepChanged");

	UAthenaHUDGamePhaseChangingBase_HandleGamePhaseStepChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaHUDGamePhaseChangingBase.GamePhaseStepChanged
// (Event, Protected, BlueprintEvent)

void UAthenaHUDGamePhaseChangingBase::GamePhaseStepChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaHUDGamePhaseChangingBase.GamePhaseStepChanged");

	UAthenaHUDGamePhaseChangingBase_GamePhaseStepChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortReticle.OnWeaponEquipped
// (Final, Native, Private)

void UFortReticle::OnWeaponEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortReticle.OnWeaponEquipped");

	UFortReticle_OnWeaponEquipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortReticle.OnReticleColorChanged
// (Final, Native, Private)

void UFortReticle::OnReticleColorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortReticle.OnReticleColorChanged");

	UFortReticle_OnReticleColorChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortReticle.OnPawnSet
// (Final, Native, Private)

void UFortReticle::OnPawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortReticle.OnPawnSet");

	UFortReticle_OnPawnSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortReticle.OnContextualReticleChanged
// (Final, Native, Private)

void UFortReticle::OnContextualReticleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortReticle.OnContextualReticleChanged");

	UFortReticle_OnContextualReticleChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortHUDObjectiveSizeInterface.GetHeightEstimate
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)

void UFortHUDObjectiveSizeInterface::GetHeightEstimate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortHUDObjectiveSizeInterface.GetHeightEstimate");

	UFortHUDObjectiveSizeInterface_GetHeightEstimate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortItemCardUtilities.GetCardDimensions
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// EFortItemType                  ItemType                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortItemCardUtilities::STATIC_GetCardDimensions(EFortItemType ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemCardUtilities.GetCardDimensions");

	UFortItemCardUtilities_GetCardDimensions_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortSquadSlotItemDetailElementWidget::SetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailElementWidget.SetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemDetailElementWidget_SetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemDetailElementWidget::IsSquadSlotLockedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailElementWidget.IsSquadSlotLockedBP");

	UFortSquadSlotItemDetailElementWidget_IsSquadSlotLockedBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP
// (Event, Protected, BlueprintEvent)

void UFortSquadSlotItemDetailElementWidget::HandlePostDifferentSquadSlotSetBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailElementWidget.HandlePostDifferentSquadSlotSetBP");

	UFortSquadSlotItemDetailElementWidget_HandlePostDifferentSquadSlotSetBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortSquadSlotItemDetailElementWidget::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetItemInSquadSlotBP");

	UFortSquadSlotItemDetailElementWidget_GetItemInSquadSlotBP_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemDetailElementWidget::GetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailElementWidget.GetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemDetailElementWidget_GetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortSquadSlotItemDetailsHostPanel::SetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailsHostPanel.SetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemDetailsHostPanel_SetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemDetailsHostPanel::IsSquadSlotLockedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailsHostPanel.IsSquadSlotLockedBP");

	UFortSquadSlotItemDetailsHostPanel_IsSquadSlotLockedBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*            LocalPlayer                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortSquadSlotItemDetailsHostPanel::GetItemInSquadSlotBP(class ULocalPlayer* LocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetItemInSquadSlotBP");

	UFortSquadSlotItemDetailsHostPanel_GetItemInSquadSlotBP_Params params;
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemDetailsHostPanel::GetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemDetailsHostPanel.GetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemDetailsHostPanel_GetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortSquadSlotItemPicker::SetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemPicker_SetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemPicker::GetIdOfSquadSlotToManageBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP");

	UFortSquadSlotItemPicker_GetIdOfSquadSlotToManageBP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTransformKeyPicker.RebuildTransformKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortTransformKeyPicker::RebuildTransformKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTransformKeyPicker.RebuildTransformKeys");

	UFortTransformKeyPicker_RebuildTransformKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTransformSlotItemPicker.RebuildSlottableItems
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortTransformSlotItemPicker::RebuildSlottableItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTransformSlotItemPicker.RebuildSlottableItems");

	UFortTransformSlotItemPicker_RebuildSlottableItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOutpostStorageItemPicker.UseFilters
// (Final, Native, Protected, BlueprintCallable)

void UFortOutpostStorageItemPicker::UseFilters()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOutpostStorageItemPicker.UseFilters");

	UFortOutpostStorageItemPicker_UseFilters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortOutpostStorageItemPicker.UseFilter
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EFortItemType                  ItemType                       (Parm, ZeroConstructor, IsPlainOldData)

void UFortOutpostStorageItemPicker::UseFilter(EFortItemType ItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortOutpostStorageItemPicker.UseFilter");

	UFortOutpostStorageItemPicker_UseFilter_Params params;
	params.ItemType = ItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaInventoryFortItemTileButtonBase.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)

void UAthenaInventoryFortItemTileButtonBase::HandleEquipSlotChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaInventoryFortItemTileButtonBase.HandleEquipSlotChanged");

	UAthenaInventoryFortItemTileButtonBase_HandleEquipSlotChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDefenderItemTileButton.HandleEquipSlotChanged
// (Event, Protected, BlueprintEvent)

void UFortDefenderItemTileButton::HandleEquipSlotChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDefenderItemTileButton.HandleEquipSlotChanged");

	UFortDefenderItemTileButton_HandleEquipSlotChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged
// (Event, Protected, BlueprintEvent)

void UFortSquadSlotItemPickerTileButton::HandleSlottingRestrictionReasonsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged");

	UFortSquadSlotItemPickerTileButton_HandleSlottingRestrictionReasonsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad
// (Event, Protected, HasOutParms, BlueprintEvent)

void UFortSquadSlotItemPickerTileButton::HandleItemSlottedToDifferentSquad()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad");

	UFortSquadSlotItemPickerTileButton_HandleItemSlottedToDifferentSquad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)

void UFortSquadSlotItemPickerTileButton::GetSlottingRestrictionReasons()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons");

	UFortSquadSlotItemPickerTileButton_GetSlottingRestrictionReasons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortItemTransform.ProcessPendingSeenTransformKeys
// (Final, Native, Private, BlueprintCallable)

void UFortItemTransform::ProcessPendingSeenTransformKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortItemTransform.ProcessPendingSeenTransformKeys");

	UFortItemTransform_ProcessPendingSeenTransformKeys_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortJournalQuestProgressBar.HandleNewQuestObjectiveBP
// (Event, Protected, BlueprintEvent)

void UFortJournalQuestProgressBar::HandleNewQuestObjectiveBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortJournalQuestProgressBar.HandleNewQuestObjectiveBP");

	UFortJournalQuestProgressBar_HandleNewQuestObjectiveBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortJournalQuestProgressBar.GetProgressDetails
// (Final, Native, Protected, HasOutParms, BlueprintCallable)

void UFortJournalQuestProgressBar::GetProgressDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortJournalQuestProgressBar.GetProgressDetails");

	UFortJournalQuestProgressBar_GetProgressDetails_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortLeaderboardContext.CanShowStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortLeaderboardContext::CanShowStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLeaderboardContext.CanShowStats");

	UFortLeaderboardContext_CanShowStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortLeaderboardContext.CanShowLeaderboards
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortLeaderboardContext::CanShowLeaderboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortLeaderboardContext.CanShowLeaderboards");

	UFortLeaderboardContext_CanShowLeaderboards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId
// (Final, Native, Protected, HasOutParms, BlueprintCallable)

void UFortMicIndicatorWidget::SetPlayerUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMicIndicatorWidget.SetPlayerUniqueId");

	UFortMicIndicatorWidget_SetPlayerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged
// (Event, Protected, BlueprintEvent)

void UFortMicIndicatorWidget::OnPlayerTalkingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMicIndicatorWidget.OnPlayerTalkingChanged");

	UFortMicIndicatorWidget_OnPlayerTalkingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMuted
// (Event, Protected, BlueprintEvent)

void UFortMicIndicatorWidget::OnPlayerMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMicIndicatorWidget.OnPlayerMuted");

	UFortMicIndicatorWidget_OnPlayerMuted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable
// (Event, Protected, BlueprintEvent)

void UFortMicIndicatorWidget::OnPlayerMicAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortMicIndicatorWidget.OnPlayerMicAvailable");

	UFortMicIndicatorWidget_OnPlayerMicAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.SoundFXVolumeChanged
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::SoundFXVolumeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.SoundFXVolumeChanged");

	UFortAudioOptions_SoundFXVolumeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.ShowQuality
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::ShowQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.ShowQuality");

	UFortAudioOptions_ShowQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.ShowChatVolume
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::ShowChatVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.ShowChatVolume");

	UFortAudioOptions_ShowChatVolume_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.SetVoiceChatPTTEnabled
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::SetVoiceChatPTTEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.SetVoiceChatPTTEnabled");

	UFortAudioOptions_SetVoiceChatPTTEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.SetVoiceChatEnabled
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::SetVoiceChatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.SetVoiceChatEnabled");

	UFortAudioOptions_SetVoiceChatEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.SetSubtitlesEnabled
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::SetSubtitlesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.SetSubtitlesEnabled");

	UFortAudioOptions_SetSubtitlesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.SetQuality
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::SetQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.SetQuality");

	UFortAudioOptions_SetQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.MusicVolumeChanged
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::MusicVolumeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.MusicVolumeChanged");

	UFortAudioOptions_MusicVolumeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetVoiceChatPTTEnabled
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetVoiceChatPTTEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetVoiceChatPTTEnabled");

	UFortAudioOptions_GetVoiceChatPTTEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetVoiceChatEnabled
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetVoiceChatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetVoiceChatEnabled");

	UFortAudioOptions_GetVoiceChatEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetSubtitlesEnabled
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetSubtitlesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetSubtitlesEnabled");

	UFortAudioOptions_GetSubtitlesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetSoundFXVolumeValue
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetSoundFXVolumeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetSoundFXVolumeValue");

	UFortAudioOptions_GetSoundFXVolumeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetQuality
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetQuality");

	UFortAudioOptions_GetQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetMusicVolumeValue
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetMusicVolumeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetMusicVolumeValue");

	UFortAudioOptions_GetMusicVolumeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetDialogVolumeValue
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetDialogVolumeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetDialogVolumeValue");

	UFortAudioOptions_GetDialogVolumeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.GetChatVolumeValue
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)

void UFortAudioOptions::GetChatVolumeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.GetChatVolumeValue");

	UFortAudioOptions_GetChatVolumeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.DialogVolumeChanged
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::DialogVolumeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.DialogVolumeChanged");

	UFortAudioOptions_DialogVolumeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortAudioOptions.ChatVolumeChanged
// (Final, Native, Private, BlueprintCallable)

void UFortAudioOptions::ChatVolumeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortAudioOptions.ChatVolumeChanged");

	UFortAudioOptions_ChatVolumeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.WindowModeChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::WindowModeChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.WindowModeChanged");

	UFortVideoOptions_WindowModeChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.ViewDistanceQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::ViewDistanceQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.ViewDistanceQualityChanged");

	UFortVideoOptions_ViewDistanceQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.UseVsyncChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsChecked                      (Parm, ZeroConstructor, IsPlainOldData)

void UFortVideoOptions::UseVsyncChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.UseVsyncChanged");

	UFortVideoOptions_UseVsyncChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.TextureQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::TextureQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.TextureQualityChanged");

	UFortVideoOptions_TextureQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.ShowGrassChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsChecked                      (Parm, ZeroConstructor, IsPlainOldData)

void UFortVideoOptions::ShowGrassChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.ShowGrassChanged");

	UFortVideoOptions_ShowGrassChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.ShowFPSChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsChecked                      (Parm, ZeroConstructor, IsPlainOldData)

void UFortVideoOptions::ShowFPSChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.ShowFPSChanged");

	UFortVideoOptions_ShowFPSChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.ShadowQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::ShadowQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.ShadowQualityChanged");

	UFortVideoOptions_ShadowQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.ResolutionChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::ResolutionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.ResolutionChanged");

	UFortVideoOptions_ResolutionChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.PostProcessQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::PostProcessQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.PostProcessQualityChanged");

	UFortVideoOptions_PostProcessQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.OnQualitySelectorChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::OnQualitySelectorChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.OnQualitySelectorChanged");

	UFortVideoOptions_OnQualitySelectorChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.MotionBlurChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           IsChecked                      (Parm, ZeroConstructor, IsPlainOldData)

void UFortVideoOptions::MotionBlurChanged(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.MotionBlurChanged");

	UFortVideoOptions_MotionBlurChanged_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.IsWindowedFullscreen
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::IsWindowedFullscreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.IsWindowedFullscreen");

	UFortVideoOptions_IsWindowedFullscreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.InitializeValues
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::InitializeValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.InitializeValues");

	UFortVideoOptions_InitializeValues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetViewDistanceQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetViewDistanceQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetViewDistanceQuality");

	UFortVideoOptions_GetViewDistanceQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetUseVsync
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetUseVsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetUseVsync");

	UFortVideoOptions_GetUseVsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetTextureQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetTextureQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetTextureQuality");

	UFortVideoOptions_GetTextureQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetShowGrass
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetShowGrass()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetShowGrass");

	UFortVideoOptions_GetShowGrass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetShowFPS
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetShowFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetShowFPS");

	UFortVideoOptions_GetShowFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetShadowQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetShadowQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetShadowQuality");

	UFortVideoOptions_GetShadowQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetPostProcessQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetPostProcessQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetPostProcessQuality");

	UFortVideoOptions_GetPostProcessQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetPossibleWindowModes
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetPossibleWindowModes()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetPossibleWindowModes");

	UFortVideoOptions_GetPossibleWindowModes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetPossibleFPS
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetPossibleFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetPossibleFPS");

	UFortVideoOptions_GetPossibleFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetPossibleDisplayResolutions
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetPossibleDisplayResolutions()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetPossibleDisplayResolutions");

	UFortVideoOptions_GetPossibleDisplayResolutions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetMotionBlur
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetMotionBlur()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetMotionBlur");

	UFortVideoOptions_GetMotionBlur_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetEffectsQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetEffectsQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetEffectsQuality");

	UFortVideoOptions_GetEffectsQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetDiscreteResolutionQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetDiscreteResolutionQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetDiscreteResolutionQuality");

	UFortVideoOptions_GetDiscreteResolutionQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetCurrentWindowMode
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetCurrentWindowMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetCurrentWindowMode");

	UFortVideoOptions_GetCurrentWindowMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetCurrentFPS
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetCurrentFPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetCurrentFPS");

	UFortVideoOptions_GetCurrentFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetCurrentDisplayResolution
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetCurrentDisplayResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetCurrentDisplayResolution");

	UFortVideoOptions_GetCurrentDisplayResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.GetAntiAliasingQuality
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::GetAntiAliasingQuality()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.GetAntiAliasingQuality");

	UFortVideoOptions_GetAntiAliasingQuality_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.FrameRateLimitChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            FrameRateLimit                 (Parm, ZeroConstructor, IsPlainOldData)

void UFortVideoOptions::FrameRateLimitChanged(int FrameRateLimit)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.FrameRateLimitChanged");

	UFortVideoOptions_FrameRateLimitChanged_Params params;
	params.FrameRateLimit = FrameRateLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.EffectsQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::EffectsQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.EffectsQualityChanged");

	UFortVideoOptions_EffectsQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.DiscreteResolutionQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::DiscreteResolutionQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.DiscreteResolutionQualityChanged");

	UFortVideoOptions_DiscreteResolutionQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortVideoOptions.AntiAliasingQualityChanged
// (Final, Native, Protected, BlueprintCallable)

void UFortVideoOptions::AntiAliasingQualityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortVideoOptions.AntiAliasingQualityChanged");

	UFortVideoOptions_AntiAliasingQualityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortQuestScreen.ProcessPendingSeenQuestItems
// (Final, Native, Private, BlueprintCallable)

void UFortQuestScreen::ProcessPendingSeenQuestItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortQuestScreen.ProcessPendingSeenQuestItems");

	UFortQuestScreen_ProcessPendingSeenQuestItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortQuestExpiresWidget.SetData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UFortQuestExpiresWidget::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortQuestExpiresWidget.SetData");

	UFortQuestExpiresWidget_SetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
// (Native, Event, Protected, BlueprintEvent)

void UFortQuestExpiresWidget::OnQuestExpirationUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortQuestExpiresWidget.OnQuestExpirationUpdated");

	UFortQuestExpiresWidget_OnQuestExpirationUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortResultsSummaryScreenWidget.GetTotalScoreSortedScoreIndices
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortResultsSummaryScreenWidget::GetTotalScoreSortedScoreIndices()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortResultsSummaryScreenWidget.GetTotalScoreSortedScoreIndices");

	UFortResultsSummaryScreenWidget_GetTotalScoreSortedScoreIndices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardEpicQuestData.GetIconBrush
// (Native, Public, HasOutParms, BlueprintCallable)

void UFortRewardEpicQuestData::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardEpicQuestData.GetIconBrush");

	UFortRewardEpicQuestData_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardQuestData.GetIconBrush
// (Native, Public, HasOutParms, BlueprintCallable)

void UFortRewardQuestData::GetIconBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardQuestData.GetIconBrush");

	UFortRewardQuestData_GetIconBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardConversationWidget.IsValidConversation
// (Final, Native, Public, BlueprintCallable)

void UFortRewardConversationWidget::IsValidConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardConversationWidget.IsValidConversation");

	UFortRewardConversationWidget_IsValidConversation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardConversationWidget.GetDataFromSentence
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortRewardConversationWidget::GetDataFromSentence()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardConversationWidget.GetDataFromSentence");

	UFortRewardConversationWidget_GetDataFromSentence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardNewQuestWidget.IsValidConversation
// (Final, Native, Public, BlueprintCallable)

void UFortRewardNewQuestWidget::IsValidConversation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardNewQuestWidget.IsValidConversation");

	UFortRewardNewQuestWidget_IsValidConversation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortRewardNewQuestWidget.GetDataFromSentence
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UFortRewardNewQuestWidget::GetDataFromSentence()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortRewardNewQuestWidget.GetDataFromSentence");

	UFortRewardNewQuestWidget_GetDataFromSentence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)

void UFortSquadLandingPageDefenderSummary::HandleClearDefenderSquadDetailsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleClearDefenderSquadDetailsBP");

	UFortSquadLandingPageDefenderSummary_HandleClearDefenderSquadDetailsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)

void UFortSquadLandingPageDefenderSummary::HandleAddLockedDefenderSquadDetailsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddLockedDefenderSquadDetailsBP");

	UFortSquadLandingPageDefenderSummary_HandleAddLockedDefenderSquadDetailsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP
// (Event, Public, BlueprintEvent)

void UFortSquadLandingPageDefenderSummary::HandleAddDefenderSquadDetailsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSquadLandingPageDefenderSummary.HandleAddDefenderSquadDetailsBP");

	UFortSquadLandingPageDefenderSummary_HandleAddDefenderSquadDetailsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortDefenderSquadSelectorButton::TryGetTheaterUniqueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDefenderSquadSelectorButton.TryGetTheaterUniqueId");

	UFortDefenderSquadSelectorButton_TryGetTheaterUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortDefenderSquadSelectorButton.TryGetPowerLevel
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UFortDefenderSquadSelectorButton::TryGetPowerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortDefenderSquadSelectorButton.TryGetPowerLevel");

	UFortDefenderSquadSelectorButton_TryGetPowerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSubGameSelectButtonBase.UpdateButtonState
// (Event, Public, BlueprintEvent)

void UFortSubGameSelectButtonBase::UpdateButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSubGameSelectButtonBase.UpdateButtonState");

	UFortSubGameSelectButtonBase_UpdateButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSubGameSelectBase.GetShortDescription
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortSubGameSelectBase::GetShortDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSubGameSelectBase.GetShortDescription");

	UFortSubGameSelectBase_GetShortDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSubGameSelectBase.GetFullDescription
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortSubGameSelectBase::GetFullDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSubGameSelectBase.GetFullDescription");

	UFortSubGameSelectBase_GetFullDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetUpgradeStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetUpgradeStats(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetUpgradeStats");

	UFortTooltipUIContext_GetUpgradeStats_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetUIDataForTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortTooltipUIContext::GetUIDataForTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetUIDataForTag");

	UFortTooltipUIContext_GetUIDataForTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetTooltipStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetTooltipStats(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetTooltipStats");

	UFortTooltipUIContext_GetTooltipStats_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetTooltipStat
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetTooltipStat(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetTooltipStat");

	UFortTooltipUIContext_GetTooltipStat_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetTooltipAttributes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetTooltipAttributes(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetTooltipAttributes");

	UFortTooltipUIContext_GetTooltipAttributes_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortTooltipUIContext::GetDisplayNameAndMultiBrushForTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetDisplayNameAndMultiBrushForTag");

	UFortTooltipUIContext_GetDisplayNameAndMultiBrushForTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetDescription
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetDescription(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetDescription");

	UFortTooltipUIContext_GetDescription_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetComparisonStats
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetComparisonStats(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetComparisonStats");

	UFortTooltipUIContext_GetComparisonStats_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortTooltipUIContext.GetCombinedDescription
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortTooltipUIContext::GetCombinedDescription(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortTooltipUIContext.GetCombinedDescription");

	UFortTooltipUIContext_GetCombinedDescription_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UFortUIBlueprintFunctionLibrary::STATIC_GetMetaStringOnOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer");

	UFortUIBlueprintFunctionLibrary_GetMetaStringOnOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UFortUIBlueprintFunctionLibrary::STATIC_GetMetaIntOnOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer");

	UFortUIBlueprintFunctionLibrary_GetMetaIntOnOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)

void UFortUIBlueprintFunctionLibrary::STATIC_GetMetaBoolOnOffer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer");

	UFortUIBlueprintFunctionLibrary_GetMetaBoolOnOffer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortUIBlueprintFunctionLibrary::STATIC_GetItemSmallPreviewImageMultiSizeBrush(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush");

	UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageMultiSizeBrush_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortItem*               Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortUIBlueprintFunctionLibrary::STATIC_GetItemSmallPreviewImageBrush(class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush");

	UFortUIBlueprintFunctionLibrary_GetItemSmallPreviewImageBrush_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UFortUIBlueprintFunctionLibrary::STATIC_GetItemDefinitionSmallPreviewImageMultiSizeBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush");

	UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageMultiSizeBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)

void UFortUIBlueprintFunctionLibrary::STATIC_GetItemDefinitionSmallPreviewImageBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush");

	UFortUIBlueprintFunctionLibrary_GetItemDefinitionSmallPreviewImageBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.UseSpecificPinataWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::UseSpecificPinataWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.UseSpecificPinataWeapon");

	UFortUIDataConfigurationContext_UseSpecificPinataWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.IsLimitedToES2Features
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::IsLimitedToES2Features()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.IsLimitedToES2Features");

	UFortUIDataConfigurationContext_IsLimitedToES2Features_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.IsChatEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::IsChatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.IsChatEnabled");

	UFortUIDataConfigurationContext_IsChatEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.GetFrontEndFFSettings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::GetFrontEndFFSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.GetFrontEndFFSettings");

	UFortUIDataConfigurationContext_GetFrontEndFFSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.AreSocialFeaturesEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::AreSocialFeaturesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.AreSocialFeaturesEnabled");

	UFortUIDataConfigurationContext_AreSocialFeaturesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIDataConfigurationContext.ArePartyFeaturesEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIDataConfigurationContext::ArePartyFeaturesEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIDataConfigurationContext.ArePartyFeaturesEnabled");

	UFortUIDataConfigurationContext_ArePartyFeaturesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.IsLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::IsLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.IsLocalPlayer");

	UFortUIScoreReport_IsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetXpToCompleteLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UFortUIScoreReport::GetXpToCompleteLevel(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetXpToCompleteLevel");

	UFortUIScoreReport_GetXpToCompleteLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetXpInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetXpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetXpInfo");

	UFortUIScoreReport_GetXpInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetTeamScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetTeamScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetTeamScore");

	UFortUIScoreReport_GetTeamScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetScoreReportIndicesByPlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetScoreReportIndicesByPlayerID");

	UFortUIScoreReport_GetScoreReportIndicesByPlayerID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetScoreReportIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetScoreReportIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetScoreReportIndex");

	UFortUIScoreReport_GetScoreReportIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetPlayerScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetPlayerScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetPlayerScore");

	UFortUIScoreReport_GetPlayerScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetPlayerName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetPlayerName");

	UFortUIScoreReport_GetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetPlayerIDFromScoreReportIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetPlayerIDFromScoreReportIndex");

	UFortUIScoreReport_GetPlayerIDFromScoreReportIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetPlayerCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetPlayerCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetPlayerCount");

	UFortUIScoreReport_GetPlayerCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetLevelProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Level                          (Parm, ZeroConstructor, IsPlainOldData)

void UFortUIScoreReport::GetLevelProgress(int Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetLevelProgress");

	UFortUIScoreReport_GetLevelProgress_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetDifficultBonusScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetDifficultBonusScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetDifficultBonusScore");

	UFortUIScoreReport_GetDifficultBonusScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetDifficultBonusMultiplier()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetDifficultBonusMultiplier");

	UFortUIScoreReport_GetDifficultBonusMultiplier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetCurrentPlayerPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetCurrentPlayerPawn");

	UFortUIScoreReport_GetCurrentPlayerPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIScoreReport.GetBadgeScore
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIScoreReport::GetBadgeScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIScoreReport.GetBadgeScore");

	UFortUIScoreReport_GetBadgeScore_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.AthenaHUDBase.TeamMembersChanged
// (Event, Protected, BlueprintEvent)

void UAthenaHUDBase::TeamMembersChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.AthenaHUDBase.TeamMembersChanged");

	UAthenaHUDBase_TeamMembersChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.StartUpdateCheck
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::StartUpdateCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.StartUpdateCheck");

	UFortUIStateWidget_Login_StartUpdateCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.StartManualLogin
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::StartManualLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.StartManualLogin");

	UFortUIStateWidget_Login_StartManualLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.StartAutoLogin
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::StartAutoLogin()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.StartAutoLogin");

	UFortUIStateWidget_Login_StartAutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.ShowPostLoginLogoutError
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::ShowPostLoginLogoutError()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.ShowPostLoginLogoutError");

	UFortUIStateWidget_Login_ShowPostLoginLogoutError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.SendEulaResponse
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::SendEulaResponse()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.SendEulaResponse");

	UFortUIStateWidget_Login_SendEulaResponse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnShowLoginMessage
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortUIStateWidget_Login::OnShowLoginMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnShowLoginMessage");

	UFortUIStateWidget_Login_OnShowLoginMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnPostLoginLogoutComplete
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortUIStateWidget_Login::OnPostLoginLogoutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnPostLoginLogoutComplete");

	UFortUIStateWidget_Login_OnPostLoginLogoutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnPatchingComplete
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget_Login::OnPatchingComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnPatchingComplete");

	UFortUIStateWidget_Login_OnPatchingComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnNeedsPurchaseOrAccountLinking
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget_Login::OnNeedsPurchaseOrAccountLinking()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnNeedsPurchaseOrAccountLinking");

	UFortUIStateWidget_Login_OnNeedsPurchaseOrAccountLinking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnLogoutComplete
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget_Login::OnLogoutComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnLogoutComplete");

	UFortUIStateWidget_Login_OnLogoutComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnLoginSuceeded
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortUIStateWidget_Login::OnLoginSuceeded()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnLoginSuceeded");

	UFortUIStateWidget_Login_OnLoginSuceeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnLoginFailed
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortUIStateWidget_Login::OnLoginFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnLoginFailed");

	UFortUIStateWidget_Login_OnLoginFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnEulaAvailable
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortUIStateWidget_Login::OnEulaAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnEulaAvailable");

	UFortUIStateWidget_Login_OnEulaAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.OnDisplayErrorComplete
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget_Login::OnDisplayErrorComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.OnDisplayErrorComplete");

	UFortUIStateWidget_Login_OnDisplayErrorComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.IsLoggingOut
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::IsLoggingOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.IsLoggingOut");

	UFortUIStateWidget_Login_IsLoggingOut_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.IsLoggedIn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIStateWidget_Login::IsLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.IsLoggedIn");

	UFortUIStateWidget_Login_IsLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.GetPlatformDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIStateWidget_Login::GetPlatformDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.GetPlatformDisplayName");

	UFortUIStateWidget_Login_GetPlatformDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.GetEULAText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UFortUIStateWidget_Login::GetEULAText()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.GetEULAText");

	UFortUIStateWidget_Login_GetEULAText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.CheckShowLoginMessage
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::CheckShowLoginMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.CheckShowLoginMessage");

	UFortUIStateWidget_Login_CheckShowLoginMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget_Login.CheckNetworkError
// (Final, Native, Public, BlueprintCallable)

void UFortUIStateWidget_Login::CheckNetworkError()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget_Login.CheckNetworkError");

	UFortUIStateWidget_Login_CheckNetworkError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortQuestRewardChoiceWidget.SetQuest
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UFortQuestRewardChoiceWidget::SetQuest(class UFortQuestItem* Quest)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortQuestRewardChoiceWidget.SetQuest");

	UFortQuestRewardChoiceWidget_SetQuest_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget.OnExitState
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget::OnExitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget.OnExitState");

	UFortUIStateWidget_OnExitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUIStateWidget.OnEnterState
// (Event, Public, BlueprintEvent)

void UFortUIStateWidget::OnEnterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUIStateWidget.OnEnterState");

	UFortUIStateWidget_OnEnterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged
// (Native, Event, Public, BlueprintEvent)

void UFortBluGloCounter::OnBluGloQuantityChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortBluGloCounter.OnBluGloQuantityChanged");

	UFortBluGloCounter_OnBluGloQuantityChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged
// (Native, Event, Public, BlueprintEvent)

void UFortCapturePointWidget::OnCapturePointDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortCapturePointWidget.OnCapturePointDataChanged");

	UFortCapturePointWidget_OnCapturePointDataChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.ToggleExpansion
// (Event, Public, BlueprintEvent)

void UFortListItem::ToggleExpansion()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.ToggleExpansion");

	UFortListItem_ToggleExpansion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.SetSelected
// (Event, Public, BlueprintEvent)

void UFortListItem::SetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetSelected");

	UFortListItem_SetSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.SetIndexInList
// (Event, Public, BlueprintEvent)

void UFortListItem::SetIndexInList()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetIndexInList");

	UFortListItem_SetIndexInList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.SetData
// (Event, Public, BlueprintEvent)

void UFortListItem::SetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.SetData");

	UFortListItem_SetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked
// (Event, Public, BlueprintEvent)

void UFortListItem::Private_OnExpanderArrowShiftClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.Private_OnExpanderArrowShiftClicked");

	UFortListItem_Private_OnExpanderArrowShiftClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.IsItemExpanded
// (Event, Public, BlueprintEvent, Const)

void UFortListItem::IsItemExpanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.IsItemExpanded");

	UFortListItem_IsItemExpanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.GetSelectionMode
// (Event, Public, BlueprintEvent, Const)

void UFortListItem::GetSelectionMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.GetSelectionMode");

	UFortListItem_GetSelectionMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.GetIndentLevel
// (Event, Public, BlueprintEvent, Const)

void UFortListItem::GetIndentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.GetIndentLevel");

	UFortListItem_GetIndentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortListItem.DoesItemHaveChildren
// (Event, Public, BlueprintEvent, Const)

void UFortListItem::DoesItemHaveChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortListItem.DoesItemHaveChildren");

	UFortListItem_DoesItemHaveChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortSocialItemWidget.SetSocialItem
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortSocialItemWidget::SetSocialItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortSocialItemWidget.SetSocialItem");

	UFortSocialItemWidget_SetSocialItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortniteUI.FortUserChoiceWidget.SetChoices
// (Event, Public, HasOutParms, BlueprintEvent)

void UFortUserChoiceWidget::SetChoices()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortniteUI.FortUserChoiceWidget.SetChoices");

	UFortUserChoiceWidget_SetChoices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
