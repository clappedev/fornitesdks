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

// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)

void UChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnChallengeInfoSet");

	UChallengeInfoPanelEntry_C_OnChallengeInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)

void UChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge");

	UChallengeInfoPanelEntry_C_OnLocalPlayerMissingAssistedChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.ExecuteUbergraph_ChallengeInfoPanelEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeInfoPanelEntry_C::ExecuteUbergraph_ChallengeInfoPanelEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeInfoPanelEntry.ChallengeInfoPanelEntry_C.ExecuteUbergraph_ChallengeInfoPanelEntry");

	UChallengeInfoPanelEntry_C_ExecuteUbergraph_ChallengeInfoPanelEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
