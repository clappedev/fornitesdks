// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.IsValidHeroSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerksDetailWidget_C::IsValidHeroSlot(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.IsValidHeroSlot");

	UHeroLoadoutPerksDetailWidget_C_IsValidHeroSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateCommanderSlotPerkVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::UpdateCommanderSlotPerkVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateCommanderSlotPerkVisibility");

	UHeroLoadoutPerksDetailWidget_C_UpdateCommanderSlotPerkVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateHeroLoadoutSlotWarning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::UpdateHeroLoadoutSlotWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateHeroLoadoutSlotWarning");

	UHeroLoadoutPerksDetailWidget_C_UpdateHeroLoadoutSlotWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateRootVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::UpdateRootVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.UpdateRootVisibility");

	UHeroLoadoutPerksDetailWidget_C_UpdateRootVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandleDifferentLoadoutSlotContextSet
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::HandleDifferentLoadoutSlotContextSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandleDifferentLoadoutSlotContextSet");

	UHeroLoadoutPerksDetailWidget_C_HandleDifferentLoadoutSlotContextSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ClearLoadoutSlotContext
// (Public, BlueprintCallable, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::ClearLoadoutSlotContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ClearLoadoutSlotContext");

	UHeroLoadoutPerksDetailWidget_C_ClearLoadoutSlotContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.SetLoadoutSlotContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortCampaignHeroLoadoutItem* HeroLoadout                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   SlotName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerksDetailWidget_C::SetLoadoutSlotContext(class UFortCampaignHeroLoadoutItem* HeroLoadout, struct FName SlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.SetLoadoutSlotContext");

	UHeroLoadoutPerksDetailWidget_C_SetLoadoutSlotContext_Params params;
	params.HeroLoadout = HeroLoadout;
	params.SlotName = SlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandlePostDifferentItemToDetailSet
// (Event, Protected, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::HandlePostDifferentItemToDetailSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.HandlePostDifferentItemToDetailSet");

	UHeroLoadoutPerksDetailWidget_C_HandlePostDifferentItemToDetailSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHeroLoadoutPerksDetailWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.Construct");

	UHeroLoadoutPerksDetailWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerksDetailWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.PreConstruct");

	UHeroLoadoutPerksDetailWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ExecuteUbergraph_HeroLoadoutPerksDetailWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHeroLoadoutPerksDetailWidget_C::ExecuteUbergraph_HeroLoadoutPerksDetailWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HeroLoadoutPerksDetailWidget.HeroLoadoutPerksDetailWidget_C.ExecuteUbergraph_HeroLoadoutPerksDetailWidget");

	UHeroLoadoutPerksDetailWidget_C_ExecuteUbergraph_HeroLoadoutPerksDetailWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
