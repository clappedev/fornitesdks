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

// Function IconTextPinButton.IconTextPinButton_C.Get Dynamic Material
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Ret_Material                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::Get_Dynamic_Material(class UMaterialInstanceDynamic** Ret_Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.Get Dynamic Material");

	UIconTextPinButton_C_Get_Dynamic_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ret_Material != nullptr)
		*Ret_Material = params.Ret_Material;
}


// Function IconTextPinButton.IconTextPinButton_C.ShowIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShouldShow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::ShowIcon(bool bShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.ShowIcon");

	UIconTextPinButton_C_ShowIcon_Params params;
	params.bShouldShow = bShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetTextInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InButtonText                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextPinButton_C::SetTextInternal(struct FText InButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetTextInternal");

	UIconTextPinButton_C_SetTextInternal_Params params;
	params.InButtonText = InButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetInitialMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextPinButton_C::SetInitialMouseKeyboardStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetInitialMouseKeyboardStyle");

	UIconTextPinButton_C_SetInitialMouseKeyboardStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.UpdateTextStyle
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextPinButton_C::UpdateTextStyle()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.UpdateTextStyle");

	UIconTextPinButton_C_UpdateTextStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetContentAlignment
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> ContentAlignment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetContentAlignment");

	UIconTextPinButton_C_SetContentAlignment_Params params;
	params.ContentAlignment = ContentAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.UpdateContentAlignment
// (Private, BlueprintCallable, BlueprintEvent)

void UIconTextPinButton_C::UpdateContentAlignment()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.UpdateContentAlignment");

	UIconTextPinButton_C_UpdateContentAlignment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetMouseKeyboardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::SetMouseKeyboardStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetMouseKeyboardStyle");

	UIconTextPinButton_C_SetMouseKeyboardStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.UpdateStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::UpdateStyle(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.UpdateStyle");

	UIconTextPinButton_C_UpdateStyle_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UIconTextPinButton_C::UpdateText()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.UpdateText");

	UIconTextPinButton_C_UpdateText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetControllerStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ControllerInputStyle           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::SetControllerStyle(class UClass* ControllerInputStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetControllerStyle");

	UIconTextPinButton_C_SetControllerStyle_Params params;
	params.ControllerInputStyle = ControllerInputStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.UpdateTextAndStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::UpdateTextAndStyle(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.UpdateTextAndStyle");

	UIconTextPinButton_C_UpdateTextAndStyle_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.InitializeButton
// (Public, BlueprintCallable, BlueprintEvent)

void UIconTextPinButton_C::InitializeButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.InitializeButton");

	UIconTextPinButton_C_InitializeButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.Set Icon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush             IconBrush                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextPinButton_C::Set_Icon(struct FSlateBrush IconBrush)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.Set Icon");

	UIconTextPinButton_C_Set_Icon_Params params;
	params.IconBrush = IconBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.Set Text
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UIconTextPinButton_C::Set_Text(struct FText ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.Set Text");

	UIconTextPinButton_C_Set_Text_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)

void UIconTextPinButton_C::OnCurrentTextStyleChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.OnCurrentTextStyleChanged");

	UIconTextPinButton_C_OnCurrentTextStyleChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.PreConstruct");

	UIconTextPinButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.SetTabLabelInfo
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo TabLabelInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextPinButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.SetTabLabelInfo");

	UIconTextPinButton_C_SetTabLabelInfo_Params params;
	params.TabLabelInfo = TabLabelInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent
// (BlueprintEvent)
// Parameters:
// bool                           bUsingGamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent(bool bUsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent");

	UIconTextPinButton_C_BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_Params params;
	params.bUsingGamepad = bUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     NewTriggeredAction             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UIconTextPinButton_C::OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.OnTriggeredInputActionChanged");

	UIconTextPinButton_C_OnTriggeredInputActionChanged_Params params;
	params.NewTriggeredAction = NewTriggeredAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          HeldPercent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::OnActionProgress(float HeldPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.OnActionProgress");

	UIconTextPinButton_C_OnActionProgress_Params params;
	params.HeldPercent = HeldPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.OnActionComplete
// (Event, Protected, BlueprintEvent)

void UIconTextPinButton_C::OnActionComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.OnActionComplete");

	UIconTextPinButton_C_OnActionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextPinButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.Construct");

	UIconTextPinButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIconTextPinButton_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.Destruct");

	UIconTextPinButton_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IconTextPinButton.IconTextPinButton_C.ExecuteUbergraph_IconTextPinButton
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIconTextPinButton_C::ExecuteUbergraph_IconTextPinButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IconTextPinButton.IconTextPinButton_C.ExecuteUbergraph_IconTextPinButton");

	UIconTextPinButton_C_ExecuteUbergraph_IconTextPinButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
