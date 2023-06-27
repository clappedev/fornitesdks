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

// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetCurrentQuestion
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerSurveyQuestion* Question                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetCurrentQuestion(class UFortPlayerSurveyQuestion** Question)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetCurrentQuestion");

	UPlayerSurveyPanelAnswerSelectorWidget_C_GetCurrentQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Question != nullptr)
		*Question = params.Question;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.PropagateCurrentQuestion
// (Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::PropagateCurrentQuestion()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.PropagateCurrentQuestion");

	UPlayerSurveyPanelAnswerSelectorWidget_C_PropagateCurrentQuestion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetSubtitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   Text                           (Parm, OutParm)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetSubtitleText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetSubtitleText");

	UPlayerSurveyPanelAnswerSelectorWidget_C_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.CommitCurrentAnswer
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::CommitCurrentAnswer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.CommitCurrentAnswer");

	UPlayerSurveyPanelAnswerSelectorWidget_C_CommitCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetDefaultFocusedWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 Result                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::GetDefaultFocusedWidget(class UWidget** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelAnswerSelectorWidget_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.SetCurrentChild
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyAnswerWidgetBase* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ForcePropagateQuestion         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool ForcePropagateQuestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.SetCurrentChild");

	UPlayerSurveyPanelAnswerSelectorWidget_C_SetCurrentChild_Params params;
	params.Widget = Widget;
	params.ForcePropagateQuestion = ForcePropagateQuestion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.UpdateCurrentChild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ForcePropagateQuestion         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::UpdateCurrentChild(bool ForcePropagateQuestion)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.UpdateCurrentChild");

	UPlayerSurveyPanelAnswerSelectorWidget_C_UpdateCurrentChild_Params params;
	params.ForcePropagateQuestion = ForcePropagateQuestion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildren
// (BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::InitSwitcherChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildren");

	UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildrenLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortPlayerSurveyQuestionType  QuestionType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EFortPlayerSurveyQuestionPresentationStyle PresentationStyle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::InitSwitcherChildrenLoop(EFortPlayerSurveyQuestionType QuestionType, EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, class UClass* WidgetClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.InitSwitcherChildrenLoop");

	UPlayerSurveyPanelAnswerSelectorWidget_C_InitSwitcherChildrenLoop_Params params;
	params.QuestionType = QuestionType;
	params.PresentationStyle = PresentationStyle;
	params.WidgetClass = WidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.Construct");

	UPlayerSurveyPanelAnswerSelectorWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.OnInitialized");

	UPlayerSurveyPanelAnswerSelectorWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelAnswerSelectorWidget_C::HandleQuestionChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.HandleQuestionChanged");

	UPlayerSurveyPanelAnswerSelectorWidget_C_HandleQuestionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelAnswerSelectorWidget_C::ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C.ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget");

	UPlayerSurveyPanelAnswerSelectorWidget_C_ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
