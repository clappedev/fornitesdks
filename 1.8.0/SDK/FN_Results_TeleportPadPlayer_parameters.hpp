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

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsLocalPlayersPad
struct UResults_TeleportPadPlayer_C_IsLocalPlayersPad_Params
{
	bool                                               bIsLocalPlayersPad;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Focus
struct UResults_TeleportPadPlayer_C_Focus_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanFriend
struct UResults_TeleportPadPlayer_C_CanFriend_Params
{
	bool                                               bCanFriendPlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.CanInviteParty
struct UResults_TeleportPadPlayer_C_CanInviteParty_Params
{
	bool                                               bCanInvitePlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.InvitePlayer
struct UResults_TeleportPadPlayer_C_InvitePlayer_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ThumbsUpPlayer
struct UResults_TeleportPadPlayer_C_ThumbsUpPlayer_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.IsValidPad
struct UResults_TeleportPadPlayer_C_IsValidPad_Params
{
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.SetIsValidPad
struct UResults_TeleportPadPlayer_C_SetIsValidPad_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Initialize
struct UResults_TeleportPadPlayer_C_Initialize_Params
{
	struct FUniqueNetIdRepl                            InUniqueId;                                               // (Parm, OutParm, ReferenceParm)
	class UFortUIScoreReport*                          InScoreReport;                                            // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FUniqueNetIdRepl                            InConsoleUniqueId;                                        // (Parm)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Intro
struct UResults_TeleportPadPlayer_C_Team_Score_Screen_Intro_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Team Score Screen Outro
struct UResults_TeleportPadPlayer_C_Team_Score_Screen_Outro_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Teleport Pad Screen Intro
struct UResults_TeleportPadPlayer_C_Teleport_Pad_Screen_Intro_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.Outro
struct UResults_TeleportPadPlayer_C_Outro_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonStats_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonInvite_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__Anim_TeleportPadScreenIntro_K2Node_ComponentBoundEvent_3_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params
{
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_BndEvt__ButtonThumbs_K2Node_ComponentBoundEvent_24_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.ExecuteUbergraph_Results_TeleportPadPlayer
struct UResults_TeleportPadPlayer_C_ExecuteUbergraph_Results_TeleportPadPlayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnTeleportPadIntroFinished__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnTeleportPadIntroFinished__DelegateSignature_Params
{
	class UResults_TeleportPadPlayer_C*                TeleportPadPlayer;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnUpVoteClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnUpVoteClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (Parm)
	struct FString                                     TargetName;                                               // (Parm, ZeroConstructor)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnAddFriendClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnAddFriendClicked__DelegateSignature_Params
{
	struct FUniqueNetIdRepl                            TargetId;                                                 // (Parm)
	struct FString                                     TargetName;                                               // (Parm, ZeroConstructor)
};

// Function Results_TeleportPadPlayer.Results_TeleportPadPlayer_C.OnMissionStatsClicked__DelegateSignature
struct UResults_TeleportPadPlayer_C_OnMissionStatsClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
