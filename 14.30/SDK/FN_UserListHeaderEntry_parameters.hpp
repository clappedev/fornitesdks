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

// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered
struct UUserListHeaderEntry_C_BP_OnUnhovered_Params
{
};

// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged
struct UUserListHeaderEntry_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered
struct UUserListHeaderEntry_C_BP_OnHovered_Params
{
};

// Function UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet_2
struct UUserListHeaderEntry_C_OnListItemObjectSet_2_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry
struct UUserListHeaderEntry_C_ExecuteUbergraph_UserListHeaderEntry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
