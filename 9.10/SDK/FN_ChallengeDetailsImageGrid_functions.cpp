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

// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnLockedToOwnedTransitions
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AdditionalTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeDetailsImageGrid_C::OnLockedToOwnedTransitions(int Count, float TimeOffset, float AdditionalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnLockedToOwnedTransitions");

	UChallengeDetailsImageGrid_C_OnLockedToOwnedTransitions_Params params;
	params.Count = Count;
	params.TimeOffset = TimeOffset;
	params.AdditionalTime = AdditionalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Tick
// (BlueprintCallable, BlueprintEvent)

void UChallengeDetailsImageGrid_C::Rollout_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Tick");

	UChallengeDetailsImageGrid_C_Rollout_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Start Rollout Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeDetailsImageGrid_C::Start_Rollout_Tick(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Start Rollout Tick");

	UChallengeDetailsImageGrid_C_Start_Rollout_Tick_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Stop Rollout Tick
// (BlueprintCallable, BlueprintEvent)

void UChallengeDetailsImageGrid_C::Stop_Rollout_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Stop Rollout Tick");

	UChallengeDetailsImageGrid_C_Stop_Rollout_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeDetailsImageGrid_C::OnFocusLost(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnFocusLost");

	UChallengeDetailsImageGrid_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent             InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeDetailsImageGrid_C::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnRemovedFromFocusPath");

	UChallengeDetailsImageGrid_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnOwnedToCompleteTransitions
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AdditionalTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeDetailsImageGrid_C::OnOwnedToCompleteTransitions(int Count, float TimeOffset, float AdditionalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.OnOwnedToCompleteTransitions");

	UChallengeDetailsImageGrid_C_OnOwnedToCompleteTransitions_Params params;
	params.Count = Count;
	params.TimeOffset = TimeOffset;
	params.AdditionalTime = AdditionalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Sound Failsafe
// (BlueprintCallable, BlueprintEvent)

void UChallengeDetailsImageGrid_C::Rollout_Sound_Failsafe()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.Rollout Sound Failsafe");

	UChallengeDetailsImageGrid_C_Rollout_Sound_Failsafe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.ExecuteUbergraph_ChallengeDetailsImageGrid
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeDetailsImageGrid_C::ExecuteUbergraph_ChallengeDetailsImageGrid(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeDetailsImageGrid.ChallengeDetailsImageGrid_C.ExecuteUbergraph_ChallengeDetailsImageGrid");

	UChallengeDetailsImageGrid_C_ExecuteUbergraph_ChallengeDetailsImageGrid_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
