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

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered
struct UUserSearchResultListEntry_XS_C_BP_OnUnhovered_Params
{
};

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
struct UUserSearchResultListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
{
	bool                                               bIsOpen;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered
struct UUserSearchResultListEntry_XS_C_BP_OnHovered_Params
{
};

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals
struct UUserSearchResultListEntry_XS_C_SetNamePlatformAndMutuals_Params
{
	struct FText                                       DisplayName;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       Platform;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                MutualCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS
struct UUserSearchResultListEntry_XS_C_ExecuteUbergraph_UserSearchResultListEntry_XS_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
