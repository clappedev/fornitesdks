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

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
struct AItemPreviewPedestal_C_Remove_Floor_Params
{
	class AFortItemPreviewActor*                       Preview;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
struct AItemPreviewPedestal_C_OnItemDisplayed_Params
{
	EFortItemType                                      ItemType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
struct AItemPreviewPedestal_C_ExecuteUbergraph_ItemPreviewPedestal_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
