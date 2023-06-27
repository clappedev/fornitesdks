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

// Function DailyQuestsPanel.DailyQuestsPanel_C.UpdateBattlePass
struct UDailyQuestsPanel_C_UpdateBattlePass_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers
struct UDailyQuestsPanel_C_SetInputActionHandlers_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate
struct UDailyQuestsPanel_C_ProcessQuestUpdate_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestIsCompleted;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests
struct UDailyQuestsPanel_C_ShowModalQuests_Params
{
	bool                                               bCommitted;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward
struct UDailyQuestsPanel_C_ClaimNextQuestReward_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim
struct UDailyQuestsPanel_C_OnNoQuestRewardsToClaim_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed
struct UDailyQuestsPanel_C_OnQuestRewardClaimed_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFortItemInstanceQuantityPair>       Rewards;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted
struct UDailyQuestsPanel_C_OnQuestsGranted_Params
{
	TArray<class UFortQuestItem*>                      NewQuests;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget
struct UDailyQuestsPanel_C_CreateQuestWidget_Params
{
	class UFortQuestItem*                              Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UVerticalBox*                                QuestList;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               QuestCompleted;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated
struct UDailyQuestsPanel_C_OnQuestsUpdated_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners
struct UDailyQuestsPanel_C_BindEventListeners_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.Construct
struct UDailyQuestsPanel_C_Construct_Params
{
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
struct UDailyQuestsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.OnAccountInfoChanged
struct UDailyQuestsPanel_C_OnAccountInfoChanged_Params
{
	struct FFortPublicAccountInfo*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel
struct UDailyQuestsPanel_C_ExecuteUbergraph_DailyQuestsPanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
