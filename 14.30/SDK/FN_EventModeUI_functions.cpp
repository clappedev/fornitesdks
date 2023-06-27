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

// Function EventModeUI.FocusButton.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsEventModeFocusing           (Parm, ZeroConstructor, IsPlainOldData)

void UFocusButton::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FocusButton.HandleEventModeFocusingChanged");

	UFocusButton_HandleEventModeFocusingChanged_Params params;
	params.bIsEventModeFocusing = bIsEventModeFocusing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                           bCanUseEventModeFocus          (Parm, ZeroConstructor, IsPlainOldData)

void UFocusButton::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FocusButton.HandleCanUseEventModeFocusChanged");

	UFocusButton_HandleCanUseEventModeFocusChanged_Params params;
	params.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsFocusing                    (Parm, ZeroConstructor, IsPlainOldData)

void UFortEventModeEmotesWidget::OnFocusStateChanged(bool bIsFocusing)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FortEventModeEmotesWidget.OnFocusStateChanged");

	UFortEventModeEmotesWidget_OnFocusStateChanged_Params params;
	params.bIsFocusing = bIsFocusing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           bIsFocusAvailable              (Parm, ZeroConstructor, IsPlainOldData)

void UFortEventModeEmotesWidget::OnFocusAvailableChanged(bool bIsFocusAvailable)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FortEventModeEmotesWidget.OnFocusAvailableChanged");

	UFortEventModeEmotesWidget_OnFocusAvailableChanged_Params params;
	params.bIsFocusAvailable = bIsFocusAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged
// (Final, Native, Private)
// Parameters:
// bool                           bIsEventModeFocusing           (Parm, ZeroConstructor, IsPlainOldData)

void UFortMobileActionButtonBehavior_Focus::HandleEventModeFocusingChanged(bool bIsEventModeFocusing)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleEventModeFocusingChanged");

	UFortMobileActionButtonBehavior_Focus_HandleEventModeFocusingChanged_Params params;
	params.bIsEventModeFocusing = bIsEventModeFocusing;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged
// (Final, Native, Private)
// Parameters:
// bool                           bCanUseEventModeFocus          (Parm, ZeroConstructor, IsPlainOldData)

void UFortMobileActionButtonBehavior_Focus::HandleCanUseEventModeFocusChanged(bool bCanUseEventModeFocus)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function EventModeUI.FortMobileActionButtonBehavior_Focus.HandleCanUseEventModeFocusChanged");

	UFortMobileActionButtonBehavior_Focus_HandleCanUseEventModeFocusChanged_Params params;
	params.bCanUseEventModeFocus = bCanUseEventModeFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
