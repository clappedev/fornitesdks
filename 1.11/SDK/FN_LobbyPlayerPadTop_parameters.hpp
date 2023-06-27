#pragma once

// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshReadyState
struct ULobbyPlayerPadTop_C_RefreshReadyState_Params
{
	bool                                               Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnAthenaReadyStateChanged
struct ULobbyPlayerPadTop_C_OnAthenaReadyStateChanged_Params
{
	struct FUniqueNetIdRepl                            Member_Id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Ready;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerUnhovered
struct ULobbyPlayerPadTop_C_OnLobbyPlayerUnhovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Initialize
struct ULobbyPlayerPadTop_C_Initialize_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.InitializeContextEvents
struct ULobbyPlayerPadTop_C_InitializeContextEvents_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyPlayerHovered
struct ULobbyPlayerPadTop_C_OnLobbyPlayerHovered_Params
{
	int                                                PlayerIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.SetTeamMemberInfo
struct ULobbyPlayerPadTop_C_SetTeamMemberInfo_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Refresh
struct ULobbyPlayerPadTop_C_Refresh_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshPlayerName
struct ULobbyPlayerPadTop_C_RefreshPlayerName_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.RefreshHomeBasePower
struct ULobbyPlayerPadTop_C_RefreshHomeBasePower_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.PreConstruct
struct ULobbyPlayerPadTop_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.Construct
struct ULobbyPlayerPadTop_C_Construct_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyStarted
struct ULobbyPlayerPadTop_C_OnLobbyStarted_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnUpdateLobbyPlayerPadTop
struct ULobbyPlayerPadTop_C_OnUpdateLobbyPlayerPadTop_Params
{
	struct FUniqueNetIdRepl                            PlayerNetId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsReady;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.OnLobbyDisconnected
struct ULobbyPlayerPadTop_C_OnLobbyDisconnected_Params
{
};

// Function LobbyPlayerPadTop.LobbyPlayerPadTop_C.ExecuteUbergraph_LobbyPlayerPadTop
struct ULobbyPlayerPadTop_C_ExecuteUbergraph_LobbyPlayerPadTop_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
