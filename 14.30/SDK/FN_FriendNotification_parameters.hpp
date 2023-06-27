#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FriendNotification.FriendNotification_C.JoinPartyInvite
struct UFriendNotification_C_JoinPartyInvite_Params
{
};

// Function FriendNotification.FriendNotification_C.ShowFriendInvites
struct UFriendNotification_C_ShowFriendInvites_Params
{
};

// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
struct UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
