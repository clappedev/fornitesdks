// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UJoinablePartyEntry_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered");

	UJoinablePartyEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinablePartyEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UJoinablePartyEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UJoinablePartyEntry_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered");

	UJoinablePartyEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsInvited                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinablePartyEntry_C::OnInviteStatusUpdated(bool bIsInvited)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated");

	UJoinablePartyEntry_C_OnInviteStatusUpdated_Params params;
	params.bIsInvited = bIsInvited;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UJoinablePartyEntry_C::ExecuteUbergraph_JoinablePartyEntry(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry");

	UJoinablePartyEntry_C_ExecuteUbergraph_JoinablePartyEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
