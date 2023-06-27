// Fortnite (8.51) SDK
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

// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentPayoutThresholdEntry_C::OnAddedToFocusPath(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnAddedToFocusPath");

	UTournamentPayoutThresholdEntry_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTournamentPayoutThresholdEntry_C::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnRemovedFromFocusPath");

	UTournamentPayoutThresholdEntry_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            EntryIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentPayoutThresholdEntry_C::OnPayoutDataSet(int EntryIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.OnPayoutDataSet");

	UTournamentPayoutThresholdEntry_C_OnPayoutDataSet_Params params;
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentPayoutThresholdEntry_C::ExecuteUbergraph_TournamentPayoutThresholdEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentPayoutThresholdEntry.TournamentPayoutThresholdEntry_C.ExecuteUbergraph_TournamentPayoutThresholdEntry");

	UTournamentPayoutThresholdEntry_C_ExecuteUbergraph_TournamentPayoutThresholdEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
