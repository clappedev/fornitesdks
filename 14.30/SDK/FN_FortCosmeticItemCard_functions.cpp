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

// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortColorPalette       RarityColors                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UFortCosmeticItemCard_C::HandleUpdateRarity(const struct FFortColorPalette& RarityColors)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateRarity");

	UFortCosmeticItemCard_C_HandleUpdateRarity_Params params;
	params.RarityColors = RarityColors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBorderAnimated              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsHero                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsReward                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsShuffleItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::HandleUpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool IsHero, bool IsReward, bool IsShuffleItem)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.HandleUpdateVisuals");

	UFortCosmeticItemCard_C_HandleUpdateVisuals_Params params;
	params.bIsItem = bIsItem;
	params.bIsBorderAnimated = bIsBorderAnimated;
	params.IsHero = IsHero;
	params.IsReward = IsReward;
	params.IsShuffleItem = IsShuffleItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsItem                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsBorderAnimated              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsHero                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bReward                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsShuffleItem                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::UpdateVisuals(bool bIsItem, bool bIsBorderAnimated, bool bIsHero, bool bReward, bool bIsShuffleItem)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.UpdateVisuals");

	UFortCosmeticItemCard_C_UpdateVisuals_Params params;
	params.bIsItem = bIsItem;
	params.bIsBorderAnimated = bIsBorderAnimated;
	params.bIsHero = bIsHero;
	params.bReward = bReward;
	params.bIsShuffleItem = bIsShuffleItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bEnhanced                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::OnUpdateEnhanced(bool bEnhanced)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateEnhanced");

	UFortCosmeticItemCard_C_OnUpdateEnhanced_Params params;
	params.bEnhanced = bEnhanced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::OnUpdateItemCardMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardMaterial");

	UFortCosmeticItemCard_C_OnUpdateItemCardMaterial_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*              Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::OnUpdateItemCardIcon(class UTexture2D* Icon)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateItemCardIcon");

	UFortCosmeticItemCard_C_OnUpdateItemCardIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortColorPalette       ColorPalette                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFortCosmeticItemCard_C::OnUpdateSeriesOrRarityColors(const struct FFortColorPalette& ColorPalette)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUpdateSeriesOrRarityColors");

	UFortCosmeticItemCard_C_OnUpdateSeriesOrRarityColors_Params params;
	params.ColorPalette = ColorPalette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          InCardWidth                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::OnSizeChanged(float InCardWidth)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnSizeChanged");

	UFortCosmeticItemCard_C_OnSizeChanged_Params params;
	params.InCardWidth = InCardWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover
// (Event, Protected, BlueprintEvent)

void UFortCosmeticItemCard_C::OnHover()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnHover");

	UFortCosmeticItemCard_C_OnHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover
// (Event, Protected, BlueprintEvent)

void UFortCosmeticItemCard_C::OnUnhover()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.OnUnhover");

	UFortCosmeticItemCard_C_OnUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortCosmeticItemCard_C::ExecuteUbergraph_FortCosmeticItemCard(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FortCosmeticItemCard.FortCosmeticItemCard_C.ExecuteUbergraph_FortCosmeticItemCard");

	UFortCosmeticItemCard_C_ExecuteUbergraph_FortCosmeticItemCard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
