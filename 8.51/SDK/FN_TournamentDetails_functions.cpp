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

// Function TournamentDetails.TournamentDetails_C.OnHandleBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bResult                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::OnHandleBack(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.OnHandleBack");

	UTournamentDetails_C_OnHandleBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function TournamentDetails.TournamentDetails_C.RefreshViolators
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::RefreshViolators()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshViolators");

	UTournamentDetails_C_RefreshViolators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.Handle_Back
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PassThrough                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::Handle_Back(bool* PassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.Handle_Back");

	UTournamentDetails_C_Handle_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PassThrough != nullptr)
		*PassThrough = params.PassThrough;
}


// Function TournamentDetails.TournamentDetails_C.RefreshDetailsPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::RefreshDetailsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshDetailsPanel");

	UTournamentDetails_C_RefreshDetailsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.RefreshOverviewPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::RefreshOverviewPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshOverviewPanel");

	UTournamentDetails_C_RefreshOverviewPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.RefreshScoringRules
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::RefreshScoringRules()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshScoringRules");

	UTournamentDetails_C_RefreshScoringRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.RefreshEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::RefreshEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshEvents");

	UTournamentDetails_C_RefreshEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.Refresh");

	UTournamentDetails_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UTournamentDetails_C::RefreshDataBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.RefreshDataBP");

	UTournamentDetails_C_RefreshDataBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventShowWindowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::EventShowWindowDetails(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventShowWindowDetails");

	UTournamentDetails_C_EventShowWindowDetails_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.PreConstruct");

	UTournamentDetails_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.AnimTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetAnimation*        Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PlaySpeed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::AnimTransition(bool In, class UWidgetAnimation* Animation, float PlaySpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.AnimTransition");

	UTournamentDetails_C_AnimTransition_Params params;
	params.In = In;
	params.Animation = Animation;
	params.PlaySpeed = PlaySpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTournamentDetails_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.Construct");

	UTournamentDetails_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.CloseTournamentDetails
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::CloseTournamentDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.CloseTournamentDetails");

	UTournamentDetails_C_CloseTournamentDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.CloseEventWindowDetails
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::CloseEventWindowDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.CloseEventWindowDetails");

	UTournamentDetails_C_CloseEventWindowDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventDeselectWindows
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 SelectedWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::EventDeselectWindows(class UWidget* SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventDeselectWindows");

	UTournamentDetails_C_EventDeselectWindows_Params params;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventCenterEventWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::EventCenterEventWindow(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventCenterEventWindow");

	UTournamentDetails_C_EventCenterEventWindow_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::Tick(struct FGeometry MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.Tick");

	UTournamentDetails_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventStartCentering
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::EventStartCentering()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventStartCentering");

	UTournamentDetails_C_EventStartCentering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventStopCentering
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::EventStopCentering()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventStopCentering");

	UTournamentDetails_C_EventStopCentering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::BndEvt__BackButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BndEvt__BackButton2_K2Node_ComponentBoundEvent");

	UTournamentDetails_C_BndEvt__BackButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent");

	UTournamentDetails_C_BndEvt__DetailsPanelButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent");

	UTournamentDetails_C_BndEvt__OverviewPanelButton2_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent");

	UTournamentDetails_C_BndEvt__Button_ViewLeaderboard_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventViewFullLeaderboard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 TournamentId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 EventId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTournamentDetails_C::EventViewFullLeaderboard(struct FString TournamentId, struct FString EventId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventViewFullLeaderboard");

	UTournamentDetails_C_EventViewFullLeaderboard_Params params;
	params.TournamentId = TournamentId;
	params.EventId = EventId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventToggleFullScreenContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::EventToggleFullScreenContent(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventToggleFullScreenContent");

	UTournamentDetails_C_EventToggleFullScreenContent_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventCloseLeaderboard
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::EventCloseLeaderboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventCloseLeaderboard");

	UTournamentDetails_C_EventCloseLeaderboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTournamentDetails_C::BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent");

	UTournamentDetails_C_BndEvt__Button_EnableMFA_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventViewPayout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 EventWindowId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UTournamentDetails_C::EventViewPayout(struct FString EventWindowId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventViewPayout");

	UTournamentDetails_C_EventViewPayout_Params params;
	params.EventWindowId = EventWindowId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.EventclosePayout
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::EventclosePayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.EventclosePayout");

	UTournamentDetails_C_EventclosePayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.No payouts
// (BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::No_payouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.No payouts");

	UTournamentDetails_C_No_payouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.OnActivateScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::OnActivateScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.OnActivateScreen");

	UTournamentDetails_C_OnActivateScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.ExecuteUbergraph_TournamentDetails
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTournamentDetails_C::ExecuteUbergraph_TournamentDetails(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.ExecuteUbergraph_TournamentDetails");

	UTournamentDetails_C_ExecuteUbergraph_TournamentDetails_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TournamentDetails.TournamentDetails_C.BackActionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTournamentDetails_C::BackActionSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TournamentDetails.TournamentDetails_C.BackActionSelected__DelegateSignature");

	UTournamentDetails_C_BackActionSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
