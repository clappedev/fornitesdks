#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

namespace SDK
{
// 0x10 (0x500 - 0x4F0)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	UMulticastDelegateProperty_                  OnAnalogCapture;                                   // 0x4F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnalogSlider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class UCommonActionHandlerInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionHandlerInterface");
		return Clss;
	}

};

// 0x210 (0x318 - 0x108)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   InputActionDataRow;                                // 0x118(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressMaterialBrush;                             // 0x128(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x1B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           IconRimBrush;                                      // 0x1B8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x240(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F84[0xD0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionWidget");
		return Clss;
	}

	void SetInputAction(const struct FDataTableRowHandle& InputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InIconRimBrush);
	void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x8 (0x238 - 0x230)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bConsumePointerInput;                              // 0x230(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F85[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUserWidget");
		return Clss;
	}

	void SetConsumePointerInput(bool bInConsumePointerInput);
	void OnTouchLeave(struct FPointerEvent& TouchEvent);
};

// 0xE8 (0x320 - 0x238)
// Class CommonUI.CommonActivatablePanel
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	uint8                                        Pad_F8E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnWidgetActivated;                                 // 0x240(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnWidgetDeactivated;                               // 0x250(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8F[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bConsumeAllActions;                                // 0x2A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExposeActionsExternally;                          // 0x2A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShouldBypassStack;                                // 0x2A2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F90[0x7D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatablePanel");
		return Clss;
	}

	void SetInputActionHandlerWithProgressPopupMenu(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandlerWithProgress(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent);
	void SetInputActionHandlerWithPopupMenu(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void SetInputActionHandler(const struct FDataTableRowHandle& InputActionRow, UDelegateProperty_ CommitedEvent);
	void SetActionHandlerStateWithDisabledCommitEvent(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State, UDelegateProperty_ DisabledCommitEvent);
	void SetActionHandlerStateFromHandle(const struct FDataTableRowHandle& InputActionRow, enum class EInputActionState State);
	void SetActionHandlerState(class UDataTable* DataTable, class FName RowName, enum class EInputActionState State);
	void RemoveInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	void RemoveAllInputActionHandlers();
	void PopPanel();
	void OnRemovedFromActivationStack();
	void OnInputModeChanged(bool bUsingGamepad);
	void OnDeactivated();
	void OnBeginOutro();
	void OnBeginIntro();
	void OnAddedToActivationStack();
	void OnActivated();
	bool IsIntroed();
	bool IsInActivationStack();
	bool IsActivated();
	bool HasInputActionHandler(const struct FDataTableRowHandle& InputActionRow);
	bool GetInputActions(TArray<struct FCommonInputActionHandlerData>* InputActionDataRows);
	void EndOutro();
	void EndIntro();
	void BeginOutro();
	void BeginIntro();
	void AddInputActionNoHandler(class UDataTable* DataTable, class FName RowName);
	void AddInputActionHandlerWithProgressPopup(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandlerWithProgress(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent, UDelegateProperty_ ProgressEvent);
	void AddInputActionHandlerWithPopup(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent, class UCommonPopupMenu* PopupMenu);
	void AddInputActionHandler(class UDataTable* DataTable, class FName RowName, UDelegateProperty_ CommitedEvent);
};

// 0x88 (0xB0 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                           Background;                                        // 0x28(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorderStyle");
		return Clss;
	}

	void GetBackgroundBrush(struct FSlateBrush* Brush);
};

// 0x20 (0x290 - 0x270)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x270(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F91[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               MinimumPadding;                                    // 0x27C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_F92[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorder");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InStyle);
};

// 0x548 (0x570 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F93[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SingleMaterialBrush;                               // 0x30(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBase;                                        // 0xB8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalHovered;                                     // 0x140(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalPressed;                                     // 0x1C8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBase;                                      // 0x250(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedHovered;                                   // 0x2D8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedPressed;                                   // 0x360(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x3E8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomPadding;                                     // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x490(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x494(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x498(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x4A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x4A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x4C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedPressedSlateSound;                         // 0x4D8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  DisabledPressedSlateSound;                         // 0x4F8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x518(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedHoveredSlateSound;                         // 0x530(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  DisabledHoveredSlateSound;                         // 0x550(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonStyle");
		return Clss;
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

// 0x60 (0x488 - 0x428)
// Class CommonUI.CommonButtonInternal
class UCommonButtonInternal : public UButton
{
public:
	uint8                                        Pad_F94[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnDoubleClicked;                                   // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F95[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinWidth;                                          // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F96[0x26];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonInternal");
		return Clss;
	}

};

// 0x8F8 (0xB30 - 0x238)
// Class CommonUI.CommonButton
class UCommonButton : public UCommonUserWidget
{
public:
	int32                                        MinWidth;                                          // 0x238(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x23C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputAction;                                  // 0x248(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F98[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x250(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x268(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bApplyAlphaOnDisable : 1;                          // Mask : 0x1 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSelectable : 1;                                   // Mask : 0x2 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldSelectUponReceivingFocus : 1;               // Mask : 0x4 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteractableWhenSelected : 1;                     // Mask : 0x8 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bToggleable : 1;                                   // Mask : 0x10 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisplayInputActionWhenNotInteractable : 1;        // Mask : 0x20 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideInputActionWithKeyboard : 1;                  // Mask : 0x40 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldUseFallbackDefaultInputAction : 1;          // Mask : 0x80 0x280(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F99[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EButtonClickMethod                ClickMethod;                                       // 0x282(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x283(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x284(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputPriority;                                     // 0x288(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x290(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	uint8                                        Pad_F9C[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnSelectedChanged;                                 // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnButtonClicked;                                   // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnButtonDoubleClicked;                             // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnButtonHovered;                                   // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  OnButtonUnhovered;                                 // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F9D[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x338(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          NormalStyle;                                       // 0x340(0x278)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          SelectedStyle;                                     // 0x5B8(0x278)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          DisabledStyle;                                     // 0x830(0x278)(NativeAccessSpecifierPrivate)
	uint8                                        bStopDoubleClickPropagation : 1;                   // Mask : 0x1 0xAA8(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F9E[0x87];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButton");
		return Clss;
	}

	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct FDataTableRowHandle& InputActionRow);
	void SetTriggeredInputAction(struct FDataTableRowHandle& InputActionRow, class UCommonActivatablePanel* OldPanel);
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InStyle);
	void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);
	void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetMinDimensions(int32 InMinWidth, int32 InMinHeight);
	void SetIsToggleable(bool bInIsToggleable);
	void SetIsSelected(bool InSelected, bool bGiveClickFeedback);
	void SetIsSelectable(bool bInIsSelectable);
	void SetIsInteractionEnabled(bool bInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);
	void SetInputActionProgressMaterial(struct FSlateBrush& InProgressMaterialBrush, class FName& InProgressMaterialParam);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& NewTriggeredAction);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
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
	bool GetInputAction(struct FDataTableRowHandle* InputActionRow);
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* OutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* OutButtonPadding);
	void DisableButtonWithReason(class FText& DisabledReason);
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

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetGroupBase");
		return Clss;
	}

	void RemoveWidget(class UWidget* InWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InWidget);
};

// 0x70 (0x98 - 0x28)
// Class CommonUI.CommonButtonGroup
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	UMulticastDelegateProperty_                  OnSelectedButtonChanged;                           // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnHoveredButtonChanged;                            // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonClicked;                                   // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnButtonDoubleClicked;                             // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnSelectionCleared;                                // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bSelectionRequired;                                // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FA2[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonGroup");
		return Clss;
	}

	void SetSelectionRequired(bool bRequireSelection);
	void SelectPreviousButton(bool bAllowWrap);
	void SelectNextButton(bool bAllowWrap);
	void SelectButtonAtIndex(int32 ButtonIndex);
	void OnSelectionStateChanged(class UCommonButton* BaseButton, bool bIsSelected);
	void OnHandleButtonDoubleClicked(class UCommonButton* BaseButton);
	void OnHandleButtonClicked(class UCommonButton* BaseButton);
	void OnButtonUnhovered(class UCommonButton* BaseButton);
	void OnButtonHovered(class UCommonButton* BaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	int32 GetHoveredButtonIndex();
	int32 GetButtonCount();
	class UCommonButton* GetButtonAtIndex(int32 Index);
	int32 FindButtonIndex(class UCommonButton* ButtonToFind);
	void DeselectAll();
};

// 0x10 (0x280 - 0x270)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	UDelegateProperty_                           OnNavigationEvent;                                 // 0x270(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonCustomNavigation");
		return Clss;
	}

};

// 0x20 (0x2C0 - 0x2A0)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA3[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextBlock");
		return Clss;
	}

	void SetWrapTextWidth(int32 InWrapTextAt);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InStyle);
	void ResetScrollState();
};

// 0x40 (0x300 - 0x2C0)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_FA5[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonDateTimeTextBlock");
		return Clss;
	}

	void SetTimespanValue(const struct FTimespan& InTimespan);
	void SetDateTimeValue(const struct FDateTime& InDateTime, bool bShowAsCountdown);
	void SetCountDownCompletionText(class FText InCompletionText);
	struct FDateTime GetDateTime();
};

// 0x48 (0x70 - 0x28)
// Class CommonUI.CommonGlobalInputHandler
class UCommonGlobalInputHandler : public UObject
{
public:
	uint8                                        Pad_FA6[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGlobalInputHandler");
		return Clss;
	}

};

// 0x0 (0x868 - 0x868)
// Class CommonUI.CommonHierarchicalScrollBox
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonHierarchicalScrollBox");
		return Clss;
	}

};

// 0xE0 (0x108 - 0x28)
// Class CommonUI.CommonInputManager
class UCommonInputManager : public UObject
{
public:
	uint8                                        Pad_FAC[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UInterfaceProperty_                          CurrentlyHeldActionInputHandler;                   // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCommonActivatablePanel*>       ActivatablePanelStack;                             // 0xB8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonGlobalInputHandler*             GlobalInputHandler;                                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FAD[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOperation>                    Operations;                                        // 0xE8(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FAE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputManager");
		return Clss;
	}

	void SuspendStartingOperationProcessing();
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent);
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle& InputActionDataRow, UDelegateProperty_& CompleteEvent, UDelegateProperty_& ProgressEvent);
	void SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority);
	void ResumeStartingOperationProcessing();
	void PushActivatablePanel(class UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);
	void PopActivatablePanel(class UCommonActivatablePanel* ActivatablePanel);
	bool IsPanelOnStack(class UCommonActivatablePanel* InPanel);
	bool IsInputSuspended();
	class UCommonActivatablePanel* GetTopPanel();
	int32 GetGlobalInputHandlerPriorityFilter();
	bool GetAvailableInputActions(TArray<struct FCommonInputActionHandlerData>* AvailableInputActions);
};

// 0x30 (0x268 - 0x238)
// Class CommonUI.CommonInputReflector
class UCommonInputReflector : public UCommonUserWidget
{
public:
	TSubclassOf<class UCommonButton>             ButtonType;                                        // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UCommonButton*>                 ActiveButtons;                                     // 0x240(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UCommonButton*>                 InactiveButtons;                                   // 0x250(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FAF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputReflector");
		return Clss;
	}

	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data);
};

// 0xC8 (0x2D8 - 0x210)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x210(0x88)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  MaterialTextureParamName;                          // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnLoadingStateChanged;                          // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB2[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyImage");
		return Clss;
	}

	void SetMaterialTextureParamName(class FName TextureParamName);
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& LazyTexture, bool bMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& LazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& LazyObject, bool bMatchTextureSize);
	bool IsLoading();
};

// 0xF0 (0x1F8 - 0x108)
// Class CommonUI.CommonLazyWidget
class UCommonLazyWidget : public UWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x108(0x88)(Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Content;                                           // 0x190(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB3[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  BP_OnLoadingStateChanged;                          // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB4[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyWidget");
		return Clss;
	}

	void SetLazyContent(TSoftClassPtr<class UUserWidget> SoftWidget);
	bool IsLoading();
};

// 0x0 (0x338 - 0x338)
// Class CommonUI.CommonListView
class UCommonListView : public UListView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListView");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class CommonUI.LoadGuardSlot
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB5[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoadGuardSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x110 (0x230 - 0x120)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x120(0x88)(Edit, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB6[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ThrobberPadding;                                   // 0x1AC(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x1C0(0x18)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x1D8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UMulticastDelegateProperty_                  BP_OnLoadingStateChanged;                          // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       SpinnerMaterialPath;                               // 0x1F0(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB8[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLoadGuard");
		return Clss;
	}

	void SetLoadingText(class FText& InLoadingText);
	void SetIsLoading(bool bInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* Object);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InLazyAsset, UDelegateProperty_& OnAssetLoaded);
};

// 0x80 (0x340 - 0x2C0)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	UMulticastDelegateProperty_                  OnOutroEvent;                                      // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnInterpolationEndedEvent;                         // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x2E0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0x2E4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FBA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonNumberFormattingOptions        FormattingSpecification;                           // 0x2E8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x2FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x300(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x304(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformSizeInterpolation;                          // 0x308(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x309(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FBB[0x36];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonNumericTextBlock");
		return Clss;
	}

	void SetNumericType(enum class ECommonNumericType InNumericType);
	void SetCurrentValue(float NewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset);
	float GetTargetValue();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPoolableWidgetInterface");
		return Clss;
	}

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x10 (0xB40 - 0xB30)
// Class CommonUI.CommonPopupButton
class UCommonPopupButton : public UCommonButton
{
public:
	class UMenuAnchor*                           PopupMenuAnchor;                                   // 0xB30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonPopupMenu*                      PopupMenu;                                         // 0xB38(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPopupButton");
		return Clss;
	}

	class UWidget* GetMenuAnchorWidget();
};

// 0x18 (0x338 - 0x320)
// Class CommonUI.CommonPopupMenu
class UCommonPopupMenu : public UCommonActivatablePanel
{
public:
	bool                                         bUseInputStack;                                    // 0x320(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FBC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMenuAnchor>            OwningMenuAnchor;                                  // 0x324(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObject>                ContextProvidingObject;                            // 0x32C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FBD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPopupMenu");
		return Clss;
	}

	void SetOwningMenuAnchor(class UMenuAnchor* MenuAnchor);
	void SetContextProvider(class UObject* ContextProvidingObject);
	void RequestClose();
	void OnIsOpenChanged(bool IsOpen);
	void HandlePreDifferentContextProviderSet();
	void HandlePostDifferentContextProviderSet();
};

// 0x40 (0xB70 - 0xB30)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButton
{
public:
	uint8                                        Pad_FBE[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnRotated;                                         // 0xB40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UCommonTextBlock*                      MyText;                                            // 0xB50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FBF[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRotator");
		return Clss;
	}

	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int32 InValue);
	void PopulateTextLabels(const TArray<class FText>& Labels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
};

// 0xC8 (0x300 - 0x238)
// Class CommonUI.CommonTabListWidget
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	UMulticastDelegateProperty_                  OnTabSelected;                                     // 0x238(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTabButtonCreated;                                // 0x248(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnTabButtonRemoved;                                // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextTabInputActionData;                            // 0x268(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousTabInputActionData;                        // 0x278(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x288(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UCommonWidgetSwitcher>  LinkedSwitcher;                                    // 0x28C(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FC8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x298(0x50)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FC9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTabListWidget");
		return Clss;
	}

	void SetTabVisibility(class FName TabNameID, enum class ESlateVisibility NewVisibility);
	void SetTabInteractionEnabled(class FName TabNameID, bool bEnable);
	void SetTabEnabled(class FName TabNameID, bool bEnable);
	void SetListeningForInput(bool bShouldListen);
	void SetLinkedSwitcher(class UCommonWidgetSwitcher* CommonSwitcher);
	bool SelectTabByID(class FName TabNameID, bool bSuppressClickFeedback);
	bool RemoveTab(class FName TabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName TabNameID, TSubclassOf<class UCommonButton> ButtonWidgetType, class UWidget* ContentWidget);
	void OnTabSelected__DelegateSignature(class FName TabId);
	void OnTabButtonRemoved__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void HandleTabRemoved(class FName TabNameID, class UCommonButton* TabButton);
	void HandleTabCreated(class FName TabNameID, class UCommonButton* TabButton);
	void HandleTabButtonSelected(class UCommonButton* SelectedTabButton, int32 ButtonIndex);
	void HandlePreviousTabInputAction(bool* bPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* bPassThrough);
	class FName GetTabIdAtIndex(int32 Index);
	int32 GetTabCount();
	class UCommonButton* GetTabButtonByID(class FName TabNameID);
	class FName GetSelectedTabId();
	class UCommonWidgetSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName TabNameID, class FText& Reason);
};

// 0x120 (0x148 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x28(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset;                                      // 0x8C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x94(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0xA4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           StrikeBrush;                                       // 0xB8(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0x140(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextStyle");
		return Clss;
	}

	void GetStrikeBrush(struct FSlateBrush* OutStrikeBrush);
	void GetShadowOffset(struct FVector2D* OutShadowOffset);
	void GetShadowColor(struct FLinearColor* OutColor);
	void GetMargin(struct FMargin* OutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* OutFont);
	void GetColor(struct FLinearColor* OutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FCD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextScrollStyle");
		return Clss;
	}

};

// 0x0 (0x358 - 0x358)
// Class CommonUI.CommonTileView
class UCommonTileView : public UTileView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTileView");
		return Clss;
	}

};

// 0x0 (0x390 - 0x390)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UTreeView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTreeView");
		return Clss;
	}

};

// 0x80 (0xA8 - 0x28)
// Class CommonUI.CommonUIEditorSettings
class UCommonUIEditorSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonTextStyle>        TemplateTextStyle;                                 // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonButtonStyle>      TemplateButtonStyle;                               // 0x50(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonBorderStyle>      TemplateBorderStyle;                               // 0x78(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FCE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIEditorSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUILibrary");
		return Clss;
	}

	class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, TSubclassOf<class UWidget> Type);
};

// 0xF8 (0x120 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FCF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                DefaultImageResourceObject;                        // 0x30(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     DefaultThrobberMaterial;                           // 0x58(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FD0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultImageResourceObjectInstance;                // 0x88(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultThrobberMaterialInstance;                   // 0x90(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           DefaultThrobberBrush;                              // 0x98(0x88)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISettings");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class CommonUI.CommonUISubsystem
class UCommonUISubsystem : public UGameInstanceSubsystem
{
public:
	UMulticastDelegateProperty_                  OnInputMethodChanged;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD2[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnInputSuspensionChanged;                          // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD3[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputManager*                   CommonInputManager;                                // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISubsystem");
		return Clss;
	}

	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);
	void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);
	class UCommonInputManager* GetInputManager();
	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InputActionRowHandle, enum class ECommonInputType InputType, enum class ECommonGamepadType GamepadType);
};

// 0x10 (0x2A0 - 0x290)
// Class CommonUI.CommonVisibilityWidget
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	bool                                         bShowForGamepad;                                   // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x291(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x292(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPC;                                        // 0x293(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMac;                                       // 0x294(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForPS4;                                       // 0x295(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForXBox;                                      // 0x296(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForIOS;                                       // 0x297(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForAndroid;                                   // 0x298(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForErebus;                                    // 0x299(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x29A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x29B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilityWidget");
		return Clss;
	}

};

// 0x40 (0x160 - 0x120)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x120(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastDelegateProperty_                  OnCurrentPageIndexChanged;                         // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD7[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarousel");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 Index);
	void SetActiveWidget(class UWidget* Widget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 Index);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float ScrollInterval);
};

// 0x48 (0x150 - 0x108)
// Class CommonUI.CommonWidgetCarouselNavBar
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	TSubclassOf<class UCommonButton>             ButtonWidgetType;                                  // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FDA[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetCarousel*                 LinkedCarousel;                                    // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroup*                    ButtonGroup;                                       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButton*>                 Buttons;                                           // 0x140(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarouselNavBar");
		return Clss;
	}

	void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32 PageIndex);
	void HandleButtonClicked(class UCommonButton* AssociatedButton, int32 ButtonIndex);
};

// 0x50 (0x188 - 0x138)
// Class CommonUI.CommonWidgetSwitcher
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	UMulticastDelegateProperty_                  OnActiveWidgetDeactivated;                         // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnActiveWidgetChanged;                             // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x158(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x159(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FDD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x15C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FDE[0x22];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bWidgetActivationEnabled;                          // 0x182(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOutroPanelBelow;                                  // 0x183(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FDF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetSwitcher");
		return Clss;
	}

	void SetDisableTransitionAnimation(bool bDisableAnimation);
	void SetActiveWidgetIndex_Advanced(int32 Index, bool AttemptActivationChange);
	void SetActiveWidget_Advanced(class UWidget* Widget, bool AttemptActivationChange);
	bool HasWidgets();
	void HandleActiveWidgetDeactivated(class UCommonActivatablePanel* DeactivatedPanel);
	void DeactivateWidget();
	void ActivateWidget();
	void ActivatePreviousWidget(bool bCanWrap);
	void ActivateNextWidget(bool bCanWrap);
};

// 0x0 (0x188 - 0x188)
// Class CommonUI.CommonWidgetStack
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetStack");
		return Clss;
	}

	void PushWidget(class UWidget* InWidget);
	class UWidget* PopWidget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
