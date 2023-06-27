// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DailyQuestsPanel.DailyQuestsPanel_C.UpdateBattlePass
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::UpdateBattlePass()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.UpdateBattlePass");

	UDailyQuestsPanel_C_UpdateBattlePass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::SetInputActionHandlers()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.SetInputActionHandlers");

	UDailyQuestsPanel_C_SetInputActionHandlers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVerticalBox*            QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestIsCompleted               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ProcessQuestUpdate(class UFortQuestItem* Quest, class UVerticalBox* QuestList, bool* QuestIsCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ProcessQuestUpdate");

	UDailyQuestsPanel_C_ProcessQuestUpdate_Params params;
	params.Quest = Quest;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestIsCompleted != nullptr)
		*QuestIsCompleted = params.QuestIsCompleted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommitted                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ShowModalQuests(bool* bCommitted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ShowModalQuests");

	UDailyQuestsPanel_C_ShowModalQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommitted != nullptr)
		*bCommitted = params.bCommitted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::ClaimNextQuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ClaimNextQuestReward");

	UDailyQuestsPanel_C_ClaimNextQuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnNoQuestRewardsToClaim()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnNoQuestRewardsToClaim");

	UDailyQuestsPanel_C_OnNoQuestRewardsToClaim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFortItemInstanceQuantityPair> Rewards                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestRewardClaimed(class UFortQuestItem* Quest, TArray<struct FFortItemInstanceQuantityPair>* Rewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestRewardClaimed");

	UDailyQuestsPanel_C_OnQuestRewardClaimed_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rewards != nullptr)
		*Rewards = params.Rewards;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  NewQuests                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UDailyQuestsPanel_C::OnQuestsGranted(TArray<class UFortQuestItem*>* NewQuests)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsGranted");

	UDailyQuestsPanel_C_OnQuestsGranted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewQuests != nullptr)
		*NewQuests = params.NewQuests;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortQuestItem*          Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UVerticalBox*            QuestList                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestCompleted                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::CreateQuestWidget(class UFortQuestItem* Quest, class UVerticalBox* QuestList, bool* QuestCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.CreateQuestWidget");

	UDailyQuestsPanel_C_CreateQuestWidget_Params params;
	params.Quest = Quest;
	params.QuestList = QuestList;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestCompleted != nullptr)
		*QuestCompleted = params.QuestCompleted;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::OnQuestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnQuestsUpdated");

	UDailyQuestsPanel_C_OnQuestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners
// (Public, BlueprintCallable, BlueprintEvent)

void UDailyQuestsPanel_C::BindEventListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BindEventListeners");

	UDailyQuestsPanel_C_BindEventListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDailyQuestsPanel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.Construct");

	UDailyQuestsPanel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature");

	UDailyQuestsPanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_66_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.OnAccountInfoChanged
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo* Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDailyQuestsPanel_C::OnAccountInfoChanged(struct FFortPublicAccountInfo* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.OnAccountInfoChanged");

	UDailyQuestsPanel_C_OnAccountInfoChanged_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDailyQuestsPanel_C::ExecuteUbergraph_DailyQuestsPanel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DailyQuestsPanel.DailyQuestsPanel_C.ExecuteUbergraph_DailyQuestsPanel");

	UDailyQuestsPanel_C_ExecuteUbergraph_DailyQuestsPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
