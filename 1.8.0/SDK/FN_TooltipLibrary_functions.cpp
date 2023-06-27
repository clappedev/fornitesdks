// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owner                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Header                         (Parm)
// struct FText                   CommanderXP                    (Parm)
// struct FText                   BoostXP                        (Parm)
// struct FText                   RestXP                         (Parm)
// struct FText                   Body                           (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UCommonUserWidget*       Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_CreateXPTooltip(class APlayerController* Owner, const struct FText& Header, const struct FText& CommanderXP, const struct FText& BoostXP, const struct FText& RestXP, const struct FText& Body, class UObject* __WorldContext, class UCommonUserWidget** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.CreateXPTooltip");

	UTooltipLibrary_C_CreateXPTooltip_Params params;
	params.Owner = Owner;
	params.Header = Header;
	params.CommanderXP = CommanderXP;
	params.BoostXP = BoostXP;
	params.RestXP = RestXP;
	params.Body = Body;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHeroCoreStat           Data                           (Parm)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Core_Stat_Tooltip(class APlayerController* Owning_Player, const struct FHeroCoreStat& Data, float Value, class UObject* __WorldContext, class UUserWidget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Core Stat Tooltip");

	UTooltipLibrary_C_Create_Core_Stat_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Data = Data;
	params.Value = Value;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FText>           Body_Text                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Icon_Brush                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Basic_Multi_Line_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, TArray<struct FText>* Body_Text, class UUserWidget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Basic Multi Line Tooltip");

	UTooltipLibrary_C_Create_Basic_Multi_Line_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Body_Text != nullptr)
		*Body_Text = params.Body_Text;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Header_Icon                    (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               ComparedItem                   (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Compare_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, class UFortItem* ComparedItem, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Compare Item Tooltip");

	UTooltipLibrary_C_Create_Compare_Item_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Header_Icon = Header_Icon;
	params.Item = Item;
	params.ComparedItem = ComparedItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Header_Icon                    (Parm, ZeroConstructor, IsPlainOldData)
// class UFortItem*               Item                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            OverrideQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Item_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Header_Icon, class UFortItem* Item, int OverrideQuantity, class UObject* __WorldContext, class UWidget** Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Item Tooltip");

	UTooltipLibrary_C_Create_Item_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Header_Icon = Header_Icon;
	params.Item = Item;
	params.OverrideQuantity = OverrideQuantity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Tooltip_Text                   (Parm)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Set_Enabled_And_Tooltip_Text(class UWidget* Widget, bool Enabled, const struct FText& Tooltip_Text, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Set Enabled And Tooltip Text");

	UTooltipLibrary_C_Set_Enabled_And_Tooltip_Text_Params params;
	params.Widget = Widget;
	params.Enabled = Enabled;
	params.Tooltip_Text = Tooltip_Text;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Icon_Brush                     (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Custom_Tooltip(class APlayerController* Owning_Player, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UUserWidget* Widget, class UObject* __WorldContext, class UUserWidget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Custom Tooltip");

	UTooltipLibrary_C_Create_Custom_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Owning_Player                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Body_Text                      (Parm)
// struct FText                   Header_Text                    (Parm)
// class USlateBrushAsset*        Icon_Brush                     (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTooltipLibrary_C::STATIC_Create_Basic_Tooltip(class APlayerController* Owning_Player, const struct FText& Body_Text, const struct FText& Header_Text, class USlateBrushAsset* Icon_Brush, class UObject* __WorldContext, class UUserWidget** Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function TooltipLibrary.TooltipLibrary_C.Create Basic Tooltip");

	UTooltipLibrary_C_Create_Basic_Tooltip_Params params;
	params.Owning_Player = Owning_Player;
	params.Body_Text = Body_Text;
	params.Header_Text = Header_Text;
	params.Icon_Brush = Icon_Brush;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
