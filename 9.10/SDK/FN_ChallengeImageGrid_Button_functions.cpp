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

// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.OnChallengeSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeImageGrid_Button_C::OnChallengeSet(bool bIsComplete, bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.OnChallengeSet");

	UChallengeImageGrid_Button_C_OnChallengeSet_Params params;
	params.bIsComplete = bIsComplete;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UChallengeImageGrid_Button_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnHovered");

	UChallengeImageGrid_Button_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UChallengeImageGrid_Button_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.BP_OnUnhovered");

	UChallengeImageGrid_Button_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromLockedToOwnedState
// (Event, Public, BlueprintEvent)

void UChallengeImageGrid_Button_C::TransitionFromLockedToOwnedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromLockedToOwnedState");

	UChallengeImageGrid_Button_C_TransitionFromLockedToOwnedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromOwnedToCompletedState
// (Event, Public, BlueprintEvent)

void UChallengeImageGrid_Button_C::TransitionFromOwnedToCompletedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.TransitionFromOwnedToCompletedState");

	UChallengeImageGrid_Button_C_TransitionFromOwnedToCompletedState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeImageGrid_Button_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.Construct");

	UChallengeImageGrid_Button_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupLockedToOwnState
// (Event, Public, BlueprintEvent)

void UChallengeImageGrid_Button_C::SetupLockedToOwnState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupLockedToOwnState");

	UChallengeImageGrid_Button_C_SetupLockedToOwnState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupGridLocationText
// (BlueprintCallable, BlueprintEvent)

void UChallengeImageGrid_Button_C::SetupGridLocationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.SetupGridLocationText");

	UChallengeImageGrid_Button_C_SetupGridLocationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.ExecuteUbergraph_ChallengeImageGrid_Button
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeImageGrid_Button_C::ExecuteUbergraph_ChallengeImageGrid_Button(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeImageGrid_Button.ChallengeImageGrid_Button_C.ExecuteUbergraph_ChallengeImageGrid_Button");

	UChallengeImageGrid_Button_C_ExecuteUbergraph_ChallengeImageGrid_Button_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
