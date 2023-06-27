// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArgonUI.ArgonWidgetBase.UnbindFromMutator_BP
// (Event, Protected, BlueprintEvent)

void UArgonWidgetBase::UnbindFromMutator_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonWidgetBase.UnbindFromMutator_BP");

	UArgonWidgetBase_UnbindFromMutator_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonWidgetBase.SetPlayerPortrait
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AFortPlayerStateAthena*  Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFortLazyImage*          PortraitImage                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UArgonWidgetBase::SetPlayerPortrait(class AFortPlayerStateAthena* Player, class UFortLazyImage* PortraitImage)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonWidgetBase.SetPlayerPortrait");

	UArgonWidgetBase_SetPlayerPortrait_Params params;
	params.Player = Player;
	params.PortraitImage = PortraitImage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  Team                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AFortPlayerStateAthena*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AFortPlayerStateAthena*> UArgonWidgetBase::GetTeamPlayerStates(unsigned char Team)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonWidgetBase.GetTeamPlayerStates");

	UArgonWidgetBase_GetTeamPlayerStates_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArgonUI.ArgonWidgetBase.BindToMutator_BP
// (Event, Protected, BlueprintEvent)

void UArgonWidgetBase::BindToMutator_BP()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonWidgetBase.BindToMutator_BP");

	UArgonWidgetBase_BindToMutator_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FArgonFinishedPlayerInfo FinishedPlayerInfo             (ConstParm, Parm, OutParm, ReferenceParm)

void UArgonHUDAlertWidget::OnPlayerFinished(const struct FArgonFinishedPlayerInfo& FinishedPlayerInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonHUDAlertWidget.OnPlayerFinished");

	UArgonHUDAlertWidget_OnPlayerFinished_Params params;
	params.FinishedPlayerInfo = FinishedPlayerInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonHUDAlertWidget.ForceHidePlayerFinishedMessage
// (Event, Protected, BlueprintEvent)

void UArgonHUDAlertWidget::ForceHidePlayerFinishedMessage()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonHUDAlertWidget.ForceHidePlayerFinishedMessage");

	UArgonHUDAlertWidget_ForceHidePlayerFinishedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FArgonFinishedPlayerInfo FinishedInfo                   (Parm)

void UArgonHUDAlertWidget::DisplayPlayerFinishedMessage(const struct FArgonFinishedPlayerInfo& FinishedInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonHUDAlertWidget.DisplayPlayerFinishedMessage");

	UArgonHUDAlertWidget_DisplayPlayerFinishedMessage_Params params;
	params.FinishedInfo = FinishedInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonLeaderboardWidget.UpdateLeaderboardUI
// (Event, Protected, BlueprintEvent)

void UArgonLeaderboardWidget::UpdateLeaderboardUI()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonLeaderboardWidget.UpdateLeaderboardUI");

	UArgonLeaderboardWidget_UpdateLeaderboardUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonLeaderboardWidget.OnRacingPlayersByPlaceChanged
// (Final, Native, Private)

void UArgonLeaderboardWidget::OnRacingPlayersByPlaceChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonLeaderboardWidget.OnRacingPlayersByPlaceChanged");

	UArgonLeaderboardWidget_OnRacingPlayersByPlaceChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArgonUI.ArgonLeaderboardWidget.OnAnyTeamTicketCountChanged
// (Final, Native, Private)

void UArgonLeaderboardWidget::OnAnyTeamTicketCountChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ArgonUI.ArgonLeaderboardWidget.OnAnyTeamTicketCountChanged");

	UArgonLeaderboardWidget_OnAnyTeamTicketCountChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
