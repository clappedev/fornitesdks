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

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnEntryReleased
struct UPreviewUnbindAction_C_BP_OnEntryReleased_Params
{
};

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemExpansionChanged
struct UPreviewUnbindAction_C_BP_OnItemExpansionChanged_Params
{
	bool                                               bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewUnbindAction.PreviewUnbindAction_C.BP_OnItemSelectionChanged
struct UPreviewUnbindAction_C_BP_OnItemSelectionChanged_Params
{
	bool                                               bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewUnbindAction.PreviewUnbindAction_C.OnListItemObjectSet
struct UPreviewUnbindAction_C_OnListItemObjectSet_Params
{
	class UObject*                                     ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PreviewUnbindAction.PreviewUnbindAction_C.ExecuteUbergraph_PreviewUnbindAction
struct UPreviewUnbindAction_C_ExecuteUbergraph_PreviewUnbindAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
