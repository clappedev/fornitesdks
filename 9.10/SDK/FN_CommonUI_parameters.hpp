#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
	struct FSlateBrush                                 InIconRimBrush;                                           // (Parm)
};

// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
	bool                                               bInConsumePointerInput;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonUserWidget.OnTouchLeave
struct UCommonUserWidget_OnTouchLeave_Params
{
	struct FPointerEvent                               TouchEvent;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgressPopupMenu
struct UCommonActivatablePanel_SetInputActionHandlerWithProgressPopupMenu_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
struct UCommonActivatablePanel_SetInputActionHandlerWithProgress_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandlerWithPopupMenu
struct UCommonActivatablePanel_SetInputActionHandlerWithPopupMenu_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetInputActionHandler
struct UCommonActivatablePanel_SetInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateWithDisabledCommitEvent_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
struct UCommonActivatablePanel_SetActionHandlerStateFromHandleWithDisabledCommitEvent_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
struct UCommonActivatablePanel_SetActionHandlerStateFromHandle_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.SetActionHandlerState
struct UCommonActivatablePanel_SetActionHandlerState_Params
{
	class UDataTable*                                  DataTable;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EInputActionState                                  State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.RemoveInputActionHandler
struct UCommonActivatablePanel_RemoveInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
};

// Function CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
struct UCommonActivatablePanel_RemoveAllInputActionHandlers_Params
{
};

// Function CommonUI.CommonActivatablePanel.PopPanel
struct UCommonActivatablePanel_PopPanel_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnRemovedFromActivationStack
struct UCommonActivatablePanel_OnRemovedFromActivationStack_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnInputModeChanged
struct UCommonActivatablePanel_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.OnDeactivated
struct UCommonActivatablePanel_OnDeactivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginOutro
struct UCommonActivatablePanel_OnBeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnBeginIntro
struct UCommonActivatablePanel_OnBeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnAddedToActivationStack
struct UCommonActivatablePanel_OnAddedToActivationStack_Params
{
};

// Function CommonUI.CommonActivatablePanel.OnActivated
struct UCommonActivatablePanel_OnActivated_Params
{
};

// Function CommonUI.CommonActivatablePanel.IsIntroed
struct UCommonActivatablePanel_IsIntroed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.IsInActivationStack
struct UCommonActivatablePanel_IsInActivationStack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.IsActivated
struct UCommonActivatablePanel_IsActivated_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.HasInputActionHandler
struct UCommonActivatablePanel_HasInputActionHandler_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.GetInputActions
struct UCommonActivatablePanel_GetInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       InputActionDataRows;                                      // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.EndOutro
struct UCommonActivatablePanel_EndOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.EndIntro
struct UCommonActivatablePanel_EndIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginOutro
struct UCommonActivatablePanel_BeginOutro_Params
{
};

// Function CommonUI.CommonActivatablePanel.BeginIntro
struct UCommonActivatablePanel_BeginIntro_Params
{
};

// Function CommonUI.CommonActivatablePanel.AddInputActionNoHandler
struct UCommonActivatablePanel_AddInputActionNoHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgressPopup
struct UCommonActivatablePanel_AddInputActionHandlerWithProgressPopup_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
struct UCommonActivatablePanel_AddInputActionHandlerWithProgress_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandlerWithPopup
struct UCommonActivatablePanel_AddInputActionHandlerWithPopup_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonPopupMenu*                            PopupMenu;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonActivatablePanel.AddInputActionHandler
struct UCommonActivatablePanel_AddInputActionHandler_Params
{
	class UDataTable*                                  DataTable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RowName;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
	struct FSlateBrush                                 Brush;                                                    // (Parm, OutParm)
};

// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.StopDoubleClickPropagation
struct UCommonButton_StopDoubleClickPropagation_Params
{
};

// Function CommonUI.CommonButton.SetTriggeringInputAction
struct UCommonButton_SetTriggeringInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButton.SetTriggeredInputAction
struct UCommonButton_SetTriggeredInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
	class UCommonActivatablePanel*                     OldPanel;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetTouchMethod
struct UCommonButton_SetTouchMethod_Params
{
	TEnumAsByte<EButtonTouchMethod>                    InTouchMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetStyle
struct UCommonButton_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetShouldUseFallbackDefaultInputAction
struct UCommonButton_SetShouldUseFallbackDefaultInputAction_Params
{
	bool                                               bInShouldUseFallbackDefaultInputAction;                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
struct UCommonButton_SetShouldSelectUponReceivingFocus_Params
{
	bool                                               bInShouldSelectUponReceivingFocus;                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetSelectedInternal
struct UCommonButton_SetSelectedInternal_Params
{
	bool                                               bInSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcast;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetPressMethod
struct UCommonButton_SetPressMethod_Params
{
	TEnumAsByte<EButtonPressMethod>                    InPressMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetMinDimensions
struct UCommonButton_SetMinDimensions_Params
{
	int                                                InMinWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InMinHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsToggleable
struct UCommonButton_SetIsToggleable_Params
{
	bool                                               bInIsToggleable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsSelected
struct UCommonButton_SetIsSelected_Params
{
	bool                                               InSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGiveClickFeedback;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsSelectable
struct UCommonButton_SetIsSelectable_Params
{
	bool                                               bInIsSelectable;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsInteractionEnabled
struct UCommonButton_SetIsInteractionEnabled_Params
{
	bool                                               bInIsInteractionEnabled;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetIsInteractableWhenSelected
struct UCommonButton_SetIsInteractableWhenSelected_Params
{
	bool                                               bInInteractableWhenSelected;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetInputActionProgressMaterial
struct UCommonButton_SetInputActionProgressMaterial_Params
{
	struct FSlateBrush                                 InProgressMaterialBrush;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FName                                       InProgressMaterialParam;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.SetClickMethod
struct UCommonButton_SetClickMethod_Params
{
	TEnumAsByte<EButtonClickMethod>                    InClickMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnTriggeredInputActionChanged
struct UCommonButton_OnTriggeredInputActionChanged_Params
{
	struct FDataTableRowHandle                         NewTriggeredAction;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButton.OnInputMethodChanged
struct UCommonButton_OnInputMethodChanged_Params
{
	ECommonInputType                                   CurrentInputType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnCurrentTextStyleChanged
struct UCommonButton_OnCurrentTextStyleChanged_Params
{
};

// Function CommonUI.CommonButton.OnActionProgress
struct UCommonButton_OnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.OnActionComplete
struct UCommonButton_OnActionComplete_Params
{
};

// Function CommonUI.CommonButton.NativeOnActionProgress
struct UCommonButton_NativeOnActionProgress_Params
{
	float                                              HeldPercent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.NativeOnActionComplete
struct UCommonButton_NativeOnActionComplete_Params
{
};

// Function CommonUI.CommonButton.IsPressed
struct UCommonButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.IsInteractionEnabled
struct UCommonButton_IsInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.HandleTriggeringActionCommited
struct UCommonButton_HandleTriggeringActionCommited_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.HandleFocusReceived
struct UCommonButton_HandleFocusReceived_Params
{
};

// Function CommonUI.CommonButton.HandleButtonReleased
struct UCommonButton_HandleButtonReleased_Params
{
};

// Function CommonUI.CommonButton.HandleButtonPressed
struct UCommonButton_HandleButtonPressed_Params
{
};

// Function CommonUI.CommonButton.HandleButtonClicked
struct UCommonButton_HandleButtonClicked_Params
{
};

// Function CommonUI.CommonButton.GetStyle
struct UCommonButton_GetStyle_Params
{
	class UCommonButtonStyle*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetSingleMaterialStyleMID
struct UCommonButton_GetSingleMaterialStyleMID_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
struct UCommonButton_GetShouldSelectUponReceivingFocus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetSelected
struct UCommonButton_GetSelected_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetInputAction
struct UCommonButton_GetInputAction_Params
{
	struct FDataTableRowHandle                         InputActionRow;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentTextStyleClass
struct UCommonButton_GetCurrentTextStyleClass_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentTextStyle
struct UCommonButton_GetCurrentTextStyle_Params
{
	class UCommonTextStyle*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentCustomPadding
struct UCommonButton_GetCurrentCustomPadding_Params
{
	struct FMargin                                     OutCustomPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.GetCurrentButtonPadding
struct UCommonButton_GetCurrentButtonPadding_Params
{
	struct FMargin                                     OutButtonPadding;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButton.DisableButtonWithReason
struct UCommonButton_DisableButtonWithReason_Params
{
	struct FText                                       DisabledReason;                                           // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonButton.ClearSelection
struct UCommonButton_ClearSelection_Params
{
};

// Function CommonUI.CommonButton.BP_OnUnhovered
struct UCommonButton_BP_OnUnhovered_Params
{
};

// Function CommonUI.CommonButton.BP_OnSelected
struct UCommonButton_BP_OnSelected_Params
{
};

// Function CommonUI.CommonButton.BP_OnHovered
struct UCommonButton_BP_OnHovered_Params
{
};

// Function CommonUI.CommonButton.BP_OnEnabled
struct UCommonButton_BP_OnEnabled_Params
{
};

// Function CommonUI.CommonButton.BP_OnDoubleClicked
struct UCommonButton_BP_OnDoubleClicked_Params
{
};

// Function CommonUI.CommonButton.BP_OnDisabled
struct UCommonButton_BP_OnDisabled_Params
{
};

// Function CommonUI.CommonButton.BP_OnDeselected
struct UCommonButton_BP_OnDeselected_Params
{
};

// Function CommonUI.CommonButton.BP_OnClicked
struct UCommonButton_BP_OnClicked_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
};

// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SetSelectionRequired
struct UCommonButtonGroup_SetSelectionRequired_Params
{
	bool                                               bRequireSelection;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectPreviousButton
struct UCommonButtonGroup_SelectPreviousButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectNextButton
struct UCommonButtonGroup_SelectNextButton_Params
{
	bool                                               bAllowWrap;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.SelectButtonAtIndex
struct UCommonButtonGroup_SelectButtonAtIndex_Params
{
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnSelectionStateChanged
struct UCommonButtonGroup_OnSelectionStateChanged_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSelected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
struct UCommonButtonGroup_OnHandleButtonDoubleClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnHandleButtonClicked
struct UCommonButtonGroup_OnHandleButtonClicked_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnButtonUnhovered
struct UCommonButtonGroup_OnButtonUnhovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.OnButtonHovered
struct UCommonButtonGroup_OnButtonHovered_Params
{
	class UCommonButton*                               BaseButton;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.HasAnyButtons
struct UCommonButtonGroup_HasAnyButtons_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetSelectedButtonIndex
struct UCommonButtonGroup_GetSelectedButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetHoveredButtonIndex
struct UCommonButtonGroup_GetHoveredButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetButtonCount
struct UCommonButtonGroup_GetButtonCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.GetButtonAtIndex
struct UCommonButtonGroup_GetButtonAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.FindButtonIndex
struct UCommonButtonGroup_FindButtonIndex_Params
{
	class UCommonButton*                               ButtonToFind;                                             // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonButtonGroup.DeselectAll
struct UCommonButtonGroup_DeselectAll_Params
{
};

// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
	int                                                InWrapTextAt;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetTextCase
struct UCommonTextBlock_SetTextCase_Params
{
	bool                                               bUseAllCaps;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
	class UClass*                                      InStyle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
};

// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
	struct FTimespan                                   InTimespan;                                               // (ConstParm, Parm, ZeroConstructor)
};

// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
	struct FDateTime                                   InDateTime;                                               // (ConstParm, Parm, ZeroConstructor)
	bool                                               bShowAsCountdown;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
	struct FText                                       InCompletionText;                                         // (ConstParm, Parm)
};

// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
	struct FDateTime                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function CommonUI.CommonInputManager.SuspendStartingOperationProcessing
struct UCommonInputManager_SuspendStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.StopListeningForExistingHeldAction
struct UCommonInputManager_StopListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.StartListeningForExistingHeldAction
struct UCommonInputManager_StartListeningForExistingHeldAction_Params
{
	struct FDataTableRowHandle                         InputActionDataRow;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_SetGlobalInputHandlerPriorityFilter_Params
{
	int                                                InFilterPriority;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.ResumeStartingOperationProcessing
struct UCommonInputManager_ResumeStartingOperationProcessing_Params
{
};

// Function CommonUI.CommonInputManager.PushActivatablePanel
struct UCommonInputManager_PushActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIntroPanel;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.PopActivatablePanel
struct UCommonInputManager_PopActivatablePanel_Params
{
	class UCommonActivatablePanel*                     ActivatablePanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.IsPanelOnStack
struct UCommonInputManager_IsPanelOnStack_Params
{
	class UCommonActivatablePanel*                     InPanel;                                                  // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.IsInputSuspended
struct UCommonInputManager_IsInputSuspended_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.GetTopPanel
struct UCommonInputManager_GetTopPanel_Params
{
	class UCommonActivatablePanel*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
struct UCommonInputManager_GetGlobalInputHandlerPriorityFilter_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputManager.GetAvailableInputActions
struct UCommonInputManager_GetAvailableInputActions_Params
{
	TArray<struct FCommonInputActionHandlerData>       AvailableInputActions;                                    // (Parm, OutParm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonInputReflector.OnButtonAdded
struct UCommonInputReflector_OnButtonAdded_Params
{
	class UCommonButton*                               AddedButton;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCommonInputActionHandlerData               Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct UCommonLazyImage_SetMaterialTextureParamName_Params
{
	struct FName                                       TextureParamName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
	bool                                               bMatchSize;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
};

// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
	bool                                               bMatchTextureSize;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLazyWidget.SetLazyContent
struct UCommonLazyWidget_SetLazyContent_Params
{
};

// Function CommonUI.CommonLazyWidget.IsLoading
struct UCommonLazyWidget_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct ULoadGuardSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetPadding
struct ULoadGuardSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct ULoadGuardSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
	struct FText                                       InLoadingText;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
	bool                                               bInIsLoading;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
};

// Function CommonUI.CommonNumericTextBlock.SetNumericType
struct UCommonNumericTextBlock_SetNumericType_Params
{
	ECommonNumericType                                 InNumericType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
	float                                              NewValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
	class UCommonNumericTextBlock*                     NumericTextBlock;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               HadCompleted;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
	float                                              TargetValue;                                              // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaximumInterpolationDuration;                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinimumChangeRate;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutroOffset;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct UCommonPoolableWidgetInterface_OnReleaseToPool_Params
{
};

// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct UCommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
};

// Function CommonUI.CommonPopupButton.GetMenuAnchorWidget
struct UCommonPopupButton_GetMenuAnchorWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.SetOwningMenuAnchor
struct UCommonPopupMenu_SetOwningMenuAnchor_Params
{
	class UMenuAnchor*                                 MenuAnchor;                                               // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.SetContextProvider
struct UCommonPopupMenu_SetContextProvider_Params
{
	class UObject*                                     ContextProvidingObject;                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.RequestClose
struct UCommonPopupMenu_RequestClose_Params
{
};

// Function CommonUI.CommonPopupMenu.OnIsOpenChanged
struct UCommonPopupMenu_OnIsOpenChanged_Params
{
	bool                                               IsOpen;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet
struct UCommonPopupMenu_HandlePreDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet
struct UCommonPopupMenu_HandlePostDifferentContextProviderSet_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
};

// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
};

// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
	int                                                InValue;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
	TArray<struct FText>                               Labels;                                                   // (Parm, ZeroConstructor)
};

// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabVisibility
struct UCommonTabListWidget_SetTabVisibility_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   NewVisibility;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabInteractionEnabled
struct UCommonTabListWidget_SetTabInteractionEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetTabEnabled
struct UCommonTabListWidget_SetTabEnabled_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetListeningForInput
struct UCommonTabListWidget_SetListeningForInput_Params
{
	bool                                               bShouldListen;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SetLinkedSwitcher
struct UCommonTabListWidget_SetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       CommonSwitcher;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.SelectTabByID
struct UCommonTabListWidget_SelectTabByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuppressClickFeedback;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.RemoveTab
struct UCommonTabListWidget_RemoveTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.RemoveAllTabs
struct UCommonTabListWidget_RemoveAllTabs_Params
{
};

// Function CommonUI.CommonTabListWidget.RegisterTab
struct UCommonTabListWidget_RegisterTab_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ButtonWidgetType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ContentWidget;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
struct UCommonTabListWidget_OnTabSelected__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
struct UCommonTabListWidget_OnTabButtonRemoved__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
struct UCommonTabListWidget_OnTabButtonCreated__DelegateSignature_Params
{
	struct FName                                       TabId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabRemoved
struct UCommonTabListWidget_HandleTabRemoved_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabCreated
struct UCommonTabListWidget_HandleTabCreated_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandleTabButtonSelected
struct UCommonTabListWidget_HandleTabButtonSelected_Params
{
	class UCommonButton*                               SelectedTabButton;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
struct UCommonTabListWidget_HandlePreviousTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePreLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidget_HandlePostLinkedSwitcherChanged_BP_Params
{
};

// Function CommonUI.CommonTabListWidget.HandleNextTabInputAction
struct UCommonTabListWidget_HandleNextTabInputAction_Params
{
	bool                                               bPassThrough;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabIdAtIndex
struct UCommonTabListWidget_GetTabIdAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabCount
struct UCommonTabListWidget_GetTabCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetTabButtonByID
struct UCommonTabListWidget_GetTabButtonByID_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UCommonButton*                               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetSelectedTabId
struct UCommonTabListWidget_GetSelectedTabId_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetLinkedSwitcher
struct UCommonTabListWidget_GetLinkedSwitcher_Params
{
	class UCommonWidgetSwitcher*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.GetActiveTab
struct UCommonTabListWidget_GetActiveTab_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTabListWidget.DisableTabWithReason
struct UCommonTabListWidget_DisableTabWithReason_Params
{
	struct FName                                       TabNameID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Reason;                                                   // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CommonUI.CommonTextStyle.GetStrikeBrush
struct UCommonTextStyle_GetStrikeBrush_Params
{
	struct FSlateBrush                                 OutStrikeBrush;                                           // (Parm, OutParm)
};

// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
	struct FVector2D                                   OutShadowOffset;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
	struct FMargin                                     OutMargin;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
	struct FSlateFontInfo                              OutFont;                                                  // (Parm, OutParm)
};

// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
	struct FLinearColor                                OutColor;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
	class UWidget*                                     StartingWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonUISubsystem.InputSuspensionChanged__DelegateSignature
struct UCommonUISubsystem_InputSuspensionChanged__DelegateSignature_Params
{
	bool                                               bInputSuspended;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction CommonUI.CommonUISubsystem.InputMethodChangedDelegate__DelegateSignature
struct UCommonUISubsystem_InputMethodChangedDelegate__DelegateSignature_Params
{
	bool                                               bUsingGamepad;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonUISubsystem.GetInputManager
struct UCommonUISubsystem_GetInputManager_Params
{
	class UCommonInputManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonUISubsystem.GetInputActionButtonIcon
struct UCommonUISubsystem_GetInputActionButtonIcon_Params
{
	struct FDataTableRowHandle                         InputActionRowHandle;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
	ECommonInputType                                   InputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ECommonGamepadType                                 GamepadType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
};

// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
};

// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
	float                                              ScrollInterval;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
{
	class UCommonWidgetCarousel*                       CommonCarousel;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                PageIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
{
	class UCommonButton*                               AssociatedButton;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ButtonIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetDisableTransitionAnimation
struct UCommonWidgetSwitcher_SetDisableTransitionAnimation_Params
{
	bool                                               bDisableAnimation;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
struct UCommonWidgetSwitcher_SetActiveWidgetIndex_Advanced_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
struct UCommonWidgetSwitcher_SetActiveWidget_Advanced_Params
{
	class UWidget*                                     Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               AttemptActivationChange;                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.HasWidgets
struct UCommonWidgetSwitcher_HasWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
struct UCommonWidgetSwitcher_HandleActiveWidgetDeactivated_Params
{
	class UCommonActivatablePanel*                     DeactivatedPanel;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.DeactivateWidget
struct UCommonWidgetSwitcher_DeactivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivateWidget
struct UCommonWidgetSwitcher_ActivateWidget_Params
{
};

// Function CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
struct UCommonWidgetSwitcher_ActivatePreviousWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetSwitcher.ActivateNextWidget
struct UCommonWidgetSwitcher_ActivateNextWidget_Params
{
	bool                                               bCanWrap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CommonUI.CommonWidgetStack.PushWidget
struct UCommonWidgetStack_PushWidget_Params
{
	class UWidget*                                     InWidget;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CommonUI.CommonWidgetStack.PopWidget
struct UCommonWidgetStack_PopWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
