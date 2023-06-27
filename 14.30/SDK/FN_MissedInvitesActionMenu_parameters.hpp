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

// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp
struct UMissedInvitesActionMenu_C_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened
struct UMissedInvitesActionMenu_C_OnOpened_Params
{
};

// Function MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu
struct UMissedInvitesActionMenu_C_ExecuteUbergraph_MissedInvitesActionMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
