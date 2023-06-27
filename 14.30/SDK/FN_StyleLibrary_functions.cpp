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

// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Homebase Rating
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            HomeBaseRating                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DifficultyLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DifficultyColor                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Conning_Color_From_Homebase_Rating(int HomeBaseRating, int DifficultyLevel, class UObject* __WorldContext, struct FLinearColor* DifficultyColor)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Conning Color From Homebase Rating");

	UStyleLibrary_C_Get_Conning_Color_From_Homebase_Rating_Params params;
	params.HomeBaseRating = HomeBaseRating;
	params.DifficultyLevel = DifficultyLevel;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DifficultyColor != nullptr)
		*DifficultyColor = params.DifficultyColor;
}


// Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Difficulty_Value               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Invalid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Conning_Color_For_Specific_Difficulty(int Difficulty_Value, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Invalid)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Conning Color For Specific Difficulty");

	UStyleLibrary_C_Get_Conning_Color_For_Specific_Difficulty_Params params;
	params.Difficulty_Value = Difficulty_Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = params.Difficulty_Linear_Color;
	if (Invalid != nullptr)
		*Invalid = params.Invalid;
}


// Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player_Account_Level           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Content_Difficulty_Level       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Difficulty_Linear_Color        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   ToolTipText                    (Parm, OutParm)
// int                            DifficultyValue                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Conning_Color_From_Difficulty_Value(int Player_Account_Level, float Content_Difficulty_Level, class UObject* __WorldContext, struct FLinearColor* Difficulty_Linear_Color, bool* Success, struct FText* ToolTipText, int* DifficultyValue)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Conning Color From Difficulty Value");

	UStyleLibrary_C_Get_Conning_Color_From_Difficulty_Value_Params params;
	params.Player_Account_Level = Player_Account_Level;
	params.Content_Difficulty_Level = Content_Difficulty_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Difficulty_Linear_Color != nullptr)
		*Difficulty_Linear_Color = params.Difficulty_Linear_Color;
	if (Success != nullptr)
		*Success = params.Success;
	if (ToolTipText != nullptr)
		*ToolTipText = params.ToolTipText;
	if (DifficultyValue != nullptr)
		*DifficultyValue = params.DifficultyValue;
}


// Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            StyleSheetOut                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_HarvestWeakPoint_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* StyleSheetOut)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get HarvestWeakPoint Color");

	UStyleLibrary_C_Get_HarvestWeakPoint_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StyleSheetOut != nullptr)
		*StyleSheetOut = params.StyleSheetOut;
}


// Function StyleLibrary.StyleLibrary_C.ResizeBrush
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortBrushSize>    BrushSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             BaseBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateBrush             ResizedBrush                   (Parm, OutParm)

void UStyleLibrary_C::STATIC_ResizeBrush(TEnumAsByte<EFortBrushSize> BrushSize, const struct FSlateBrush& BaseBrush, class UObject* __WorldContext, struct FSlateBrush* ResizedBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.ResizeBrush");

	UStyleLibrary_C_ResizeBrush_Params params;
	params.BrushSize = BrushSize;
	params.BaseBrush = BaseBrush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ResizedBrush != nullptr)
		*ResizedBrush = params.ResizedBrush;
}


// Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortStatValueDisplayType      Display_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortBuffState                 Buff_State                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Base                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Buff                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Base___Buff_Colors(EFortStatValueDisplayType Display_Type, EFortBuffState Buff_State, const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Base, struct FLinearColor* Buff)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Base & Buff Colors");

	UStyleLibrary_C_Get_Base___Buff_Colors_Params params;
	params.Display_Type = Display_Type;
	params.Buff_State = Buff_State;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Base != nullptr)
		*Base = params.Base;
	if (Buff != nullptr)
		*Buff = params.Buff;
}


// Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Bolt_Elemental_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Bolt Elemental Color");

	UStyleLibrary_C_Get_Bolt_Elemental_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Ice_Elemental_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Ice Elemental Color");

	UStyleLibrary_C_Get_Ice_Elemental_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Fire_Elemental_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Fire Elemental Color");

	UStyleLibrary_C_Get_Fire_Elemental_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Unique Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Unique_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Unique Color");

	UStyleLibrary_C_Get_Unique_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Item Size
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Item_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Item_Size(const struct FFortUIStylesheet& StyleSheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Item_Size)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Size");

	UStyleLibrary_C_Get_Item_Size_Params params;
	params.StyleSheet = StyleSheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item_Size != nullptr)
		*Item_Size = params.Item_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Debuff Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Debuff_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Debuff Color");

	UStyleLibrary_C_Get_Debuff_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Buff Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Buff_Color(const struct FFortUIStylesheet& StyleSheet, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Buff Color");

	UStyleLibrary_C_Get_Buff_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function StyleLibrary.StyleLibrary_C.Get Item Icon Size
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Icon_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Item_Icon_Size(const struct FFortUIStylesheet& StyleSheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Item Icon Size");

	UStyleLibrary_C_Get_Item_Icon_Size_Params params;
	params.StyleSheet = StyleSheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFortBrushSize>    Brush_Size                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Icon_Size                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Standard_Icon_Size(const struct FFortUIStylesheet& StyleSheet, TEnumAsByte<EFortBrushSize> Brush_Size, class UObject* __WorldContext, struct FVector2D* Icon_Size)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Standard Icon Size");

	UStyleLibrary_C_Get_Standard_Icon_Size_Params params;
	params.StyleSheet = StyleSheet;
	params.Brush_Size = Brush_Size;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Size != nullptr)
		*Icon_Size = params.Icon_Size;
}


// Function StyleLibrary.StyleLibrary_C.Get Theme
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFortUITheme>      Theme_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortUITheme            Theme                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Theme(const struct FFortUIStylesheet& StyleSheet, TEnumAsByte<EFortUITheme> Theme_Type, class UObject* __WorldContext, struct FFortUITheme* Theme)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme");

	UStyleLibrary_C_Get_Theme_Params params;
	params.StyleSheet = StyleSheet;
	params.Theme_Type = Theme_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Theme != nullptr)
		*Theme = params.Theme;
}


// Function StyleLibrary.StyleLibrary_C.Get Theme Color
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortUIStylesheet       StyleSheet                     (BlueprintVisible, BlueprintReadOnly, Parm)
// TEnumAsByte<EFortUITheme>      Theme_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortUIThemeColor> Color_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Theme_Color                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UStyleLibrary_C::STATIC_Get_Theme_Color(const struct FFortUIStylesheet& StyleSheet, TEnumAsByte<EFortUITheme> Theme_Type, TEnumAsByte<EFortUIThemeColor> Color_Type, class UObject* __WorldContext, struct FLinearColor* Theme_Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function StyleLibrary.StyleLibrary_C.Get Theme Color");

	UStyleLibrary_C_Get_Theme_Color_Params params;
	params.StyleSheet = StyleSheet;
	params.Theme_Type = Theme_Type;
	params.Color_Type = Color_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Theme_Color != nullptr)
		*Theme_Color = params.Theme_Color;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
