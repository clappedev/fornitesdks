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

// Function ReportPlayer.ReportPlayer_C.PlayBackgroundImageAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::PlayBackgroundImageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.PlayBackgroundImageAnim");

	UReportPlayer_C_PlayBackgroundImageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.ResetAnims
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ResetAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.ResetAnims");

	UReportPlayer_C_ResetAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.ResetSwitcherStates
// (Public, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ResetSwitcherStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.ResetSwitcherStates");

	UReportPlayer_C_ResetSwitcherStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.ClearStackingEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UReportPlayer_C::ClearStackingEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.ClearStackingEntries");

	UReportPlayer_C_ClearStackingEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.RemoveStackedEntriesByStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           CurrentStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::RemoveStackedEntriesByStep(EPlayerReportingStep CurrentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.RemoveStackedEntriesByStep");

	UReportPlayer_C_RemoveStackedEntriesByStep_Params params;
	params.CurrentStep = CurrentStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.HandleDisplayNewReportPlayerEntryItemSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           DisplayedStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   DisplayedText                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UReportPlayer_C::HandleDisplayNewReportPlayerEntryItemSelection(EPlayerReportingStep DisplayedStep, struct FText DisplayedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.HandleDisplayNewReportPlayerEntryItemSelection");

	UReportPlayer_C_HandleDisplayNewReportPlayerEntryItemSelection_Params params;
	params.DisplayedStep = DisplayedStep;
	params.DisplayedText = DisplayedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.DisableTabsByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           CurStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::DisableTabsByCurrentStep(EPlayerReportingStep CurStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.DisableTabsByCurrentStep");

	UReportPlayer_C_DisableTabsByCurrentStep_Params params;
	params.CurStep = CurStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.HandleTabsByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           CurStep                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::HandleTabsByCurrentStep(EPlayerReportingStep CurStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.HandleTabsByCurrentStep");

	UReportPlayer_C_HandleTabsByCurrentStep_Params params;
	params.CurStep = CurStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.SetEnableTabButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIconTextButton_C*       InTabButton                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIsEnabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::SetEnableTabButton(class UIconTextButton_C* InTabButton, bool bIsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.SetEnableTabButton");

	UReportPlayer_C_SetEnableTabButton_Params params;
	params.InTabButton = InTabButton;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.EnableTabByCurrentStep
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           CurrentStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::EnableTabByCurrentStep(EPlayerReportingStep CurrentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.EnableTabByCurrentStep");

	UReportPlayer_C_EnableTabByCurrentStep_Params params;
	params.CurrentStep = CurrentStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.HandleBottomBarBackButtonClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Passhtrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::HandleBottomBarBackButtonClicked(bool* Passhtrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.HandleBottomBarBackButtonClicked");

	UReportPlayer_C_HandleBottomBarBackButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Passhtrough != nullptr)
		*Passhtrough = params.Passhtrough;
}


// Function ReportPlayer.ReportPlayer_C.OnLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::OnLoaded(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnLoaded");

	UReportPlayer_C_OnLoaded_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.Construct");

	UReportPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnTabClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::OnTabClicked(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnTabClicked");

	UReportPlayer_C_OnTabClicked_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UReportPlayer_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnActivated");

	UReportPlayer_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnPopulateView
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           CurrentStep                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::OnPopulateView(EPlayerReportingStep CurrentStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnPopulateView");

	UReportPlayer_C_OnPopulateView_Params params;
	params.CurrentStep = CurrentStep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__B_Tab_PlayerName_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__B_Tab_Reason_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__B_Tab_AdditionalInfo_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnListViewSelectionMade
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// EPlayerReportingStep           ReportingStep                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   SelectedText                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReportPlayer_C::OnListViewSelectionMade(EPlayerReportingStep ReportingStep, struct FText SelectedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnListViewSelectionMade");

	UReportPlayer_C_OnListViewSelectionMade_Params params;
	params.ReportingStep = ReportingStep;
	params.SelectedText = SelectedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Send_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__Button_Send_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__Button_Send_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__Button_Send_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent");

	UReportPlayer_C_BndEvt__Button_ReportFinished_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReportPlayer_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnInitialized");

	UReportPlayer_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.PreConstruct");

	UReportPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.OnFeedbackSentCallback
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::OnFeedbackSentCallback(bool Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.OnFeedbackSentCallback");

	UReportPlayer_C_OnFeedbackSentCallback_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.BndEvt__IconTextButton_C
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportPlayer_C::BndEvt__IconTextButton_C(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.BndEvt__IconTextButton_C");

	UReportPlayer_C_BndEvt__IconTextButton_C_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportPlayer_C::ExecuteUbergraph_ReportPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportPlayer.ReportPlayer_C.ExecuteUbergraph_ReportPlayer");

	UReportPlayer_C_ExecuteUbergraph_ReportPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
