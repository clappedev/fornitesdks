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

// Function FriendNotification.FriendNotification_C.JoinPartyInvite
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendNotification_C::JoinPartyInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.JoinPartyInvite");

	UFriendNotification_C_JoinPartyInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ShowFriendInvites
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendNotification_C::ShowFriendInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.ShowFriendInvites");

	UFriendNotification_C_ShowFriendInvites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendNotification.FriendNotification_C.ShowPartyInvites
// (Public, BlueprintCallable, BlueprintEvent)

void UFriendNotification_C::ShowPartyInvites()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.ShowPartyInvites");

	UFriendNotification_C_ShowPartyInvites_Params params;

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
	static auto fn = UObject::FindObject<UFunction>("Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification");

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
