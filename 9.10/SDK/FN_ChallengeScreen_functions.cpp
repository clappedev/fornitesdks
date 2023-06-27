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

// Function ChallengeScreen.ChallengeScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UChallengeScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeScreen.ChallengeScreen_C.OnActivated");

	UChallengeScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeScreen.ChallengeScreen_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UChallengeScreen_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeScreen.ChallengeScreen_C.OnDeactivated");

	UChallengeScreen_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeScreen_C::ExecuteUbergraph_ChallengeScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeScreen.ChallengeScreen_C.ExecuteUbergraph_ChallengeScreen");

	UChallengeScreen_C_ExecuteUbergraph_ChallengeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
