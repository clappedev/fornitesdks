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

// Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimalSquadMember_C::SetEmptyVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals");

	UMinimalSquadMember_C_SetEmptyVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimalSquadMember_C::SetSitOutVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals");

	UMinimalSquadMember_C_SetSitOutVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimalSquadMember_C::SetNotReadyVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals");

	UMinimalSquadMember_C_SetNotReadyVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimalSquadMember_C::SetReadyVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals");

	UMinimalSquadMember_C_SetReadyVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EGameReadiness                 ReadyStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalSquadMember_C::OnMemberGameReadinessChanged(EGameReadiness ReadyStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged");

	UMinimalSquadMember_C_OnMemberGameReadinessChanged_Params params;
	params.ReadyStatus = ReadyStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.OnTeamMemberEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bHasValidMember                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalSquadMember_C::OnTeamMemberEstablished(bool bHasValidMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.OnTeamMemberEstablished");

	UMinimalSquadMember_C_OnTeamMemberEstablished_Params params;
	params.bHasValidMember = bHasValidMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimalSquadMember_C::ExecuteUbergraph_MinimalSquadMember(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember");

	UMinimalSquadMember_C_ExecuteUbergraph_MinimalSquadMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
