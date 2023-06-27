// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::ShowUpsell()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ShowUpsell");

	USubgameSelectScreen_C_ShowUpsell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::InitializeRedeemButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeRedeemButton");

	USubgameSelectScreen_C_InitializeRedeemButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::InitializeShortDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.InitializeShortDescriptions");

	USubgameSelectScreen_C_InitializeShortDescriptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubgameSelectScreen_C::IsBusyMatchmakingOrPartyTransitioning()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmakingOrPartyTransitioning");

	USubgameSelectScreen_C_IsBusyMatchmakingOrPartyTransitioning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Update");

	USubgameSelectScreen_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::AdvanceRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.AdvanceRotator");

	USubgameSelectScreen_C_AdvanceRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::ResetKeyArtForMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ResetKeyArtForMainMenu");

	USubgameSelectScreen_C_ResetKeyArtForMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::ToggleTimer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ToggleTimer");

	USubgameSelectScreen_C_ToggleTimer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubGame                       SubGame                        (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::SafeSetSubGame(ESubGame SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.SafeSetSubGame");

	USubgameSelectScreen_C_SafeSetSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubGame                       SubGame                        (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::SetDescriptionForSubGame(ESubGame SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.SetDescriptionForSubGame");

	USubgameSelectScreen_C_SetDescriptionForSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	USubgameSelectScreen_C_OnCodeRedeemCanceled_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF");

	USubgameSelectScreen_C_OnCodeRedeemComplete_4BE2E0B94F226EFF37B0C4B3DCA8A2CF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::DialogResult_FA087F7E461591BDBC2AECAB522E633C(EFortDialogResult Result, const struct FName& ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.DialogResult_FA087F7E461591BDBC2AECAB522E633C");

	USubgameSelectScreen_C_DialogResult_FA087F7E461591BDBC2AECAB522E633C_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_282_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__AthenaBtn_K2Node_ComponentBoundEvent_298_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::Try_And_Remove_The_Dialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Try And Remove The Dialog");

	USubgameSelectScreen_C_Try_And_Remove_The_Dialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Clear Party and Matchmaking Delegates");

	USubgameSelectScreen_C_Clear_Party_and_Matchmaking_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMatchmakingState> OldState                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMatchmakingState> NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::CustomEvent_1(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_1");

	USubgameSelectScreen_C_CustomEvent_1_Params params;
	params.OldState = OldState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_2");

	USubgameSelectScreen_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::Show_Busy_If_Async_Tasks_Still_Pending()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Show Busy If Async Tasks Still Pending");

	USubgameSelectScreen_C_Show_Busy_If_Async_Tasks_Still_Pending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameSelectScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Construct");

	USubgameSelectScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__BattlegroundBtn_K2Node_ComponentBoundEvent_125_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__CampaignBtn_K2Node_ComponentBoundEvent_107_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USubgameSelectScreen_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnActivated");

	USubgameSelectScreen_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void USubgameSelectScreen_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.CustomEvent_3");

	USubgameSelectScreen_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_67_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::OnRealMoneyPurchaseComleteHandler(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.OnRealMoneyPurchaseComleteHandler");

	USubgameSelectScreen_C_OnRealMoneyPurchaseComleteHandler_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameSelectScreen_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.Destruct");

	USubgameSelectScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_193_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature");

	USubgameSelectScreen_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_114_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelectScreen_C::ExecuteUbergraph_SubgameSelectScreen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen");

	USubgameSelectScreen_C_ExecuteUbergraph_SubgameSelectScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
