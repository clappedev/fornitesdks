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

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInConsumePointerInput         (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUserWidget.SetConsumePointerInput");

	UCommonUserWidget_SetConsumePointerInput_Params params;
	params.bInConsumePointerInput = bInConsumePointerInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatableWidget::IsActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.IsActivated");

	UCommonActivatableWidget_IsActivated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.DeactivateWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidget::DeactivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.DeactivateWidget");

	UCommonActivatableWidget_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatableWidget::BP_OnHandleBackAction()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction");

	UCommonActivatableWidget_BP_OnHandleBackAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)

void UCommonActivatableWidget::BP_OnDeactivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnDeactivated");

	UCommonActivatableWidget_BP_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UCommonActivatableWidget::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_OnActivated");

	UCommonActivatableWidget_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget");

	UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidget.ActivateWidget
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidget::ActivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidget.ActivateWidget");

	UCommonActivatableWidget_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetInputActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> NewInputActions                (Parm, ZeroConstructor)

void UCommonActionWidget::SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetInputActions");

	UCommonActionWidget_SetInputActions_Params params;
	params.NewInputActions = NewInputActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetInputAction");

	UCommonActionWidget_SetInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.SetIconRimBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InIconRimBrush                 (Parm)

void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InIconRimBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.SetIconRimBrush");

	UCommonActionWidget_SetIconRimBrush_Params params;
	params.InIconRimBrush = InIconRimBrush;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature");

	UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActionWidget::IsHeldAction()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.IsHeldAction");

	UCommonActionWidget_IsHeldAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetIcon");

	UCommonActionWidget_GetIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonActionWidget::GetDisplayText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActionWidget.GetDisplayText");

	UCommonActionWidget_GetDisplayText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgressPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (Parm, ZeroConstructor)
// class UCommonPopupMenu*        PopupMenu                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatablePanel::SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgressPopupMenu");

	UCommonActivatablePanel_SetInputActionHandlerWithProgressPopupMenu_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;
	params.PopupMenu = PopupMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (Parm, ZeroConstructor)

void UCommonActivatablePanel::SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress");

	UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithPopupMenu
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// class UCommonPopupMenu*        PopupMenu                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatablePanel::SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithPopupMenu");

	UCommonActivatablePanel_SetInputActionHandlerWithPopupMenu_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;
	params.PopupMenu = PopupMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)

void UCommonActivatablePanel::SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetInputActionHandler");

	UCommonActivatablePanel_SetInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;
	params.CommitedEvent = CommitedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// EInputActionState              State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         DisabledCommitEvent            (Parm, ZeroConstructor)

void UCommonActivatablePanel::SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent");

	UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.State = State;
	params.DisabledCommitEvent = DisabledCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// EInputActionState              State                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         DisabledCommitEvent            (Parm, ZeroConstructor)

void UCommonActivatablePanel::SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent");

	UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params params;
	params.InputActionRow = InputActionRow;
	params.State = State;
	params.DisabledCommitEvent = DisabledCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// EInputActionState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatablePanel::SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle");

	UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params params;
	params.InputActionRow = InputActionRow;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// EInputActionState              State                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatablePanel::SetActionHandlerState(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.SetActionHandlerState");

	UCommonActivatablePanel_SetActionHandlerState_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)

void UCommonActivatablePanel::RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler");

	UCommonActivatablePanel_RemoveInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatablePanel::RemoveAllInputActionHandlers()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers");

	UCommonActivatablePanel_RemoveAllInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.PopPanel
// (Native, Public, BlueprintCallable)

void UCommonActivatablePanel::PopPanel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.PopPanel");

	UCommonActivatablePanel_PopPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnTransitionedBySwitcher
// (Event, Protected, BlueprintEvent)

void UCommonActivatablePanel::OnTransitionedBySwitcher()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnTransitionedBySwitcher");

	UCommonActivatablePanel_OnTransitionedBySwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnRemovedFromActivationStack
// (Event, Protected, BlueprintEvent)

void UCommonActivatablePanel::OnRemovedFromActivationStack()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnRemovedFromActivationStack");

	UCommonActivatablePanel_OnRemovedFromActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatablePanel::OnInputModeChanged(bool bUsingGamepad)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnInputModeChanged");

	UCommonActivatablePanel_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnBeginOutro
// (Native, Event, Protected, BlueprintEvent)

void UCommonActivatablePanel::OnBeginOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnBeginOutro");

	UCommonActivatablePanel_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnBeginIntro
// (Native, Event, Protected, BlueprintEvent)

void UCommonActivatablePanel::OnBeginIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnBeginIntro");

	UCommonActivatablePanel_OnBeginIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.OnAddedToActivationStack
// (Event, Protected, BlueprintEvent)

void UCommonActivatablePanel::OnAddedToActivationStack()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.OnAddedToActivationStack");

	UCommonActivatablePanel_OnAddedToActivationStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.IsIntroed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatablePanel::IsIntroed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.IsIntroed");

	UCommonActivatablePanel_IsIntroed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.IsInActivationStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatablePanel::IsInActivationStack()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.IsInActivationStack");

	UCommonActivatablePanel_IsInActivationStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatablePanel::HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.HasInputActionHandler");

	UCommonActivatablePanel_HasInputActionHandler_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.GetInputActions
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FCommonInputActionHandlerData> InputActionDataRows            (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonActivatablePanel::GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.GetInputActions");

	UCommonActivatablePanel_GetInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionDataRows != nullptr)
		*InputActionDataRows = params.InputActionDataRows;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatablePanel.EndOutro
// (Final, Native, Protected, BlueprintCallable)

void UCommonActivatablePanel::EndOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.EndOutro");

	UCommonActivatablePanel_EndOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.EndIntro
// (Final, Native, Protected, BlueprintCallable)

void UCommonActivatablePanel::EndIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.EndIntro");

	UCommonActivatablePanel_EndIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.BeginOutro
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatablePanel::BeginOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.BeginOutro");

	UCommonActivatablePanel_BeginOutro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.BeginIntro
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatablePanel::BeginIntro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.BeginIntro");

	UCommonActivatablePanel_BeginIntro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonActivatablePanel::AddInputActionNoHandler(class UDataTable* DataTable, const struct FName& RowName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler");

	UCommonActivatablePanel_AddInputActionNoHandler_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgressPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (Parm, ZeroConstructor)
// class UCommonPopupMenu*        PopupMenu                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatablePanel::AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgressPopup");

	UCommonActivatablePanel_AddInputActionHandlerWithProgressPopup_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;
	params.PopupMenu = PopupMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// struct FScriptDelegate         ProgressEvent                  (Parm, ZeroConstructor)

void UCommonActivatablePanel::AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress");

	UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)
// class UCommonPopupMenu*        PopupMenu                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatablePanel::AddInputActionHandlerWithPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithPopup");

	UCommonActivatablePanel_AddInputActionHandlerWithPopup_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;
	params.PopupMenu = PopupMenu;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*              DataTable                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RowName                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         CommitedEvent                  (Parm, ZeroConstructor)

void UCommonActivatablePanel::AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatablePanel.AddInputActionHandler");

	UCommonActivatablePanel_AddInputActionHandler_Params params;
	params.DataTable = DataTable;
	params.RowName = RowName;
	params.CommitedEvent = CommitedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget* WidgetToRemove                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* WidgetToRemove)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget");

	UCommonActivatableWidgetContainerBase_RemoveWidget_Params params;
	params.WidgetToRemove = WidgetToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatableWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget");

	UCommonActivatableWidgetContainerBase_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
// (Final, Native, Public, BlueprintCallable)

void UCommonActivatableWidgetContainerBase::ClearWidgets()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets");

	UCommonActivatableWidgetContainerBase_ClearWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget* ActivatableWidgetClass         (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonActivatableWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(class UCommonActivatableWidget* ActivatableWidgetClass)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget");

	UCommonActivatableWidgetContainerBase_BP_AddWidget_Params params;
	params.ActivatableWidgetClass = ActivatableWidgetClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bDisableAnimation              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool bDisableAnimation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation");

	UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params params;
	params.bDisableAnimation = bDisableAnimation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonAnimatedSwitcher::HasWidgets()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.HasWidgets");

	UCommonAnimatedSwitcher_HasWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool bCanWrap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget");

	UCommonAnimatedSwitcher_ActivatePreviousWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bCanWrap                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonAnimatedSwitcher::ActivateNextWidget(bool bCanWrap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget");

	UCommonAnimatedSwitcher_ActivateNextWidget_Params params;
	params.bCanWrap = bCanWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBorderStyle.GetBackgroundBrush");

	UCommonBorderStyle_GetBackgroundBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonBorder.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonBorderStyle*      InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonBorder::SetStyle(class UCommonBorderStyle* InStyle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBorder.SetStyle");

	UCommonBorder_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldOnlyDisplayOwningPlayerActions (Parm, ZeroConstructor, IsPlainOldData)

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly");

	UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params params;
	params.bShouldOnlyDisplayOwningPlayerActions = bShouldOnlyDisplayOwningPlayerActions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.StopDoubleClickPropagation
// (Final, Native, Protected, BlueprintCallable)

void UCommonButton::StopDoubleClickPropagation()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.StopDoubleClickPropagation");

	UCommonButton_StopDoubleClickPropagation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetTriggeringInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButton::SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetTriggeringInputAction");

	UCommonButton_SetTriggeringInputAction_Params params;
	params.InputActionRow = InputActionRow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetTriggeredInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (ConstParm, Parm, OutParm, ReferenceParm)
// class UCommonActivatablePanel* OldPanel                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButton::SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetTriggeredInputAction");

	UCommonButton_SetTriggeredInputAction_Params params;
	params.InputActionRow = InputActionRow;
	params.OldPanel = OldPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonTouchMethod> InTouchMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetTouchMethod");

	UCommonButton_SetTouchMethod_Params params;
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonButtonStyle*      InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetStyle(class UCommonButtonStyle* InStyle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetStyle");

	UCommonButton_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetShouldUseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInShouldUseFallbackDefaultInputAction (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetShouldUseFallbackDefaultInputAction");

	UCommonButton_SetShouldUseFallbackDefaultInputAction_Params params;
	params.bInShouldUseFallbackDefaultInputAction = bInShouldUseFallbackDefaultInputAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInShouldSelectUponReceivingFocus (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus");

	UCommonButton_SetShouldSelectUponReceivingFocus_Params params;
	params.bInShouldSelectUponReceivingFocus = bInShouldSelectUponReceivingFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetSelectedInternal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllowSound                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBroadcast                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetSelectedInternal");

	UCommonButton_SetSelectedInternal_Params params;
	params.bInSelected = bInSelected;
	params.bAllowSound = bAllowSound;
	params.bBroadcast = bBroadcast;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonPressMethod> InPressMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetPressMethod");

	UCommonButton_SetPressMethod_Params params;
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetPressedSoundOverride(class USoundBase* Sound)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetPressedSoundOverride");

	UCommonButton_SetPressedSoundOverride_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetMinDimensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InMinWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            InMinHeight                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetMinDimensions(int InMinWidth, int InMinHeight)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetMinDimensions");

	UCommonButton_SetMinDimensions_Params params;
	params.InMinWidth = InMinWidth;
	params.InMinHeight = InMinHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsToggleable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsToggleable                (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsToggleable(bool bInIsToggleable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsToggleable");

	UCommonButton_SetIsToggleable_Params params;
	params.bInIsToggleable = bInIsToggleable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           InSelected                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGiveClickFeedback             (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsSelected(bool InSelected, bool bGiveClickFeedback)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsSelected");

	UCommonButton_SetIsSelected_Params params;
	params.InSelected = InSelected;
	params.bGiveClickFeedback = bGiveClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsSelectable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsSelectable                (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsSelectable(bool bInIsSelectable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsSelectable");

	UCommonButton_SetIsSelectable_Params params;
	params.bInIsSelectable = bInIsSelectable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsInteractionEnabled        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsInteractionEnabled(bool bInIsInteractionEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsInteractionEnabled");

	UCommonButton_SetIsInteractionEnabled_Params params;
	params.bInIsInteractionEnabled = bInIsInteractionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsInteractableWhenSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInInteractableWhenSelected    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsInteractableWhenSelected(bool bInInteractableWhenSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsInteractableWhenSelected");

	UCommonButton_SetIsInteractableWhenSelected_Params params;
	params.bInInteractableWhenSelected = bInInteractableWhenSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetIsFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsFocusable                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetIsFocusable(bool bInIsFocusable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetIsFocusable");

	UCommonButton_SetIsFocusable_Params params;
	params.bInIsFocusable = bInIsFocusable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetInputActionProgressMaterial
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FSlateBrush             InProgressMaterialBrush        (ConstParm, Parm, OutParm, ReferenceParm)
// struct FName                   InProgressMaterialParam        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCommonButton::SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetInputActionProgressMaterial");

	UCommonButton_SetInputActionProgressMaterial_Params params;
	params.InProgressMaterialBrush = InProgressMaterialBrush;
	params.InProgressMaterialParam = InProgressMaterialParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*              Sound                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetHoveredSoundOverride(class USoundBase* Sound)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetHoveredSoundOverride");

	UCommonButton_SetHoveredSoundOverride_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EButtonClickMethod> InClickMethod                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.SetClickMethod");

	UCommonButton_SetClickMethod_Params params;
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NewTriggeredAction             (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButton::OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnTriggeredInputActionChanged");

	UCommonButton_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnInputMethodChanged
// (Native, Protected)
// Parameters:
// ECommonInputType               CurrentInputType               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::OnInputMethodChanged(ECommonInputType CurrentInputType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnInputMethodChanged");

	UCommonButton_OnInputMethodChanged_Params params;
	params.CurrentInputType = CurrentInputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UCommonButton::OnCurrentTextStyleChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnCurrentTextStyleChanged");

	UCommonButton_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          HeldPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::OnActionProgress(float HeldPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnActionProgress");

	UCommonButton_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UCommonButton::OnActionComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.OnActionComplete");

	UCommonButton_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.NativeOnActionProgress
// (Native, Protected)
// Parameters:
// float                          HeldPercent                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButton::NativeOnActionProgress(float HeldPercent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.NativeOnActionProgress");

	UCommonButton_NativeOnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.NativeOnActionComplete
// (Native, Protected)

void UCommonButton::NativeOnActionComplete()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.NativeOnActionComplete");

	UCommonButton_NativeOnActionComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::IsPressed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.IsPressed");

	UCommonButton_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::IsInteractionEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.IsInteractionEnabled");

	UCommonButton_IsInteractionEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.HandleTriggeringActionCommited
// (Native, Protected, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButton::HandleTriggeringActionCommited(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleTriggeringActionCommited");

	UCommonButton_HandleTriggeringActionCommited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonButton.HandleFocusReceived
// (Native, Protected)

void UCommonButton::HandleFocusReceived()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleFocusReceived");

	UCommonButton_HandleFocusReceived_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.HandleButtonReleased
// (Final, Native, Protected)

void UCommonButton::HandleButtonReleased()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleButtonReleased");

	UCommonButton_HandleButtonReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.HandleButtonPressed
// (Final, Native, Protected)

void UCommonButton::HandleButtonPressed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleButtonPressed");

	UCommonButton_HandleButtonPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.HandleButtonClicked
// (Final, Native, Protected)

void UCommonButton::HandleButtonClicked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.HandleButtonClicked");

	UCommonButton_HandleButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonStyle*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonButtonStyle* UCommonButton::GetStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetStyle");

	UCommonButton_GetStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UCommonButton::GetSingleMaterialStyleMID()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetSingleMaterialStyleMID");

	UCommonButton_GetSingleMaterialStyleMID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::GetShouldSelectUponReceivingFocus()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus");

	UCommonButton_GetShouldSelectUponReceivingFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::GetSelected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetSelected");

	UCommonButton_GetSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetIsFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::GetIsFocusable()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetIsFocusable");

	UCommonButton_GetIsFocusable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetInputAction
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRow                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButton::GetInputAction(struct FDataTableRowHandle* InputActionRow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetInputAction");

	UCommonButton_GetInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputActionRow != nullptr)
		*InputActionRow = params.InputActionRow;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentTextStyleClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButton::GetCurrentTextStyleClass()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentTextStyleClass");

	UCommonButton_GetCurrentTextStyleClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButton::GetCurrentTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentTextStyle");

	UCommonButton_GetCurrentTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButton.GetCurrentCustomPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButton::GetCurrentCustomPadding(struct FMargin* OutCustomPadding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentCustomPadding");

	UCommonButton_GetCurrentCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButton.GetCurrentButtonPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButton::GetCurrentButtonPadding(struct FMargin* OutButtonPadding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.GetCurrentButtonPadding");

	UCommonButton_GetCurrentButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// Function CommonUI.CommonButton.DisableButtonWithReason
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   DisabledReason                 (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonButton::DisableButtonWithReason(const struct FText& DisabledReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.DisableButtonWithReason");

	UCommonButton_DisableButtonWithReason_Params params;
	params.DisabledReason = DisabledReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.ClearSelection
// (Final, Native, Public, BlueprintCallable)

void UCommonButton::ClearSelection()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.ClearSelection");

	UCommonButton_ClearSelection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnUnhovered");

	UCommonButton_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnSelected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnSelected");

	UCommonButton_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnHovered");

	UCommonButton_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnEnabled");

	UCommonButton_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnDoubleClicked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnDoubleClicked");

	UCommonButton_BP_OnDoubleClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnDisabled");

	UCommonButton_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnDeselected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnDeselected");

	UCommonButton_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButton.BP_OnClicked
// (Event, Protected, BlueprintEvent)

void UCommonButton::BP_OnClicked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButton.BP_OnClicked");

	UCommonButton_BP_OnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
// (Event, Protected, BlueprintEvent)

void UCommonBoundActionButton::OnUpdateInputAction()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonBoundActionButton.OnUpdateInputAction");

	UCommonBoundActionButton_OnUpdateInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedTextStyle");

	UCommonButtonStyle_GetSelectedTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush");

	UCommonButtonStyle_GetSelectedPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle");

	UCommonButtonStyle_GetSelectedHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush");

	UCommonButtonStyle_GetSelectedHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush");

	UCommonButtonStyle_GetSelectedBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalTextStyle");

	UCommonButtonStyle_GetNormalTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalPressedBrush");

	UCommonButtonStyle_GetNormalPressedBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle");

	UCommonButtonStyle_GetNormalHoveredTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush");

	UCommonButtonStyle_GetNormalHoveredBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetNormalBaseBrush");

	UCommonButtonStyle_GetNormalBaseBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetMaterialBrush");

	UCommonButtonStyle_GetMaterialBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledTextStyle");

	UCommonButtonStyle_GetDisabledTextStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             Brush                          (Parm, OutParm)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* Brush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetDisabledBrush");

	UCommonButtonStyle_GetDisabledBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;
}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutCustomPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* OutCustomPadding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetCustomPadding");

	UCommonButtonStyle_GetCustomPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCustomPadding != nullptr)
		*OutCustomPadding = params.OutCustomPadding;
}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutButtonPadding               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* OutButtonPadding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonStyle.GetButtonPadding");

	UCommonButtonStyle_GetButtonPadding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutButtonPadding != nullptr)
		*OutButtonPadding = params.OutButtonPadding;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveWidget");

	UCommonWidgetGroupBase_RemoveWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetGroupBase::RemoveAll()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.RemoveAll");

	UCommonWidgetGroupBase_RemoveAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetGroupBase.AddWidget");

	UCommonWidgetGroupBase_AddWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SetSelectionRequired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bRequireSelection              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroup::SetSelectionRequired(bool bRequireSelection)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SetSelectionRequired");

	UCommonButtonGroup_SetSelectionRequired_Params params;
	params.bRequireSelection = bRequireSelection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectPreviousButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroup::SelectPreviousButton(bool bAllowWrap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectPreviousButton");

	UCommonButtonGroup_SelectPreviousButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectNextButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrap                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroup::SelectNextButton(bool bAllowWrap)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectNextButton");

	UCommonButtonGroup_SelectNextButton_Params params;
	params.bAllowWrap = bAllowWrap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroup::SelectButtonAtIndex(int ButtonIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.SelectButtonAtIndex");

	UCommonButtonGroup_SelectButtonAtIndex_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
// (Native, Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsSelected                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonButtonGroup::OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnSelectionStateChanged");

	UCommonButtonGroup_OnSelectionStateChanged_Params params;
	params.BaseButton = BaseButton;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroup::OnHandleButtonDoubleClicked(class UCommonButton* BaseButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked");

	UCommonButtonGroup_OnHandleButtonDoubleClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
// (Native, Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroup::OnHandleButtonClicked(class UCommonButton* BaseButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnHandleButtonClicked");

	UCommonButtonGroup_OnHandleButtonClicked_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroup::OnButtonUnhovered(class UCommonButton* BaseButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnButtonUnhovered");

	UCommonButtonGroup_OnButtonUnhovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.OnButtonHovered
// (Native, Protected)
// Parameters:
// class UCommonButton*           BaseButton                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonButtonGroup::OnButtonHovered(class UCommonButton* BaseButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.OnButtonHovered");

	UCommonButtonGroup_OnButtonHovered_Params params;
	params.BaseButton = BaseButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonButtonGroup.HasAnyButtons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonButtonGroup::HasAnyButtons()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.HasAnyButtons");

	UCommonButtonGroup_HasAnyButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroup::GetSelectedButtonIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex");

	UCommonButtonGroup_GetSelectedButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetSelectedButton
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButton*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButton* UCommonButtonGroup::GetSelectedButton()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetSelectedButton");

	UCommonButtonGroup_GetSelectedButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetHoveredButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroup::GetHoveredButtonIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetHoveredButtonIndex");

	UCommonButtonGroup_GetHoveredButtonIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetButtonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroup::GetButtonCount()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetButtonCount");

	UCommonButtonGroup_GetButtonCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButton* UCommonButtonGroup::GetButtonAtIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.GetButtonAtIndex");

	UCommonButtonGroup_GetButtonAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.FindButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButton*           ButtonToFind                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonButtonGroup::FindButtonIndex(class UCommonButton* ButtonToFind)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.FindButtonIndex");

	UCommonButtonGroup_FindButtonIndex_Params params;
	params.ButtonToFind = ButtonToFind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonButtonGroup.DeselectAll
// (Final, Native, Public, BlueprintCallable)

void UCommonButtonGroup::DeselectAll()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonButtonGroup.DeselectAll");

	UCommonButtonGroup_DeselectAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InWrapTextAt                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetWrapTextWidth(int InWrapTextAt)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetWrapTextWidth");

	UCommonTextBlock_SetWrapTextWidth_Params params;
	params.InWrapTextAt = InWrapTextAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetTextCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bUseAllCaps                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetTextCase(bool bUseAllCaps)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetTextCase");

	UCommonTextBlock_SetTextCase_Params params;
	params.bUseAllCaps = bUseAllCaps;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonTextStyle*        InStyle                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTextBlock::SetStyle(class UCommonTextStyle* InStyle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.SetStyle");

	UCommonTextBlock_SetStyle_Params params;
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (Final, Native, Public, BlueprintCallable)

void UCommonTextBlock::ResetScrollState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextBlock.ResetScrollState");

	UCommonTextBlock_ResetScrollState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan               InTimespan                     (ConstParm, Parm, ZeroConstructor)

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InTimespan)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue");

	UCommonDateTimeTextBlock_SetTimespanValue_Params params;
	params.InTimespan = InTimespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime               InDateTime                     (ConstParm, Parm, ZeroConstructor)
// bool                           bShowAsCountdown               (Parm, ZeroConstructor, IsPlainOldData)
// float                          InRefreshDelay                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue");

	UCommonDateTimeTextBlock_SetDateTimeValue_Params params;
	params.InDateTime = InDateTime;
	params.bShowAsCountdown = bShowAsCountdown;
	params.InRefreshDelay = InRefreshDelay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InCompletionText               (ConstParm, Parm)

void UCommonDateTimeTextBlock::SetCountDownCompletionText(const struct FText& InCompletionText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText");

	UCommonDateTimeTextBlock_SetCountDownCompletionText_Params params;
	params.InCompletionText = InCompletionText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonDateTimeTextBlock.GetDateTime");

	UCommonDateTimeTextBlock_GetDateTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)

void UCommonInputManager::SuspendStartingOperationProcessing()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing");

	UCommonInputManager_SuspendStartingOperationProcessing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionDataRow             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         CompleteEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         ProgressEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputManager::StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction");

	UCommonInputManager_StopListeningForExistingHeldAction_Params params;
	params.InputActionDataRow = InputActionDataRow;
	params.CompleteEvent = CompleteEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle     InputActionDataRow             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         CompleteEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate         ProgressEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputManager::StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction");

	UCommonInputManager_StartListeningForExistingHeldAction_Params params;
	params.InputActionDataRow = InputActionDataRow;
	params.CompleteEvent = CompleteEvent;
	params.ProgressEvent = ProgressEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InFilterPriority               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputManager::SetGlobalInputHandlerPriorityFilter(int InFilterPriority)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter");

	UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params params;
	params.InFilterPriority = InFilterPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
// (Final, Native, Public, BlueprintCallable)

void UCommonInputManager::ResumeStartingOperationProcessing()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing");

	UCommonInputManager_ResumeStartingOperationProcessing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.PushActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIntroPanel                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOutroPanelBelow               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonInputManager::PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.PushActivatablePanel");

	UCommonInputManager_PushActivatablePanel_Params params;
	params.ActivatablePanel = ActivatablePanel;
	params.bIntroPanel = bIntroPanel;
	params.bOutroPanelBelow = bOutroPanelBelow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.PopActivatablePanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonInputManager::PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.PopActivatablePanel");

	UCommonInputManager_PopActivatablePanel_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonInputManager.IsPanelOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanel* InPanel                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputManager::IsPanelOnStack(class UCommonActivatablePanel* InPanel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.IsPanelOnStack");

	UCommonInputManager_IsPanelOnStack_Params params;
	params.InPanel = InPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.IsInputSuspended
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputManager::IsInputSuspended()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.IsInputSuspended");

	UCommonInputManager_IsInputSuspended_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.GetTopPanel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatablePanel* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonActivatablePanel* UCommonInputManager::GetTopPanel()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.GetTopPanel");

	UCommonInputManager_GetTopPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonInputManager::GetGlobalInputHandlerPriorityFilter()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter");

	UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputManager.GetAvailableInputActions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FCommonInputActionHandlerData> AvailableInputActions          (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonInputManager::GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputManager.GetAvailableInputActions");

	UCommonInputManager_GetAvailableInputActions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AvailableInputActions != nullptr)
		*AvailableInputActions = params.AvailableInputActions;

	return params.ReturnValue;
}


// Function CommonUI.CommonInputReflector.OnButtonAdded
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UCommonButton*           AddedButton                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCommonInputActionHandlerData Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonInputReflector::OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonInputReflector.OnButtonAdded");

	UCommonInputReflector_OnButtonAdded_Params params;
	params.AddedButton = AddedButton;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TextureParamName               (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetMaterialTextureParamName(const struct FName& TextureParamName)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetMaterialTextureParamName");

	UCommonLazyImage_SetMaterialTextureParamName_Params params;
	params.TextureParamName = TextureParamName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyTexture(bool bMatchSize)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture");

	UCommonLazyImage_SetBrushFromLazyTexture_Params params;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (Final, Native, Public, HasOutParms, BlueprintCallable)

void UCommonLazyImage::SetBrushFromLazyMaterial()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial");

	UCommonLazyImage_SetBrushFromLazyMaterial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           bMatchTextureSize              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(bool bMatchTextureSize)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset");

	UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params params;
	params.bMatchTextureSize = bMatchTextureSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyImage.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLazyImage::IsLoading()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyImage.IsLoading");

	UCommonLazyImage_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyWidget.SetLazyContent
// (Final, Native, Public, BlueprintCallable)

void UCommonLazyWidget::SetLazyContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.SetLazyContent");

	UCommonLazyWidget_SetLazyContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLazyWidget.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLazyWidget::IsLoading()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.IsLoading");

	UCommonLazyWidget_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLazyWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUserWidget* UCommonLazyWidget::GetContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLazyWidget.GetContent");

	UCommonLazyWidget_GetContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonListView.SetEntrySpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          InEntrySpacing                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonListView::SetEntrySpacing(float InEntrySpacing)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonListView.SetEntrySpacing");

	UCommonListView_SetEntrySpacing_Params params;
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EVerticalAlignment> InVerticalAlignment            (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetVerticalAlignment");

	ULoadGuardSlot_SetVerticalAlignment_Params params;
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                 InPadding                      (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetPadding");

	ULoadGuardSlot_SetPadding_Params params;
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment          (Parm, ZeroConstructor, IsPlainOldData)

void ULoadGuardSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.LoadGuardSlot.SetHorizontalAlignment");

	ULoadGuardSlot_SetHorizontalAlignment_Params params;
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   InLoadingText                  (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonLoadGuard::SetLoadingText(const struct FText& InLoadingText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetLoadingText");

	UCommonLoadGuard_SetLoadingText_Params params;
	params.InLoadingText = InLoadingText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsLoading                   (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.SetIsLoading");

	UCommonLoadGuard_SetIsLoading_Params params;
	params.bInIsLoading = bInIsLoading;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* Object)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature");

	UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonLoadGuard.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonLoadGuard::IsLoading()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.IsLoading");

	UCommonLoadGuard_IsLoading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (Final, Native, Private, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnAssetLoaded                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCommonLoadGuard::BP_GuardAndLoadAsset(const struct FScriptDelegate& OnAssetLoaded)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset");

	UCommonLoadGuard_BP_GuardAndLoadAsset_Params params;
	params.OnAssetLoaded = OnAssetLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.SetNumericType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonNumericType             InNumericType                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::SetNumericType(ECommonNumericType InNumericType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.SetNumericType");

	UCommonNumericTextBlock_SetNumericType_Params params;
	params.InNumericType = InNumericType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::SetCurrentValue(float NewValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.SetCurrentValue");

	UCommonNumericTextBlock_SetCurrentValue_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature");

	UCommonNumericTextBlock_OnOutro__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          LastValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature");

	UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.LastValue = LastValue;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature");

	UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock* NumericTextBlock               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           HadCompleted                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature");

	UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params params;
	params.NumericTextBlock = NumericTextBlock;
	params.HadCompleted = HadCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue");

	UCommonNumericTextBlock_IsInterpolatingNumericValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          TargetValue                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaximumInterpolationDuration   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinimumChangeRate              (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutroOffset                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonNumericTextBlock::InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.InterpolateToValue");

	UCommonNumericTextBlock_InterpolateToValue_Params params;
	params.TargetValue = TargetValue;
	params.MaximumInterpolationDuration = MaximumInterpolationDuration;
	params.MinimumChangeRate = MinimumChangeRate;
	params.OutroOffset = OutroOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommonNumericTextBlock::GetTargetValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonNumericTextBlock.GetTargetValue");

	UCommonNumericTextBlock_GetTargetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnReleaseToPool()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool");

	UCommonPoolableWidgetInterface_OnReleaseToPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)

void UCommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool");

	UCommonPoolableWidgetInterface_OnAcquireFromPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupButton.GetMenuAnchorWidget
// (Final, Native, Private)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonPopupButton::GetMenuAnchorWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupButton.GetMenuAnchorWidget");

	UCommonPopupButton_GetMenuAnchorWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonPopupMenu.SetOwningMenuAnchor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMenuAnchor*             MenuAnchor                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonPopupMenu::SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.SetOwningMenuAnchor");

	UCommonPopupMenu_SetOwningMenuAnchor_Params params;
	params.MenuAnchor = MenuAnchor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupMenu.SetContextProvider
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 ContextProvidingObject         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonPopupMenu::SetContextProvider(class UObject* ContextProvidingObject)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.SetContextProvider");

	UCommonPopupMenu_SetContextProvider_Params params;
	params.ContextProvidingObject = ContextProvidingObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupMenu.RequestClose
// (Final, Native, Protected, BlueprintCallable)

void UCommonPopupMenu::RequestClose()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.RequestClose");

	UCommonPopupMenu_RequestClose_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupMenu.OnIsOpenChanged
// (Final, Native, Protected)
// Parameters:
// bool                           IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UCommonPopupMenu::OnIsOpenChanged(bool IsOpen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.OnIsOpenChanged");

	UCommonPopupMenu_OnIsOpenChanged_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)

void UCommonPopupMenu::HandlePreDifferentContextProviderSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet");

	UCommonPopupMenu_HandlePreDifferentContextProviderSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet
// (Native, Event, Protected, BlueprintEvent)

void UCommonPopupMenu::HandlePostDifferentContextProviderSet()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet");

	UCommonPopupMenu_HandlePostDifferentContextProviderSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.ShiftTextRight
// (Final, Native, Public, BlueprintCallable)

void UCommonRotator::ShiftTextRight()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextRight");

	UCommonRotator_ShiftTextRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (Final, Native, Public, BlueprintCallable)

void UCommonRotator::ShiftTextLeft()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.ShiftTextLeft");

	UCommonRotator_ShiftTextLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.SetSelectedItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InValue                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::SetSelectedItem(int InValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.SetSelectedItem");

	UCommonRotator_SetSelectedItem_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FText>           Labels                         (Parm, ZeroConstructor)

void UCommonRotator::PopulateTextLabels(TArray<struct FText> Labels)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.PopulateTextLabels");

	UCommonRotator_PopulateTextLabels_Params params;
	params.Labels = Labels;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCommonRotator::GetSelectedText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.GetSelectedText");

	UCommonRotator_GetSelectedText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonRotator.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonRotator::GetSelectedIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.GetSelectedIndex");

	UCommonRotator_GetSelectedIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::BP_OnOptionsPopulated(int Count)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.BP_OnOptionsPopulated");

	UCommonRotator_BP_OnOptionsPopulated_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonRotator.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonRotator::BP_OnOptionSelected(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonRotator.BP_OnOptionSelected");

	UCommonRotator_BP_OnOptionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetTabVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               NewVisibility                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::SetTabVisibility(const struct FName& TabNameID, ESlateVisibility NewVisibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetTabVisibility");

	UCommonTabListWidget_SetTabVisibility_Params params;
	params.TabNameID = TabNameID;
	params.NewVisibility = NewVisibility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetTabInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::SetTabInteractionEnabled(const struct FName& TabNameID, bool bEnable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetTabInteractionEnabled");

	UCommonTabListWidget_SetTabInteractionEnabled_Params params;
	params.TabNameID = TabNameID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetTabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::SetTabEnabled(const struct FName& TabNameID, bool bEnable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetTabEnabled");

	UCommonTabListWidget_SetTabEnabled_Params params;
	params.TabNameID = TabNameID;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetListeningForInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldListen                  (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::SetListeningForInput(bool bShouldListen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetListeningForInput");

	UCommonTabListWidget_SetListeningForInput_Params params;
	params.bShouldListen = bShouldListen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonAnimatedSwitcher* CommonSwitcher                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidget::SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SetLinkedSwitcher");

	UCommonTabListWidget_SetLinkedSwitcher_Params params;
	params.CommonSwitcher = CommonSwitcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.SelectTabByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSuppressClickFeedback         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidget::SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.SelectTabByID");

	UCommonTabListWidget_SelectTabByID_Params params;
	params.TabNameID = TabNameID;
	params.bSuppressClickFeedback = bSuppressClickFeedback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.RemoveTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidget::RemoveTab(const struct FName& TabNameID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RemoveTab");

	UCommonTabListWidget_RemoveTab_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.RemoveAllTabs
// (Final, Native, Public, BlueprintCallable)

void UCommonTabListWidget::RemoveAllTabs()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RemoveAllTabs");

	UCommonTabListWidget_RemoveAllTabs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.RegisterTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           ButtonWidgetType               (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ContentWidget                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCommonTabListWidget::RegisterTab(const struct FName& TabNameID, class UCommonButton* ButtonWidgetType, class UWidget* ContentWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.RegisterTab");

	UCommonTabListWidget_RegisterTab_Params params;
	params.TabNameID = TabNameID;
	params.ButtonWidgetType = ButtonWidgetType;
	params.ContentWidget = ContentWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::OnTabSelected__DelegateSignature(const struct FName& TabId)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature");

	UCommonTabListWidget_OnTabSelected__DelegateSignature_Params params;
	params.TabId = TabId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidget::OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature");

	UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FName                   TabId                          (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidget::OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature");

	UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params params;
	params.TabId = TabId;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidget::HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabRemoved");

	UCommonTabListWidget_HandleTabRemoved_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabCreated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           TabButton                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonTabListWidget::HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabCreated");

	UCommonTabListWidget_HandleTabCreated_Params params;
	params.TabNameID = TabNameID;
	params.TabButton = TabButton;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
// (Final, Native, Private)
// Parameters:
// class UCommonButton*           SelectedTabButton              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleTabButtonSelected");

	UCommonTabListWidget_HandleTabButtonSelected_Params params;
	params.SelectedTabButton = SelectedTabButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::HandlePreviousTabInputAction(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction");

	UCommonTabListWidget_HandlePreviousTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)

void UCommonTabListWidget::HandlePreLinkedSwitcherChanged_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP");

	UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)

void UCommonTabListWidget::HandlePostLinkedSwitcherChanged_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP");

	UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTabListWidget::HandleNextTabInputAction(bool* bPassThrough)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.HandleNextTabInputAction");

	UCommonTabListWidget_HandleNextTabInputAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function CommonUI.CommonTabListWidget.GetTabIdAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidget::GetTabIdAtIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetTabIdAtIndex");

	UCommonTabListWidget_GetTabIdAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetTabCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonTabListWidget::GetTabCount()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetTabCount");

	UCommonTabListWidget_GetTabCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetTabButtonByID
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonButton*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonButton* UCommonTabListWidget::GetTabButtonByID(const struct FName& TabNameID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetTabButtonByID");

	UCommonTabListWidget_GetTabButtonByID_Params params;
	params.TabNameID = TabNameID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetSelectedTabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidget::GetSelectedTabId()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetSelectedTabId");

	UCommonTabListWidget_GetSelectedTabId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonAnimatedSwitcher* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCommonAnimatedSwitcher* UCommonTabListWidget::GetLinkedSwitcher()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetLinkedSwitcher");

	UCommonTabListWidget_GetLinkedSwitcher_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.GetActiveTab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UCommonTabListWidget::GetActiveTab()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.GetActiveTab");

	UCommonTabListWidget_GetActiveTab_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTabListWidget.DisableTabWithReason
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   TabNameID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Reason                         (ConstParm, Parm, OutParm, ReferenceParm)

void UCommonTabListWidget::DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTabListWidget.DisableTabWithReason");

	UCommonTabListWidget_DisableTabWithReason_Params params;
	params.TabNameID = TabNameID;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonTextStyle.GetStrikeBrush
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush             OutStrikeBrush                 (Parm, OutParm)

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* OutStrikeBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetStrikeBrush");

	UCommonTextStyle_GetStrikeBrush_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutStrikeBrush != nullptr)
		*OutStrikeBrush = params.OutStrikeBrush;
}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D               OutShadowOffset                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* OutShadowOffset)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowOffset");

	UCommonTextStyle_GetShadowOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutShadowOffset != nullptr)
		*OutShadowOffset = params.OutShadowOffset;
}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* OutColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetShadowColor");

	UCommonTextStyle_GetShadowColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonTextStyle.GetMargin
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                 OutMargin                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetMargin(struct FMargin* OutMargin)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetMargin");

	UCommonTextStyle_GetMargin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMargin != nullptr)
		*OutMargin = params.OutMargin;
}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetLineHeightPercentage");

	UCommonTextStyle_GetLineHeightPercentage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonTextStyle.GetFont
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo          OutFont                        (Parm, OutParm)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* OutFont)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetFont");

	UCommonTextStyle_GetFont_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFont != nullptr)
		*OutFont = params.OutFont;
}


// Function CommonUI.CommonTextStyle.GetColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            OutColor                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommonTextStyle::GetColor(struct FLinearColor* OutColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonTextStyle.GetColor");

	UCommonTextStyle_GetColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 StartingWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget*                 Type                           (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonUILibrary::STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UWidget* Type)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUILibrary.FindParentWidgetOfType");

	UCommonUILibrary_FindParentWidgetOfType_Params params;
	params.StartingWidget = StartingWidget;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction CommonUI.CommonUISubsystem.InputSuspensionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                           bInputSuspended                (Parm, ZeroConstructor, IsPlainOldData)

void UCommonUISubsystem::InputSuspensionChanged__DelegateSignature(bool bInputSuspended)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonUISubsystem.InputSuspensionChanged__DelegateSignature");

	UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Params params;
	params.bInputSuspended = bInputSuspended;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonUISubsystem.GetInputManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonInputManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCommonInputManager* UCommonUISubsystem::GetInputManager()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUISubsystem.GetInputManager");

	UCommonUISubsystem_GetInputManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonUISubsystem.GetInputActionButtonIcon
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle     InputActionRowHandle           (ConstParm, Parm, OutParm, ReferenceParm)
// ECommonInputType               InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// ECommonGamepadType             GamepadType                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UCommonUISubsystem::GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonUISubsystem.GetInputActionButtonIcon");

	UCommonUISubsystem_GetInputActionButtonIcon_Params params;
	params.InputActionRowHandle = InputActionRowHandle;
	params.InputType = InputType;
	params.GamepadType = GamepadType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex");

	UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonVisibilitySwitcher::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget");

	UCommonVisibilitySwitcher_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CommonUI.CommonVisibilitySwitcher.OnActiveWidgetChangedLegacy__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                 ActiveWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("DelegateFunction CommonUI.CommonVisibilitySwitcher.OnActiveWidgetChangedLegacy__DelegateSignature");

	UCommonVisibilitySwitcher_OnActiveWidgetChangedLegacy__DelegateSignature_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrapping                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool bAllowWrapping)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex");

	UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params params;
	params.bAllowWrapping = bAllowWrapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonVisibilitySwitcher::GetActiveWidgetIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex");

	UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonVisibilitySwitcher::GetActiveWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget");

	UCommonVisibilitySwitcher_GetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bAllowWrapping                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool bAllowWrapping)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex");

	UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params params;
	params.bAllowWrapping = bAllowWrapping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)

void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot");

	UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)

void UCommonVisibilitySwitcher::ActivateVisibleSlot()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot");

	UCommonVisibilitySwitcher_ActivateVisibleSlot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex");

	UCommonWidgetCarousel_SetActiveWidgetIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.SetActiveWidget");

	UCommonWidgetCarousel_SetActiveWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::PreviousPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.PreviousPage");

	UCommonWidgetCarousel_PreviousPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::NextPage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.NextPage");

	UCommonWidgetCarousel_NextPage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex");

	UCommonWidgetCarousel_GetWidgetAtIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex");

	UCommonWidgetCarousel_GetActiveWidgetIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (Final, Native, Public, BlueprintCallable)

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.EndAutoScrolling");

	UCommonWidgetCarousel_EndAutoScrolling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ScrollInterval                 (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarousel::BeginAutoScrolling(float ScrollInterval)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling");

	UCommonWidgetCarousel_BeginAutoScrolling_Params params;
	params.ScrollInterval = ScrollInterval;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonWidgetCarousel*   CommonCarousel                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel");

	UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params params;
	params.CommonCarousel = CommonCarousel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
// (Final, Native, Protected)
// Parameters:
// class UCommonWidgetCarousel*   CommonCarousel                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            PageIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int PageIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged");

	UCommonWidgetCarouselNavBar_HandlePageChanged_Params params;
	params.CommonCarousel = CommonCarousel;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UCommonButton*           AssociatedButton               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ButtonIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButton* AssociatedButton, int ButtonIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked");

	UCommonWidgetCarouselNavBar_HandleButtonClicked_Params params;
	params.AssociatedButton = AssociatedButton;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PushWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 InWidget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetStack::PushWidget(class UWidget* InWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PushWidget");

	UCommonWidgetStack_PushWidget_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.PopWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCommonWidgetStack::PopWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.PopWidget");

	UCommonWidgetStack_PopWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CommonUI.CommonWidgetStack.DeactivateWidget
// (Final, Native, Protected, BlueprintCallable)

void UCommonWidgetStack::DeactivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.DeactivateWidget");

	UCommonWidgetStack_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetStack.ActivateWidget
// (Final, Native, Protected, BlueprintCallable)

void UCommonWidgetStack::ActivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetStack.ActivateWidget");

	UCommonWidgetStack_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AttemptActivationChange        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetSwitcher::SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced");

	UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params params;
	params.Index = Index;
	params.AttemptActivationChange = AttemptActivationChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           AttemptActivationChange        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCommonWidgetSwitcher::SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced");

	UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params params;
	params.Widget = Widget;
	params.AttemptActivationChange = AttemptActivationChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
// (Final, Native, Private)
// Parameters:
// class UCommonActivatablePanel* DeactivatedPanel               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCommonWidgetSwitcher::HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated");

	UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params params;
	params.DeactivatedPanel = DeactivatedPanel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
// (Native, Public, BlueprintCallable)

void UCommonWidgetSwitcher::DeactivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.DeactivateWidget");

	UCommonWidgetSwitcher_DeactivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
// (Native, Public, BlueprintCallable)

void UCommonWidgetSwitcher::ActivateWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function CommonUI.CommonWidgetSwitcher.ActivateWidget");

	UCommonWidgetSwitcher_ActivateWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
