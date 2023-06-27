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

// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetSubtitleText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetSubtitleText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetSubtitleText");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidgetPostDummy(EUINavigation Navigation)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidgetPostDummy");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidgetPostDummy_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerRatingWidget_C::GetDefaultFocusedWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::OnInitialized()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.OnInitialized");

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
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonClicked");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonClicked_Params params;
	params.ButtonIndex = ButtonIndex;

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
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleButtonFocused");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleButtonFocused_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleCommitCurrentAnswer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleCommitCurrentAnswer");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleCommitCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerRatingWidget_C::HandleQuestionChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.HandleQuestionChanged");

	UPlayerSurveyPanelContentsAnswerRatingWidget_C_HandleQuestionChanged_Params params;

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
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget");

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
