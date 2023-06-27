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

// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown_1
struct USocialPanel_FriendSearchBar_C_On_ClickCapture_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered
struct USocialPanel_FriendSearchBar_C_BP_OnHovered_Params
{
};

// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered
struct USocialPanel_FriendSearchBar_C_BP_OnUnhovered_Params
{
};

// Function SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar
struct USocialPanel_FriendSearchBar_C_ExecuteUbergraph_SocialPanel_FriendSearchBar_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
