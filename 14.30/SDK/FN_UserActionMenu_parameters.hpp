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

// Function UserActionMenu.UserActionMenu_C.OnToggleConfirmation
struct UUserActionMenu_C_OnToggleConfirmation_Params
{
	bool                                               bIsVisible;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserActionMenu.UserActionMenu_C.OnOpened
struct UUserActionMenu_C_OnOpened_Params
{
};

// Function UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
struct UUserActionMenu_C_ExecuteUbergraph_UserActionMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
