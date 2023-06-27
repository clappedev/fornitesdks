// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SubgameSelect_v2.SubgameSelect_v2_C.AnimShineDelay
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::AnimShineDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.AnimShineDelay");

	USubgameSelect_v2_C_AnimShineDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.AnimSaleDelay
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::AnimSaleDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.AnimSaleDelay");

	USubgameSelect_v2_C_AnimSaleDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.SetCMSTextureToKeyArt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortSubgameSelectOption       Key                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::SetCMSTextureToKeyArt(EFortSubgameSelectOption Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.SetCMSTextureToKeyArt");

	USubgameSelect_v2_C_SetCMSTextureToKeyArt_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.StartSubgameSelectMusic
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::StartSubgameSelectMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.StartSubgameSelectMusic");

	USubgameSelect_v2_C_StartSubgameSelectMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.IsMinorShutdownWarningEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::IsMinorShutdownWarningEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.IsMinorShutdownWarningEnabled");

	USubgameSelect_v2_C_IsMinorShutdownWarningEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.ShowUpsell
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::ShowUpsell()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.ShowUpsell");

	USubgameSelect_v2_C_ShowUpsell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeRedeemButton
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::InitializeRedeemButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeRedeemButton");

	USubgameSelect_v2_C_InitializeRedeemButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeShortDescriptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::InitializeShortDescriptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.InitializeShortDescriptions");

	USubgameSelect_v2_C_InitializeShortDescriptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.IsBusyMatchmaking
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USubgameSelect_v2_C::IsBusyMatchmaking()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.IsBusyMatchmaking");

	USubgameSelect_v2_C_IsBusyMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Update
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Update");

	USubgameSelect_v2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.AdvanceRotator
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::AdvanceRotator()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.AdvanceRotator");

	USubgameSelect_v2_C_AdvanceRotator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.ResetKeyArtForMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::ResetKeyArtForMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.ResetKeyArtForMainMenu");

	USubgameSelect_v2_C_ResetKeyArtForMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.ToggleTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::ToggleTimer(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.ToggleTimer");

	USubgameSelect_v2_C_ToggleTimer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.SafeSetSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESubGame                       SubGame                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::SafeSetSubGame(ESubGame SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.SafeSetSubGame");

	USubgameSelect_v2_C_SafeSetSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.SetDescriptionForSubGame
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortSubgameSelectOption       SubGame                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::SetDescriptionForSubGame(EFortSubgameSelectOption SubGame)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.SetDescriptionForSubGame");

	USubgameSelect_v2_C_SetDescriptionForSubGame_Params params;
	params.SubGame = SubGame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.DialogResult");

	USubgameSelect_v2_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_3");

	USubgameSelect_v2_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.OnRealMoneyPurchaseComleteHandler
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSuccess                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::OnRealMoneyPurchaseComleteHandler(bool bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.OnRealMoneyPurchaseComleteHandler");

	USubgameSelect_v2_C_OnRealMoneyPurchaseComleteHandler_Params params;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameSelect_v2_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Destruct");

	USubgameSelect_v2_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.ShowMinorShutdownMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsCampaign                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::ShowMinorShutdownMessage(bool bIsCampaign)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.ShowMinorShutdownMessage");

	USubgameSelect_v2_C_ShowMinorShutdownMessage_Params params;
	params.bIsCampaign = bIsCampaign;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Campaign
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::HandleMinorWarning_Campaign()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Campaign");

	USubgameSelect_v2_C_HandleMinorWarning_Campaign_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Athena
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::HandleMinorWarning_Athena()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.HandleMinorWarning_Athena");

	USubgameSelect_v2_C_HandleMinorWarning_Athena_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__ButtonRedeem_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.OnRedeemCodeComplete
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::OnRedeemCodeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.OnRedeemCodeComplete");

	USubgameSelect_v2_C_OnRedeemCodeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.OnInputModeChanged");

	USubgameSelect_v2_C_OnInputModeChanged_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.OnSubGameImageLoadedFromCMS
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortSubgameSelectOption       SubGameOption                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::OnSubGameImageLoadedFromCMS(EFortSubgameSelectOption SubGameOption, class UTexture2D* Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.OnSubGameImageLoadedFromCMS");

	USubgameSelect_v2_C_OnSubGameImageLoadedFromCMS_Params params;
	params.SubGameOption = SubGameOption;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_2");

	USubgameSelect_v2_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.TryShowUpsellDireclty
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::TryShowUpsellDireclty()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.TryShowUpsellDireclty");

	USubgameSelect_v2_C_TryShowUpsellDireclty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::CustomEvent_1(EMatchmakingCompleteResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.CustomEvent_1");

	USubgameSelect_v2_C_CustomEvent_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Clear Party and Matchmaking Delegates
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::Clear_Party_and_Matchmaking_Delegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Clear Party and Matchmaking Delegates");

	USubgameSelect_v2_C_Clear_Party_and_Matchmaking_Delegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Try And Remove The Dialog
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::Try_And_Remove_The_Dialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Try And Remove The Dialog");

	USubgameSelect_v2_C_Try_And_Remove_The_Dialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__ButtonPurchase_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.OnActivated
// (Event, Protected, BlueprintEvent)

void USubgameSelect_v2_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.OnActivated");

	USubgameSelect_v2_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USubgameSelect_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Construct");

	USubgameSelect_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.Show Busy If Async Tasks Still Pending
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::Show_Busy_If_Async_Tasks_Still_Pending()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.Show Busy If Async Tasks Still Pending");

	USubgameSelect_v2_C_Show_Busy_If_Async_Tasks_Still_Pending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.SwapBGImage
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::SwapBGImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.SwapBGImage");

	USubgameSelect_v2_C_SwapBGImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.PreConstruct");

	USubgameSelect_v2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__BattleRoyaleTile_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__SaveTheWorldTile_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__CreativeTile_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void USubgameSelect_v2_C::BndEvt__CreativeTile_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BndEvt__CreativeTile_K2Node_ComponentBoundEvent");

	USubgameSelect_v2_C_BndEvt__CreativeTile_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.SaveTheWorldSelected
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::SaveTheWorldSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.SaveTheWorldSelected");

	USubgameSelect_v2_C_SaveTheWorldSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.BattleRoyaleSelected
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::BattleRoyaleSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.BattleRoyaleSelected");

	USubgameSelect_v2_C_BattleRoyaleSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.CreativeSelected
// (BlueprintCallable, BlueprintEvent)

void USubgameSelect_v2_C::CreativeSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.CreativeSelected");

	USubgameSelect_v2_C_CreativeSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubgameSelect_v2.SubgameSelect_v2_C.ExecuteUbergraph_SubgameSelect_v2
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USubgameSelect_v2_C::ExecuteUbergraph_SubgameSelect_v2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubgameSelect_v2.SubgameSelect_v2_C.ExecuteUbergraph_SubgameSelect_v2");

	USubgameSelect_v2_C_ExecuteUbergraph_SubgameSelect_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
