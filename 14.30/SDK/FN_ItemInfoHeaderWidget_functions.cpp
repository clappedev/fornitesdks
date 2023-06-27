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

// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UFortItemDefinition*     ItemDef                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UItemInfoHeaderWidget_C::GetAlternateNameForItem(class UFortItemDefinition* ItemDef)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.GetAlternateNameForItem");

	UItemInfoHeaderWidget_C_GetAlternateNameForItem_Params params;
	params.ItemDef = ItemDef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasValidDescription            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::HasValidItemDefinition(bool* HasValidDescription)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.HasValidItemDefinition");

	UItemInfoHeaderWidget_C_HasValidItemDefinition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidDescription != nullptr)
		*HasValidDescription = params.HasValidDescription;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortColorPalette       Colors                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemInfoHeaderWidget_C::UpdateColorRarity(const struct FFortColorPalette& Colors)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateColorRarity");

	UItemInfoHeaderWidget_C_UpdateColorRarity_Params params;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   ItemType                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bUseAlternateHeaderBG          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortRarity                    Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::OverrideHeaderAndDescription(const struct FText& Header, const struct FText& Description, const struct FText& ItemType, bool bUseAlternateHeaderBG, EFortRarity Rarity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OverrideHeaderAndDescription");

	UItemInfoHeaderWidget_C_OverrideHeaderAndDescription_Params params;
	params.Header = Header;
	params.Description = Description;
	params.ItemType = ItemType;
	params.bUseAlternateHeaderBG = bUseAlternateHeaderBG;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateDetailVisibility()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateDetailVisibility");

	UItemInfoHeaderWidget_C_UpdateDetailVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::SetScrollWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetScrollWidget");

	UItemInfoHeaderWidget_C_SetScrollWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateLocked()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateLocked");

	UItemInfoHeaderWidget_C_UpdateLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowLocked               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   LockReason                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UItemInfoHeaderWidget_C::SetLocked(bool ShouldShowLocked, const struct FText& LockReason)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetLocked");

	UItemInfoHeaderWidget_C_SetLocked_Params params;
	params.ShouldShowLocked = ShouldShowLocked;
	params.LockReason = LockReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowRemainingQuantity    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewRemainingQuantity           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::SetRemainingQuantity(bool ShouldShowRemainingQuantity, int NewRemainingQuantity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.SetRemainingQuantity");

	UItemInfoHeaderWidget_C_SetRemainingQuantity_Params params;
	params.ShouldShowRemainingQuantity = ShouldShowRemainingQuantity;
	params.NewRemainingQuantity = NewRemainingQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateRemainingQuantity()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateRemainingQuantity");

	UItemInfoHeaderWidget_C_UpdateRemainingQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard
// (Private, BlueprintCallable, BlueprintEvent)

void UItemInfoHeaderWidget_C::UpdateCard()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateCard");

	UItemInfoHeaderWidget_C_UpdateCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldShowCard                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortItemCardSize              CardSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowDetails              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldShowDescription          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::Setup(bool ShouldShowCard, EFortItemCardSize CardSize, bool ShouldShowDetails, bool ShouldShowDescription)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Setup");

	UItemInfoHeaderWidget_C_Setup_Params params;
	params.ShouldShowCard = ShouldShowCard;
	params.CardSize = CardSize;
	params.ShouldShowDetails = ShouldShowDetails;
	params.ShouldShowDescription = ShouldShowDescription;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::UpdateNameText(class UFortItemDefinition* ItemDefinition, int Quantity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.UpdateNameText");

	UItemInfoHeaderWidget_C_UpdateNameText_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItemDefinition*     ItemDefinition                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::Update(class UFortItemDefinition* ItemDefinition, int Quantity)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.Update");

	UItemInfoHeaderWidget_C_Update_Params params;
	params.ItemDefinition = ItemDefinition;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged
// (Event, Protected, BlueprintEvent)

void UItemInfoHeaderWidget_C::OnItemDefinitionChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.OnItemDefinitionChanged");

	UItemInfoHeaderWidget_C_OnItemDefinitionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemInfoHeaderWidget_C::ExecuteUbergraph_ItemInfoHeaderWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ItemInfoHeaderWidget.ItemInfoHeaderWidget_C.ExecuteUbergraph_ItemInfoHeaderWidget");

	UItemInfoHeaderWidget_C_ExecuteUbergraph_ItemInfoHeaderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
