// Fortnite (8.51) SDK
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

// Function AthenaLobby.AthenaLobby_C.OnInputManageSquads
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputManageSquads(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputManageSquads");

	UAthenaLobby_C_OnInputManageSquads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::ConfigureGenericLinkButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton");

	UAthenaLobby_C_ConfigureGenericLinkButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnKeybindsChanged");

	UAthenaLobby_C_OnKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.CloseEmotePicker
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::CloseEmotePicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.CloseEmotePicker");

	UAthenaLobby_C_CloseEmotePicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShowPicker");

	UAthenaLobby_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HandleOnPlayerLeaveUpdatePlayerPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::HandleOnPlayerLeaveUpdatePlayerPanel(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HandleOnPlayerLeaveUpdatePlayerPanel");

	UAthenaLobby_C_HandleOnPlayerLeaveUpdatePlayerPanel_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputEmote
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputEmote(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputEmote");

	UAthenaLobby_C_OnInputEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function AthenaLobby.AthenaLobby_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaLobby_C::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnKeyUp");

	UAthenaLobby_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobby.AthenaLobby_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaLobby_C::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnKeyDown");

	UAthenaLobby_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobby.AthenaLobby_C.OnPartyFinderClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* ActivatablePanel               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLobby_C::OnPartyFinderClosed(class UCommonActivatablePanel* ActivatablePanel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnPartyFinderClosed");

	UAthenaLobby_C_OnPartyFinderClosed_Params params;
	params.ActivatablePanel = ActivatablePanel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::StartAthenaLobbyMusic()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic");

	UAthenaLobby_C_StartAthenaLobbyMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HighlightsCountChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::HighlightsCountChanged(int NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HighlightsCountChanged");

	UAthenaLobby_C_HighlightsCountChanged_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShowModalNews
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::ShowModalNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShowModalNews");

	UAthenaLobby_C_ShowModalNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputNews
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputNews(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputNews");

	UAthenaLobby_C_OnInputNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaLobby.AthenaLobby_C.OnSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnSelect(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnSelect");

	UAthenaLobby_C_OnSelect_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bCanNavigatePlayers            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::CanNavigatePlayers(bool* bCanNavigatePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.CanNavigatePlayers");

	UAthenaLobby_C_CanNavigatePlayers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCanNavigatePlayers != nullptr)
		*bCanNavigatePlayers = params.bCanNavigatePlayers;
}


// Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::SetHoveredPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.SetHoveredPlayer");

	UAthenaLobby_C_SetHoveredPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverNextPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::HoverNextPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverNextPlayer");

	UAthenaLobby_C_HoverNextPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::HoverPreviousPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.HoverPreviousPlayer");

	UAthenaLobby_C_HoverPreviousPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddPlay
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddPlay(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddPlay");

	UAthenaLobby_C_ShouldAddPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.InitializeInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::InitializeInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeInput");

	UAthenaLobby_C_InitializeInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadUnhovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadUnhovered");

	UAthenaLobby_C_OnLobbyPlayerPadUnhovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerPadHovered(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerPadHovered");

	UAthenaLobby_C_OnLobbyPlayerPadHovered_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyPlayerGadgetsClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyPlayerGadgetsClicked");

	UAthenaLobby_C_OnLobbyPlayerGadgetsClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnLobbyEmptyPlayerClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyEmptyPlayerClicked");

	UAthenaLobby_C_OnLobbyEmptyPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnLobbyDisconnected()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnLobbyDisconnected");

	UAthenaLobby_C_OnLobbyDisconnected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.RefreshLaunch
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::RefreshLaunch()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshLaunch");

	UAthenaLobby_C_RefreshLaunch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UAthenaLobby_C::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnMouseButtonDown");

	UAthenaLobby_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddScroll
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddScroll(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddScroll");

	UAthenaLobby_C_ShouldAddScroll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.ShouldAddCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bShouldAdd                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ShouldAddCancel(bool* bShouldAdd)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShouldAddCancel");

	UAthenaLobby_C_ShouldAddCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShouldAdd != nullptr)
		*bShouldAdd = params.bShouldAdd;
}


// Function AthenaLobby.AthenaLobby_C.RefreshInput
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::RefreshInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.RefreshInput");

	UAthenaLobby_C_RefreshInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputAbandon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputAbandon(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputAbandon");

	UAthenaLobby_C_OnInputAbandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Register                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::InitializeContextEvents(bool Register)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.InitializeContextEvents");

	UAthenaLobby_C_InitializeContextEvents_Params params;
	params.Register = Register;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Focus");

	UAthenaLobby_C_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnInputCancel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bCommited                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnInputCancel(bool* bCommited)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnInputCancel");

	UAthenaLobby_C_OnInputCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bCommited != nullptr)
		*bCommited = params.bCommited;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmptySlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnTeamMemberRemoved(int EmptySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberRemoved");

	UAthenaLobby_C_OnTeamMemberRemoved_Params params;
	params.EmptySlot = EmptySlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     TeamMemberInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaLobby_C::OnTeamMemberAdded(struct FFortTeamMemberInfo TeamMemberInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnTeamMemberAdded");

	UAthenaLobby_C_OnTeamMemberAdded_Params params;
	params.TeamMemberInfo = TeamMemberInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            UpdatedPlayerIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::Refresh(int UpdatedPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Refresh");

	UAthenaLobby_C_Refresh_Params params;
	params.UpdatedPlayerIndex = UpdatedPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Initialize");

	UAthenaLobby_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.DialogResult");

	UAthenaLobby_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnFailure_DA5E62624D068772EA890193344BA4AE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE");

	UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::OnSuccess_DA5E62624D068772EA890193344BA4AE()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE");

	UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnEndCursorOverPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnEndCursorOverPlayer");

	UAthenaLobby_C_OnEndCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationLeft
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::OnNavigationLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationLeft");

	UAthenaLobby_C_OnNavigationLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationRight
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::OnNavigationRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationRight");

	UAthenaLobby_C_OnNavigationRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLobby_C::BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent");

	UAthenaLobby_C_BndEvt__ButtonTMPTEST_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UWidget*                 ActiveWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            ActiveWidgetIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent(class UWidget* ActiveWidget, int ActiveWidgetIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent");

	UAthenaLobby_C_BndEvt__SwitcherDetails_K2Node_ComponentBoundEvent_Params params;
	params.ActiveWidget = ActiveWidget;
	params.ActiveWidgetIndex = ActiveWidgetIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnPlayerClicked
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnPlayerClicked(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnPlayerClicked");

	UAthenaLobby_C_OnPlayerClicked_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnBeginCursorOverPlayer(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnBeginCursorOverPlayer");

	UAthenaLobby_C_OnBeginCursorOverPlayer_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UAthenaLobby_C::BndEvt__PlayerPanel_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__PlayerPanel_K2Node_ComponentBoundEvent");

	UAthenaLobby_C_BndEvt__PlayerPanel_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLobby_C::BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent");

	UAthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.NewsPanelClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel* Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaLobby_C::NewsPanelClosed(class UCommonActivatablePanel* Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.NewsPanelClosed");

	UAthenaLobby_C_NewsPanelClosed_Params params;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Event Abandon
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Event_Abandon()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Event Abandon");

	UAthenaLobby_C_Event_Abandon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLobby_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Construct");

	UAthenaLobby_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnActivated");

	UAthenaLobby_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnNavigationUp
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::OnNavigationUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnNavigationUp");

	UAthenaLobby_C_OnNavigationUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaLobby_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Destruct");

	UAthenaLobby_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShowDailyNews
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::ShowDailyNews()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShowDailyNews");

	UAthenaLobby_C_ShowDailyNews_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.AcceptPartySuggestion
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::AcceptPartySuggestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.AcceptPartySuggestion");

	UAthenaLobby_C_AcceptPartySuggestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.tester
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::tester()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.tester");

	UAthenaLobby_C_tester_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ShowMobileAutoFireScreen
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::ShowMobileAutoFireScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ShowMobileAutoFireScreen");

	UAthenaLobby_C_ShowMobileAutoFireScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaLobby_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnDeactivated");

	UAthenaLobby_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStoreToastRequest*      StoreUpdatedRequest            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated");

	UAthenaLobby_C_DisplayStoreUpdated_Params params;
	params.StoreUpdatedRequest = StoreUpdatedRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.AttemptToShowToast
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::AttemptToShowToast()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.AttemptToShowToast");

	UAthenaLobby_C_AttemptToShowToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::TryToastAgainNextFrame()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame");

	UAthenaLobby_C_TryToastAgainNextFrame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ClosePlayerPanel
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::ClosePlayerPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ClosePlayerPanel");

	UAthenaLobby_C_ClosePlayerPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent
// (BlueprintEvent)

void UAthenaLobby_C::BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent");

	UAthenaLobby_C_BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortLobbyType                 LobbyType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortPlaylistAthena*     PlaylistData                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::OnPlaylistChanged(EFortLobbyType LobbyType, class UFortPlaylistAthena* PlaylistData)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged");

	UAthenaLobby_C_OnPlaylistChanged_Params params;
	params.LobbyType = LobbyType;
	params.PlaylistData = PlaylistData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.LoadLobbyBackground
// (Event, Public, BlueprintEvent)

void UAthenaLobby_C::LoadLobbyBackground()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.LoadLobbyBackground");

	UAthenaLobby_C_LoadLobbyBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.Load Lobby Background Recursive
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::Load_Lobby_Background_Recursive()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.Load Lobby Background Recursive");

	UAthenaLobby_C_Load_Lobby_Background_Recursive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.UpdatePartnerLobyInfo
// (BlueprintCallable, BlueprintEvent)

void UAthenaLobby_C::UpdatePartnerLobyInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.UpdatePartnerLobyInfo");

	UAthenaLobby_C_UpdatePartnerLobyInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby");

	UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
