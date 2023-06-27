#pragma once

// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshBanner
struct UAthenaLobbyPlayerPanelDetails_C_RefreshBanner_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.SetTeamMemberInfo
struct UAthenaLobbyPlayerPanelDetails_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (Parm)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.InitializeContextEvents
struct UAthenaLobbyPlayerPanelDetails_C_InitializeContextEvents_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnActiveFriendsCountUpdated
struct UAthenaLobbyPlayerPanelDetails_C_OnActiveFriendsCountUpdated_Params
{
	int                                                ActiveFriendsCount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.OnPartyInvitesCountChanged
struct UAthenaLobbyPlayerPanelDetails_C_OnPartyInvitesCountChanged_Params
{
	int                                                InvitesCount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Initialize
struct UAthenaLobbyPlayerPanelDetails_C_Initialize_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.IsInvitationPending
struct UAthenaLobbyPlayerPanelDetails_C_IsInvitationPending_Params
{
	bool                                               bIsInvitationPending;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPendingInvite
struct UAthenaLobbyPlayerPanelDetails_C_RefreshPendingInvite_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.RefreshPlayerName
struct UAthenaLobbyPlayerPanelDetails_C_RefreshPlayerName_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.Refresh
struct UAthenaLobbyPlayerPanelDetails_C_Refresh_Params
{
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.PreConstruct
struct UAthenaLobbyPlayerPanelDetails_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobbyPlayerPanelDetails.AthenaLobbyPlayerPanelDetails_C.ExecuteUbergraph_AthenaLobbyPlayerPanelDetails
struct UAthenaLobbyPlayerPanelDetails_C_ExecuteUbergraph_AthenaLobbyPlayerPanelDetails_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
