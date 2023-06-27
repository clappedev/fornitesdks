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

// Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder
// (Public, BlueprintCallable, BlueprintEvent)

void UTeamMemberBanner_C::OpenPartyFinder()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder");

	UTeamMemberBanner_C_OpenPartyFinder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hover                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberBanner_C::HandleMouseHoverVisualState(bool Hover)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState");

	UTeamMemberBanner_C_HandleMouseHoverVisualState_Params params;
	params.Hover = Hover;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTeamMemberBanner_C::BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent");

	UTeamMemberBanner_C_BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EFortMemberConnectionState     NewConnectionState             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberBanner_C::OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged");

	UTeamMemberBanner_C_OnTeamMemberConnectionStateChanged_Params params;
	params.NewConnectionState = NewConnectionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberBanner_C::ExecuteUbergraph_TeamMemberBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner");

	UTeamMemberBanner_C_ExecuteUbergraph_TeamMemberBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
