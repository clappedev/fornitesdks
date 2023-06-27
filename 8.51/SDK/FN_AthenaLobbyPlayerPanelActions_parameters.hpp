#pragma once

// Fortnite (8.51) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.ShowTeamMemberManageModal
struct UAthenaLobbyPlayerPanelActions_C_ShowTeamMemberManageModal_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.RefreshAddFriendButton
struct UAthenaLobbyPlayerPanelActions_C_RefreshAddFriendButton_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnMutingChanged
struct UAthenaLobbyPlayerPanelActions_C_OnMutingChanged_Params
{
	struct FUniqueNetIdRepl                            NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               NewParam1;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanViewProfile
struct UAthenaLobbyPlayerPanelActions_C_CanViewProfile_Params
{
	bool                                               CanView;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsTeamMemberLocalPlayer
struct UAthenaLobbyPlayerPanelActions_C_IsTeamMemberLocalPlayer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.SetTeamMemberInfo
struct UAthenaLobbyPlayerPanelActions_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnActiveFriendsCountUpdated
struct UAthenaLobbyPlayerPanelActions_C_OnActiveFriendsCountUpdated_Params
{
	int                                                ActiveFriendsCount;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnPartyInvitesCountChanged
struct UAthenaLobbyPlayerPanelActions_C_OnPartyInvitesCountChanged_Params
{
	int                                                InvitesCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.InitializeContextEvents
struct UAthenaLobbyPlayerPanelActions_C_InitializeContextEvents_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Focus
struct UAthenaLobbyPlayerPanelActions_C_Focus_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.HasValidActions
struct UAthenaLobbyPlayerPanelActions_C_HasValidActions_Params
{
	bool                                               bHasValidActions;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.GetFirstActiveActionButton
struct UAthenaLobbyPlayerPanelActions_C_GetFirstActiveActionButton_Params
{
	class UIconTextButton_C*                           IconTextButton;                                           // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanManage
struct UAthenaLobbyPlayerPanelActions_C_CanManage_Params
{
	bool                                               bCanManage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsInvitationPending
struct UAthenaLobbyPlayerPanelActions_C_IsInvitationPending_Params
{
	bool                                               bIsInvitationPending;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanInviteToParty
struct UAthenaLobbyPlayerPanelActions_C_CanInviteToParty_Params
{
	bool                                               bCanInviteToParty;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.CanFriendInviteOrAccept
struct UAthenaLobbyPlayerPanelActions_C_CanFriendInviteOrAccept_Params
{
	bool                                               bCanFriend;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsMissionLocalPlayersOutpost
struct UAthenaLobbyPlayerPanelActions_C_IsMissionLocalPlayersOutpost_Params
{
	bool                                               isLocalPlayersOutpost;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.IsLocalPlayer
struct UAthenaLobbyPlayerPanelActions_C_IsLocalPlayer_Params
{
	bool                                               bIsLocalPlayer;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Refresh
struct UAthenaLobbyPlayerPanelActions_C_Refresh_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.Initialize
struct UAthenaLobbyPlayerPanelActions_C_Initialize_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnButtonHovered
struct UAthenaLobbyPlayerPanelActions_C_OnButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonManage_K2Node_ComponentBoundEvent
struct UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonManage_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent
struct UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonAddFriend_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent
struct UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonInviteParty_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent
struct UAthenaLobbyPlayerPanelActions_C_BndEvt__ViewProfileButton_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.BndEvt__ButtonMute_K2Node_ComponentBoundEvent
struct UAthenaLobbyPlayerPanelActions_C_BndEvt__ButtonMute_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.ExecuteUbergraph_AthenaLobbyPlayerPanelActions
struct UAthenaLobbyPlayerPanelActions_C_ExecuteUbergraph_AthenaLobbyPlayerPanelActions_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnEmoteClicked__DelegateSignature
struct UAthenaLobbyPlayerPanelActions_C_OnEmoteClicked__DelegateSignature_Params
{
};

// Function AthenaLobbyPlayerPanelActions.AthenaLobbyPlayerPanelActions_C.OnGadgetsClicked__DelegateSignature
struct UAthenaLobbyPlayerPanelActions_C_OnGadgetsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
