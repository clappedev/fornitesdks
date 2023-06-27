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

// Function PerksList.PerksList_C.ResetVariables
// (Public, BlueprintCallable, BlueprintEvent)

void UPerksList_C::ResetVariables()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.ResetVariables");

	UPerksList_C_ResetVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPerksList_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.Construct");

	UPerksList_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerkTier
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerkTier         FortPerkTier                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortPerkTierWidget_NUI* PerkTierWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPerksList_C::OnGeneratePerkTier(const struct FFortUIPerkTier& FortPerkTier, class UFortPerkTierWidget_NUI* PerkTierWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnGeneratePerkTier");

	UPerksList_C_OnGeneratePerkTier_Params params;
	params.FortPerkTier = FortPerkTier;
	params.PerkTierWidget = PerkTierWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnGeneratePerk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FFortUIPerk             FortPerk                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortPerkWidget_NUI*     PerkWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPerksList_C::OnGeneratePerk(const struct FFortUIPerk& FortPerk, class UFortPerkWidget_NUI* PerkWidget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnGeneratePerk");

	UPerksList_C_OnGeneratePerk_Params params;
	params.FortPerk = FortPerk;
	params.PerkWidget = PerkWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnHeroChanged
// (Event, Public, BlueprintEvent)

void UPerksList_C::OnHeroChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnHeroChanged");

	UPerksList_C_OnHeroChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.OnStateChanged
// (Event, Public, BlueprintEvent)

void UPerksList_C::OnStateChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.OnStateChanged");

	UPerksList_C_OnStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PerksList.PerksList_C.ExecuteUbergraph_PerksList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPerksList_C::ExecuteUbergraph_PerksList(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PerksList.PerksList_C.ExecuteUbergraph_PerksList");

	UPerksList_C_ExecuteUbergraph_PerksList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
