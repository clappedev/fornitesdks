#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{

};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{

};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{

};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{

};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{

};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{

};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{

};


// Enum SlateCore.EFontFallback
enum class EFontFallback : uint8_t
{

};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{

};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{

};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{

};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{

};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{

};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{

};


// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{

};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{

};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{

};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{

};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{

};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{

};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{

};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{

};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{

};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{

};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{

};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{

};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.SlateBrush
// 0x0090
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x90];                                      // 0x0000(0x0090) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct SlateCore.Geometry
// 0x0034
struct FGeometry
{
	unsigned char                                      UnknownData00[0x34];                                      // 0x0000(0x0034) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0020
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0078 - 0x0020)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0020(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0068
struct FSlateFontInfo
{
	unsigned char                                      UnknownData00[0x68];                                      // 0x0000(0x0068) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0028
struct FFontOutlineSettings
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x0710 (0x0718 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x710];                                     // 0x0008(0x0710) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x02A0 (0x02A8 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0090) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0098(0x0210) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03D8 (0x03E0 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x02A8) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x130];                                     // 0x02B0(0x0130) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x0420 (0x0428 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03E0) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E8(0x0040) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0240 (0x0248 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0068) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0070(0x01D8) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x0868 (0x0870 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x868];                                     // 0x0008(0x0868) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x0510 (0x0518 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x510];                                     // 0x0008(0x0510) MISSED OFFSET
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0200 (0x0208 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0068) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x198];                                     // 0x0070(0x0198) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x0308 (0x0310 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x308];                                     // 0x0008(0x0308) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0040 - 0x0020)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0048 - 0x0040)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.ControllerEvent
// 0x0020 (0x0040 - 0x0020)
struct FControllerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0020(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0028 - 0x0020)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0050 - 0x0020)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0020(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFont
// 0x0028
struct FCompositeFont
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0028
struct FCompositeSubFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0010(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FFontData                                   Font;                                                     // 0x0008(0x0020)
};

// ScriptStruct SlateCore.WindowStyle
// 0x10C0 (0x10C8 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x10C0];                                    // 0x0008(0x10C0) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0240 (0x0248 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x240];                                     // 0x0008(0x0240) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0120 (0x0128 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0008(0x0120) MISSED OFFSET
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06D8 (0x06E0 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x6D8];                                     // 0x0008(0x06D8) MISSED OFFSET
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0C10 (0x0C18 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0xC10];                                     // 0x0008(0x0C10) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0120 (0x0128 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x120];                                     // 0x0008(0x0120) MISSED OFFSET
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x0510 (0x0518 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x510];                                     // 0x0008(0x0510) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0248 (0x0250 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x248];                                     // 0x0008(0x0248) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x0520 (0x0528 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0250) (Edit)
	unsigned char                                      UnknownData00[0x2D0];                                     // 0x0258(0x02D0) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0B30 (0x0B38 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0xB30];                                     // 0x0008(0x0B30) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0128 (0x0130 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x128];                                     // 0x0008(0x0128) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x01B0 (0x01B8 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x1B0];                                     // 0x0008(0x01B0) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A78 (0x0A80 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x0870) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x208];                                     // 0x0878(0x0208) MISSED OFFSET
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x04C0 (0x04C8 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x4C0];                                     // 0x0008(0x04C0) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x05D8 (0x05E0 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5D8];                                     // 0x0008(0x05D8) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0098 (0x00A0 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0090) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0028 - 0x0020)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
