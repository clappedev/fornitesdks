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

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.CheckForLTMBangs
struct UAthenaMatchmakingPlay_C_CheckForLTMBangs_Params
{
	bool                                               BangAvail;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OpenPlayOptions
struct UAthenaMatchmakingPlay_C_OpenPlayOptions_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.FillChange
struct UAthenaMatchmakingPlay_C_FillChange_Params
{
	bool                                               bDirection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistChange
struct UAthenaMatchmakingPlay_C_PlaylistChange_Params
{
	bool                                               bDirection;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetAutoFillOptions
struct UAthenaMatchmakingPlay_C_SetAutoFillOptions_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_CancelButton_K2Node_ComponentBoundEvent_19_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetPlayButtonState
struct UAthenaMatchmakingPlay_C_SetPlayButtonState_Params
{
	bool*                                              bCanMatchmake;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.Construct
struct UAthenaMatchmakingPlay_C_Construct_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.SetCancelButtonState
struct UAthenaMatchmakingPlay_C_SetCancelButtonState_Params
{
	bool*                                              bIsMatchmaking;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__PlaylistRotator_K2Node_ComponentBoundEvent_83_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__TeamFillRotator_K2Node_ComponentBoundEvent_128_OnRotated__DelegateSignature_Params
{
	int                                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__FillSquadButton_K2Node_ComponentBoundEvent_33_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.NewModeSelected_Display
struct UAthenaMatchmakingPlay_C_NewModeSelected_Display_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.RefreshBang
struct UAthenaMatchmakingPlay_C_RefreshBang_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlay_C_BndEvt__BP_PlayButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnAvailablePlaylistsUpdated
struct UAthenaMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params
{
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.OnPlayButtonUpdated
struct UAthenaMatchmakingPlay_C_OnPlayButtonUpdated_Params
{
	bool*                                              bShowPlayButton;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.ExecuteUbergraph_AthenaMatchmakingPlay
struct UAthenaMatchmakingPlay_C_ExecuteUbergraph_AthenaMatchmakingPlay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaMatchmakingPlay.AthenaMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
struct UAthenaMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
