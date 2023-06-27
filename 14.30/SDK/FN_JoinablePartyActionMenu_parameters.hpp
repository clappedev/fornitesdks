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

// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
struct UJoinablePartyActionMenu_C_OnToggleConfirmation_Params
{
	bool                                               bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
struct UJoinablePartyActionMenu_C_OnOpened_Params
{
};

// Function JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
struct UJoinablePartyActionMenu_C_ExecuteUbergraph_JoinablePartyActionMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
