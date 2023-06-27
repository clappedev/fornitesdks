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

// Function ChallengeTile_Event.ChallengeTile_Event_C.SetDynamicColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  EventDynamicMaterialTarget     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortChallengeSetStyle  FortChallengeSetStyle          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeTile_Event_C::SetDynamicColors(class UImage* EventDynamicMaterialTarget, struct FFortChallengeSetStyle FortChallengeSetStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.SetDynamicColors");

	UChallengeTile_Event_C_SetDynamicColors_Params params;
	params.EventDynamicMaterialTarget = EventDynamicMaterialTarget;
	params.FortChallengeSetStyle = FortChallengeSetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Event_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.OnChallengeSetEstablished");

	UChallengeTile_Event_C_OnChallengeSetEstablished_Params params;
	params.DisplayStyle = DisplayStyle;
	params.bIsComplete = bIsComplete;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Event_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnHovered");

	UChallengeTile_Event_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Event_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.BP_OnUnhovered");

	UChallengeTile_Event_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.OnContainsPartyAssistedChallengeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasPartyAssistedChallenge     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Event_C::OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.OnContainsPartyAssistedChallengeChanged");

	UChallengeTile_Event_C_OnContainsPartyAssistedChallengeChanged_Params params;
	params.bHasPartyAssistedChallenge = bHasPartyAssistedChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Event.ChallengeTile_Event_C.ExecuteUbergraph_ChallengeTile_Event
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Event_C::ExecuteUbergraph_ChallengeTile_Event(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Event.ChallengeTile_Event_C.ExecuteUbergraph_ChallengeTile_Event");

	UChallengeTile_Event_C_ExecuteUbergraph_ChallengeTile_Event_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
