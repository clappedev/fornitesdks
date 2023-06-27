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

// Function Creative_Background_Widget.Creative_Background_Widget_C.SetShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EBillboardshadowDirection> Shadow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ShadowScale                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetShadow(TEnumAsByte<EBillboardshadowDirection> Shadow, float ShadowScale)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetShadow");

	UCreative_Background_Widget_C_SetShadow_Params params;
	params.Shadow = Shadow;
	params.ShadowScale = ShadowScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TextFont                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OutlineStrength                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetTextFont(int TextFont, int OutlineStrength)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextFont");

	UCreative_Background_Widget_C_SetTextFont_Params params;
	params.TextFont = TextFont;
	params.OutlineStrength = OutlineStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetTextColor(const struct FLinearColor& TextColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor");

	UCreative_Background_Widget_C_SetTextColor_Params params;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ETextJustify>      Alignment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetTextAlignment(TEnumAsByte<ETextJustify> Alignment)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment");

	UCreative_Background_Widget_C_SetTextAlignment_Params params;
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetTextScale(int FontSize)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale");

	UCreative_Background_Widget_C_SetTextScale_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreative_Background_Widget_C::SetBackgroundColor(const struct FLinearColor& Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor");

	UCreative_Background_Widget_C_SetBackgroundColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Creative_Background_Widget.Creative_Background_Widget_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UCreative_Background_Widget_C::SetText(const struct FString& Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Creative_Background_Widget.Creative_Background_Widget_C.SetText");

	UCreative_Background_Widget_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
