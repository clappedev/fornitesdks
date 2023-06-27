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

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnswerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandlePlayerRequestAnswer(int AnswerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandlePlayerRequestAnswer");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandlePlayerRequestAnswer_Params params;
	params.AnswerIndex = AnswerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidgetPostDummy(EUINavigation Navigation)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentAnswer
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsSet                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FFortPlayerSurveyAnswerMultipleChoice Result                         (Parm, OutParm)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetCurrentAnswer(bool* IsSet, struct FFortPlayerSurveyAnswerMultipleChoice* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentAnswer");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSet != nullptr)
		*IsSet = params.IsSet;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateAnswerDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateAnswerDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateAnswerDisplay");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateAnswerDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentQuestion
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerSurveyQuestionMultipleChoice* Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetCurrentQuestion(class UFortPlayerSurveyQuestionMultipleChoice** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetCurrentQuestion");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetCurrentQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateRatingButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateRatingButtons");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateRatingButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.UpdateText");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonClicked(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQAChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleQAChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQAChanged");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQAChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.Construct");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleButtonFocused(int ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleAnswerChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleAnswerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleAnswerChanged");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleAnswerChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleCommitCurrentAnswer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
