#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0720 (0x0728 - 0x0008)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HighlightBrush;                                           // 0x0008(0x0078) (Edit, BlueprintVisible)
	struct FButtonStyle                                LeftButtonStyle;                                          // 0x0080(0x0238) (Edit, BlueprintVisible)
	struct FButtonStyle                                CenterButtonStyle;                                        // 0x02B8(0x0238) (Edit, BlueprintVisible)
	struct FButtonStyle                                RightButtonStyle;                                         // 0x04F0(0x0238) (Edit, BlueprintVisible)
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x0328 (0x0330 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                InnerButtonStyle;                                         // 0x0008(0x0238)
	struct FSlateBrush                                 NavigationButtonLeftImage;                                // 0x0240(0x0078)
	struct FSlateBrush                                 NavigationButtonRightImage;                               // 0x02B8(0x0078)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
