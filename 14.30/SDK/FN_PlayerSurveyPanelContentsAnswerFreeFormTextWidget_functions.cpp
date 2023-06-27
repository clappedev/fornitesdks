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

// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetSubtitleText
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::GetSubtitleText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetSubtitleText");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetSubtitleText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateLimitsText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateLimitsText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateLimitsText");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateLimitsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::GetDefaultFocusedWidget()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.GetDefaultFocusedWidget");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandlePlayerEnterAnswer
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 AnswerString                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandlePlayerEnterAnswer(const struct FString& AnswerString)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandlePlayerEnterAnswer");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandlePlayerEnterAnswer_Params params;
	params.AnswerString = AnswerString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateHintText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateHintText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateHintText");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateEntryText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::UpdateEntryText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.UpdateEntryText");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_UpdateEntryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.Construct");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_BndEvt__EntryTextBox_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleAnswerChanged
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyAnswerContainerChangeEventInfo EventInfo                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleAnswerChanged(const struct FFortPlayerSurveyAnswerContainerChangeEventInfo& EventInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleAnswerChanged");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleAnswerChanged_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleCommitCurrentAnswer
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleCommitCurrentAnswer()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleCommitCurrentAnswer");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleCommitCurrentAnswer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleQuestionChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::HandleQuestionChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.HandleQuestionChanged");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_HandleQuestionChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C::ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyPanelContentsAnswerFreeFormTextWidget.PlayerSurveyPanelContentsAnswerFreeFormTextWidget_C.ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget");

	UPlayerSurveyPanelContentsAnswerFreeFormTextWidget_C_ExecuteUbergraph_PlayerSurveyPanelContentsAnswerFreeFormTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
