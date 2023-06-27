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

// Function ChallengeTile_Daily.ChallengeTile_Daily_C.SetDynamicColors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  WeeklyDynamicMaterialTarget    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FFortChallengeSetStyle  FortChallengeSetStyle          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeTile_Daily_C::SetDynamicColors(class UImage* WeeklyDynamicMaterialTarget, struct FFortChallengeSetStyle FortChallengeSetStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.SetDynamicColors");

	UChallengeTile_Daily_C_SetDynamicColors_Params params;
	params.WeeklyDynamicMaterialTarget = WeeklyDynamicMaterialTarget;
	params.FortChallengeSetStyle = FortChallengeSetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnChallengeSetEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortChallengeSetStyle  DisplayStyle                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bIsComplete                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsLocked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Daily_C::OnChallengeSetEstablished(struct FFortChallengeSetStyle DisplayStyle, bool bIsComplete, bool bIsLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnChallengeSetEstablished");

	UChallengeTile_Daily_C_OnChallengeSetEstablished_Params params;
	params.DisplayStyle = DisplayStyle;
	params.bIsComplete = bIsComplete;
	params.bIsLocked = bIsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Daily_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnHovered");

	UChallengeTile_Daily_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UChallengeTile_Daily_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.BP_OnUnhovered");

	UChallengeTile_Daily_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnContainsPartyAssistedChallengeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasPartyAssistedChallenge     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Daily_C::OnContainsPartyAssistedChallengeChanged(bool bHasPartyAssistedChallenge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.OnContainsPartyAssistedChallengeChanged");

	UChallengeTile_Daily_C_OnContainsPartyAssistedChallengeChanged_Params params;
	params.bHasPartyAssistedChallenge = bHasPartyAssistedChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChallengeTile_Daily.ChallengeTile_Daily_C.ExecuteUbergraph_ChallengeTile_Daily
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallengeTile_Daily_C::ExecuteUbergraph_ChallengeTile_Daily(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChallengeTile_Daily.ChallengeTile_Daily_C.ExecuteUbergraph_ChallengeTile_Daily");

	UChallengeTile_Daily_C_ExecuteUbergraph_ChallengeTile_Daily_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
