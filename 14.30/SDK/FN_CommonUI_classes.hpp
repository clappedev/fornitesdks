#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CommonUI.CommonUserWidget
// 0x0028 (0x0288 - 0x0260)
class UCommonUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0260(0x0020) MISSED OFFSET
	bool                                               bConsumePointerInput;                                     // 0x0280(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0281(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		
		return ptr;
	}


	void SetConsumePointerInput(bool bInConsumePointerInput);
};


// Class CommonUI.CommonActivatableWidget
// 0x0080 (0x0308 - 0x0288)
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                               bAutoActivate;                                            // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBackHandler;                                           // 0x0289(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportsActivationFocus;                                 // 0x028A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsModal;                                                 // 0x028B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRestoreFocus;                                        // 0x028C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetVisibilityOnActivated;                                // 0x028D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ActivatedVisibility;                                      // 0x028E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSetVisibilityOnDeactivated;                              // 0x028F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   DeactivatedVisibility;                                    // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0291(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatableWidget.BP_OnWidgetActivated
	unsigned char                                      UnknownData02[0x10];                                      // 0x02A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatableWidget.BP_OnWidgetDeactivated
	bool                                               bIsActive;                                                // 0x02B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4F];                                      // 0x02B9(0x004F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatableWidget");
		
		return ptr;
	}


	bool IsActivated();
	void DeactivateWidget();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	class UWidget* BP_GetDesiredFocusTarget();
	void ActivateWidget();
};


// Class CommonUI.AnalogSlider
// 0x0020 (0x0518 - 0x04F8)
class UAnalogSlider : public USlider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.AnalogSlider.OnAnalogCapture
	unsigned char                                      UnknownData01[0x10];                                      // 0x0508(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.AnalogSlider");
		
		return ptr;
	}

};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActionHandlerInterface");
		
		return ptr;
	}

};


// Class CommonUI.CommonActionWidget
// 0x0218 (0x0320 - 0x0108)
class UCommonActionWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActionWidget.OnInputMethodChanged
	struct FSlateBrush                                 ProgressMaterialBrush;                                    // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FName                                       ProgressMaterialParam;                                    // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 IconRimBrush;                                             // 0x01A8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FDataTableRowHandle>                 InputActions;                                             // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0240(0x0008) MISSED OFFSET
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                  // 0x0248(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD0];                                      // 0x0250(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActionWidget");
		
		return ptr;
	}


	void SetInputActions(TArray<struct FDataTableRowHandle> NewInputActions);
	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	struct FText GetDisplayText();
};


// Class CommonUI.CommonActivatablePanel
// 0x0138 (0x0440 - 0x0308)
class UCommonActivatablePanel : public UCommonActivatableWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0308(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatablePanel.OnWidgetActivated
	unsigned char                                      UnknownData02[0x10];                                      // 0x0320(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonActivatablePanel.OnWidgetDeactivated
	bool                                               bConsumeAllActions;                                       // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExposeActionsExternally;                                 // 0x0331(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBypassStack;                                       // 0x0332(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10D];                                     // 0x0333(0x010D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		
		return ptr;
	}


	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, const struct FScriptDelegate& CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, EInputActionState State, const struct FScriptDelegate& DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, const struct FName& RowName, EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnTransitionedBySwitcher();
	void OnRemovedFromActivationStack();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnBeginOutro();
	void OnBeginIntro();
	void OnAddedToActivationStack();
	bool IsIntroed();
	bool IsInActivationStack();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, const struct FName& RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, const struct FScriptDelegate& ProgressEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, const struct FName& RowName, const struct FScriptDelegate& CommitedEvent);
};


// Class CommonUI.CommonActivatableWidgetContainerBase
// 0x0100 (0x0208 - 0x0108)
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	ECommonSwitcherTransition                          TransitionType;                                           // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ETransitionCurve                                   TransitionCurveType;                                      // 0x0109(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010A(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UCommonActivatableWidget*>            WidgetList;                                               // 0x0110(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UCommonActivatableWidget*                    DisplayedWidget;                                          // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FUserWidgetPool                             GeneratedWidgetsPool;                                     // 0x0128(0x0080) (Transient)
	unsigned char                                      UnknownData01[0x60];                                      // 0x01A8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatableWidgetContainerBase");
		
		return ptr;
	}


	void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);
	class UCommonActivatableWidget* GetActiveWidget();
	void ClearWidgets();
	class UCommonActivatableWidget* BP_AddWidget(class UCommonActivatableWidget* ActivatableWidgetClass);
};


// Class CommonUI.CommonActivatableWidgetStack
// 0x0010 (0x0218 - 0x0208)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	class UCommonActivatableWidget*                    RootContentWidgetClass;                                   // 0x0208(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCommonActivatableWidget*                    RootContentWidget;                                        // 0x0210(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatableWidgetStack");
		
		return ptr;
	}

};


// Class CommonUI.CommonActivatableWidgetQueue
// 0x0000 (0x0208 - 0x0208)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatableWidgetQueue");
		
		return ptr;
	}

};


// Class CommonUI.CommonAnimatedSwitcher
// 0x0058 (0x0190 - 0x0138)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0138(0x0018) MISSED OFFSET
	ECommonSwitcherTransition                          TransitionType;                                           // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETransitionCurve                                   TransitionCurveType;                                      // 0x0151(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0152(0x0002) MISSED OFFSET
	float                                              TransitionDuration;                                       // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0158(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonAnimatedSwitcher");
		
		return ptr;
	}


	void SetDisableTransitionAnimation(bool bDisableAnimation);
	bool HasWidgets();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};


// Class CommonUI.CommonActivatableWidgetSwitcher
// 0x0000 (0x0190 - 0x0190)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonActivatableWidgetSwitcher");
		
		return ptr;
	}

};


// Class CommonUI.CommonBorderStyle
// 0x0088 (0x00B0 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonBorderStyle");
		
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);
};


// Class CommonUI.CommonBorder
// 0x0020 (0x0290 - 0x0270)
class UCommonBorder : public UBorder
{
public:
	class UCommonBorderStyle*                          Style;                                                    // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReducePaddingBySafezone;                                 // 0x0278(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	struct FMargin                                     MinimumPadding;                                           // 0x027C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x028C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonBorder");
		
		return ptr;
	}


	void SetStyle(class UCommonBorderStyle* InStyle);
};


// Class CommonUI.CommonBoundActionBar
// 0x0010 (0x01E8 - 0x01D8)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	class UCommonBoundActionButton*                    ActionButtonClass;                                        // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayOwningPlayerActionsOnly;                          // 0x01E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonBoundActionBar");
		
		return ptr;
	}


	void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);
};


// Class CommonUI.CommonButton
// 0x0918 (0x0BA0 - 0x0288)
class UCommonButton : public UCommonUserWidget
{
public:
	int                                                MinWidth;                                                 // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x028C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCommonButtonStyle*                          Style;                                                    // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideInputAction;                                         // 0x0298(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0299(0x0007) MISSED OFFSET
	struct FSlateSound                                 PressedSlateSoundOverride;                                // 0x02A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateSound                                 HoveredSlateSoundOverride;                                // 0x02B8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyAlphaOnDisable : 1;                                 // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bSelectable : 1;                                          // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldSelectUponReceivingFocus : 1;                      // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bInteractableWhenSelected : 1;                            // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bToggleable : 1;                                          // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bDisplayInputActionWhenNotInteractable : 1;               // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bHideInputActionWithKeyboard : 1;                         // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bShouldUseFallbackDefaultInputAction : 1;                 // 0x02D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x1];                                       // 0x02D1(0x0001) MISSED OFFSET
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x02D2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x02D4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                InputPriority;                                            // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	struct FDataTableRowHandle                         TriggeringInputAction;                                    // 0x02E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x10];                                      // 0x02F0(0x0010) MISSED OFFSET
	bool                                               bIsPersistentBinding;                                     // 0x0300(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECommonInputMode                                   InputModeOverride;                                        // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0302(0x0006) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x0302(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnSelectedChanged
	unsigned char                                      UnknownData07[0x10];                                      // 0x0318(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonClicked
	unsigned char                                      UnknownData08[0x10];                                      // 0x0328(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonDoubleClicked
	unsigned char                                      UnknownData09[0x10];                                      // 0x0338(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonHovered
	unsigned char                                      UnknownData10[0x10];                                      // 0x0348(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButton.OnButtonUnhovered
	unsigned char                                      UnknownData11[0x30];                                      // 0x0358(0x0030) MISSED OFFSET
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                   // 0x0388(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FButtonStyle                                NormalStyle;                                              // 0x0390(0x0278)
	struct FButtonStyle                                SelectedStyle;                                            // 0x0608(0x0278)
	struct FButtonStyle                                DisabledStyle;                                            // 0x0880(0x0278)
	unsigned char                                      bStopDoubleClickPropagation : 1;                          // 0x0AF8(0x0001) (Transient)
	unsigned char                                      UnknownData12[0x9F];                                      // 0x0AF9(0x009F) MISSED OFFSET
	class UCommonActionWidget*                         InputActionWidget;                                        // 0x0B98(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonButton");
		
		return ptr;
	}


	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetTriggeredInputAction(const struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(class UCommonButtonStyle* InStyle);
	void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetPressedSoundOverride(class USoundBase* Sound);
	void SetMinDimensions(int InMinWidth, int InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetIsFocusable(bool bInIsFocusable);
	void SetInputActionProgressMaterial(const struct FSlateBrush& InProgressMaterialBrush, const struct FName& InProgressMaterialParam);
	void SetHoveredSoundOverride(class USoundBase* Sound);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void OnTriggeredInputActionChanged(const struct FDataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(ECommonInputType CurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float HeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float HeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HandleTriggeringActionCommited(bool* bPassThrough);
	void HandleFocusReceived();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetIsFocusable();
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	class UCommonTextStyle* GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void DisableButtonWithReason(const struct FText& DisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnHovered();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};


// Class CommonUI.CommonBoundActionButton
// 0x0010 (0x0BB0 - 0x0BA0)
class UCommonBoundActionButton : public UCommonButton
{
public:
	class UCommonTextBlock*                            Text_ActionName;                                          // 0x0BA0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0BA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonBoundActionButton");
		
		return ptr;
	}


	void OnUpdateInputAction();
};


// Class CommonUI.CommonButtonStyle
// 0x0548 (0x0570 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	bool                                               bSingleMaterial;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FSlateBrush                                 SingleMaterialBrush;                                      // 0x0030(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalBase;                                               // 0x00B8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalHovered;                                            // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 NormalPressed;                                            // 0x01C8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedBase;                                             // 0x0250(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedHovered;                                          // 0x02D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 SelectedPressed;                                          // 0x0360(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateBrush                                 Disabled;                                                 // 0x03E8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     ButtonPadding;                                            // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     CustomPadding;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinWidth;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinHeight;                                                // 0x0494(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            NormalTextStyle;                                          // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            NormalHoveredTextStyle;                                   // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            SelectedTextStyle;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            SelectedHoveredTextStyle;                                 // 0x04B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCommonTextStyle*                            DisabledTextStyle;                                        // 0x04B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x04C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        SelectedPressedSlateSound;                                // 0x04D8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        DisabledPressedSlateSound;                                // 0x04F8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0518(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        SelectedHoveredSlateSound;                                // 0x0530(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FCommonButtonStyleOptionalSlateSound        DisabledHoveredSlateSound;                                // 0x0550(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonButtonStyle");
		
		return ptr;
	}


	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* Brush);
	void GetSelectedBaseBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* Brush);
	void GetNormalBaseBrush(struct FSlateBrush* Brush);
	void GetMaterialBrush(struct FSlateBrush* Brush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* Brush);
	void GetCustomPadding(struct FMargin* OutCustomPadding);
	void GetButtonPadding(struct FMargin* OutButtonPadding);
};


// Class CommonUI.CommonButtonInternal
// 0x0060 (0x0488 - 0x0428)
class UCommonButtonInternal : public UButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0428(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0428(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonInternal.OnDoubleClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x0448(0x0010) MISSED OFFSET
	int                                                MinWidth;                                                 // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinHeight;                                                // 0x045C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bButtonEnabled;                                           // 0x0460(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0461(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x26];                                      // 0x0462(0x0026) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		
		return ptr;
	}

};


// Class CommonUI.CommonWidgetGroupBase
// 0x0000 (0x0028 - 0x0028)
class UCommonWidgetGroupBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonWidgetGroupBase");
		
		return ptr;
	}


	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};


// Class CommonUI.CommonButtonGroup
// 0x00E8 (0x0110 - 0x0028)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnSelectedButtonChanged
	unsigned char                                      UnknownData01[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0038(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnHoveredButtonChanged
	unsigned char                                      UnknownData03[0x18];                                      // 0x0060(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x0060(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnButtonClicked
	unsigned char                                      UnknownData05[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData06[0x10];                                      // 0x0088(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnButtonDoubleClicked
	unsigned char                                      UnknownData07[0x18];                                      // 0x00B0(0x0018) MISSED OFFSET
	unsigned char                                      UnknownData08[0x10];                                      // 0x00B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonButtonGroup.OnSelectionCleared
	unsigned char                                      UnknownData09[0x18];                                      // 0x00D8(0x0018) MISSED OFFSET
	bool                                               bSelectionRequired;                                       // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1F];                                      // 0x00F1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonButtonGroup");
		
		return ptr;
	}


	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int GetSelectedButtonIndex();
	class UCommonButton* GetSelectedButton();
	int GetHoveredButtonIndex();
	int GetButtonCount();
	class UCommonButton* GetButtonAtIndex(int Index);
	int FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x0280 - 0x0270)
class UCommonCustomNavigation : public UBorder
{
public:
	struct FScriptDelegate                             OnNavigationEvent;                                        // 0x0270(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonCustomNavigation");
		
		return ptr;
	}

};


// Class CommonUI.CommonTextBlock
// 0x0028 (0x02C8 - 0x02A0)
class UCommonTextBlock : public UTextBlock
{
public:
	class UCommonTextStyle*                            Style;                                                    // 0x02A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCommonTextScrollStyle*                      ScrollStyle;                                              // 0x02A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAllCaps;                                          // 0x02B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAutoCollapseWithEmptyText;                               // 0x02B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02B2(0x0002) MISSED OFFSET
	float                                              MobileFontSizeMultiplier;                                 // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTextBlock");
		
		return ptr;
	}


	void SetWrapTextWidth(int InWrapTextAt);
	void SetTextCase(bool bUseAllCaps);
	void SetStyle(class UCommonTextStyle* InStyle);
	void ResetScrollState();
};


// Class CommonUI.CommonDateTimeTextBlock
// 0x0040 (0x0308 - 0x02C8)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x02C8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonDateTimeTextBlock");
		
		return ptr;
	}


	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown, float InRefreshDelay);
	void SetCountDownCompletionText(const struct FText& InCompletionText);
	struct FDateTime GetDateTime();
};


// Class CommonUI.CommonGlobalInputHandler
// 0x0048 (0x0070 - 0x0028)
class UCommonGlobalInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonGlobalInputHandler");
		
		return ptr;
	}

};


// Class CommonUI.CommonHierarchicalScrollBox
// 0x0000 (0x0880 - 0x0880)
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonHierarchicalScrollBox");
		
		return ptr;
	}

};


// Class CommonUI.CommonInputManager
// 0x00E0 (0x0108 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET
	TScriptInterface<class UCommonActionHandlerInterface> CurrentlyHeldActionInputHandler;                          // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData)
	TArray<class UCommonActivatablePanel*>             ActivatablePanelStack;                                    // 0x00B8(0x0010) (ExportObject, ZeroConstructor)
	class UCommonGlobalInputHandler*                   GlobalInputHandler;                                       // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	TArray<struct FOperation>                          Operations;                                               // 0x00E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonInputManager");
		
		return ptr;
	}


	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	bool StartListeningForExistingHeldAction(const struct FDataTableRowHandle& InputActionDataRow, const struct FScriptDelegate& CompleteEvent, const struct FScriptDelegate& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	class UCommonActivatablePanel* GetTopPanel();
	int GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};


// Class CommonUI.CommonInputReflector
// 0x0030 (0x02B8 - 0x0288)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	class UCommonButton*                               ButtonType;                                               // 0x0288(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UCommonButton*>                       ActiveButtons;                                            // 0x0290(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UCommonButton*>                       InactiveButtons;                                          // 0x02A0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonInputReflector");
		
		return ptr;
	}


	void OnButtonAdded(class UCommonButton* AddedButton, const struct FCommonInputActionHandlerData& Data);
};


// Class CommonUI.CommonLazyImage
// 0x00C8 (0x02D8 - 0x0210)
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0210(0x0088) (Edit)
	struct FName                                       MaterialTextureParamName;                                 // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLazyImage.BP_OnLoadingStateChanged
	unsigned char                                      UnknownData01[0x28];                                      // 0x02B0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonLazyImage");
		
		return ptr;
	}


	void SetMaterialTextureParamName(const struct FName& TextureParamName);
	void SetBrushFromLazyTexture(bool bMatchSize);
	void SetBrushFromLazyMaterial();
	void SetBrushFromLazyDisplayAsset(bool bMatchTextureSize);
	bool IsLoading();
};


// Class CommonUI.CommonLazyWidget
// 0x0108 (0x0210 - 0x0108)
class UCommonLazyWidget : public UWidget
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0108(0x0088) (Edit)
	class UUserWidget*                                 Content;                                                  // 0x0190(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0198(0x0028) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0198(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLazyWidget.BP_OnLoadingStateChanged
	unsigned char                                      UnknownData02[0x40];                                      // 0x01D0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonLazyWidget");
		
		return ptr;
	}


	void SetLazyContent();
	bool IsLoading();
	class UUserWidget* GetContent();
};


// Class CommonUI.CommonListView
// 0x0000 (0x0368 - 0x0368)
class UCommonListView : public UListView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonListView");
		
		return ptr;
	}


	void SetEntrySpacing(float InEntrySpacing);
};


// Class CommonUI.LoadGuardSlot
// 0x0028 (0x0060 - 0x0038)
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.LoadGuardSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class CommonUI.CommonLoadGuard
// 0x0110 (0x0230 - 0x0120)
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                                 LoadingBackgroundBrush;                                   // 0x0120(0x0088) (Edit)
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                        // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	struct FMargin                                     ThrobberPadding;                                          // 0x01AC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01BC(0x0004) MISSED OFFSET
	struct FText                                       LoadingText;                                              // 0x01C0(0x0018) (Edit)
	class UCommonTextStyle*                            TextStyle;                                                // 0x01D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonLoadGuard.BP_OnLoadingStateChanged
	struct FSoftObjectPath                             SpinnerMaterialPath;                                      // 0x01F0(0x0018) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0208(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonLoadGuard");
		
		return ptr;
	}


	void SetLoadingText(const struct FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(const struct FScriptDelegate& OnAssetLoaded);
};


// Class CommonUI.CommonNumericTextBlock
// 0x00A0 (0x0368 - 0x02C8)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnInterpolationStartedEvent
	unsigned char                                      UnknownData01[0x10];                                      // 0x02D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnInterpolationUpdatedEvent
	unsigned char                                      UnknownData02[0x10];                                      // 0x02E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnOutroEvent
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonNumericTextBlock.OnInterpolationEndedEvent
	float                                              CurrentNumericValue;                                      // 0x0308(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECommonNumericType                                 NumericType;                                              // 0x030C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	struct FCommonNumberFormattingOptions              FormattingSpecification;                                  // 0x0310(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              EaseOutInterpolationExponent;                             // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              InterpolationUpdateInterval;                              // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PostInterpolationShrinkDuration;                          // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PerformSizeInterpolation;                                 // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPercentage;                                             // 0x0331(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData05[0x36];                                      // 0x0332(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		
		return ptr;
	}


	void SetNumericType(ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue);
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonPoolableWidgetInterface");
		
		return ptr;
	}


	void OnReleaseToPool();
	void OnAcquireFromPool();
};


// Class CommonUI.CommonPopupButton
// 0x0010 (0x0BB0 - 0x0BA0)
class UCommonPopupButton : public UCommonButton
{
public:
	class UMenuAnchor*                                 PopupMenuAnchor;                                          // 0x0BA0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonPopupMenu*                            PopupMenu;                                                // 0x0BA8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonPopupButton");
		
		return ptr;
	}


	class UWidget* GetMenuAnchorWidget();
};


// Class CommonUI.CommonPopupMenu
// 0x0018 (0x0458 - 0x0440)
class UCommonPopupMenu : public UCommonActivatablePanel
{
public:
	bool                                               bUseInputStack;                                           // 0x0440(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UMenuAnchor>                  OwningMenuAnchor;                                         // 0x0444(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      ContextProvidingObject;                                   // 0x044C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonPopupMenu");
		
		return ptr;
	}


	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};


// Class CommonUI.CommonRichTextBlock
// 0x0038 (0x06A0 - 0x0668)
class UCommonRichTextBlock : public URichTextBlock
{
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                    // 0x0668(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bTintInlineIcon;                                          // 0x0669(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x066A(0x0006) MISSED OFFSET
	class UCommonTextStyle*                            DefaultTextStyleOverrideClass;                            // 0x0670(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MobileTextBlockScale;                                     // 0x0678(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x067C(0x0004) MISSED OFFSET
	class UCommonTextScrollStyle*                      ScrollStyle;                                              // 0x0680(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisplayAllCaps;                                          // 0x0688(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0689(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonRichTextBlock");
		
		return ptr;
	}

};


// Class CommonUI.CommonRotator
// 0x0058 (0x0BF8 - 0x0BA0)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0BA0(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0BA0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonRotator.OnRotated
	unsigned char                                      UnknownData02[0x18];                                      // 0x0BC0(0x0018) MISSED OFFSET
	class UCommonTextBlock*                            MyText;                                                   // 0x0BD8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0BE0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonRotator");
		
		return ptr;
	}


	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int InValue);
	void PopulateTextLabels(TArray<struct FText> Labels);
	struct FText GetSelectedText();
	int GetSelectedIndex();
	void BP_OnOptionsPopulated(int Count);
	void BP_OnOptionSelected(int Index);
};


// Class CommonUI.CommonTabListWidget
// 0x00D0 (0x0358 - 0x0288)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabSelected
	unsigned char                                      UnknownData01[0x10];                                      // 0x0298(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabButtonCreated
	unsigned char                                      UnknownData02[0x10];                                      // 0x02A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonTabListWidget.OnTabButtonRemoved
	struct FDataTableRowHandle                         NextTabInputActionData;                                   // 0x02B8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FDataTableRowHandle                         PreviousTabInputActionData;                               // 0x02C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoListenForInput;                                      // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UCommonAnimatedSwitcher>      LinkedSwitcher;                                           // 0x02DC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	TMap<struct FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                       // 0x02E8(0x0050) (Transient)
	class UCommonButtonGroup*                          TabButtonGroup;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTabListWidget");
		
		return ptr;
	}


	void SetTabVisibility(const struct FName& TabNameID, ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(const struct FName& TabNameID, bool bEnable);
	void SetTabEnabled(const struct FName& TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);
	bool SelectTabByID(const struct FName& TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(const struct FName& TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(const struct FName& TabNameID, class UCommonButton* ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(const struct FName& TabId);
	void OnTabButtonRemoved__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(const struct FName& TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(const struct FName& TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	struct FName GetTabIdAtIndex(int Index);
	int GetTabCount();
	class UCommonButton* GetTabButtonByID(const struct FName& TabNameID);
	struct FName GetSelectedTabId();
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();
	struct FName GetActiveTab();
	void DisableTabWithReason(const struct FName& TabNameID, const struct FText& Reason);
};


// Class CommonUI.CommonTextStyle
// 0x0120 (0x0148 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0078(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsesDropShadow;                                          // 0x0088(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowOffset;                                             // 0x008C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0094(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x00A4(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00B4(0x0004) MISSED OFFSET
	struct FSlateBrush                                 StrikeBrush;                                              // 0x00B8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              LineHeightPercentage;                                     // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTextStyle");
		
		return ptr;
	}


	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	float                                              Speed;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartDelay;                                               // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EndDelay;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeInDelay;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutDelay;                                             // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTextScrollStyle");
		
		return ptr;
	}

};


// Class CommonUI.CommonTileView
// 0x0000 (0x0388 - 0x0388)
class UCommonTileView : public UTileView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0000 (0x03C0 - 0x03C0)
class UCommonTreeView : public UTreeView
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		
		return ptr;
	}

};


// Class CommonUI.CommonUIActionRouter
// 0x00D0 (0x0100 - 0x0030)
class UCommonUIActionRouter : public ULocalPlayerSubsystem
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0030(0x00D0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUIActionRouter");
		
		return ptr;
	}

};


// Class CommonUI.CommonUIEditorSettings
// 0x0080 (0x00A8 - 0x0028)
class UCommonUIEditorSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateTextStyle
	unsigned char                                      UnknownData01[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateButtonStyle
	unsigned char                                      UnknownData02[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUIEditorSettings.TemplateBorderStyle
	unsigned char                                      UnknownData03[0x8];                                       // 0x00A0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUIEditorSettings");
		
		return ptr;
	}

};


// Class CommonUI.CommonUIInputSettings
// 0x0050 (0x0078 - 0x0028)
class UCommonUIInputSettings : public UObject
{
public:
	bool                                               bLinkCursorToGamepadFocus;                                // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                UIActionProcessingPriority;                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FUIInputAction>                      InputActions;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FUIInputAction>                      ActionOverrides;                                          // 0x0040(0x0010) (ZeroConstructor, Config)
	struct FCommonAnalogCursorSettings                 AnalogCursorSettings;                                     // 0x0050(0x0024) (Edit, Config)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUIInputSettings");
		
		return ptr;
	}

};


// Class CommonUI.CommonUILibrary
// 0x0000 (0x0028 - 0x0028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUILibrary");
		
		return ptr;
	}


	class UWidget* STATIC_FindParentWidgetOfType(class UWidget* StartingWidget, class UWidget* Type);
};


// Class CommonUI.CommonUIRichTextData
// 0x0008 (0x0030 - 0x0028)
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                                  InlineIconSet;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUIRichTextData");
		
		return ptr;
	}

};


// Class CommonUI.CommonUISettings
// 0x0128 (0x0150 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	bool                                               bAutoLoadData;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0029(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonUI.CommonUISettings.DefaultImageResourceObject
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CommonUI.CommonUISettings.DefaultThrobberMaterial
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty CommonUI.CommonUISettings.DefaultRichTextDataClass
	unsigned char                                      UnknownData04[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class UObject*                                     DefaultImageResourceObjectInstance;                       // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                          // 0x00B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FSlateBrush                                 DefaultThrobberBrush;                                     // 0x00C0(0x0088) (Transient)
	class UCommonUIRichTextData*                       RichTextDataInstance;                                     // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUISettings");
		
		return ptr;
	}

};


// Class CommonUI.CommonUISubsystem
// 0x0040 (0x0070 - 0x0030)
class UCommonUISubsystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonUISubsystem.OnInputSuspensionChanged
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) MISSED OFFSET
	class UCommonInputManager*                         CommonInputManager;                                       // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonUISubsystem");
		
		return ptr;
	}


	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(const struct FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType);
};


// Class CommonUI.CommonVideoPlayer
// 0x0110 (0x0218 - 0x0108)
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                                Video;                                                    // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0110(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaTexture*                               MediaTexture;                                             // 0x0118(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMaterial*                                   VideoMaterial;                                            // 0x0120(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMediaSoundComponent*                        SoundComponent;                                           // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FSlateBrush                                 VideoBrush;                                               // 0x0130(0x0088) (Transient)
	unsigned char                                      UnknownData00[0x60];                                      // 0x01B8(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonVideoPlayer");
		
		return ptr;
	}

};


// Class CommonUI.CommonVisibilitySwitcher
// 0x0038 (0x0168 - 0x0130)
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonVisibilitySwitcher.OnActiveWidgetChangedLegacyEvent
	ESlateVisibility                                   ShownVisibility;                                          // 0x0140(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	int                                                ActiveWidgetIndex;                                        // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoActivateSlot;                                        // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActivateFirstSlotOnAdding;                               // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E];                                      // 0x014A(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonVisibilitySwitcher");
		
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	void OnActiveWidgetChangedLegacy__DelegateSignature(class UWidget* ActiveWidget, int ActiveWidgetIndex);
	void IncrementActiveWidgetIndex(bool bAllowWrapping);
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	void DecrementActiveWidgetIndex(bool bAllowWrapping);
	void DeactivateVisibleSlot();
	void ActivateVisibleSlot();
};


// Class CommonUI.CommonVisibilitySwitcherSlot
// 0x0010 (0x0068 - 0x0058)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonVisibilitySwitcherSlot");
		
		return ptr;
	}

};


// Class CommonUI.CommonVisibilityWidget
// 0x0010 (0x02A0 - 0x0290)
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                               bShowForGamepad;                                          // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForMouseAndKeyboard;                                 // 0x0291(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForTouch;                                            // 0x0292(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForPC;                                               // 0x0293(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForMac;                                              // 0x0294(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForPS4;                                              // 0x0295(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForXBox;                                             // 0x0296(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForIOS;                                              // 0x0297(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForAndroid;                                          // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bShowForErebus;                                           // 0x0299(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   VisibleType;                                              // 0x029A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   HiddenType;                                               // 0x029B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonVisibilityWidget");
		
		return ptr;
	}

};


// Class CommonUI.CommonWidgetCarousel
// 0x0040 (0x0160 - 0x0120)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0124(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetCarousel.OnCurrentPageIndexChanged
	unsigned char                                      UnknownData02[0x28];                                      // 0x0138(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarousel");
		
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int Index);
	int GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};


// Class CommonUI.CommonWidgetCarouselNavBar
// 0x0048 (0x0150 - 0x0108)
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	class UCommonButton*                               ButtonWidgetType;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ButtonPadding;                                            // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	class UCommonWidgetCarousel*                       LinkedCarousel;                                           // 0x0130(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCommonButtonGroup*                          ButtonGroup;                                              // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UCommonButton*>                       Buttons;                                                  // 0x0140(0x0010) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarouselNavBar");
		
		return ptr;
	}


	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int PageIndex);
	void HandleButtonClicked(class UCommonButton* AssociatedButton, int ButtonIndex);
};


// Class CommonUI.CommonWidgetStack
// 0x0000 (0x0168 - 0x0168)
class UCommonWidgetStack : public UCommonVisibilitySwitcher
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonWidgetStack");
		
		return ptr;
	}


	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
	void DeactivateWidget();
	void ActivateWidget();
};


// Class CommonUI.CommonWidgetSwitcher
// 0x0028 (0x01B8 - 0x0190)
class UCommonWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0190(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetSwitcher.OnActiveWidgetDeactivated
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty CommonUI.CommonWidgetSwitcher.OnActiveWidgetChanged
	unsigned char                                      UnknownData02[0x1];                                       // 0x01B0(0x0001) MISSED OFFSET
	bool                                               bWidgetActivationEnabled;                                 // 0x01B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOutroPanelBelow;                                         // 0x01B2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x01B3(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class CommonUI.CommonWidgetSwitcher");
		
		return ptr;
	}


	void SetActiveWidgetIndex_Advanced(int Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
