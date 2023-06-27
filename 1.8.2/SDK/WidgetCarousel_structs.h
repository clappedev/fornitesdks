#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
// 0x0888 (0x0890 - 0x0008)
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x888];                                     // 0x0008(0x0888) MISSED OFFSET
};

// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
// 0x03C8 (0x03D0 - 0x0008)
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x3C8];                                     // 0x0008(0x03C8) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
