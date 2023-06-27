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

// Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UPartyMemberListEntry_C::BP_OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnUnhovered");

	UPartyMemberListEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyMemberListEntry.PartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyMemberListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent(bool bIsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberListEntry.PartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent");

	UPartyMemberListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UPartyMemberListEntry_C::BP_OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberListEntry.PartyMemberListEntry_C.BP_OnHovered");

	UPartyMemberListEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PartyMemberListEntry.PartyMemberListEntry_C.ExecuteUbergraph_PartyMemberListEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPartyMemberListEntry_C::ExecuteUbergraph_PartyMemberListEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PartyMemberListEntry.PartyMemberListEntry_C.ExecuteUbergraph_PartyMemberListEntry");

	UPartyMemberListEntry_C_ExecuteUbergraph_PartyMemberListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
