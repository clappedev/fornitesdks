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

// Function MinimalChallengeEntry.MinimalChallengeEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsInProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalChallengeEntry_C::OnChallengeInfoSet(bool bIsInProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalChallengeEntry.MinimalChallengeEntry_C.OnChallengeInfoSet");

	UMinimalChallengeEntry_C_OnChallengeInfoSet_Params params;
	params.bIsInProgress = bIsInProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalChallengeEntry.MinimalChallengeEntry_C.ExecuteUbergraph_MinimalChallengeEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalChallengeEntry_C::ExecuteUbergraph_MinimalChallengeEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalChallengeEntry.MinimalChallengeEntry_C.ExecuteUbergraph_MinimalChallengeEntry");

	UMinimalChallengeEntry_C_ExecuteUbergraph_MinimalChallengeEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
