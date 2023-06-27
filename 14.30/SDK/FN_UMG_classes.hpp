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

// Class UMG.Visual
// 0x0000 (0x0028 - 0x0028)
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Visual");
		
		return ptr;
	}

};


// Class UMG.Widget
// 0x00E0 (0x0108 - 0x0028)
class UWidget : public UVisual
{
public:
	class UPanelSlot*                                  Slot;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             bIsEnabledDelegate;                                       // 0x0030(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       ToolTipText;                                              // 0x0040(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ToolTipTextDelegate;                                      // 0x0058(0x0010) (ZeroConstructor, InstancedReference)
	class UWidget*                                     ToolTipWidget;                                            // 0x0068(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptDelegate                             ToolTipWidgetDelegate;                                    // 0x0070(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             VisibilityDelegate;                                       // 0x0080(0x0010) (ZeroConstructor, InstancedReference)
	struct FWidgetTransform                            RenderTransform;                                          // 0x0090(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   RenderTransformPivot;                                     // 0x00AC(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsVariable : 1;                                          // 0x00B4(0x0001)
	unsigned char                                      bCreatedByConstructionScript : 1;                         // 0x00B4(0x0001) (Transient)
	unsigned char                                      bIsEnabled : 1;                                           // 0x00B4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bOverride_Cursor : 1;                                     // 0x00B4(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                     // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bIsVolatile : 1;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EMouseCursor>                          Cursor;                                                   // 0x00C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWidgetClipping                                    Clipping;                                                 // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // 0x00C3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UWidgetNavigation*                           Navigation;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EFlowDirectionPreference                           FlowDirectionPreference;                                  // 0x00D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x27];                                      // 0x00D1(0x0027) MISSED OFFSET
	TArray<class UPropertyBinding*>                    NativeBindings;                                           // 0x00F8(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Widget");
		
		return ptr;
	}


	void SetVisibility(ESlateVisibility InVisibility);
	void SetUserFocus(class APlayerController* PlayerController);
	void SetToolTipText(const struct FText& InToolTipText);
	void SetToolTip(class UWidget* Widget);
	void SetRenderTranslation(const struct FVector2D& Translation);
	void SetRenderTransformPivot(const struct FVector2D& Pivot);
	void SetRenderTransformAngle(float Angle);
	void SetRenderTransform(const struct FWidgetTransform& InTransform);
	void SetRenderShear(const struct FVector2D& Shear);
	void SetRenderScale(const struct FVector2D& Scale);
	void SetRenderOpacity(float InOpacity);
	void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
	void SetNavigationRuleCustomBoundary(EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleCustom(EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate);
	void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
	void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void SetKeyboardFocus();
	void SetIsEnabled(bool bInIsEnabled);
	void SetFocus();
	void SetCursor(TEnumAsByte<EMouseCursor> InCursor);
	void SetClipping(EWidgetClipping InClipping);
	void SetAllNavigationRules(EUINavigationRule Rule, const struct FName& WidgetToFocus);
	void ResetCursor();
	void RemoveFromParent();
	struct FEventReply OnReply__DelegateSignature();
	struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	bool IsVisible();
	bool IsHovered();
	void InvalidateLayoutAndVolatility();
	bool HasUserFocusedDescendants(class APlayerController* PlayerController);
	bool HasUserFocus(class APlayerController* PlayerController);
	bool HasMouseCaptureByUser(int UserIndex, int PointerIndex);
	bool HasMouseCapture();
	bool HasKeyboardFocus();
	bool HasFocusedDescendants();
	bool HasAnyUserFocus();
	class UWidget* GetWidget__DelegateSignature();
	ESlateVisibility GetVisibility();
	struct FGeometry GetTickSpaceGeometry();
	struct FText GetText__DelegateSignature();
	ESlateVisibility GetSlateVisibility__DelegateSignature();
	struct FSlateColor GetSlateColor__DelegateSignature();
	struct FSlateBrush GetSlateBrush__DelegateSignature();
	float GetRenderTransformAngle();
	float GetRenderOpacity();
	class UPanelWidget* GetParent();
	struct FGeometry GetPaintSpaceGeometry();
	class APlayerController* GetOwningPlayer();
	class ULocalPlayer* GetOwningLocalPlayer();
	TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();
	struct FLinearColor GetLinearColor__DelegateSignature();
	bool GetIsEnabled();
	int GetInt32__DelegateSignature();
	class UGameInstance* GetGameInstance();
	float GetFloat__DelegateSignature();
	struct FVector2D GetDesiredSize();
	EWidgetClipping GetClipping();
	ECheckBoxState GetCheckBoxState__DelegateSignature();
	struct FGeometry GetCachedGeometry();
	bool GetBool__DelegateSignature();
	class UWidget* GenerateWidgetForString__DelegateSignature(const struct FString& Item);
	class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
	void ForceVolatile(bool bForce);
	void ForceLayoutPrepass();
};


// Class UMG.UserWidget
// 0x0158 (0x0260 - 0x0108)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0110(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0120(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0130(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ForegroundColorDelegate;                                  // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.UserWidget.OnVisibilityChanged
	unsigned char                                      UnknownData02[0x18];                                      // 0x0178(0x0018) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                    // 0x01A0(0x0010) (ZeroConstructor, Transient)
	class UUMGSequenceTickManager*                     AnimationTickManager;                                     // 0x01B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                   // 0x01B8(0x0010) (ZeroConstructor, Transient)
	TArray<struct FNamedSlotBinding>                   NamedSlotBindings;                                        // 0x01C8(0x0010) (ZeroConstructor)
	class UWidgetTree*                                 WidgetTree;                                               // 0x01D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Priority;                                                 // 0x01E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSupportsKeyboardFocus : 1;                               // 0x01E4(0x0001) (Deprecated)
	unsigned char                                      bIsFocusable : 1;                                         // 0x01E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bStopAction : 1;                                          // 0x01E4(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bHasScriptImplementedTick : 1;                            // 0x01E4(0x0001)
	unsigned char                                      bHasScriptImplementedPaint : 1;                           // 0x01E4(0x0001)
	unsigned char                                      UnknownData03[0xB];                                       // 0x01E5(0x000B) MISSED OFFSET
	EWidgetTickFrequency                               TickFrequency;                                            // 0x01F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	class UInputComponent*                             InputComponent;                                           // 0x01F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	TArray<struct FAnimationEventBinding>              AnimationCallbacks;                                       // 0x0200(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0210(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UserWidget");
		
		return ptr;
	}


	void UnregisterInputComponent();
	void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
	void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType);
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation(class UWidgetAnimation* InAnimation);
	void StopAllAnimations();
	void SetPositionInViewport(const struct FVector2D& position, bool bRemoveDPIScale);
	void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
	void SetPadding(const struct FMargin& InPadding);
	void SetOwningPlayer(class APlayerController* LocalPlayerController);
	void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay);
	void SetInputActionPriority(int NewPriority);
	void SetInputActionBlocking(bool bShouldBlock);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDesiredSizeInViewport(const struct FVector2D& Size);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
	void SetAnchorsInViewport(const struct FAnchors& Anchors);
	void SetAlignmentInViewport(const struct FVector2D& Alignment);
	void ReverseAnimation(class UWidgetAnimation* InAnimation);
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct(bool IsDesignTime);
	void PlaySound(class USoundBase* SoundToPlay);
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState);
	float PauseAnimation(class UWidgetAnimation* InAnimation);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
	struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void OnPaint(struct FPaintContext* Context);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseCaptureLost();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
	void OnInitialized();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnAnimationStarted(class UWidgetAnimation* Animation);
	void OnAnimationFinished(class UWidgetAnimation* Animation);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void ListenForInputAction(const struct FName& ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback);
	bool IsPlayingAnimation();
	bool IsListeningForInputAction(const struct FName& ActionName);
	bool IsInViewport();
	bool IsInteractable();
	bool IsAnyAnimationPlaying();
	bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
	bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
	class APawn* GetOwningPlayerPawn();
	class APlayerCameraManager* GetOwningPlayerCameraManager();
	bool GetIsVisible();
	float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
	struct FAnchors GetAnchorsInViewport();
	struct FVector2D GetAlignmentInViewport();
	void FlushAnimations();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate);
	void BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag);
	void AddToViewport(int ZOrder);
	bool AddToPlayerScreen(int ZOrder);
};


// Class UMG.Slider
// 0x03F0 (0x04F8 - 0x0108)
class USlider : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinValue;                                                 // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	struct FSliderStyle                                WidgetStyle;                                              // 0x0128(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	struct FLinearColor                                SliderBarColor;                                           // 0x046C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SliderHandleColor;                                        // 0x047C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IndentHandle;                                             // 0x048C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Locked;                                                   // 0x048D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               MouseUsesStep;                                            // 0x048E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RequiresControllerLock;                                   // 0x048F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StepSize;                                                 // 0x0490(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x0494(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0495(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnMouseCaptureBegin
	unsigned char                                      UnknownData04[0x10];                                      // 0x04A8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnMouseCaptureEnd
	unsigned char                                      UnknownData05[0x10];                                      // 0x04B8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnControllerCaptureBegin
	unsigned char                                      UnknownData06[0x10];                                      // 0x04C8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnControllerCaptureEnd
	unsigned char                                      UnknownData07[0x10];                                      // 0x04D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Slider.OnValueChanged
	unsigned char                                      UnknownData08[0x10];                                      // 0x04E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Slider");
		
		return ptr;
	}


	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetSliderBarColor(const struct FLinearColor& InValue);
	void SetMinValue(float InValue);
	void SetMaxValue(float InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	float GetValue();
	float GetNormalizedValue();
};


// Class UMG.PanelWidget
// 0x0018 (0x0120 - 0x0108)
class UPanelWidget : public UWidget
{
public:
	TArray<class UPanelSlot*>                          Slots;                                                    // 0x0108(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.PanelWidget");
		
		return ptr;
	}


	bool RemoveChildAt(int Index);
	bool RemoveChild(class UWidget* Content);
	bool HasChild(class UWidget* Content);
	bool HasAnyChildren();
	int GetChildrenCount();
	int GetChildIndex(class UWidget* Content);
	class UWidget* GetChildAt(int Index);
	TArray<class UWidget*> GetAllChildren();
	void ClearChildren();
	class UPanelSlot* AddChild(class UWidget* Content);
};


// Class UMG.WidgetSwitcher
// 0x0018 (0x0138 - 0x0120)
class UWidgetSwitcher : public UPanelWidget
{
public:
	int                                                ActiveWidgetIndex;                                        // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		
		return ptr;
	}


	void SetActiveWidgetIndex(int Index);
	void SetActiveWidget(class UWidget* Widget);
	class UWidget* GetWidgetAtIndex(int Index);
	int GetNumWidgets();
	int GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
};


// Class UMG.ContentWidget
// 0x0000 (0x0120 - 0x0120)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ContentWidget");
		
		return ptr;
	}


	class UPanelSlot* SetContent(class UWidget* Content);
	class UPanelSlot* GetContentSlot();
	class UWidget* GetContent();
};


// Class UMG.Border
// 0x0150 (0x0270 - 0x0120)
class UBorder : public UContentWidget
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bShowEffectWhenDisabled : 1;                              // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	struct FLinearColor                                ContentColorAndOpacity;                                   // 0x0124(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ContentColorAndOpacityDelegate;                           // 0x0134(0x0010) (ZeroConstructor, InstancedReference)
	struct FMargin                                     Padding;                                                  // 0x0144(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FSlateBrush                                 Background;                                               // 0x0158(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BackgroundDelegate;                                       // 0x01E0(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                BrushColor;                                               // 0x01F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BrushColorDelegate;                                       // 0x0200(0x0010) (ZeroConstructor, InstancedReference)
	struct FVector2D                                   DesiredSizeScale;                                         // 0x0210(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x021C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseButtonUpEvent;                                     // 0x022C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseMoveEvent;                                         // 0x023C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnMouseDoubleClickEvent;                                  // 0x024C(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x14];                                      // 0x025C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Border");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetDesiredSizeScale(const struct FVector2D& InScale);
	void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	void SetBrushFromTexture(class UTexture2D* Texture);
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrushColor(const struct FLinearColor& InBrushColor);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.DynamicEntryBoxBase
// 0x00D0 (0x01D8 - 0x0108)
class UDynamicEntryBoxBase : public UWidget
{
public:
	EDynamicBoxType                                    EntryBoxType;                                             // 0x0108(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	struct FVector2D                                   EntrySpacing;                                             // 0x010C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TArray<struct FVector2D>                           SpacingPattern;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FSlateChildSize                             EntrySizeRule;                                            // 0x0128(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  EntryHorizontalAlignment;                                 // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    EntryVerticalAlignment;                                   // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	int                                                MaxElementSize;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRadialBoxSettings                          RadialBoxSettings;                                        // 0x0138(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0144(0x0014) MISSED OFFSET
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0158(0x0080) (Transient)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		
		return ptr;
	}


	void SetRadialSettings(const struct FRadialBoxSettings& InSettings);
	void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
	int GetNumEntries();
	TArray<class UUserWidget*> GetAllEntries();
};


// Class UMG.Button
// 0x0308 (0x0428 - 0x0120)
class UButton : public UContentWidget
{
public:
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0120(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FButtonStyle                                WidgetStyle;                                              // 0x0128(0x0278) (Edit, BlueprintVisible)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x03A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                              // 0x03C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                              // 0x03C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                              // 0x03C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFocusable;                                              // 0x03C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x03C4(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnClicked
	unsigned char                                      UnknownData02[0x10];                                      // 0x03D8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnPressed
	unsigned char                                      UnknownData03[0x10];                                      // 0x03E8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnReleased
	unsigned char                                      UnknownData04[0x10];                                      // 0x03F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnHovered
	unsigned char                                      UnknownData05[0x10];                                      // 0x0408(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.Button.OnUnhovered
	unsigned char                                      UnknownData06[0x10];                                      // 0x0418(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Button");
		
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);
	void SetStyle(const struct FButtonStyle& InStyle);
	void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);
	void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
	bool IsPressed();
};


// Class UMG.TextLayoutWidget
// 0x0020 (0x0128 - 0x0108)
class UTextLayoutWidget : public UWidget
{
public:
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x0108(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x010B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETextWrappingPolicy                                WrappingPolicy;                                           // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoWrapText : 1;                                         // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	float                                              WrapTextAt;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0114(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LineHeightPercentage;                                     // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		
		return ptr;
	}


	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
};


// Class UMG.TextBlock
// 0x0178 (0x02A0 - 0x0128)
class UTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0140(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0150(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x0178(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0188(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x01D8(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FVector2D                                   ShadowOffset;                                             // 0x0260(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0268(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ShadowColorAndOpacityDelegate;                            // 0x0278(0x0010) (ZeroConstructor, InstancedReference)
	float                                              MinDesiredWidth;                                          // 0x0288(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapWithInvalidationPanel;                               // 0x028C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoWrapText;                                            // 0x028D(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	ETextTransformPolicy                               TextTransformPolicy;                                      // 0x028E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSimpleTextMode;                                          // 0x028F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.TextBlock");
		
		return ptr;
	}


	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
	void SetText(const struct FText& InText);
	void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
	void SetShadowOffset(const struct FVector2D& InShadowOffset);
	void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetOpacity(float InOpacity);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetFont(const struct FSlateFontInfo& InFontInfo);
	void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};


// Class UMG.ScrollBox
// 0x0760 (0x0880 - 0x0120)
class UScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0120(0x0228) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0348(0x04D0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0818(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateWidgetStyleAsset*                      BarStyle;                                                 // 0x0820(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0828(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0829(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x082A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x082B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x082C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     ScrollbarPadding;                                         // 0x0834(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0844(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbarTrack;                                 // 0x0845(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0846(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateWheelScrolling;                                   // 0x0847(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       NavigationDestination;                                    // 0x0848(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              NavigationScrollPadding;                                  // 0x084C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                   // 0x0850(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x0851(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0852(0x0002) MISSED OFFSET
	float                                              WheelScrollMultiplier;                                    // 0x0854(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0858(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ScrollBox.OnUserScrolled
	unsigned char                                      UnknownData04[0x18];                                      // 0x0868(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBox");
		
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
	void SetScrollOffset(float NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
	void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
	void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
	void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
	void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffsetOfEnd();
	float GetScrollOffset();
	void EndInertialScrolling();
};


// Class UMG.Image
// 0x0108 (0x0210 - 0x0108)
class UImage : public UWidget
{
public:
	struct FSlateBrush                                 Brush;                                                    // 0x0108(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             BrushDelegate;                                            // 0x0190(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ColorAndOpacityDelegate;                                  // 0x01B0(0x0010) (ZeroConstructor, InstancedReference)
	bool                                               bFlipForRightToLeftFlowDirection;                         // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01C1(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnMouseButtonDownEvent;                                   // 0x01C4(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x01D4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Image");
		
		return ptr;
	}


	void SetOpacity(float InOpacity);
	void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	void SetBrushTintColor(const struct FSlateColor& TintColor);
	void SetBrushSize(const struct FVector2D& DesiredSize);
	void SetBrushResourceObject(class UObject* ResourceObject);
	void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	void SetBrushFromSoftTexture(bool bMatchSize);
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial(class UMaterialInterface* Material);
	void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	void SetBrushFromAsset(class USlateBrushAsset* Asset);
	void SetBrush(const struct FSlateBrush& InBrush);
	class UMaterialInstanceDynamic* GetDynamicMaterial();
};


// Class UMG.ListViewBase
// 0x0110 (0x0218 - 0x0108)
class UListViewBase : public UWidget
{
public:
	class UUserWidget*                                 EntryWidgetClass;                                         // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WheelScrollMultiplier;                                    // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScrollAnimation;                                   // 0x0114(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFixedLineOffset;                                   // 0x0115(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0116(0x0002) MISSED OFFSET
	float                                              FixedLineScrollOffset;                                    // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x011C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListViewBase.BP_OnEntryGenerated
	unsigned char                                      UnknownData03[0x10];                                      // 0x0130(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListViewBase.BP_OnEntryReleased
	struct FUserWidgetPool                             EntryWidgetPool;                                          // 0x0140(0x0080) (Transient)
	unsigned char                                      UnknownData04[0x58];                                      // 0x01C0(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewBase");
		
		return ptr;
	}


	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
	void SetScrollOffset(float InScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility InVisibility);
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	TArray<class UUserWidget*> GetDisplayedEntryWidgets();
};


// Class UMG.ListView
// 0x0150 (0x0368 - 0x0218)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0218(0x00C0) MISSED OFFSET
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x02D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESelectionMode>                        SelectionMode;                                            // 0x02D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x02DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bClearSelectionOnClick;                                   // 0x02DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFocusable;                                             // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              EntrySpacing;                                             // 0x02E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReturnFocusToSelection;                                  // 0x02E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	TArray<class UObject*>                             ListItems;                                                // 0x02E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData03[0x10];                                      // 0x02F8(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData04[0x10];                                      // 0x02F8(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnEntryInitialized
	unsigned char                                      UnknownData05[0x10];                                      // 0x0318(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemClicked
	unsigned char                                      UnknownData06[0x10];                                      // 0x0328(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemDoubleClicked
	unsigned char                                      UnknownData07[0x10];                                      // 0x0338(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemIsHoveredChanged
	unsigned char                                      UnknownData08[0x10];                                      // 0x0348(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemSelectionChanged
	unsigned char                                      UnknownData09[0x10];                                      // 0x0358(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ListView.BP_OnItemScrolledIntoView

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ListView");
		
		return ptr;
	}


	void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);
	void SetSelectedIndex(int Index);
	void ScrollIndexIntoView(int Index);
	void RemoveItem(class UObject* Item);
	void NavigateToIndex(int Index);
	bool IsRefreshPending();
	int GetNumItems();
	TArray<class UObject*> GetListItems();
	class UObject* GetItemAt(int Index);
	int GetIndexForItem(class UObject* Item);
	void ClearListItems();
	void BP_SetSelectedItem(class UObject* Item);
	void BP_SetListItems(TArray<class UObject*> InListItems);
	void BP_SetItemSelection(class UObject* Item, bool bSelected);
	void BP_ScrollItemIntoView(class UObject* Item);
	void BP_NavigateToItem(class UObject* Item);
	bool BP_IsItemVisible(class UObject* Item);
	bool BP_GetSelectedItems(TArray<class UObject*>* Items);
	class UObject* BP_GetSelectedItem();
	int BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem(class UObject* Item);
};


// Class UMG.PanelSlot
// 0x0010 (0x0038 - 0x0028)
class UPanelSlot : public UVisual
{
public:
	class UPanelWidget*                                Parent;                                                   // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     Content;                                                  // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.PanelSlot");
		
		return ptr;
	}

};


// Class UMG.RichTextBlock
// 0x0540 (0x0668 - 0x0128)
class URichTextBlock : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	class UDataTable*                                  TextStyleSet;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             DecoratorClasses;                                         // 0x0148(0x0010) (Edit, ZeroConstructor)
	bool                                               bOverrideDefaultStyle;                                    // 0x0158(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0159(0x0007) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyleOverride;                                 // 0x0160(0x0268) (Edit)
	float                                              MinDesiredWidth;                                          // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ETextTransformPolicy                               TextTransformPolicy;                                      // 0x03CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	struct FTextBlockStyle                             DefaultTextStyle;                                         // 0x03D0(0x0268) (Transient)
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                       // 0x0638(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0648(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlock");
		
		return ptr;
	}


	void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
	void SetTextStyleSet(class UDataTable* NewTextStyleSet);
	void SetText(const struct FText& InText);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
	void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
	void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
	void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	void SetAutoWrapText(bool InAutoTextWrap);
	struct FText GetText();
	class URichTextBlockDecorator* GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass);
	void ClearAllDefaultStyleOverrides();
};


// Class UMG.TileView
// 0x0020 (0x0388 - 0x0368)
class UTileView : public UListView
{
public:
	float                                              EntryHeight;                                              // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EntryWidth;                                               // 0x036C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EListItemAlignment                                 TileAlignment;                                            // 0x0370(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWrapHorizontalNavigation;                                // 0x0371(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0372(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.TileView");
		
		return ptr;
	}


	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
};


// Class UMG.TreeView
// 0x0058 (0x03C0 - 0x0368)
class UTreeView : public UListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET
	struct FScriptDelegate                             BP_OnGetItemChildren;                                     // 0x0378(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0388(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.TreeView.BP_OnItemExpansionChanged
	unsigned char                                      UnknownData02[0x28];                                      // 0x0398(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.TreeView");
		
		return ptr;
	}


	void SetItemExpansion(class UObject* Item, bool bExpandItem);
	void ExpandAll();
	void CollapseAll();
};


// Class UMG.Overlay
// 0x0010 (0x0130 - 0x0120)
class UOverlay : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Overlay");
		
		return ptr;
	}


	class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
};


// Class UMG.OverlaySlot
// 0x0020 (0x0058 - 0x0038)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.OverlaySlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.AsyncTaskDownloadImage
// 0x0020 (0x0050 - 0x0030)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.AsyncTaskDownloadImage.OnSuccess
	unsigned char                                      UnknownData01[0x10];                                      // 0x0040(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.AsyncTaskDownloadImage.OnFail

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		
		return ptr;
	}


	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);
};


// Class UMG.BackgroundBlur
// 0x00B8 (0x01D8 - 0x0120)
class UBackgroundBlur : public UContentWidget
{
public:
	struct FMargin                                     Padding;                                                  // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyAlphaToBlur;                                        // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0133(0x0001) MISSED OFFSET
	float                                              BlurStrength;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAutoRadiusCalculation;                           // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0139(0x0003) MISSED OFFSET
	int                                                BlurRadius;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateBrush                                 LowQualityFallbackBrush;                                  // 0x0140(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01C8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetBlurStrength(float InStrength);
	void SetBlurRadius(int InBlurRadius);
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
};


// Class UMG.BackgroundBlurSlot
// 0x0028 (0x0060 - 0x0038)
class UBackgroundBlurSlot : public UPanelSlot
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
			ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.PropertyBinding
// 0x0038 (0x0060 - 0x0028)
class UPropertyBinding : public UObject
{
public:
	TWeakObjectPtr<class UObject>                      SourceObject;                                             // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FDynamicPropertyPath                        SourcePath;                                               // 0x0030(0x0028)
	struct FName                                       DestinationProperty;                                      // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.PropertyBinding");
		
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0x0000 (0x0060 - 0x0060)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.BoolBinding");
		
		return ptr;
	}


	bool GetValue();
};


// Class UMG.BorderSlot
// 0x0028 (0x0060 - 0x0038)
class UBorderSlot : public UPanelSlot
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
			ptr = UObject::FindClass("Class UMG.BorderSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.BrushBinding
// 0x0008 (0x0068 - 0x0060)
class UBrushBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.BrushBinding");
		
		return ptr;
	}


	struct FSlateBrush GetValue();
};


// Class UMG.ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ButtonSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.CanvasPanel
// 0x0010 (0x0130 - 0x0120)
class UCanvasPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanel");
		
		return ptr;
	}


	class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
};


// Class UMG.CanvasPanelSlot
// 0x0038 (0x0070 - 0x0038)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	struct FAnchorData                                 LayoutData;                                               // 0x0038(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAutoSize;                                                // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                ZOrder;                                                   // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		
		return ptr;
	}


	void SetZOrder(int InZOrder);
	void SetSize(const struct FVector2D& InSize);
	void SetPosition(const struct FVector2D& InPosition);
	void SetOffsets(const struct FMargin& InOffset);
	void SetMinimum(const struct FVector2D& InMinimumAnchors);
	void SetMaximum(const struct FVector2D& InMaximumAnchors);
	void SetLayout(const struct FAnchorData& InLayoutData);
	void SetAutoSize(bool InbAutoSize);
	void SetAnchors(const struct FAnchors& InAnchors);
	void SetAlignment(const struct FVector2D& InAlignment);
	int GetZOrder();
	struct FVector2D GetSize();
	struct FVector2D GetPosition();
	struct FMargin GetOffsets();
	struct FAnchorData GetLayout();
	bool GetAutoSize();
	struct FAnchors GetAnchors();
	struct FVector2D GetAlignment();
};


// Class UMG.CheckBox
// 0x0650 (0x0770 - 0x0120)
class UCheckBox : public UContentWidget
{
public:
	ECheckBoxState                                     CheckedState;                                             // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0121(0x0003) MISSED OFFSET
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x0124(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FCheckBoxStyle                              WidgetStyle;                                              // 0x0138(0x0580) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x06B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedImage;                                           // 0x06C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedHoveredImage;                                    // 0x06C8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UncheckedPressedImage;                                    // 0x06D0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedImage;                                             // 0x06D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedHoveredImage;                                      // 0x06E0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CheckedPressedImage;                                      // 0x06E8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedImage;                                        // 0x06F0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                 // 0x06F8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            UndeterminedPressedImage;                                 // 0x0700(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0708(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0709(0x0003) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x070C(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x071C(0x0004) MISSED OFFSET
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0720(0x0028) (Deprecated)
	bool                                               IsFocusable;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x0749(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.CheckBox.OnCheckStateChanged
	unsigned char                                      UnknownData06[0x10];                                      // 0x0760(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.CheckBox");
		
		return ptr;
	}


	void SetIsChecked(bool InIsChecked);
	void SetCheckedState(ECheckBoxState InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0x0008 (0x0068 - 0x0060)
class UCheckedStateBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		
		return ptr;
	}


	ECheckBoxState GetValue();
};


// Class UMG.CircularThrobber
// 0x00B8 (0x01C0 - 0x0108)
class UCircularThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Period;                                                   // 0x010C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x0110(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0118(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0120(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bEnableRadius;                                            // 0x01A8(0x0001) (Edit, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x01A9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.CircularThrobber");
		
		return ptr;
	}


	void SetRadius(float InRadius);
	void SetPeriod(float InPeriod);
	void SetNumberOfPieces(int InNumberOfPieces);
};


// Class UMG.ColorBinding
// 0x0008 (0x0068 - 0x0060)
class UColorBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ColorBinding");
		
		return ptr;
	}


	struct FSlateColor GetSlateValue();
	struct FLinearColor GetLinearValue();
};


// Class UMG.ComboBox
// 0x0038 (0x0140 - 0x0108)
class UComboBox : public UWidget
{
public:
	TArray<class UObject*>                             Items;                                                    // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0118(0x0010) (Edit, ZeroConstructor, InstancedReference)
	bool                                               bIsFocusable;                                             // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0129(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBox");
		
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0x0CF0 (0x0DF8 - 0x0108)
class UComboBoxString : public UWidget
{
public:
	TArray<struct FString>                             DefaultOptions;                                           // 0x0108(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SelectedOption;                                           // 0x0118(0x0010) (Edit, ZeroConstructor)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0128(0x03F0) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0518(0x07C8) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0CE0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x0CF0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0CF4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0CF5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0CF6(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0CF8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0D48(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0D70(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D71(0x0003) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0D74(0x0010) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0D84(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x0D84(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ComboBoxString.OnSelectionChanged
	unsigned char                                      UnknownData04[0x10];                                      // 0x0D98(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ComboBoxString.OnOpening
	unsigned char                                      UnknownData05[0x50];                                      // 0x0DA8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ComboBoxString");
		
		return ptr;
	}


	void SetSelectedOption(const struct FString& Option);
	void SetSelectedIndex(int Index);
	bool RemoveOption(const struct FString& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	bool IsOpen();
	struct FString GetSelectedOption();
	int GetSelectedIndex();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FString& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FString& Option);
};


// Class UMG.DragDropOperation
// 0x0060 (0x0088 - 0x0028)
class UDragDropOperation : public UObject
{
public:
	struct FString                                     Tag;                                                      // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UObject*                                     Payload;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     DefaultDragVisual;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDragPivot                                         Pivot;                                                    // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector2D                                   Offset;                                                   // 0x004C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x0054(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDrop
	unsigned char                                      UnknownData03[0x10];                                      // 0x0068(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDragCancelled
	unsigned char                                      UnknownData04[0x10];                                      // 0x0078(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.DragDropOperation.OnDragged

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.DragDropOperation");
		
		return ptr;
	}


	void Drop(const struct FPointerEvent& PointerEvent);
	void Dragged(const struct FPointerEvent& PointerEvent);
	void DragCancelled(const struct FPointerEvent& PointerEvent);
};


// Class UMG.DynamicEntryBox
// 0x0008 (0x01E0 - 0x01D8)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:
	class UUserWidget*                                 EntryWidgetClass;                                         // 0x01D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		
		return ptr;
	}


	void Reset(bool bDeleteWidgets);
	void RemoveEntry(class UUserWidget* EntryWidget);
	class UUserWidget* BP_CreateEntryOfClass(class UUserWidget* EntryClass);
	class UUserWidget* BP_CreateEntry();
};


// Class UMG.EditableText
// 0x0348 (0x0450 - 0x0108)
class UEditableText : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       HintText;                                                 // 0x0130(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0148(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextStyle                          WidgetStyle;                                              // 0x0158(0x0218) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0370(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageSelected;                                  // 0x0378(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImageComposing;                                 // 0x0380(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            CaretImage;                                               // 0x0388(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0390(0x0050) (Deprecated)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x03E0(0x0028) (Deprecated)
	bool                                               IsReadOnly;                                               // 0x0408(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x0409(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x040A(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x0410(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0411(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x0412(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0413(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0414(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0415(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x0416(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0417(0x0001) (Edit)
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                   // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0419(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x041A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x041B(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x2];                                       // 0x041E(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x041E(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableText.OnTextChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0430(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableText.OnTextCommitted
	unsigned char                                      UnknownData04[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.EditableText");
		
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetIsReadOnly(bool InbIsReadyOnly);
	void SetIsPassword(bool InbIsPassword);
	void SetHintText(const struct FText& InHintText);
	void OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
};


// Class UMG.EditableTextBox
// 0x0920 (0x0A28 - 0x0108)
class UEditableTextBox : public UWidget
{
public:
	struct FText                                       Text;                                                     // 0x0108(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0120(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0130(0x07F0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0920(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       HintText;                                                 // 0x0928(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0940(0x0010) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0950(0x0050) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x09A0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x09B0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x09C0(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsReadOnly;                                               // 0x09D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsPassword;                                               // 0x09D1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x09D2(0x0002) MISSED OFFSET
	float                                              MinimumDesiredWidth;                                      // 0x09D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x09D8(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               IsCaretMovedWhenGainFocus;                                // 0x09E8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextWhenFocused;                                 // 0x09E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x09EA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x09EB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x09EC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x09ED(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVirtualKeyboardType>                  KeyboardType;                                             // 0x09EE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x09EF(0x0001) (Edit)
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                   // 0x09F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x09F1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FShapedTextOptions                          ShapedTextOptions;                                        // 0x09F3(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x2];                                       // 0x09F6(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x09F6(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableTextBox.OnTextChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0A08(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.EditableTextBox.OnTextCommitted
	unsigned char                                      UnknownData04[0x10];                                      // 0x0A18(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.EditableTextBox");
		
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	void SetIsReadOnly(bool bReadOnly);
	void SetIsPassword(bool bIsPassword);
	void SetHintText(const struct FText& InText);
	void SetError(const struct FText& InError);
	void OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	bool HasError();
	struct FText GetText();
	void ClearError();
};


// Class UMG.ExpandableArea
// 0x0230 (0x0338 - 0x0108)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0108(0x0008) MISSED OFFSET
	struct FExpandableAreaStyle                        Style;                                                    // 0x0110(0x0120) (Edit)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0230(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 BorderColor;                                              // 0x02B8(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsExpanded;                                              // 0x02E0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	float                                              MaxHeight;                                                // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HeaderPadding;                                            // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     AreaPadding;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0308(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.ExpandableArea.OnExpansionChanged
	class UWidget*                                     HeaderContent;                                            // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidget*                                     BodyContent;                                              // 0x0320(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0328(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ExpandableArea");
		
		return ptr;
	}


	void SetIsExpanded_Animated(bool IsExpanded);
	void SetIsExpanded(bool IsExpanded);
	bool GetIsExpanded();
};


// Class UMG.FloatBinding
// 0x0000 (0x0060 - 0x0060)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.FloatBinding");
		
		return ptr;
	}


	float GetValue();
};


// Class UMG.GridPanel
// 0x0030 (0x0150 - 0x0120)
class UGridPanel : public UPanelWidget
{
public:
	TArray<float>                                      ColumnFill;                                               // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<float>                                      RowFill;                                                  // 0x0130(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.GridPanel");
		
		return ptr;
	}


	void SetRowFill(int ColumnIndex, float Coefficient);
	void SetColumnFill(int ColumnIndex, float Coefficient);
	class UGridSlot* AddChildToGrid(class UWidget* Content, int InRow, int InColumn);
};


// Class UMG.GridSlot
// 0x0038 (0x0070 - 0x0038)
class UGridSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RowSpan;                                                  // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ColumnSpan;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Layer;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Nudge;                                                    // 0x0060(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0068(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.GridSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRowSpan(int InRowSpan);
	void SetRow(int InRow);
	void SetPadding(const struct FMargin& InPadding);
	void SetNudge(const struct FVector2D& InNudge);
	void SetLayer(int InLayer);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumnSpan(int InColumnSpan);
	void SetColumn(int InColumn);
};


// Class UMG.HorizontalBox
// 0x0010 (0x0130 - 0x0120)
class UHorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBox");
		
		return ptr;
	}


	class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
};


// Class UMG.HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0050(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.InputKeySelector
// 0x05E8 (0x06F0 - 0x0108)
class UInputKeySelector : public UWidget
{
public:
	struct FButtonStyle                                WidgetStyle;                                              // 0x0108(0x0278) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0380(0x0268) (Edit, BlueprintVisible)
	struct FInputChord                                 SelectedKey;                                              // 0x05E8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FSlateFontInfo                              Font;                                                     // 0x0608(0x0050) (Deprecated)
	struct FMargin                                     Margin;                                                   // 0x0658(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorAndOpacity;                                          // 0x0668(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FText                                       KeySelectionText;                                         // 0x0678(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       NoKeySpecifiedText;                                       // 0x0690(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bAllowModifierKeys;                                       // 0x06A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowGamepadKeys;                                        // 0x06A9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x06AA(0x0006) MISSED OFFSET
	TArray<struct FKey>                                EscapeKeys;                                               // 0x06B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x06C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.InputKeySelector.OnKeySelected
	unsigned char                                      UnknownData02[0x10];                                      // 0x06D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.InputKeySelector.OnIsSelectingKeyChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x06E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.InputKeySelector");
		
		return ptr;
	}


	void SetTextBlockVisibility(ESlateVisibility InVisibility);
	void SetSelectedKey(const struct FInputChord& InSelectedKey);
	void SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText);
	void SetKeySelectionText(const struct FText& InKeySelectionText);
	void SetEscapeKeys(TArray<struct FKey> InKeys);
	void SetAllowModifierKeys(bool bInAllowModifierKeys);
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
	void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void OnIsSelectingKeyChanged__DelegateSignature();
	bool GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0x0000 (0x0060 - 0x0060)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Int32Binding");
		
		return ptr;
	}


	int GetValue();
};


// Class UMG.InvalidationBox
// 0x0018 (0x0138 - 0x0120)
class UInvalidationBox : public UContentWidget
{
public:
	bool                                               bCanCache;                                                // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CacheRelativeTransforms;                                  // 0x0121(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x0122(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.InvalidationBox");
		
		return ptr;
	}


	void SetCanCache(bool CanCache);
	void InvalidateCache();
	bool GetCanCache();
};


// Class UMG.UserListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntry");
		
		return ptr;
	}


	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
};


// Class UMG.UserListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		
		return ptr;
	}


	bool STATIC_IsListItemSelected(const TScriptInterface<class UUserListEntry>& UserListEntry);
	bool STATIC_IsListItemExpanded(const TScriptInterface<class UUserListEntry>& UserListEntry);
	class UListViewBase* STATIC_GetOwningListView(const TScriptInterface<class UUserListEntry>& UserListEntry);
};


// Class UMG.UserObjectListEntry
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		
		return ptr;
	}


	void OnListItemObjectSet(class UObject* ListItemObject);
};


// Class UMG.UserObjectListEntryLibrary
// 0x0000 (0x0028 - 0x0028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		
		return ptr;
	}


	class UObject* STATIC_GetListItemObject(const TScriptInterface<class UUserObjectListEntry>& UserObjectListEntry);
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000 (0x0028 - 0x0028)
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x0040 (0x0160 - 0x0120)
class UMenuAnchor : public UContentWidget
{
public:
	class UUserWidget*                                 MenuClass;                                                // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnGetMenuContentEvent;                                    // 0x0128(0x0010) (Edit, ZeroConstructor, InstancedReference)
	TEnumAsByte<EMenuPlacement>                        Placement;                                                // 0x0138(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFitInWindow;                                             // 0x0139(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDeferPaintingAfterWindowContent;                    // 0x013A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseApplicationMenuStack;                                  // 0x013B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x013C(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MenuAnchor.OnMenuOpenChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0150(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MenuAnchor");
		
		return ptr;
	}


	void ToggleOpen(bool bFocusOnOpen);
	bool ShouldOpenDueToClick();
	void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);
	void Open(bool bFocusMenu);
	bool IsOpen();
	bool HasOpenSubMenus();
	struct FVector2D GetMenuPosition();
	void FitInWindow(bool bFit);
	void Close();
};


// Class UMG.MouseCursorBinding
// 0x0000 (0x0060 - 0x0060)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		
		return ptr;
	}


	TEnumAsByte<EMouseCursor> GetValue();
};


// Class UMG.MovieScene2DTransformPropertySystem
// 0x0000 (0x0050 - 0x0050)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformPropertySystem");
		
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformSection
// 0x0470 (0x0558 - 0x00E8)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET
	struct FMovieScene2DTransformMask                  TransformMask;                                            // 0x00F0(0x0004)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	struct FMovieSceneFloatChannel                     Translation[0x2];                                         // 0x00F8(0x00A0)
	struct FMovieSceneFloatChannel                     Rotation;                                                 // 0x0238(0x00A0)
	struct FMovieSceneFloatChannel                     Scale[0x2];                                               // 0x02D8(0x00A0)
	struct FMovieSceneFloatChannel                     Shear[0x2];                                               // 0x0418(0x00A0)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0x0000 (0x00A8 - 0x00A8)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x0280 (0x0368 - 0x00E8)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	struct FMovieSceneFloatChannel                     TopCurve;                                                 // 0x00E8(0x00A0)
	struct FMovieSceneFloatChannel                     LeftCurve;                                                // 0x0188(0x00A0)
	struct FMovieSceneFloatChannel                     RightCurve;                                               // 0x0228(0x00A0)
	struct FMovieSceneFloatChannel                     BottomCurve;                                              // 0x02C8(0x00A0)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0x0008 (0x00B0 - 0x00A8)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x0020 (0x00A8 - 0x0088)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	TArray<struct FName>                               BrushPropertyNamePath;                                    // 0x0090(0x0010) (ZeroConstructor)
	struct FName                                       TrackName;                                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		
		return ptr;
	}

};


// Class UMG.MultiLineEditableText
// 0x0338 (0x0460 - 0x0128)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FTextBlockStyle                             WidgetStyle;                                              // 0x0168(0x0268) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x03D0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x03D8(0x0050) (Deprecated)
	bool                                               SelectAllTextWhenFocused;                                 // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearTextSelectionOnFocusLoss;                            // 0x0429(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RevertTextOnEscape;                                       // 0x042A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x042B(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x042C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x042D(0x0001) (Edit)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x042E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x042F(0x0001) MISSED OFFSET
	unsigned char                                      UnknownData02[0x10];                                      // 0x042F(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableText.OnTextChanged
	unsigned char                                      UnknownData03[0x10];                                      // 0x0440(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableText.OnTextCommitted
	unsigned char                                      UnknownData04[0x10];                                      // 0x0450(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		
		return ptr;
	}


	void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.MultiLineEditableTextBox
// 0x0B58 (0x0C80 - 0x0128)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0128(0x0018) (Edit)
	struct FText                                       HintText;                                                 // 0x0140(0x0018) (Edit)
	struct FScriptDelegate                             HintTextDelegate;                                         // 0x0158(0x0010) (ZeroConstructor, InstancedReference)
	struct FEditableTextBoxStyle                       WidgetStyle;                                              // 0x0168(0x07F0) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0958(0x0268) (Edit, BlueprintVisible)
	bool                                               bIsReadOnly;                                              // 0x0BC0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowContextMenu;                                         // 0x0BC1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVirtualKeyboardOptions                     VirtualKeyboardOptions;                                   // 0x0BC2(0x0001) (Edit)
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                             // 0x0BC3(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BC4(0x0004) MISSED OFFSET
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0BC8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateFontInfo                              Font;                                                     // 0x0BD0(0x0050) (Deprecated)
	struct FLinearColor                                ForegroundColor;                                          // 0x0C20(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x0C30(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLinearColor                                ReadOnlyForegroundColor;                                  // 0x0C40(0x0010) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0C50(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableTextBox.OnTextChanged
	unsigned char                                      UnknownData02[0x10];                                      // 0x0C60(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.MultiLineEditableTextBox.OnTextCommitted
	unsigned char                                      UnknownData03[0x10];                                      // 0x0C70(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		
		return ptr;
	}


	void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
	void SetText(const struct FText& InText);
	void SetIsReadOnly(bool bReadOnly);
	void SetHintText(const struct FText& InHintText);
	void SetError(const struct FText& InError);
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text);
	struct FText GetText();
	struct FText GetHintText();
};


// Class UMG.NamedSlot
// 0x0010 (0x0130 - 0x0120)
class UNamedSlot : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlot");
		
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000 (0x0028 - 0x0028)
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0x0010 (0x0118 - 0x0108)
class UNativeWidgetHost : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		
		return ptr;
	}

};


// Class UMG.ProgressBar
// 0x0210 (0x0318 - 0x0108)
class UProgressBar : public UWidget
{
public:
	struct FProgressBarStyle                           WidgetStyle;                                              // 0x0108(0x01A0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x02A8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            BackgroundImage;                                          // 0x02B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            FillImage;                                                // 0x02B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	class USlateBrushAsset*                            MarqueeImage;                                             // 0x02C0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              Percent;                                                  // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EProgressBarFillType>                  BarFillType;                                              // 0x02CC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMarquee;                                               // 0x02CD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02CE(0x0002) MISSED OFFSET
	struct FVector2D                                   BorderPadding;                                            // 0x02D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             PercentDelegate;                                          // 0x02D8(0x0010) (ZeroConstructor, InstancedReference)
	struct FLinearColor                                FillColorAndOpacity;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             FillColorAndOpacityDelegate;                              // 0x02F8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0308(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ProgressBar");
		
		return ptr;
	}


	void SetPercent(float InPercent);
	void SetIsMarquee(bool InbIsMarquee);
	void SetFillColorAndOpacity(const struct FLinearColor& InColor);
};


// Class UMG.RetainerBox
// 0x0030 (0x0150 - 0x0120)
class URetainerBox : public UContentWidget
{
public:
	bool                                               bRetainRender;                                            // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnInvalidation;                                     // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RenderOnPhase;                                            // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0123(0x0001) MISSED OFFSET
	int                                                Phase;                                                    // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PhaseCount;                                               // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          EffectMaterial;                                           // 0x0130(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       TextureParameter;                                         // 0x0138(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.RetainerBox");
		
		return ptr;
	}


	void SetTextureParameter(const struct FName& TextureParameter);
	void SetRetainRendering(bool bInRetainRendering);
	void SetRenderingPhase(int RenderPhase, int TotalPhases);
	void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
	void RequestRender();
	class UMaterialInstanceDynamic* GetEffectMaterial();
};


// Class UMG.RichTextBlockDecorator
// 0x0000 (0x0028 - 0x0028)
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		
		return ptr;
	}

};


// Class UMG.RichTextBlockImageDecorator
// 0x0008 (0x0030 - 0x0028)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	class UDataTable*                                  ImageSet;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x0018 (0x0138 - 0x0120)
class USafeZone : public UContentWidget
{
public:
	bool                                               PadLeft;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadRight;                                                 // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadTop;                                                   // 0x0122(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PadBottom;                                                // 0x0123(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0124(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZone");
		
		return ptr;
	}


	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
};


// Class UMG.SafeZoneSlot
// 0x0028 (0x0060 - 0x0038)
class USafeZoneSlot : public UPanelSlot
{
public:
	bool                                               bIsTitleSafe;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FMargin                                     SafeAreaScale;                                            // 0x003C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HAlign;                                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VAlign;                                                   // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x0020 (0x0140 - 0x0120)
class UScaleBox : public UContentWidget
{
public:
	TEnumAsByte<EStretch>                              Stretch;                                                  // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStretchDirection>                     StretchDirection;                                         // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              UserSpecifiedScale;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreInheritedScale;                                     // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0129(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBox");
		
		return ptr;
	}


	void SetUserSpecifiedScale(float InUserSpecifiedScale);
	void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);
	void SetStretch(TEnumAsByte<EStretch> InStretch);
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
};


// Class UMG.ScaleBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UScaleBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.ScrollBar
// 0x0508 (0x0610 - 0x0108)
class UScrollBar : public UWidget
{
public:
	struct FScrollBarStyle                             WidgetStyle;                                              // 0x0108(0x04D0) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x05D8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bAlwaysShowScrollbar;                                     // 0x05E0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysShowScrollbarTrack;                                // 0x05E1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x05E2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x05E3(0x0001) MISSED OFFSET
	struct FVector2D                                   Thickness;                                                // 0x05E4(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Padding;                                                  // 0x05EC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x05FC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBar");
		
		return ptr;
	}


	void SetState(float InOffsetFraction, float InThumbSizeFraction);
};


// Class UMG.ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SizeBox
// 0x0038 (0x0158 - 0x0120)
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	float                                              WidthOverride;                                            // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOverride;                                           // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredWidth;                                          // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredHeight;                                         // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredWidth;                                          // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDesiredHeight;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinAspectRatio;                                           // 0x0148(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxAspectRatio;                                           // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOverride_WidthOverride : 1;                              // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_HeightOverride : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredWidth : 1;                            // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinDesiredHeight : 1;                           // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredWidth : 1;                            // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxDesiredHeight : 1;                           // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MinAspectRatio : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      bOverride_MaxAspectRatio : 1;                             // 0x0150(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBox");
		
		return ptr;
	}


	void SetWidthOverride(float InWidthOverride);
	void SetMinDesiredWidth(float InMinDesiredWidth);
	void SetMinDesiredHeight(float InMinDesiredHeight);
	void SetMinAspectRatio(float InMinAspectRatio);
	void SetMaxDesiredWidth(float InMaxDesiredWidth);
	void SetMaxDesiredHeight(float InMaxDesiredHeight);
	void SetMaxAspectRatio(float InMaxAspectRatio);
	void SetHeightOverride(float InHeightOverride);
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x0028 (0x0060 - 0x0038)
class USizeBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.SlateBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		
		return ptr;
	}


	struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
	struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
	float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
	float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, bool bIncludeWindowPosition, struct FVector2D* LocalCoordinate);
	void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, bool bIncludeWindowPosition, struct FVector2D* AbsoluteCoordinate);
	void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
};


// Class UMG.SlateVectorArtData
// 0x0038 (0x0060 - 0x0028)
class USlateVectorArtData : public UObject
{
public:
	TArray<struct FSlateMeshVertex>                    VertexData;                                               // 0x0028(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   IndexData;                                                // 0x0038(0x0010) (ZeroConstructor)
	class UMaterialInterface*                          Material;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMin;                                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtentMax;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		
		return ptr;
	}

};


// Class UMG.SlateAccessibleWidgetData
// 0x0058 (0x0080 - 0x0028)
class USlateAccessibleWidgetData : public UObject
{
public:
	bool                                               bCanChildrenBeAccessible;                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	ESlateAccessibleBehavior                           AccessibleBehavior;                                       // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x002B(0x0005) MISSED OFFSET
	struct FText                                       AccessibleText;                                           // 0x0030(0x0018)
	struct FScriptDelegate                             AccessibleTextDelegate;                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference)
	struct FText                                       AccessibleSummaryText;                                    // 0x0058(0x0018)
	struct FScriptDelegate                             AccessibleSummaryTextDelegate;                            // 0x0070(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		
		return ptr;
	}

};


// Class UMG.Spacer
// 0x0018 (0x0120 - 0x0108)
class USpacer : public UWidget
{
public:
	struct FVector2D                                   Size;                                                     // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0110(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Spacer");
		
		return ptr;
	}


	void SetSize(const struct FVector2D& InSize);
};


// Class UMG.SpinBox
// 0x0410 (0x0518 - 0x0108)
class USpinBox : public UWidget
{
public:
	float                                              Value;                                                    // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ValueDelegate;                                            // 0x010C(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FSpinBoxStyle                               WidgetStyle;                                              // 0x0120(0x02E8) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      Style;                                                    // 0x0408(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	int                                                MinFractionalDigits;                                      // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxFractionalDigits;                                      // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysUsesDeltaSnap;                                     // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	float                                              Delta;                                                    // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SliderExponent;                                           // 0x0420(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0428(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x0478(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	float                                              MinDesiredWidth;                                          // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ClearKeyboardFocusOnCommit;                               // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SelectAllTextOnCommit;                                    // 0x0481(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0482(0x0006) MISSED OFFSET
	struct FSlateColor                                 ForegroundColor;                                          // 0x0488(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x10];                                      // 0x04B0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnValueChanged
	unsigned char                                      UnknownData06[0x10];                                      // 0x04C0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnValueCommitted
	unsigned char                                      UnknownData07[0x10];                                      // 0x04D0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnBeginSliderMovement
	unsigned char                                      UnknownData08[0x10];                                      // 0x04E0(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.SpinBox.OnEndSliderMovement
	unsigned char                                      bOverride_MinValue : 1;                                   // 0x04F0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxValue : 1;                                   // 0x04F0(0x0001) (Edit)
	unsigned char                                      bOverride_MinSliderValue : 1;                             // 0x04F0(0x0001) (Edit)
	unsigned char                                      bOverride_MaxSliderValue : 1;                             // 0x04F0(0x0001) (Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              MinValue;                                                 // 0x04F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinSliderValue;                                           // 0x04FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSliderValue;                                           // 0x0500(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x14];                                      // 0x0504(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.SpinBox");
		
		return ptr;
	}


	void SetValue(float NewValue);
	void SetMinValue(float NewValue);
	void SetMinSliderValue(float NewValue);
	void SetMinFractionalDigits(int NewValue);
	void SetMaxValue(float NewValue);
	void SetMaxSliderValue(float NewValue);
	void SetMaxFractionalDigits(int NewValue);
	void SetForegroundColor(const struct FSlateColor& InForegroundColor);
	void SetDelta(float NewValue);
	void SetAlwaysUsesDeltaSnap(bool bNewValue);
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	float GetValue();
	float GetMinValue();
	float GetMinSliderValue();
	int GetMinFractionalDigits();
	float GetMaxValue();
	float GetMaxSliderValue();
	int GetMaxFractionalDigits();
	float GetDelta();
	bool GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TextBinding
// 0x0008 (0x0068 - 0x0060)
class UTextBinding : public UPropertyBinding
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.TextBinding");
		
		return ptr;
	}


	struct FText GetTextValue();
	struct FString GetStringValue();
};


// Class UMG.Throbber
// 0x00A8 (0x01B0 - 0x0108)
class UThrobber : public UWidget
{
public:
	int                                                NumberOfPieces;                                           // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateHorizontally;                                     // 0x010C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateVertically;                                       // 0x010D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimateOpacity;                                          // 0x010E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x010F(0x0001) MISSED OFFSET
	class USlateBrushAsset*                            PieceImage;                                               // 0x0110(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FSlateBrush                                 Image;                                                    // 0x0118(0x0088) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Throbber");
		
		return ptr;
	}


	void SetNumberOfPieces(int InNumberOfPieces);
	void SetAnimateVertically(bool bInAnimateVertically);
	void SetAnimateOpacity(bool bInAnimateOpacity);
	void SetAnimateHorizontally(bool bInAnimateHorizontally);
};


// Class UMG.UMGSequencePlayer
// 0x0550 (0x0578 - 0x0028)
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3E8];                                     // 0x0028(0x03E8) MISSED OFFSET
	class UWidgetAnimation*                            Animation;                                                // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	struct FMovieSceneRootEvaluationTemplateInstance   RootTemplateInstance;                                     // 0x0420(0x00E8)
	unsigned char                                      UnknownData02[0x70];                                      // 0x0508(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		
		return ptr;
	}


	void SetUserTag(const struct FName& InUserTag);
	struct FName GetUserTag();
};


// Class UMG.UMGSequenceTickManager
// 0x00F0 (0x0118 - 0x0028)
class UUMGSequenceTickManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty UMG.UMGSequenceTickManager.WeakUserWidgets
	class UMovieSceneEntitySystemLinker*               Linker;                                                   // 0x0078(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x98];                                      // 0x0080(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UMGSequenceTickManager");
		
		return ptr;
	}

};


// Class UMG.UniformGridPanel
// 0x0028 (0x0148 - 0x0120)
class UUniformGridPanel : public UPanelWidget
{
public:
	struct FMargin                                     SlotPadding;                                              // 0x0120(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotWidth;                                      // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDesiredSlotHeight;                                     // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0138(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		
		return ptr;
	}


	void SetSlotPadding(const struct FMargin& InSlotPadding);
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
	class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn);
};


// Class UMG.UniformGridSlot
// 0x0018 (0x0050 - 0x0038)
class UUniformGridSlot : public UPanelSlot
{
public:
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                Row;                                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Column;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetRow(int InRow);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetColumn(int InColumn);
};


// Class UMG.VerticalBox
// 0x0010 (0x0130 - 0x0120)
class UVerticalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBox");
		
		return ptr;
	}


	class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
};


// Class UMG.VerticalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	struct FSlateChildSize                             Size;                                                     // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0059(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetSize(const struct FSlateChildSize& InSize);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.Viewport
// 0x0028 (0x0148 - 0x0120)
class UViewport : public UContentWidget
{
public:
	struct FLinearColor                                BackgroundColor;                                          // 0x0120(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0130(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.Viewport");
		
		return ptr;
	}


	class AActor* Spawn(class AActor* ActorClass);
	void SetViewRotation(const struct FRotator& Rotation);
	void SetViewLocation(const struct FVector& Location);
	struct FRotator GetViewRotation();
	class UWorld* GetViewportWorld();
	struct FVector GetViewLocation();
};


// Class UMG.VisibilityBinding
// 0x0000 (0x0060 - 0x0060)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		
		return ptr;
	}


	ESlateVisibility GetValue();
};


// Class UMG.WidgetAnimation
// 0x0030 (0x0090 - 0x0060)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                               // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FWidgetAnimationBinding>             AnimationBindings;                                        // 0x0068(0x0010) (ZeroConstructor)
	bool                                               bLegacyFinishOnStop;                                      // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0079(0x0007) MISSED OFFSET
	struct FString                                     DisplayLabel;                                             // 0x0080(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		
		return ptr;
	}


	void UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
	void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
	float GetStartTime();
	float GetEndTime();
	void BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
	void BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate);
};


// Class UMG.WidgetAnimationDelegateBinding
// 0x0010 (0x0038 - 0x0028)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;                          // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		
		return ptr;
	}

};


// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: MulticastInlineDelegateProperty UMG.WidgetAnimationPlayCallbackProxy.Finished
	unsigned char                                      UnknownData01[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		
		return ptr;
	}


	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMGSequencePlayer** Result);
	class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, class UUMGSequencePlayer** Result);
};


// Class UMG.WidgetBinding
// 0x0000 (0x0060 - 0x0060)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBinding");
		
		return ptr;
	}


	class UWidget* GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x0040 (0x0368 - 0x0328)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UWidgetTree*                                 WidgetTree;                                               // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bClassRequiresNativeTick : 1;                             // 0x0330(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	TArray<struct FDelegateRuntimeBinding>             Bindings;                                                 // 0x0338(0x0010) (ZeroConstructor)
	TArray<class UWidgetAnimation*>                    Animations;                                               // 0x0348(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NamedSlots;                                               // 0x0358(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		
		return ptr;
	}


	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	struct FEventReply STATIC_Unhandled();
	void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	struct FEventReply STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	void STATIC_SetFocusToGameViewport();
	void STATIC_SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
	void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	void STATIC_RestorePreviousWindowTitleBarState();
	struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	struct FEventReply STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	struct FSlateBrush STATIC_NoResourceBrush();
	struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	struct FEventReply STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	bool STATIC_IsDragDropping();
	struct FEventReply STATIC_Handled();
	void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	class UDragDropOperation* STATIC_GetDragDroppingContent();
	class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
	class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
	class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
	void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UInterface* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UUserWidget* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawText(const struct FString& inString, const struct FVector2D& position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);
	void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness, struct FPaintContext* Context);
	void STATIC_DrawBox(const struct FVector2D& position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	void STATIC_DismissAllMenus();
	struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	struct FEventReply STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	class UDragDropOperation* STATIC_CreateDragDropOperation(class UDragDropOperation* OperationClass);
	class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UUserWidget* WidgetType, class APlayerController* OwningPlayer);
	struct FEventReply STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	struct FEventReply STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	struct FEventReply STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	void STATIC_CancelDragDrop();
};


// Class UMG.WidgetComponent
// 0x0120 (0x0590 - 0x0470)
class UWidgetComponent : public UMeshComponent
{
public:
	class UUserWidget*                                 WidgetClass;                                              // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FIntPoint                                   DrawSize;                                                 // 0x0478(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bManuallyRedraw;                                          // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRedrawRequested;                                         // 0x0481(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0482(0x0002) MISSED OFFSET
	float                                              RedrawTime;                                               // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0488(0x0008) MISSED OFFSET
	struct FIntPoint                                   CurrentDrawSize;                                          // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bDrawAtDesiredSize;                                       // 0x0498(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	struct FVector2D                                   Pivot;                                                    // 0x049C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveHardwareInput;                                    // 0x04A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWindowFocusable;                                         // 0x04A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EWindowVisibility                                  WindowVisibility;                                         // 0x04A6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyGammaCorrection;                                    // 0x04A7(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class ULocalPlayer*                                OwnerPlayer;                                              // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BackgroundColor;                                          // 0x04B0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TintColorAndOpacity;                                      // 0x04C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OpacityFromTexture;                                       // 0x04D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EWidgetBlendMode                                   BlendMode;                                                // 0x04D4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoSided;                                              // 0x04D5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               TickWhenOffscreen;                                        // 0x04D6(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x04D7(0x0001) MISSED OFFSET
	class UBodySetup*                                  BodySetup;                                                // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial;                                      // 0x04E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                             // 0x04E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial;                                           // 0x04F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                  // 0x04F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial;                                           // 0x0500(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                  // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTarget;                                             // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MaterialInstance;                                         // 0x0518(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bAddedToScreen;                                           // 0x0520(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               bEditTimeUsable;                                          // 0x0521(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0522(0x0002) MISSED OFFSET
	struct FName                                       SharedLayerName;                                          // 0x0524(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LayerZOrder;                                              // 0x052C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EWidgetGeometryMode                                GeometryMode;                                             // 0x0530(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	float                                              CylinderArcAngle;                                         // 0x0534(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETickMode                                          TickMode;                                                 // 0x0538(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x27];                                      // 0x0539(0x0027) MISSED OFFSET
	class UUserWidget*                                 Widget;                                                   // 0x0560(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x28];                                      // 0x0568(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetComponent");
		
		return ptr;
	}


	void SetWindowVisibility(EWindowVisibility InVisibility);
	void SetWindowFocusable(bool bInWindowFocusable);
	void SetWidgetSpace(EWidgetSpace NewSpace);
	void SetWidget(class UUserWidget* Widget);
	void SetTwoSided(bool bWantTwoSided);
	void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
	void SetTickMode(ETickMode InTickMode);
	void SetRedrawTime(float InRedrawTime);
	void SetPivot(const struct FVector2D& InPivot);
	void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	void SetManuallyRedraw(bool bUseManualRedraw);
	void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
	void SetDrawSize(const struct FVector2D& Size);
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
	void SetCylinderArcAngle(float InCylinderArcAngle);
	void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	void RequestRedraw();
	bool IsWidgetVisible();
	EWindowVisibility GetWindowVisiblility();
	bool GetWindowFocusable();
	EWidgetSpace GetWidgetSpace();
	class UUserWidget* GetWidget();
	class UUserWidget* GetUserWidgetObject();
	bool GetTwoSided();
	bool GetTickWhenOffscreen();
	class UTextureRenderTarget2D* GetRenderTarget();
	float GetRedrawTime();
	struct FVector2D GetPivot();
	class ULocalPlayer* GetOwnerPlayer();
	class UMaterialInstanceDynamic* GetMaterialInstance();
	bool GetManuallyRedraw();
	EWidgetGeometryMode GetGeometryMode();
	struct FVector2D GetDrawSize();
	bool GetDrawAtDesiredSize();
	float GetCylinderArcAngle();
	struct FVector2D GetCurrentDrawSize();
};


// Class UMG.WidgetInteractionComponent
// 0x01F0 (0x03F0 - 0x0200)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0200(0x0018) MISSED OFFSET
	int                                                VirtualUserIndex;                                         // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PointerIndex;                                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0221(0x0003) MISSED OFFSET
	float                                              InteractionDistance;                                      // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWidgetInteractionSource                           InteractionSource;                                        // 0x0228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableHitTesting;                                        // 0x0229(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowDebug;                                               // 0x022A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x022B(0x0001) MISSED OFFSET
	struct FLinearColor                                DebugColor;                                               // 0x022C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7C];                                      // 0x023C(0x007C) MISSED OFFSET
	struct FHitResult                                  CustomHitResult;                                          // 0x02B8(0x008C) (Transient, IsPlainOldData)
	struct FVector2D                                   LocalHitLocation;                                         // 0x0344(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   LastLocalHitLocation;                                     // 0x034C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UWidgetComponent*                            HoveredWidgetComponent;                                   // 0x0358(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FHitResult                                  LastHitResult;                                            // 0x0360(0x008C) (Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetInteractable;                             // 0x03EC(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetFocusable;                                // 0x03ED(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsHoveredWidgetHitTestVisible;                           // 0x03EE(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x03EF(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		
		return ptr;
	}


	void SetFocus(class UWidget* FocusWidget);
	void SetCustomHitResult(const struct FHitResult& HitResult);
	bool SendKeyChar(const struct FString& Characters, bool bRepeat);
	void ScrollWheel(float ScrollDelta);
	void ReleasePointerKey(const struct FKey& Key);
	bool ReleaseKey(const struct FKey& Key);
	void PressPointerKey(const struct FKey& Key);
	bool PressKey(const struct FKey& Key, bool bRepeat);
	bool PressAndReleaseKey(const struct FKey& Key);
	bool IsOverInteractableWidget();
	bool IsOverHitTestVisibleWidget();
	bool IsOverFocusableWidget();
	struct FHitResult GetLastHitResult();
	class UWidgetComponent* GetHoveredWidgetComponent();
	struct FVector2D Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000 (0x0028 - 0x0028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		
		return ptr;
	}


	class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
	class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
	class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
	class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
	class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
	class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, bool bPlayerViewportRelative, struct FVector2D* ScreenPosition);
	struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	float STATIC_GetViewportScale(class UObject* WorldContextObject);
	struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
	struct FVector2D STATIC_GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x00D8 (0x0100 - 0x0028)
class UWidgetNavigation : public UObject
{
public:
	struct FWidgetNavigationData                       Up;                                                       // 0x0028(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Down;                                                     // 0x004C(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Left;                                                     // 0x0070(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Right;                                                    // 0x0094(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Next;                                                     // 0x00B8(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FWidgetNavigationData                       Previous;                                                 // 0x00DC(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		
		return ptr;
	}

};


// Class UMG.WidgetSwitcherSlot
// 0x0020 (0x0058 - 0x0038)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FMargin                                     Padding;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WidgetTree
// 0x0008 (0x0030 - 0x0028)
class UWidgetTree : public UObject
{
public:
	class UWidget*                                     RootWidget;                                               // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WidgetTree");
		
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x0020 (0x0140 - 0x0120)
class UWindowTitleBarArea : public UContentWidget
{
public:
	bool                                               bWindowButtonsEnabled;                                    // 0x0120(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDoubleClickTogglesFullscreen;                            // 0x0121(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0122(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WindowTitleBarAreaSlot
// 0x0028 (0x0060 - 0x0038)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
};


// Class UMG.WrapBox
// 0x0028 (0x0148 - 0x0120)
class UWrapBox : public UPanelWidget
{
public:
	struct FVector2D                                   InnerSlotPadding;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WrapWidth;                                                // 0x0128(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              WrapSize;                                                 // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bExplicitWrapWidth;                                       // 0x0130(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bExplicitWrapSize;                                        // 0x0131(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0132(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x15];                                      // 0x0133(0x0015) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBox");
		
		return ptr;
	}


	void SetInnerSlotPadding(const struct FVector2D& InPadding);
	class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
};


// Class UMG.WrapBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UWrapBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFillEmptySpace;                                          // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              FillSpanWhenLessThan;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
	void SetFillEmptySpace(bool InbFillEmptySpace);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
