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

// Function LobbyTimer.LobbyTimer_C.Handle Lobby Timer Updated
struct ULobbyTimer_C_Handle_Lobby_Timer_Updated_Params
{
	int                                                Seconds_Remaining;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyTimer.LobbyTimer_C.Handle Show Lobby Timer
struct ULobbyTimer_C_Handle_Show_Lobby_Timer_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyTimer.LobbyTimer_C.Bind Delegates
struct ULobbyTimer_C_Bind_Delegates_Params
{
};

// Function LobbyTimer.LobbyTimer_C.Show Lobby Timer
struct ULobbyTimer_C_Show_Lobby_Timer_Params
{
	bool                                               Show;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function LobbyTimer.LobbyTimer_C.Handle Lobby Disconnected
struct ULobbyTimer_C_Handle_Lobby_Disconnected_Params
{
};

// Function LobbyTimer.LobbyTimer_C.Handle Lobby Started
struct ULobbyTimer_C_Handle_Lobby_Started_Params
{
};

// Function LobbyTimer.LobbyTimer_C.Construct
struct ULobbyTimer_C_Construct_Params
{
};

// Function LobbyTimer.LobbyTimer_C.ExecuteUbergraph_LobbyTimer
struct ULobbyTimer_C_ExecuteUbergraph_LobbyTimer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
