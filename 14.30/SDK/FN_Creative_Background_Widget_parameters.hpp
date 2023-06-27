#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetShadow
struct UCreative_Background_Widget_C_SetShadow_Params
{
	TEnumAsByte<EBillboardshadowDirection>             Shadow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ShadowScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextFont
struct UCreative_Background_Widget_C_SetTextFont_Params
{
	int                                                TextFont;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutlineStrength;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
struct UCreative_Background_Widget_C_SetTextColor_Params
{
	struct FLinearColor                                TextColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
struct UCreative_Background_Widget_C_SetTextAlignment_Params
{
	TEnumAsByte<ETextJustify>                          Alignment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
struct UCreative_Background_Widget_C_SetTextScale_Params
{
	int                                                FontSize;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
struct UCreative_Background_Widget_C_SetBackgroundColor_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
struct UCreative_Background_Widget_C_SetText_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
