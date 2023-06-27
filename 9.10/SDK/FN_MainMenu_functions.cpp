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

// Function MainMenu.MainMenu_C.ShowMinigameButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AFortVolume*             Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AFortPlayerControllerAthena* Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::ShowMinigameButtons(class AFortVolume* Volume, class AFortPlayerControllerAthena* Player, bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ShowMinigameButtons");

	UMainMenu_C_ShowMinigameButtons_Params params;
	params.Volume = Volume;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function MainMenu.MainMenu_C.TryPushWidgetAsModalPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::TryPushWidgetAsModalPanel(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TryPushWidgetAsModalPanel");

	UMainMenu_C_TryPushWidgetAsModalPanel_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.TryPushWidgetAsActivateablePanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           inHideHeader                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           inHideFooter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           inHideChatWidget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::TryPushWidgetAsActivateablePanel(class UObject* Object, bool inHideHeader, bool inHideFooter, bool inHideChatWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TryPushWidgetAsActivateablePanel");

	UMainMenu_C_TryPushWidgetAsActivateablePanel_Params params;
	params.Object = Object;
	params.inHideHeader = inHideHeader;
	params.inHideFooter = inHideFooter;
	params.inHideChatWidget = inHideChatWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateCreativeButtonsVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateCreativeButtonsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateCreativeButtonsVisibility");

	UMainMenu_C_UpdateCreativeButtonsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.TeleportToCreativeIslandDock
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::TeleportToCreativeIslandDock()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TeleportToCreativeIslandDock");

	UMainMenu_C_TeleportToCreativeIslandDock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.TeleportToCreativeHub
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::TeleportToCreativeHub()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.TeleportToCreativeHub");

	UMainMenu_C_TeleportToCreativeHub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateMatchOptionsWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateMatchOptionsWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateMatchOptionsWidgetVisibility");

	UMainMenu_C_UpdateMatchOptionsWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateDescriptionTextWhenHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HelpText                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::UpdateDescriptionTextWhenHovered(struct FText HelpText, class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateDescriptionTextWhenHovered");

	UMainMenu_C_UpdateDescriptionTextWhenHovered_Params params;
	params.HelpText = HelpText;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateRespawnWidgetVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateRespawnWidgetVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateRespawnWidgetVisibility");

	UMainMenu_C_UpdateRespawnWidgetVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.MatchMakingFlowChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bFlowActive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::MatchMakingFlowChanged(bool bFlowActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.MatchMakingFlowChanged");

	UMainMenu_C_MatchMakingFlowChanged_Params params;
	params.bFlowActive = bFlowActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Update Team Select Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::Update_Team_Select_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Update Team Select Visibility");

	UMainMenu_C_Update_Team_Select_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleOpened");

	UMainMenu_C_HandleOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetLegalButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::SetLegalButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetLegalButtonVisibility");

	UMainMenu_C_SetLegalButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetSupportButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::SetSupportButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetSupportButtonVisibility");

	UMainMenu_C_SetSupportButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Handle Low Power Mode
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::Handle_Low_Power_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Handle Low Power Mode");

	UMainMenu_C_Handle_Low_Power_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateLowPowerMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::UpdateLowPowerMessage(bool PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateLowPowerMessage");

	UMainMenu_C_UpdateLowPowerMessage_Params params;
	params.PassThrough = PassThrough;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePawnSet
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandlePawnSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePawnSet");

	UMainMenu_C_HandlePawnSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateFriendCodes
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateFriendCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateFriendCodes");

	UMainMenu_C_UpdateFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetButtonSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseLargeButtons                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::SetButtonSize(bool UseLargeButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetButtonSize");

	UMainMenu_C_SetButtonSize_Params params;
	params.UseLargeButtons = UseLargeButtons;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.RecenterIfHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::RecenterIfHovered(class UWidget* InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.RecenterIfHovered");

	UMainMenu_C_RecenterIfHovered_Params params;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ConfigureSubGameWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::ConfigureSubGameWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ConfigureSubGameWidgets");

	UMainMenu_C_ConfigureSubGameWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Set Icon Button List Column Width
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::Set_Icon_Button_List_Column_Width(ECommonInputType InputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Set Icon Button List Column Width");

	UMainMenu_C_Set_Icon_Button_List_Column_Width_Params params;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::BindDelegates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindDelegates");

	UMainMenu_C_BindDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ProcessFriendCodes
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::ProcessFriendCodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ProcessFriendCodes");

	UMainMenu_C_ProcessFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnIssueFriendCodes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFriendCode             FriendCode                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenu_C::OnIssueFriendCodes(bool Success, struct FFriendCode* FriendCode)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnIssueFriendCodes");

	UMainMenu_C_OnIssueFriendCodes_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendCode != nullptr)
		*FriendCode = params.FriendCode;
}


// Function MainMenu.MainMenu_C.GetTotalNumFriendCodes
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Num_Codes                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::GetTotalNumFriendCodes(int* Num_Codes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.GetTotalNumFriendCodes");

	UMainMenu_C_GetTotalNumFriendCodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Num_Codes != nullptr)
		*Num_Codes = params.Num_Codes;
}


// Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFriendCode>     FriendCodes                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainMenu_C::OnQueryUnredeemedFriendCodes(bool Success, TArray<struct FFriendCode>* FriendCodes)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnQueryUnredeemedFriendCodes");

	UMainMenu_C_OnQueryUnredeemedFriendCodes_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendCodes != nullptr)
		*FriendCodes = params.FriendCodes;
}


// Function MainMenu.MainMenu_C.RefreshFriendCodesButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::RefreshFriendCodesButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.RefreshFriendCodesButton");

	UMainMenu_C_RefreshFriendCodesButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPartyState                New_State                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::HandlePartyStateChanged(EFortPartyState New_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyStateChanged");

	UMainMenu_C_HandlePartyStateChanged_Params params;
	params.New_State = New_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleMatchmakingStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleMatchmakingStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleMatchmakingStarted");

	UMainMenu_C_HandleMatchmakingStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLobbyDisconnected");

	UMainMenu_C_HandleLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLobbyStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleLobbyStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLobbyStarted");

	UMainMenu_C_HandleLobbyStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleMatchmakingComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMatchmakingCompleteResult     Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::HandleMatchmakingComplete(EMatchmakingCompleteResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleMatchmakingComplete");

	UMainMenu_C_HandleMatchmakingComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPartyType                     Party_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::HandlePartyTypeChanged(EPartyType Party_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyTypeChanged");

	UMainMenu_C_HandlePartyTypeChanged_Params params;
	params.Party_Type = Party_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyJoined
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandlePartyJoined()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyJoined");

	UMainMenu_C_HandlePartyJoined_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortUIFeature                 Feature                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureState            FeatureState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortUIFeatureStateReason      Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState, EFortUIFeatureStateReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartybarUIFeatureChanged");

	UMainMenu_C_HandlePartybarUIFeatureChanged_Params params;
	params.Feature = Feature;
	params.FeatureState = FeatureState;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RemovedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::HandleRemotePlayerRemoved(int RemovedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleRemotePlayerRemoved");

	UMainMenu_C_HandleRemotePlayerRemoved_Params params;
	params.RemovedIndex = RemovedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     NewMemberState                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenu_C::HandleRemotePlayerStateChanged(struct FFortTeamMemberInfo NewMemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleRemotePlayerStateChanged");

	UMainMenu_C_HandleRemotePlayerStateChanged_Params params;
	params.NewMemberState = NewMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandlePartyLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandlePartyLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandlePartyLeft");

	UMainMenu_C_HandlePartyLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     MemberState                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMainMenu_C::HandleLocalPlayerStateChanged(struct FFortTeamMemberInfo* MemberState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleLocalPlayerStateChanged");

	UMainMenu_C_HandleLocalPlayerStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MemberState != nullptr)
		*MemberState = params.MemberState;
}


// Function MainMenu.MainMenu_C.SetPrivacyButtonData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Button_Text                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenu_C::SetPrivacyButtonData(class UTexture2D* Image, struct FText Button_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetPrivacyButtonData");

	UMainMenu_C_SetPrivacyButtonData_Params params;
	params.Image = Image;
	params.Button_Text = Button_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdatePrivacyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPartyType                     Overide_Party_Type             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Use_Overide_Party_Type         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::UpdatePrivacyButton(EPartyType Overide_Party_Type, bool Use_Overide_Party_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdatePrivacyButton");

	UMainMenu_C_UpdatePrivacyButton_Params params;
	params.Overide_Party_Type = Overide_Party_Type;
	params.Use_Overide_Party_Type = Use_Overide_Party_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.IsOutpostOwner
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           OutpostOwner                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::IsOutpostOwner(bool* OutpostOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.IsOutpostOwner");

	UMainMenu_C_IsOutpostOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutpostOwner != nullptr)
		*OutpostOwner = params.OutpostOwner;
}


// Function MainMenu.MainMenu_C.ProcessPartyBar
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::ProcessPartyBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ProcessPartyBar");

	UMainMenu_C_ProcessPartyBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateButtonStates
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateButtonStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateButtonStates");

	UMainMenu_C_UpdateButtonStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateDescriptionText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   HelpText                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UMainMenu_C::UpdateDescriptionText(struct FText HelpText)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateDescriptionText");

	UMainMenu_C_UpdateDescriptionText_Params params;
	params.HelpText = HelpText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.InitializeMainMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::InitializeMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.InitializeMainMenu");

	UMainMenu_C_InitializeMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetupTestUI
// (Public, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::SetupTestUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetupTestUI");

	UMainMenu_C_SetupTestUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.DialogResult");

	UMainMenu_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete");

	UMainMenu_C_OnComplete_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_F4FDD57C433534964F91CEA573640043
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_F4FDD57C433534964F91CEA573640043(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_F4FDD57C433534964F91CEA573640043");

	UMainMenu_C_OnComplete_F4FDD57C433534964F91CEA573640043_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_EA68C188494ED222629C9EA23005B3E8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_EA68C188494ED222629C9EA23005B3E8(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_EA68C188494ED222629C9EA23005B3E8");

	UMainMenu_C_OnComplete_EA68C188494ED222629C9EA23005B3E8_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_A0EE53B440EA88311754E3988CB20A51
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_A0EE53B440EA88311754E3988CB20A51(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_A0EE53B440EA88311754E3988CB20A51");

	UMainMenu_C_OnComplete_A0EE53B440EA88311754E3988CB20A51_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_BF542C8148A522CA2B86D2B79E3DE45F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_BF542C8148A522CA2B86D2B79E3DE45F(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_BF542C8148A522CA2B86D2B79E3DE45F");

	UMainMenu_C_OnComplete_BF542C8148A522CA2B86D2B79E3DE45F_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_B4219C334180ECD39A1111ADFDFD0134
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_B4219C334180ECD39A1111ADFDFD0134(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_B4219C334180ECD39A1111ADFDFD0134");

	UMainMenu_C_OnComplete_B4219C334180ECD39A1111ADFDFD0134_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnComplete_FD193BA749C77FF415E2E881281A10CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*             UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::OnComplete_FD193BA749C77FF415E2E881281A10CE(class UUserWidget* UserWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnComplete_FD193BA749C77FF415E2E881281A10CE");

	UMainMenu_C_OnComplete_FD193BA749C77FF415E2E881281A10CE_Params params;
	params.UserWidget = UserWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.LeaveGameHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::LeaveGameHovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.LeaveGameHovered");

	UMainMenu_C_LeaveGameHovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindLeaveHovered
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::BindLeaveHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindLeaveHovered");

	UMainMenu_C_BindLeaveHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BindLeaveUnhovered
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::BindLeaveUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BindLeaveUnhovered");

	UMainMenu_C_BindLeaveUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__Legal_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Legal_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__Legal_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__LogoutButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LogoutButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__LogoutButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonOutpostPermissions_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__PrivacyButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__PrivacyButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__PrivacyButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__BoostsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__BoostsButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__BoostsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__InviteCodesButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonCredits_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonCredits_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonCredits_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleChangeGameModeHovered
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleChangeGameModeHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleChangeGameModeHovered");

	UMainMenu_C_HandleChangeGameModeHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::HandleChangeGameModeUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.HandleChangeGameModeUnhovered");

	UMainMenu_C_HandleChangeGameModeUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__AthenaPartyPrivacyButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__HelpButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__HelpButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__HelpButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonSupport_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonSupport_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonSupport_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Challenges_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__Challenges_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Challenges_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__Challenges_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__TeleportToIslandDock_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__TeleportToLobbyIslandButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.LeaveUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::LeaveUnhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.LeaveUnhovered");

	UMainMenu_C_LeaveUnhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__TeamSelectButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__RespawnButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__RespawnButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__RespawnButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__RespawnButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__CodeOfConduct_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__FriendsListButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__FriendsListButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__FriendsListButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__FriendsListButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MyIsland_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__MyIsland_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MyIsland_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__MyIsland_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__MinigameButtons_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MinigameButtons_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__MinigameButtons_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonHUDLayoutTool_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ButtonBacchusHelp_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Construct");

	UMainMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__Feedback_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__Feedback_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__Feedback_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.SetCenterWidget
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::SetCenterWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.SetCenterWidget");

	UMainMenu_C_SetCenterWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__TestUIButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__TestUIButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__TestUIButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMainMenu_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Destruct");

	UMainMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Handle Game Mode Unhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::Handle_Game_Mode_Unhovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Handle Game Mode Unhovered");

	UMainMenu_C_Handle_Game_Mode_Unhovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Handle Game Mode Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::Handle_Game_Mode_Hovered(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Handle Game Mode Hovered");

	UMainMenu_C_Handle_Game_Mode_Hovered_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::BndEvt__LeaveButton_K2Node_ComponentBoundEvent(bool Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__LeaveButton_K2Node_ComponentBoundEvent_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__IconTextButton_C");

	UMainMenu_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__MessagesButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__MessagesButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__MessagesButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__AccountMergeInfoButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMainMenu_C::BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent");

	UMainMenu_C_BndEvt__DailyRewardsButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.UpdateMinigameButtons
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::UpdateMinigameButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.UpdateMinigameButtons");

	UMainMenu_C_UpdateMinigameButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.Bind To State Change Delegate
// (BlueprintCallable, BlueprintEvent)

void UMainMenu_C::Bind_To_State_Change_Delegate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.Bind To State Change Delegate");

	UMainMenu_C_Bind_To_State_Change_Delegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnMinigameStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMinigameState             MinigameState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::OnMinigameStateChanged(EFortMinigameState MinigameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnMinigameStateChanged");

	UMainMenu_C_OnMinigameStateChanged_Params params;
	params.MinigameState = MinigameState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMainMenu_C::ExecuteUbergraph_MainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu");

	UMainMenu_C_ExecuteUbergraph_MainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnRequestClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::OnRequestClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnRequestClose__DelegateSignature");

	UMainMenu_C_OnRequestClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnRequestShowPlayerReportWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::OnRequestShowPlayerReportWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnRequestShowPlayerReportWidget__DelegateSignature");

	UMainMenu_C_OnRequestShowPlayerReportWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnRequestShowSocialWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::OnRequestShowSocialWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnRequestShowSocialWidget__DelegateSignature");

	UMainMenu_C_OnRequestShowSocialWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UMainMenu_C::OnRequestShowFeedbackWidget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMenu.MainMenu_C.OnRequestShowFeedbackWidget__DelegateSignature");

	UMainMenu_C_OnRequestShowFeedbackWidget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
