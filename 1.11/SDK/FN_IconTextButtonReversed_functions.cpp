// Fortnite (1.11) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IconTextButtonReversed.IconTextButtonReversed_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InButtonText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReversed_C::SetTextInternal(const struct FText& InButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetTextInternal");

	UIconTextButtonReversed_C_SetTextInternal_Params params;
	params.InButtonText = InButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReversed_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetInitialMouseKeyboardStyle");

	UIconTextButtonReversed_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReversed_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextStyle");

	UIconTextButtonReversed_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetContentAlignment");

	UIconTextButtonReversed_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReversed_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateContentAlignment");

	UIconTextButtonReversed_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetMouseKeyboardStyle");

	UIconTextButtonReversed_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateStyle");

	UIconTextButtonReversed_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReversed_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateText");

	UIconTextButtonReversed_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetControllerStyle");

	UIconTextButtonReversed_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.UpdateTextAndStyle");

	UIconTextButtonReversed_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextButtonReversed_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.InitializeButton");

	UIconTextButtonReversed_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReversed_C::Set_Icon(const struct FSlateBrush& IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.Set Icon");

	UIconTextButtonReversed_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextButtonReversed_C::Set_Text(const struct FText& ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.Set Text");

	UIconTextButtonReversed_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReversed_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.OnCurrentTextStyleChanged");

	UIconTextButtonReversed_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.PreConstruct");

	UIconTextButtonReversed_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButtonReversed_C::SetTabLabelInfo(const struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.SetTabLabelInfo");

	UIconTextButtonReversed_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature");

	UIconTextButtonReversed_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle*    NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextButtonReversed_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle* NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.OnTriggeredInputActionChanged");

	UIconTextButtonReversed_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::OnActionProgress(float* HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionProgress");

	UIconTextButtonReversed_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextButtonReversed_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.OnActionComplete");

	UIconTextButtonReversed_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButtonReversed_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.Construct");

	UIconTextButtonReversed_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextButtonReversed_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.Destruct");

	UIconTextButtonReversed_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextButtonReversed.IconTextButtonReversed_C.ExecuteUbergraph_IconTextButtonReversed
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextButtonReversed_C::ExecuteUbergraph_IconTextButtonReversed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextButtonReversed.IconTextButtonReversed_C.ExecuteUbergraph_IconTextButtonReversed");

	UIconTextButtonReversed_C_ExecuteUbergraph_IconTextButtonReversed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
