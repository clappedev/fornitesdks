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

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.On_ClickBlocker_MouseButtonDown_1
struct UAthenaMatchmakingOptionsDisplay_v2_C_On_ClickBlocker_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.InitializeGameModeButtons
struct UAthenaMatchmakingOptionsDisplay_v2_C_InitializeGameModeButtons_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.NoLTMAvailable
struct UAthenaMatchmakingOptionsDisplay_v2_C_NoLTMAvailable_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateLTM
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateLTM_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.HandleStandardModeButtonIndex
struct UAthenaMatchmakingOptionsDisplay_v2_C_HandleStandardModeButtonIndex_Params
{
	bool                                               Increment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Down
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_StandardModes_Down_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_StandardModes_Up
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_StandardModes_Up_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateStandardGameModeButtonAvailibilty
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateStandardGameModeButtonAvailibilty_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupButtonBindings
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetupButtonBindings_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Left
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_Left_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_Navigate_Right
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_Navigate_Right_Params
{
	EUINavigation                                      Navigation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearLTM
struct UAthenaMatchmakingOptionsDisplay_v2_C_ClearLTM_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddLTM
struct UAthenaMatchmakingOptionsDisplay_v2_C_AddLTM_Params
{
	EFortAthenaPlaylist                                LTMPlaylist;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AddSpecialStyle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ClearStandardGameModes
struct UAthenaMatchmakingOptionsDisplay_v2_C_ClearStandardGameModes_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.AddStandardGameModes
struct UAthenaMatchmakingOptionsDisplay_v2_C_AddStandardGameModes_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.CloseMatchmakingOptions
struct UAthenaMatchmakingOptionsDisplay_v2_C_CloseMatchmakingOptions_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params
{
	bool                                               Passthrough;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnActivated
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnActivated_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
struct UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnGameModeButtonSelected
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnGameModeButtonSelected_Params
{
	class UAthena_Matchmaking_GameModeButton_C*        SelectedGameModeButton;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnModeButtonHovered
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnModeButtonHovered_Params
{
	class UAthena_Matchmaking_GameModeButton_C*        HoveredButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.PlaylistsUpdated
struct UAthenaMatchmakingOptionsDisplay_v2_C_PlaylistsUpdated_Params
{
};

// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
struct UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
