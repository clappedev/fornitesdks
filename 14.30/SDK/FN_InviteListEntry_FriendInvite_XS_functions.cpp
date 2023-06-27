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

// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  OnlineStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInviteListEntry_FriendInvite_XS_C::HandleOnlineIndicatorView(unsigned char OnlineStatus)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView");

	UInviteListEntry_FriendInvite_XS_C_HandleOnlineIndicatorView_Params params;
	params.OnlineStatus = OnlineStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsOpen                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInviteListEntry_FriendInvite_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	UInviteListEntry_FriendInvite_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UInviteListEntry_FriendInvite_XS_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered");

	UInviteListEntry_FriendInvite_XS_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UInviteListEntry_FriendInvite_XS_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered");

	UInviteListEntry_FriendInvite_XS_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInviteListEntry_FriendInvite_XS_C::ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS");

	UInviteListEntry_FriendInvite_XS_C_ExecuteUbergraph_InviteListEntry_FriendInvite_XS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
