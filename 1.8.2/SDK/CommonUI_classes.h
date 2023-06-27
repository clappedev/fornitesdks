#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CommonUI.CommonUserWidget
// 0x0008 (0x0238 - 0x0230)
class UCommonUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0230(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUserWidget");
		return ptr;
	}

};


// Class CommonUI.CommonButton
// 0x0668 (0x08A0 - 0x0238)
class UCommonButton : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x668];                                     // 0x0238(0x0668) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButton");
		return ptr;
	}

};


// Class CommonUI.CommonActivatablePanel
// 0x01A8 (0x03E0 - 0x0238)
class UCommonActivatablePanel : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x1A8];                                     // 0x0238(0x01A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActivatablePanel");
		return ptr;
	}

};


// Class CommonUI.CommonListView
// 0x0208 (0x0320 - 0x0118)
class UCommonListView : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x208];                                     // 0x0118(0x0208) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListView");
		return ptr;
	}

};


// Class CommonUI.CommonTileView
// 0x0010 (0x0330 - 0x0320)
class UCommonTileView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0320(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTileView");
		return ptr;
	}

};


// Class CommonUI.CommonTabListWidget
// 0x00C8 (0x0300 - 0x0238)
class UCommonTabListWidget : public UCommonUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnTabSelected;                                            // 0x0238(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0248(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTabListWidget");
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
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetGroupBase");
		return ptr;
	}


	void RemoveWidget();
	void RemoveAll();
	void AddWidget();
};


// Class CommonUI.CommonButtonGroup
// 0x0070 (0x0098 - 0x0028)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{
public:
	struct FScriptMulticastDelegate                    OnSelectedButtonChanged;                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0038(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonGroup");
		return ptr;
	}

};


// Class CommonUI.CommonTextBlock
// 0x0050 (0x0298 - 0x0248)
class UCommonTextBlock : public UTextBlock
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0248(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextBlock");
		return ptr;
	}

};


// Class CommonUI.CommonNumericTextBlock
// 0x0088 (0x0320 - 0x0298)
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0298(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonNumericTextBlock");
		return ptr;
	}

};


// Class CommonUI.AnalogSlider
// 0x0010 (0x0420 - 0x0410)
class UAnalogSlider : public USlider
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.AnalogSlider");
		return ptr;
	}

};


// Class CommonUI.CommonActionWidget
// 0x0228 (0x0340 - 0x0118)
class UCommonActionWidget : public UWidget
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x218];                                     // 0x0128(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionWidget");
		return ptr;
	}

};


// Class CommonUI.CommonBorder
// 0x0020 (0x02B0 - 0x0290)
class UCommonBorder : public UBorder
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorder");
		return ptr;
	}

};


// Class CommonUI.CommonVisibilityWidget
// 0x0010 (0x02C0 - 0x02B0)
class UCommonVisibilityWidget : public UCommonBorder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonVisibilityWidget");
		return ptr;
	}

};


// Class CommonUI.CommonBorderStyle
// 0x0090 (0x00B8 - 0x0028)
class UCommonBorderStyle : public UObject
{
public:
	struct FSlateBrush                                 Background;                                               // 0x0028(0x0090) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonBorderStyle");
		return ptr;
	}


	void GetBackgroundBrush(struct FSlateBrush* Brush);
};


// Class CommonUI.CommonButtonStyle
// 0x0508 (0x0530 - 0x0028)
class UCommonButtonStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x508];                                     // 0x0028(0x0508) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonStyle");
		return ptr;
	}

};


// Class CommonUI.CommonButtonInternal
// 0x0088 (0x04F0 - 0x0468)
class UCommonButtonInternal : public UButton
{
public:
	struct FScriptMulticastDelegate                    OnDoubleClicked;                                          // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x78];                                      // 0x0478(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonButtonInternal");
		return ptr;
	}

};


// Class CommonUI.CommonCustomNavigation
// 0x0010 (0x02A0 - 0x0290)
class UCommonCustomNavigation : public UBorder
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonCustomNavigation");
		return ptr;
	}

};


// Class CommonUI.CommonGlobalInputHandler
// 0x0048 (0x0070 - 0x0028)
class UCommonGlobalInputHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonGlobalInputHandler");
		return ptr;
	}

};


// Class CommonUI.CommonLoadGuard
// 0x0088 (0x01B8 - 0x0130)
class UCommonLoadGuard : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0130(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLoadGuard");
		return ptr;
	}

};


// Class CommonUI.CommonLazyImage
// 0x0040 (0x0240 - 0x0200)
class UCommonLazyImage : public UImage
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0200(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonLazyImage");
		return ptr;
	}

};


// Class CommonUI.CommonListViewNullItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListViewNullItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListViewNullItem");
		return ptr;
	}

};


// Class CommonUI.CommonTreeView
// 0x0020 (0x0340 - 0x0320)
class UCommonTreeView : public UCommonListView
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0320(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTreeView");
		return ptr;
	}

};


// Class CommonUI.CommonPoolableWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonPoolableWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonPoolableWidgetInterface");
		return ptr;
	}


	void OnReleaseToPool();
	void OnAcquireFromPool();
};


// Class CommonUI.CommonListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonListItem : public UCommonPoolableWidgetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonListItem");
		return ptr;
	}


	void ToggleExpansion();
	void SetSelected();
	void SetIndexInList();
	void SetExpanded();
	void RegisterOnClicked();
	void Private_OnExpanderArrowShiftClicked();
	void IsItemExpanded();
	void GetIndentLevel();
	void DoesItemHaveChildren();
};


// Class CommonUI.CommonObjectListItem
// 0x0000 (0x0028 - 0x0028)
class UCommonObjectListItem : public UCommonListItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonObjectListItem");
		return ptr;
	}


	void SetData();
	void Reset();
	void GetData();
};


// Class CommonUI.CommonTextStyle
// 0x00A8 (0x00D0 - 0x0028)
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                              Font;                                                     // 0x0028(0x0068) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FLinearColor                                Color;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextStyle");
		return ptr;
	}

};


// Class CommonUI.CommonTextScrollStyle
// 0x0018 (0x0040 - 0x0028)
class UCommonTextScrollStyle : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonTextScrollStyle");
		return ptr;
	}

};


// Class CommonUI.CommonDateTimeTextBlock
// 0x0020 (0x02B8 - 0x0298)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0298(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonDateTimeTextBlock");
		return ptr;
	}


	void SetTimespanValue();
	void SetDateTimeValue();
	void GetDateTime();
};


// Class CommonUI.CommonUIContext
// 0x00B8 (0x00E0 - 0x0028)
class UCommonUIContext : public UBlueprintContextBase
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUIContext");
		return ptr;
	}

};


// Class CommonUI.CommonInputManager
// 0x0298 (0x02C0 - 0x0028)
class UCommonInputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x298];                                     // 0x0028(0x0298) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputManager");
		return ptr;
	}

};


// Class CommonUI.CommonRotator
// 0x0090 (0x0930 - 0x08A0)
class UCommonRotator : public UCommonButton
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x08A0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonRotator");
		return ptr;
	}

};


// Class CommonUI.CommonInputReflector
// 0x0028 (0x0260 - 0x0238)
class UCommonInputReflector : public UCommonUserWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0238(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonInputReflector");
		return ptr;
	}

};


// Class CommonUI.CommonWidgetSwitcher
// 0x0050 (0x0198 - 0x0148)
class UCommonWidgetSwitcher : public UWidgetSwitcher
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0148(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetSwitcher");
		return ptr;
	}

};


// Class CommonUI.CommonUISettings
// 0x0068 (0x0090 - 0x0028)
class UCommonUISettings : public UObject
{
public:
	struct FStringClassReference                       DefaultTextStyle_StringRef;                               // 0x0028(0x0010) (Edit, Config)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUISettings");
		return ptr;
	}

};


// Class CommonUI.CommonWidgetCarousel
// 0x08E0 (0x0A10 - 0x0130)
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x8E0];                                     // 0x0130(0x08E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetCarousel");
		return ptr;
	}

};


// Class CommonUI.CommonWidgetStack
// 0x0000 (0x0198 - 0x0198)
class UCommonWidgetStack : public UCommonWidgetSwitcher
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonWidgetStack");
		return ptr;
	}


	void PushWidget();
	void PopWigdet();
	void DeactivateWidget();
	void ActivateWidget();
};


// Class CommonUI.CommonActionHandlerInterface
// 0x0000 (0x0028 - 0x0028)
class UCommonActionHandlerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonUI.CommonActionHandlerInterface");
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
		static auto ptr = UObject::FindClass("Class CommonUI.CommonUILibrary");
		return ptr;
	}


	void STATIC_FindParentWidgetOfType();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
