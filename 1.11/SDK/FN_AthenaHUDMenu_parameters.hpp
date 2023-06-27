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

// Function AthenaHUDMenu.AthenaHUDMenu_C.CreateOrShowGameOverScreen
struct UAthenaHUDMenu_C_CreateOrShowGameOverScreen_Params
{
	class UAthenaGameOverWidget_C*                     GameOverScreen;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.Dismiss
struct UAthenaHUDMenu_C_Dismiss_Params
{
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.PopMenuContent
struct UAthenaHUDMenu_C_PopMenuContent_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.PushMenuContent
struct UAthenaHUDMenu_C_PushMenuContent_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.SetCursorModeContent
struct UAthenaHUDMenu_C_SetCursorModeContent_Params
{
	class UUserWidget*                                 CustomWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActionName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Or Team Won
struct UAthenaHUDMenu_C_On_Player_Or_Team_Won_Params
{
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.HandleRevived
struct UAthenaHUDMenu_C_HandleRevived_Params
{
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.Construct
struct UAthenaHUDMenu_C_Construct_Params
{
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.Clear GameOver Screen
struct UAthenaHUDMenu_C_Clear_GameOver_Screen_Params
{
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.On Player Died
struct UAthenaHUDMenu_C_On_Player_Died_Params
{
	struct FFortPlayerDeathReport                      DeathReport;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AthenaHUDMenu.AthenaHUDMenu_C.ExecuteUbergraph_AthenaHUDMenu
struct UAthenaHUDMenu_C_ExecuteUbergraph_AthenaHUDMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
