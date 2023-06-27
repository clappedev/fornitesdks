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

// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSubtitleText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::UpdateSubtitleText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSubtitleText");

	UPlayerSurveyPanelContents_C_UpdateSubtitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FocusDefaultWidgetForCurrentQuestion
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::FocusDefaultWidgetForCurrentQuestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FocusDefaultWidgetForCurrentQuestion");

	UPlayerSurveyPanelContents_C_FocusDefaultWidgetForCurrentQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ShouldShowConfirmCancelDialog
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::ShouldShowConfirmCancelDialog(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ShouldShowConfirmCancelDialog");

	UPlayerSurveyPanelContents_C_ShouldShowConfirmCancelDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ResetSurvey
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::ResetSurvey()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ResetSurvey");

	UPlayerSurveyPanelContents_C_ResetSurvey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.GetDefaultFocusedWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelContents_C::GetDefaultFocusedWidget(class UWidget** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelContents_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleQuestionChanged(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionChanged");

	UPlayerSurveyPanelContents_C_HandleQuestionChanged_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::UpdateQuestionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionText");

	UPlayerSurveyPanelContents_C_UpdateQuestionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleAnswerChanged
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleAnswerChanged(class UObject* Source, struct FFortPlayerSurveyAnswerContainerChangeEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleAnswerChanged");

	UPlayerSurveyPanelContents_C_HandleAnswerChanged_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventInfo != nullptr)
		*EventInfo = params.EventInfo;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateNextButtonState
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::UpdateNextButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateNextButtonState");

	UPlayerSurveyPanelContents_C_UpdateNextButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNumQuestionsChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleNumQuestionsChanged(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNumQuestionsChanged");

	UPlayerSurveyPanelContents_C_HandleNumQuestionsChanged_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNavigationStateChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleNavigationStateChanged(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleNavigationStateChanged");

	UPlayerSurveyPanelContents_C_HandleNavigationStateChanged_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleIndexChanged
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleIndexChanged(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleIndexChanged");

	UPlayerSurveyPanelContents_C_HandleIndexChanged_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FinishSurvey
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPlayerSurveyFinishReason  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::FinishSurvey(EFortPlayerSurveyFinishReason Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.FinishSurvey");

	UPlayerSurveyPanelContents_C_FinishSurvey_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSurveyDescription
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::UpdateSurveyDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateSurveyDescription");

	UPlayerSurveyPanelContents_C_UpdateSurveyDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionNumberLabel
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::UpdateQuestionNumberLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.UpdateQuestionNumberLabel");

	UPlayerSurveyPanelContents_C_UpdateQuestionNumberLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.DialogResult
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortDialogResult              Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ResultName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::DialogResult(EFortDialogResult Result, struct FName ResultName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.DialogResult");

	UPlayerSurveyPanelContents_C_DialogResult_Params params;
	params.Result = Result;
	params.ResultName = ResultName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContents_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.Construct");

	UPlayerSurveyPanelContents_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleSurveyChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContents_C::HandleSurveyChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleSurveyChanged");

	UPlayerSurveyPanelContents_C_HandleSurveyChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionsChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::HandleQuestionsChanged(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleQuestionsChanged");

	UPlayerSurveyPanelContents_C_HandleQuestionsChanged_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContents_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnInitialized");

	UPlayerSurveyPanelContents_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelContents_C::BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent");

	UPlayerSurveyPanelContents_C_BndEvt__NextQuestionButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__FinishButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelContents_C::BndEvt__FinishButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__FinishButton_K2Node_ComponentBoundEvent");

	UPlayerSurveyPanelContents_C_BndEvt__FinishButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelContents_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent");

	UPlayerSurveyPanelContents_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleDescriptionChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContents_C::HandleDescriptionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.HandleDescriptionChanged");

	UPlayerSurveyPanelContents_C_HandleDescriptionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ExecuteUbergraph_PlayerSurveyPanelContents
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContents_C::ExecuteUbergraph_PlayerSurveyPanelContents(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.ExecuteUbergraph_PlayerSurveyPanelContents");

	UPlayerSurveyPanelContents_C_ExecuteUbergraph_PlayerSurveyPanelContents_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnSurveyEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContents_C::OnSurveyEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContents.PlayerSurveyPanelContents_C.OnSurveyEnded__DelegateSignature");

	UPlayerSurveyPanelContents_C_OnSurveyEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
