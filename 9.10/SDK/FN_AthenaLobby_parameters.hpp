#pragma once

// Fortnite (9.1) SDK
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

// Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton
struct UAthenaLobby_C_ConfigureGenericLinkButton_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ShowPicker
struct UAthenaLobby_C_ShowPicker_Params
{
	EFortPickerMode                                    Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InitialOption;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreFirstAccept;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
struct UAthenaLobby_C_StartAthenaLobbyMusic_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
struct UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
struct UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params
{
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent
struct UAthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.Destruct
struct UAthenaLobby_C_Destruct_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Construct
struct UAthenaLobby_C_Construct_Params
{
};

// Function AthenaLobby.AthenaLobby_C.ShowMobileAutoFireScreen
struct UAthenaLobby_C_ShowMobileAutoFireScreen_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnDeactivated
struct UAthenaLobby_C_OnDeactivated_Params
{
};

// Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated
struct UAthenaLobby_C_DisplayStoreUpdated_Params
{
	class UStoreToastRequest*                          StoreUpdatedRequest;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.OnActivated
struct UAthenaLobby_C_OnActivated_Params
{
};

// Function AthenaLobby.AthenaLobby_C.AttemptToShowToast
struct UAthenaLobby_C_AttemptToShowToast_Params
{
};

// Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame
struct UAthenaLobby_C_TryToastAgainNextFrame_Params
{
};

// Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent
struct UAthenaLobby_C_BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_Params
{
};

// Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged
struct UAthenaLobby_C_OnPlaylistChanged_Params
{
	EFortLobbyType                                     LobbyType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFortPlaylistAthena*                         PlaylistData;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.LoadLobbyBackground
struct UAthenaLobby_C_LoadLobbyBackground_Params
{
};

// Function AthenaLobby.AthenaLobby_C.Load Lobby Background Recursive
struct UAthenaLobby_C_Load_Lobby_Background_Recursive_Params
{
};

// Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated
struct UAthenaLobby_C_DisplayGlyphQuestUpdated_Params
{
	int                                                NewGlyphs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
struct UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
