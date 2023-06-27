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

// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Member_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::OnPartyDataChanged(struct FFortTeamMemberInfo* Member_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnPartyDataChanged");

	ATeamMemberPedestal_C_OnPartyDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Member_Info != nullptr)
		*Member_Info = params.Member_Info;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo     Team_Member_Info               (BlueprintVisible, BlueprintReadOnly, Parm)

void ATeamMemberPedestal_C::OnTeamMemberStateChanged(struct FFortTeamMemberInfo Team_Member_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnTeamMemberStateChanged");

	ATeamMemberPedestal_C_OnTeamMemberStateChanged_Params params;
	params.Team_Member_Info = Team_Member_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::PlayLobbyAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.PlayLobbyAnimation");

	ATeamMemberPedestal_C_PlayLobbyAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::RefreshWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.RefreshWidgets");

	ATeamMemberPedestal_C_RefreshWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFrontEndCamera                New_Camera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFrontEndCamera                Old_Camera                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnFrontEndCameraChanged(EFrontEndCamera New_Camera, EFrontEndCamera Old_Camera)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnFrontEndCameraChanged");

	ATeamMemberPedestal_C_OnFrontEndCameraChanged_Params params;
	params.New_Camera = New_Camera;
	params.Old_Camera = Old_Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeContextEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeContextEvents");

	ATeamMemberPedestal_C_InitializeContextEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIsHovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::HandleHoverInputActions(bool bIsHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleHoverInputActions");

	ATeamMemberPedestal_C_HandleHoverInputActions_Params params;
	params.bIsHovered = bIsHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs
// (Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::InitializeInputActionRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.InitializeInputActionRefs");

	ATeamMemberPedestal_C_InitializeInputActionRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.UserConstructionScript");

	ATeamMemberPedestal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__FinishedFunc
// (BlueprintEvent)

void ATeamMemberPedestal_C::FadeInPodium__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__FinishedFunc");

	ATeamMemberPedestal_C_FadeInPodium__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__UpdateFunc
// (BlueprintEvent)

void ATeamMemberPedestal_C::FadeInPodium__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.FadeInPodium__UpdateFunc");

	ATeamMemberPedestal_C_FadeInPodium__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9");

	ATeamMemberPedestal_C_OnLoaded_D1FFD29E4F2735025D7C19B62CBA97B9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabClosed(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabClosed");

	ATeamMemberPedestal_C_HandleClientEvent_StoreTabClosed_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::HandleClientEvent_StoreTabSelected(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HandleClientEvent_StoreTabSelected");

	ATeamMemberPedestal_C_HandleClientEvent_StoreTabSelected_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.ReceiveBeginPlay");

	ATeamMemberPedestal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnHovered");

	ATeamMemberPedestal_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnUnhovered");

	ATeamMemberPedestal_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsInMatch                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnIsCurrentlyInMatchChanged(bool bIsInMatch)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnIsCurrentlyInMatchChanged");

	ATeamMemberPedestal_C_OnIsCurrentlyInMatchChanged_Params params;
	params.bIsInMatch = bIsInMatch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsPopulated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwningSquadContainsLocalPlayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnPedestalIsPopulatedChanged");

	ATeamMemberPedestal_C_OnPedestalIsPopulatedChanged_Params params;
	params.bIsPopulated = bIsPopulated;
	params.bOwningSquadContainsLocalPlayer = bOwningSquadContainsLocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.SpawnPad
// (BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::SpawnPad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.SpawnPad");

	ATeamMemberPedestal_C_SpawnPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.HidePad
// (BlueprintCallable, BlueprintEvent)

void ATeamMemberPedestal_C::HidePad()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.HidePad");

	ATeamMemberPedestal_C_HidePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnGameReadinessChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EGameReadiness                 GameReadiness                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnGameReadinessChanged(EGameReadiness GameReadiness)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnGameReadinessChanged");

	ATeamMemberPedestal_C_OnGameReadinessChanged_Params params;
	params.GameReadiness = GameReadiness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnNewSquadEstablished
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bMultipleSquadsPopulated       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOwningSquadContainsLocalPlayer (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAthenaTeamDisplayInfo  OwningSquadStyle               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATeamMemberPedestal_C::OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, struct FAthenaTeamDisplayInfo OwningSquadStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnNewSquadEstablished");

	ATeamMemberPedestal_C_OnNewSquadEstablished_Params params;
	params.bMultipleSquadsPopulated = bMultipleSquadsPopulated;
	params.bOwningSquadContainsLocalPlayer = bOwningSquadContainsLocalPlayer;
	params.OwningSquadStyle = OwningSquadStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnOwningPedestalGroupEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            SquadIdx                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSquadHasLocalPlayer           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPopulated                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::OnOwningPedestalGroupEstablished(int SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnOwningPedestalGroupEstablished");

	ATeamMemberPedestal_C_OnOwningPedestalGroupEstablished_Params params;
	params.SquadIdx = SquadIdx;
	params.bSquadHasLocalPlayer = bSquadHasLocalPlayer;
	params.bIsPopulated = bIsPopulated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnConnectedToCampaignLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnConnectedToCampaignLobby");

	ATeamMemberPedestal_C_OnConnectedToCampaignLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked
// (Event, Protected, BlueprintEvent)

void ATeamMemberPedestal_C::OnItemClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.OnItemClicked");

	ATeamMemberPedestal_C_OnItemClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::ExecuteUbergraph_TeamMemberPedestal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.ExecuteUbergraph_TeamMemberPedestal");

	ATeamMemberPedestal_C_ExecuteUbergraph_TeamMemberPedestal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATeamMemberPedestal_C::Debug_OnFriendLFGRequest__DelegateSignature(int PlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamMemberPedestal.TeamMemberPedestal_C.Debug_OnFriendLFGRequest__DelegateSignature");

	ATeamMemberPedestal_C_Debug_OnFriendLFGRequest__DelegateSignature_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
