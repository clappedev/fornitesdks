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

// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ScrollSelectedItemIntoView
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FallBackToDefault              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           AnimateScroll                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           OverrideScrollDestination      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::ScrollSelectedItemIntoView(bool FallBackToDefault, bool AnimateScroll, bool OverrideScrollDestination)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ScrollSelectedItemIntoView");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ScrollSelectedItemIntoView_Params params;
	params.FallBackToDefault = FallBackToDefault;
	params.AnimateScroll = AnimateScroll;
	params.OverrideScrollDestination = OverrideScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.UpdateEntryBoxContents
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::UpdateEntryBoxContents()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.UpdateEntryBoxContents");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_UpdateEntryBoxContents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultInitialChoiceIndex
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultInitialChoiceIndex(int* Index)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultInitialChoiceIndex");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultInitialChoiceIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidgetPostDummy
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EUINavigation                  Navigation                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultFocusedWidgetPostDummy(EUINavigation Navigation, class UWidget** Widget)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidgetPostDummy");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidgetPostDummy_Params params;
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetSubtitleText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetSubtitleText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetSubtitleText");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandlePlayerRequestAnswer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnswerIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandlePlayerRequestAnswer(int AnswerIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandlePlayerRequestAnswer");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandlePlayerRequestAnswer_Params params;
	params.AnswerIndex = AnswerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::GetDefaultFocusedWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.Construct");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleCommitCurrentAnswer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleCommitCurrentAnswer");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleCommitCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleAnswerChanged
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleAnswerChanged");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleAnswerChanged_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleQuestionChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleQuestionChanged");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleQuestionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleButtonClicked(int ButtonIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonClicked");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonClicked_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonFocused
// (Event, Protected, BlueprintEvent)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::HandleButtonFocused(int ButtonIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.HandleButtonFocused");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_HandleButtonFocused_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerMultipleChoiceWidget.PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget");

	UPlayerSurveyPanelContentsAnswerMultipleChoiceWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerMultipleChoiceWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
