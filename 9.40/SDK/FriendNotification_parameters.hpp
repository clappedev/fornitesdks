#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x08)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
// 0x0 (0x0 - 0x0)
// Function FriendNotification.FriendNotification_C.JoinPartyInvite
struct UFriendNotification_C_JoinPartyInvite_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function FriendNotification.FriendNotification_C.ShowFriendInvites
struct UFriendNotification_C_ShowFriendInvites_Params
{
public:
};

// 0x19 (0x19 - 0x0)
// Function FriendNotification.FriendNotification_C.ShowPartyInvites
struct UFriendNotification_C_ShowPartyInvites_Params
{
public:
	class UFortUIManagerWidget_NUI*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetCachedWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatablePanel*               K2Node_DynamicCast_AsCommon_Activatable_Panel;     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
struct UFriendNotification_C_ExecuteUbergraph_FriendNotification_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif