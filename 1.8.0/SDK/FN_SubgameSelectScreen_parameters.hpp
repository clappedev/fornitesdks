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

// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
struct USubgameSelectScreen_C_ShowUpsell_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
struct USubgameSelectScreen_C_InitializeRedeemButton_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
struct USubgameSelectScreen_C_InitializeShortDescriptions_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
struct USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
struct USubgameSelectScreen_C_Update_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
struct USubgameSelectScreen_C_AdvanceRotator_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
struct USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
struct USubgameSelectScreen_C_ToggleTimer_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
struct USubgameSelectScreen_C_SafeSetSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
struct USubgameSelectScreen_C_SetDescriptionForSubGame_Params
{
	ESubGame                                           SubGame;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
struct USubgameSelectScreen_C_OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
struct USubgameSelectScreen_C_OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
struct USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params
{
	EFortDialogResult                                  Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ResultName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
struct USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
struct USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
struct USubgameSelectScreen_C_CustomEvent_1_Params
{
	TEnumAsByte<EMatchmakingState>                     OldState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMatchmakingState>                     NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
struct USubgameSelectScreen_C_CustomEvent_2_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
struct USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
struct USubgameSelectScreen_C_Construct_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
struct USubgameSelectScreen_C_OnActivated_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3
struct USubgameSelectScreen_C_CustomEvent_3_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
struct USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
struct USubgameSelectScreen_C_Destruct_Params
{
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature
struct USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
struct USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
