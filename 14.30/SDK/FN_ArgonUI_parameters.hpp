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

// Function ArgonUI.ArgonWidgetBase.UnbindFromMutator_BP
struct UArgonWidgetBase_UnbindFromMutator_BP_Params
{
};

// Function ArgonUI.ArgonWidgetBase.SetPlayerPortrait
struct UArgonWidgetBase_SetPlayerPortrait_Params
{
	class AFortPlayerStateAthena*                      Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UFortLazyImage*                              PortraitImage;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates
struct UArgonWidgetBase_GetTeamPlayerStates_Params
{
	unsigned char                                      Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AFortPlayerStateAthena*>              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ArgonUI.ArgonWidgetBase.BindToMutator_BP
struct UArgonWidgetBase_BindToMutator_BP_Params
{
};

// Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished
struct UArgonHUDAlertWidget_OnPlayerFinished_Params
{
	struct FArgonFinishedPlayerInfo                    FinishedPlayerInfo;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ArgonUI.ArgonHUDAlertWidget.ForceHidePlayerFinishedMessage
struct UArgonHUDAlertWidget_ForceHidePlayerFinishedMessage_Params
{
};

// Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage
struct UArgonHUDAlertWidget_DisplayPlayerFinishedMessage_Params
{
	struct FArgonFinishedPlayerInfo                    FinishedInfo;                                             // (Parm)
};

// Function ArgonUI.ArgonLeaderboardWidget.UpdateLeaderboardUI
struct UArgonLeaderboardWidget_UpdateLeaderboardUI_Params
{
};

// Function ArgonUI.ArgonLeaderboardWidget.OnRacingPlayersByPlaceChanged
struct UArgonLeaderboardWidget_OnRacingPlayersByPlaceChanged_Params
{
};

// Function ArgonUI.ArgonLeaderboardWidget.OnAnyTeamTicketCountChanged
struct UArgonLeaderboardWidget_OnAnyTeamTicketCountChanged_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
