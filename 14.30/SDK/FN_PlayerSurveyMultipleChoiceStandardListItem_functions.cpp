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

// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle
// (Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateTextStyle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateTextStyle");

	UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox
// (Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateCheckBox()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateCheckBox");

	UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateCheckBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void UPlayerSurveyMultipleChoiceStandardListItem_C::MakeChoiceIndexText(int Index, struct FText* Text)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.MakeChoiceIndexText");

	UPlayerSurveyMultipleChoiceStandardListItem_C_MakeChoiceIndexText_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateChoiceIndexText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceIndexText");

	UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceIndexText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText
// (Protected, BlueprintCallable, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::UpdateChoiceText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.UpdateChoiceText");

	UPlayerSurveyMultipleChoiceStandardListItem_C_UpdateChoiceText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.Construct");

	UPlayerSurveyMultipleChoiceStandardListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::BP_OnSelected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnSelected");

	UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::BP_OnDeselected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.BP_OnDeselected");

	UPlayerSurveyMultipleChoiceStandardListItem_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPlayerSurveyQuestionChoice Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerSurveyMultipleChoiceStandardListItem_C::SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetChoiceData");

	UPlayerSurveyMultipleChoiceStandardListItem_C_SetChoiceData_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyMultipleChoiceStandardListItem_C::SetIndex(int Value)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.SetIndex");

	UPlayerSurveyMultipleChoiceStandardListItem_C_SetIndex_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UPlayerSurveyMultipleChoiceStandardListItem_C::OnCurrentTextStyleChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.OnCurrentTextStyleChanged");

	UPlayerSurveyMultipleChoiceStandardListItem_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerSurveyMultipleChoiceStandardListItem_C::ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem");

	UPlayerSurveyMultipleChoiceStandardListItem_C_ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
