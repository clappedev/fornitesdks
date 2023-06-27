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

// Function SubgameSelect_v2.SubgameSelect_v2_C.AnimShineDelay
struct USubgameSelect_v2_C_AnimShineDelay_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.AnimSaleDelay
struct USubgameSelect_v2_C_AnimSaleDelay_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.SetCMSTextureToKeyArt
struct USubgameSelect_v2_C_SetCMSTextureToKeyArt_Params
{
	EFortSubgameSelectOption                           Key;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.StartSubgameSelectMusic
struct USubgameSelect_v2_C_StartSubgameSelectMusic_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.IsMinorShutdownWarningEnabled
struct USubgameSelect_v2_C_IsMinorShutdownWarningEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.ShowUpsell
struct USubgameSelect_v2_C_ShowUpsell_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeRedeemButton
struct USubgameSelect_v2_C_InitializeRedeemButton_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeShortDescriptions
struct USubgameSelect_v2_C_InitializeShortDescriptions_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.IsBusyMatchmaking
struct USubgameSelect_v2_C_IsBusyMatchmaking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Update
struct USubgameSelect_v2_C_Update_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.AdvanceRotator
struct USubgameSelect_v2_C_AdvanceRotator_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.ResetKeyArtForMainMenu
struct USubgameSelect_v2_C_ResetKeyArtForMainMenu_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.ToggleTimer
struct USubgameSelect_v2_C_ToggleTimer_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.SafeSetSubGame
struct USubgameSelect_v2_C_SafeSetSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.SetDescriptionForSubGame
struct USubgameSelect_v2_C_SetDescriptionForSubGame_Params
{
	EFortSubgameSelectOption                           SubGame;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.DialogResult
struct USubgameSelect_v2_C_DialogResult_Params
{
	EFortDialogResult                                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_3
struct USubgameSelect_v2_C_CustomEvent_3_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.OnRealMoneyPurchaseComleteHandler
struct USubgameSelect_v2_C_OnRealMoneyPurchaseComleteHandler_Params
{
	bool                                               bSuccess;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Destruct
struct USubgameSelect_v2_C_Destruct_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.ShowMinorShutdownMessage
struct USubgameSelect_v2_C_ShowMinorShutdownMessage_Params
{
	bool                                               bIsCampaign;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Campaign
struct USubgameSelect_v2_C_HandleMinorWarning_Campaign_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Athena
struct USubgameSelect_v2_C_HandleMinorWarning_Athena_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.OnRedeemCodeComplete
struct USubgameSelect_v2_C_OnRedeemCodeComplete_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.OnInputModeChanged
struct USubgameSelect_v2_C_OnInputModeChanged_Params
{
	bool                                               bUsingGamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.OnSubGameImageLoadedFromCMS
struct USubgameSelect_v2_C_OnSubGameImageLoadedFromCMS_Params
{
	EFortSubgameSelectOption                           SubGameOption;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_2
struct USubgameSelect_v2_C_CustomEvent_2_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.TryShowUpsellDireclty
struct USubgameSelect_v2_C_TryShowUpsellDireclty_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_1
struct USubgameSelect_v2_C_CustomEvent_1_Params
{
	EMatchmakingCompleteResult                         Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Clear Party and Matchmaking Delegates
struct USubgameSelect_v2_C_Clear_Party_and_Matchmaking_Delegates_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Try And Remove The Dialog
struct USubgameSelect_v2_C_Try_And_Remove_The_Dialog_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.OnActivated
struct USubgameSelect_v2_C_OnActivated_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Construct
struct USubgameSelect_v2_C_Construct_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.Show Busy If Async Tasks Still Pending
struct USubgameSelect_v2_C_Show_Busy_If_Async_Tasks_Still_Pending_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.SwapBGImage
struct USubgameSelect_v2_C_SwapBGImage_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.PreConstruct
struct USubgameSelect_v2_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__CreativeTile_K2Node_ComponentBoundEvent
struct USubgameSelect_v2_C_BndEvt__CreativeTile_K2Node_ComponentBoundEvent_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.SaveTheWorldSelected
struct USubgameSelect_v2_C_SaveTheWorldSelected_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.BattleRoyaleSelected
struct USubgameSelect_v2_C_BattleRoyaleSelected_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.CreativeSelected
struct USubgameSelect_v2_C_CreativeSelected_Params
{
};

// Function SubgameSelect_v2.SubgameSelect_v2_C.ExecuteUbergraph_SubgameSelect_v2
struct USubgameSelect_v2_C_ExecuteUbergraph_SubgameSelect_v2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
