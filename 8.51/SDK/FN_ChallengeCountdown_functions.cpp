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

// Function ChallengeCountdown.ChallengeCountdown_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeCountdown_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCountdown.ChallengeCountdown_C.PreConstruct");

	UChallengeCountdown_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCountdown.ChallengeCountdown_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeCountdown_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCountdown.ChallengeCountdown_C.Construct");

	UChallengeCountdown_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeCountdown.ChallengeCountdown_C.ExecuteUbergraph_ChallengeCountdown
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeCountdown_C::ExecuteUbergraph_ChallengeCountdown(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeCountdown.ChallengeCountdown_C.ExecuteUbergraph_ChallengeCountdown");

	UChallengeCountdown_C_ExecuteUbergraph_ChallengeCountdown_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
