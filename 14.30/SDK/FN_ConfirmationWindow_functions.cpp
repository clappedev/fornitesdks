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

// Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           New_Button                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::HandleConfigureDeclineButton(class UCommonButton* New_Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton");

	UConfirmationWindow_C_HandleConfigureDeclineButton_Params params;
	params.New_Button = New_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FConfirmationDialogAction Action                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           bSimpleConfirm                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::ConfigureConfirmationButton(class UCommonButton* Button, const struct FConfirmationDialogAction& Action, bool bSimpleConfirm)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton");

	UConfirmationWindow_C_ConfigureConfirmationButton_Params params;
	params.Button = Button;
	params.Action = Action;
	params.bSimpleConfirm = bSimpleConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::PlayShowSound()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound");

	UConfirmationWindow_C_PlayShowSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UConfirmationWindow_C::TapToClose(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.TapToClose");

	UConfirmationWindow_C_TapToClose_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::SetupNonInteractiveContent()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent");

	UConfirmationWindow_C_SetupNonInteractiveContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseInputAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDataTableRowHandle     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FDataTableRowHandle UConfirmationWindow_C::GetInputAction(const struct FName& RowName, bool UseInputAction)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction");

	UConfirmationWindow_C_GetInputAction_Params params;
	params.RowName = RowName;
	params.UseInputAction = UseInputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UConfirmationWindow_C::Initialize()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.Initialize");

	UConfirmationWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)

void UConfirmationWindow_C::OnBeginOutro()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro");

	UConfirmationWindow_C_OnBeginOutro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::ConfigureDeclineButton(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton");

	UConfirmationWindow_C_ConfigureDeclineButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UConfirmationWindow_C::BP_OnActivated()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated");

	UConfirmationWindow_C_BP_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UConfirmationWindow_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	UConfirmationWindow_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UConfirmationWindow_C::ExecuteUbergraph_ConfirmationWindow(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow");

	UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
