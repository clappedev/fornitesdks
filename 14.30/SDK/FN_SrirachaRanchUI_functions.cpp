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

// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped
// (Final, Native, Private)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioStopped");

	UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioStopped_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying
// (Final, Native, Private)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UFortMobileActionButtonBehavior_ToggleRadio::HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio.HandleRadioPlaying");

	UFortMobileActionButtonBehavior_ToggleRadio_HandleRadioPlaying_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bCanControl                    (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::SetControllable(bool bCanControl)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.SetControllable");

	URadioPlayerWidgetBase_SetControllable_Params params;
	params.bCanControl = bCanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourcePlaying");

	URadioPlayerWidgetBase_OnSourcePlaying_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnSourceFinished");

	URadioPlayerWidgetBase_OnSourceFinished_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance
// (Event, Protected, BlueprintEvent)

void URadioPlayerWidgetBase::OnShouldShowDueToEntrance()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnShouldShowDueToEntrance");

	URadioPlayerWidgetBase_OnShouldShowDueToEntrance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* LastSource                     (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* LastSource)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnRadioStopped");

	URadioPlayerWidgetBase_OnRadioStopped_Params params;
	params.Radio = Radio;
	params.LastSource = LastSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnLoadingNewSource");

	URadioPlayerWidgetBase_OnLoadingNewSource_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent* Radio                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class URadioContentSourceItemDefinition* Source                         (Parm, ZeroConstructor, IsPlainOldData)

void URadioPlayerWidgetBase::OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnFailedToOpenSource");

	URadioPlayerWidgetBase_OnFailedToOpenSource_Params params;
	params.Radio = Radio;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp
// (Event, Protected, BlueprintEvent)

void URadioPlayerWidgetBase::OnDisconnectFromComp()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.OnDisconnectFromComp");

	URadioPlayerWidgetBase_OnDisconnectFromComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle
// (Final, Native, Protected)

void URadioPlayerWidgetBase::NativeExitedVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeExitedVehicle");

	URadioPlayerWidgetBase_NativeExitedVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle
// (Final, Native, Protected)

void URadioPlayerWidgetBase::NativeEnteredVehicle()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function SrirachaRanchUI.RadioPlayerWidgetBase.NativeEnteredVehicle");

	URadioPlayerWidgetBase_NativeEnteredVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
