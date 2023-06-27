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

// Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
// (BlueprintCallable, BlueprintEvent)

void UPowerToastWidget_C::HandleAnimationDelay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay");

	UPowerToastWidget_C_HandleAnimationDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseEnter");

	UPowerToastWidget_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent           MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPowerToastWidget_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.OnMouseLeave");

	UPowerToastWidget_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UPowerToastWidget_C::WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1");

	UPowerToastWidget_C_WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2");

	UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3
// (BlueprintEvent)

void UPowerToastWidget_C::WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3");

	UPowerToastWidget_C_WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ShowToast
// (Event, Protected, BlueprintEvent)

void UPowerToastWidget_C::ShowToast()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ShowToast");

	UPowerToastWidget_C_ShowToast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPowerToastWidget_C::Construct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.Construct");

	UPowerToastWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPowerToastWidget_C::ExecuteUbergraph_PowerToastWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget");

	UPowerToastWidget_C_ExecuteUbergraph_PowerToastWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
