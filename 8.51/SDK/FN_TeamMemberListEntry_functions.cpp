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

// Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UTeamMemberListEntry_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered");

	UTeamMemberListEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent");

	UTeamMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UTeamMemberListEntry_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered");

	UTeamMemberListEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamMemberListEntry_C::ExecuteUbergraph_TeamMemberListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry");

	UTeamMemberListEntry_C_ExecuteUbergraph_TeamMemberListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
