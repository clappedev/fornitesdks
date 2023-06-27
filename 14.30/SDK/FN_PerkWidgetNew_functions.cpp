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

// Function PerkWidgetNew.PerkWidgetNew_C.SetDescriptionWraptTextAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          WrapTextAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::SetDescriptionWraptTextAt(float WrapTextAt)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.SetDescriptionWraptTextAt");

	UPerkWidgetNew_C_SetDescriptionWraptTextAt_Params params;
	params.WrapTextAt = WrapTextAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::UpdatePerk()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.UpdatePerk");

	UPerkWidgetNew_C_UpdatePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPerkWidgetNew_C::Get_OverlayAbilityPerk_ToolTipWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.Get_OverlayAbilityPerk_ToolTipWidget");

	UPerkWidgetNew_C_Get_OverlayAbilityPerk_ToolTipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIncludeName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIncludeDescription            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLegacyFixedSizeIcons       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFortBrushSize>    IconSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseLargeFormatName            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortUIPerk             Perk                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ShowMouseTooltips              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInShowBadges                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WrapTextAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::InitializeSettings(bool bIncludeName, bool bIncludeDescription, bool bUseLegacyFixedSizeIcons, TEnumAsByte<EFortBrushSize> IconSize, bool bUseLargeFormatName, const struct FFortUIPerk& Perk, bool ShowMouseTooltips, bool bInShowBadges, float WrapTextAt)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.InitializeSettings");

	UPerkWidgetNew_C_InitializeSettings_Params params;
	params.bIncludeName = bIncludeName;
	params.bIncludeDescription = bIncludeDescription;
	params.bUseLegacyFixedSizeIcons = bUseLegacyFixedSizeIcons;
	params.IconSize = IconSize;
	params.bUseLargeFormatName = bUseLargeFormatName;
	params.Perk = Perk;
	params.ShowMouseTooltips = ShowMouseTooltips;
	params.bInShowBadges = bInShowBadges;
	params.WrapTextAt = WrapTextAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::HighlightBadge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.HighlightBadge");

	UPerkWidgetNew_C_HighlightBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTooltipStat            TooltipStat                    (Parm, OutParm)

void UPerkWidgetNew_C::GetPerkStat(struct FTooltipStat* TooltipStat)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.GetPerkStat");

	UPerkWidgetNew_C_GetPerkStat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TooltipStat != nullptr)
		*TooltipStat = params.TooltipStat;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage
// (Public, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::ShowTierImage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.ShowTierImage");

	UPerkWidgetNew_C_ShowTierImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::SetupBadge()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.SetupBadge");

	UPerkWidgetNew_C_SetupBadge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeHeroBonusIcon()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.InitializeHeroBonusIcon");

	UPerkWidgetNew_C_InitializeHeroBonusIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.InitializeText");

	UPerkWidgetNew_C_InitializeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::ShouldFadePerk(bool* Result)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.ShouldFadePerk");

	UPerkWidgetNew_C_ShouldFadePerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Color                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::GetHighlightColor(struct FLinearColor* Color)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.GetHighlightColor");

	UPerkWidgetNew_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             SlateBrush                     (Parm, OutParm)

void UPerkWidgetNew_C::GetTierAbilityBrush(struct FSlateBrush* SlateBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.GetTierAbilityBrush");

	UPerkWidgetNew_C_GetTierAbilityBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlateBrush != nullptr)
		*SlateBrush = params.SlateBrush;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeAbilityPerk()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.InitializeAbilityPerk");

	UPerkWidgetNew_C_InitializeAbilityPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPerkWidgetNew_C::InitializeBasicPerk()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.InitializeBasicPerk");

	UPerkWidgetNew_C_InitializeBasicPerk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.PreConstruct");

	UPerkWidgetNew_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPerkWidgetNew_C::OnCombinedTooltipDescriptionReady(const struct FText& Description)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.OnCombinedTooltipDescriptionReady");

	UPerkWidgetNew_C_OnCombinedTooltipDescriptionReady_Params params;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerkWidgetNew_C::ExecuteUbergraph_PerkWidgetNew(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerkWidgetNew.PerkWidgetNew_C.ExecuteUbergraph_PerkWidgetNew");

	UPerkWidgetNew_C_ExecuteUbergraph_PerkWidgetNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
