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

// Function FriendNotification.FriendNotification_C.JoinPartyInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendNotification_C::JoinPartyInvite()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.JoinPartyInvite");

	UFriendNotification_C_JoinPartyInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendNotification_C::ShowFriendInvites()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.ShowFriendInvites");

	UFriendNotification_C_ShowFriendInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFriendNotification_C::ExecuteUbergraph_FriendNotification(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification");

	UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
