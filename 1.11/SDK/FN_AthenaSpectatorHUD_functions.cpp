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

// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::SetupCameraMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetupCameraMode");

	UAthenaSpectatorHUD_C_SetupCameraMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.AddTeamMemberIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*  Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Team_Member_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::AddTeamMemberIndicator(class AFortPlayerStateAthena* Player_State, int Team_Member_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.AddTeamMemberIndicator");

	UAthenaSpectatorHUD_C_AddTeamMemberIndicator_Params params;
	params.Player_State = Player_State;
	params.Team_Member_Index = Team_Member_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag            HUDElementTagToCheck           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 HUDElement                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAthenaSpectatorHUD_C::CheckHUDElementVisibility(const struct FGameplayTag& HUDElementTagToCheck, struct FGameplayTagContainer* HiddenHUDElementTags, class UWidget** HUDElement)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CheckHUDElementVisibility");

	UAthenaSpectatorHUD_C_CheckHUDElementVisibility_Params params;
	params.HUDElementTagToCheck = HUDElementTagToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
	if (HUDElement != nullptr)
		*HUDElement = params.HUDElement;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDElementVisibilityChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   HiddenHUDElementTags           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorHUD_C::OnHUDElementVisibilityChanged(struct FGameplayTagContainer* HiddenHUDElementTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHUDElementVisibilityChanged");

	UAthenaSpectatorHUD_C_OnHUDElementVisibilityChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HiddenHUDElementTags != nullptr)
		*HiddenHUDElementTags = params.HiddenHUDElementTags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UAthenaSpectatorHUD_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PopContentWidgetInternal");

	UAthenaSpectatorHUD_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CreateInterestIndicatorWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::CreateInterestIndicatorWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.CreateInterestIndicatorWidget");

	UAthenaSpectatorHUD_C_CreateInterestIndicatorWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestRemoved
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleOnPointOfInterestRemoved(class AActor* PointOfInterest)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestRemoved");

	UAthenaSpectatorHUD_C_HandleOnPointOfInterestRemoved_Params params;
	params.PointOfInterest = PointOfInterest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PointOfInterest                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayText                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UTexture2D*              DisplayImage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleOnPointOfInterestAdded(class AActor* PointOfInterest, const struct FText& DisplayText, class UTexture2D* DisplayImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleOnPointOfInterestAdded");

	UAthenaSpectatorHUD_C_HandleOnPointOfInterestAdded_Params params;
	params.PointOfInterest = PointOfInterest;
	params.DisplayText = DisplayText;
	params.DisplayImage = DisplayImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPickerMode                Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreFirstAccept              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ShowPicker(EFortPickerMode Mode, int InitialOption, bool IgnoreFirstAccept)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ShowPicker");

	UAthenaSpectatorHUD_C_ShowPicker_Params params;
	params.Mode = Mode;
	params.InitialOption = InitialOption;
	params.IgnoreFirstAccept = IgnoreFirstAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HandleFocusChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleFocusChat");

	UAthenaSpectatorHUD_C_HandleFocusChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ToggleTopLevelMenu(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleTopLevelMenu");

	UAthenaSpectatorHUD_C_ToggleTopLevelMenu_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ToggleChat(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ToggleChat");

	UAthenaSpectatorHUD_C_ToggleChat_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::SetPersistentHUDContentVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.SetPersistentHUDContentVisibility");

	UAthenaSpectatorHUD_C_SetPersistentHUDContentVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InidicatorsEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleIndicatorModeChanged(bool InidicatorsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleIndicatorModeChanged");

	UAthenaSpectatorHUD_C_HandleIndicatorModeChanged_Params params;
	params.InidicatorsEnabled = InidicatorsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsTargeting                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnPlayerTargetingChanged(bool IsTargeting)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnPlayerTargetingChanged");

	UAthenaSpectatorHUD_C_OnPlayerTargetingChanged_Params params;
	params.IsTargeting = IsTargeting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HandleKeybindsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleKeybindsChanged");

	UAthenaSpectatorHUD_C_HandleKeybindsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHandleAction
// (HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply             Result                         (Parm, OutParm)
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnHandleAction(struct FEventReply* Result, bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnHandleAction");

	UAthenaSpectatorHUD_C_OnHandleAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             CursorModeContentCustomWidget  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleCursorModeChanged(bool IsEnabled, const struct FName& ActionName, class UUserWidget* CursorModeContentCustomWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleCursorModeChanged");

	UAthenaSpectatorHUD_C_HandleCursorModeChanged_Params params;
	params.IsEnabled = IsEnabled;
	params.ActionName = ActionName;
	params.CursorModeContentCustomWidget = CursorModeContentCustomWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnDeclined_96D6B69B40224C661B08D9B34525EE86
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::OnDeclined_96D6B69B40224C661B08D9B34525EE86()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnDeclined_96D6B69B40224C661B08D9B34525EE86");

	UAthenaSpectatorHUD_C_OnDeclined_96D6B69B40224C661B08D9B34525EE86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnConfirmed_96D6B69B40224C661B08D9B34525EE86
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::OnConfirmed_96D6B69B40224C661B08D9B34525EE86()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnConfirmed_96D6B69B40224C661B08D9B34525EE86");

	UAthenaSpectatorHUD_C_OnConfirmed_96D6B69B40224C661B08D9B34525EE86_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.QuestsCompleted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UFortQuestItem*>  Quests                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAthenaSpectatorHUD_C::QuestsCompleted(TArray<class UFortQuestItem*> Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.QuestsCompleted");

	UAthenaSpectatorHUD_C_QuestsCompleted_Params params;
	params.Quests = Quests;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnEnterState");

	UAthenaSpectatorHUD_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Construct");

	UAthenaSpectatorHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSpectatorHUD_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Destruct");

	UAthenaSpectatorHUD_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::HandleInputMethodChanged(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleInputMethodChanged");

	UAthenaSpectatorHUD_C_HandleInputMethodChanged_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature
// (BlueprintEvent)

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_8_StreamTimerExpired__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature
// (BlueprintEvent)

void UAthenaSpectatorHUD_C::BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature");

	UAthenaSpectatorHUD_C_BndEvt__BP_FortLiveStreamGrantWindowExpires_K2Node_ComponentBoundEvent_13_StreamTimerStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   FailedReason                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   FailureText                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorHUD_C::OnUnableToPerformAction(const struct FGameplayTagContainer& FailedReason, const struct FText& FailureText)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnUnableToPerformAction");

	UAthenaSpectatorHUD_C_OnUnableToPerformAction_Params params;
	params.FailedReason = FailedReason;
	params.FailureText = FailureText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::Prepare_Game_Over()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.Prepare Game Over");

	UAthenaSpectatorHUD_C_Prepare_Game_Over_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport  DeathReport                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaSpectatorHUD_C::On_Player_Died(const struct FFortPlayerDeathReport& DeathReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Died");

	UAthenaSpectatorHUD_C_On_Player_Died_Params params;
	params.DeathReport = DeathReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::PrepareToShowEndGameUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PrepareToShowEndGameUI");

	UAthenaSpectatorHUD_C_PrepareToShowEndGameUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::On_Player_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Player Won");

	UAthenaSpectatorHUD_C_On_Player_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::OnRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.OnRevived");

	UAthenaSpectatorHUD_C_OnRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::HandleRevived()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.HandleRevived");

	UAthenaSpectatorHUD_C_HandleRevived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won
// (BlueprintCallable, BlueprintEvent)

void UAthenaSpectatorHUD_C::On_Team_Won()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.On Team Won");

	UAthenaSpectatorHUD_C_On_Team_Won_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FContentPushState*      State                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorHUD_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.PushContentWidgetInternal");

	UAthenaSpectatorHUD_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSpectatorHUD_C::ExecuteUbergraph_AthenaSpectatorHUD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSpectatorHUD.AthenaSpectatorHUD_C.ExecuteUbergraph_AthenaSpectatorHUD");

	UAthenaSpectatorHUD_C_ExecuteUbergraph_AthenaSpectatorHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
