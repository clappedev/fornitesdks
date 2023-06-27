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

// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialNameID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InTutorialBangID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsCountIconTabButton_C::SetTutorialNameID(const struct FName& InTutorialBangID)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialNameID");

	UQuestsCountIconTabButton_C_SetTutorialNameID_Params params;
	params.InTutorialBangID = InTutorialBangID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBangEnabled                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsCountIconTabButton_C::Update_Bang_State(bool bBangEnabled, int Count)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Bang State");

	UQuestsCountIconTabButton_C_Update_Bang_State_Params params;
	params.bBangEnabled = bBangEnabled;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UQuestsCountIconTabButton_C::Update_Text()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Update Text");

	UQuestsCountIconTabButton_C_Update_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonBorderStyle*      BorderStyle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsCountIconTabButton_C::SetTutorialBorderStyle(class UCommonBorderStyle* BorderStyle)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTutorialBorderStyle");

	UQuestsCountIconTabButton_C_SetTutorialBorderStyle_Params params;
	params.BorderStyle = BorderStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText
// (Public, BlueprintCallable, BlueprintEvent)

void UQuestsCountIconTabButton_C::ShowText()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ShowText");

	UQuestsCountIconTabButton_C_ShowText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestsCountIconTabButton_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Icon");

	UQuestsCountIconTabButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UQuestsCountIconTabButton_C::Set_Text(const struct FText& ButtonText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Set Text");

	UQuestsCountIconTabButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::OnCurrentTextStyleChanged()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.OnCurrentTextStyleChanged");

	UQuestsCountIconTabButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsCountIconTabButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.PreConstruct");

	UQuestsCountIconTabButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UQuestsCountIconTabButton_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.SetTabLabelInfo");

	UQuestsCountIconTabButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnSelected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnSelected");

	UQuestsCountIconTabButton_C_BP_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnDeselected()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDeselected");

	UQuestsCountIconTabButton_C_BP_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuestsCountIconTabButton_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Construct");

	UQuestsCountIconTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnHovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnHovered");

	UQuestsCountIconTabButton_C_BP_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnUnhovered()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnUnhovered");

	UQuestsCountIconTabButton_C_BP_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated
// (BlueprintCallable, BlueprintEvent)

void UQuestsCountIconTabButton_C::Handle_Quest_Count_Updated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.Handle Quest Count Updated");

	UQuestsCountIconTabButton_C_Handle_Quest_Count_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnEnabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnEnabled");

	UQuestsCountIconTabButton_C_BP_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)

void UQuestsCountIconTabButton_C::BP_OnDisabled()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.BP_OnDisabled");

	UQuestsCountIconTabButton_C_BP_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuestsCountIconTabButton_C::ExecuteUbergraph_QuestsCountIconTabButton(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function QuestsCountIconTabButton.QuestsCountIconTabButton_C.ExecuteUbergraph_QuestsCountIconTabButton");

	UQuestsCountIconTabButton_C_ExecuteUbergraph_QuestsCountIconTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
