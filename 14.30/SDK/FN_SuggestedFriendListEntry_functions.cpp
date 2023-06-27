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

// Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USuggestedFriendListEntry_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered");

	USuggestedFriendListEntry_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USuggestedFriendListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	USuggestedFriendListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USuggestedFriendListEntry_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered");

	USuggestedFriendListEntry_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USuggestedFriendListEntry_C::ExecuteUbergraph_SuggestedFriendListEntry(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry");

	USuggestedFriendListEntry_C_ExecuteUbergraph_SuggestedFriendListEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
