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

// Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              Sound                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::PlaySoundWhenEnabled(class USoundBase* Sound)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.PlaySoundWhenEnabled");

	AVaultRotator_C_PlaySoundWhenEnabled_Params params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.SetBackgroundColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            RGBA0                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            RGBA1                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::SetBackgroundColor(const struct FLinearColor& RGBA0, const struct FLinearColor& RGBA1)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.SetBackgroundColor");

	AVaultRotator_C_SetBackgroundColor_Params params;
	params.RGBA0 = RGBA0;
	params.RGBA1 = RGBA1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.ToggleBackgroundText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDisplayText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::ToggleBackgroundText(bool bDisplayText)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.ToggleBackgroundText");

	AVaultRotator_C_ToggleBackgroundText_Params params;
	params.bDisplayText = bDisplayText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.LightControl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::LightControl(bool Active)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.LightControl");

	AVaultRotator_C_LightControl_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::SwitchPCLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.SwitchPCLighting");

	AVaultRotator_C_SwitchPCLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::SwitchPCLighting_LOWDetail(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail");

	AVaultRotator_C_SwitchPCLighting_LOWDetail_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.SwitchMobileLighting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::SwitchMobileLighting(bool Visibility)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.SwitchMobileLighting");

	AVaultRotator_C_SwitchMobileLighting_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.SetBackgroundString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StringIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::SetBackgroundString(int StringIndex)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.SetBackgroundString");

	AVaultRotator_C_SetBackgroundString_Params params;
	params.StringIndex = StringIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_0_to_180__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc");

	AVaultRotator_C_CameraTurn_0_to_180__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_0_to_180__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc");

	AVaultRotator_C_CameraTurn_0_to_180__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_180_to_360__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc");

	AVaultRotator_C_CameraTurn_180_to_360__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::CameraTurn_180_to_360__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc");

	AVaultRotator_C_CameraTurn_180_to_360__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_Zoom__FinishedFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc");

	AVaultRotator_C_Timeline_Zoom__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
// (BlueprintEvent)

void AVaultRotator_C::Timeline_Zoom__UpdateFunc()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc");

	AVaultRotator_C_Timeline_Zoom__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVaultRotator_C::ReceiveBeginPlay()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.ReceiveBeginPlay");

	AVaultRotator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.UpdateSettings
// (BlueprintCallable, BlueprintEvent)

void AVaultRotator_C::UpdateSettings()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.UpdateSettings");

	AVaultRotator_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.OnCameraTransitionReady
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// bool                           bPrimaryToSecondary            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFortAccountItemDefinition* PrimaryRequestedItem           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSceneTransitionOptions Options                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AVaultRotator_C::OnCameraTransitionReady(bool bPrimaryToSecondary, class UFortAccountItemDefinition* PrimaryRequestedItem, const struct FSceneTransitionOptions& Options)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.OnCameraTransitionReady");

	AVaultRotator_C_OnCameraTransitionReady_Params params;
	params.bPrimaryToSecondary = bPrimaryToSecondary;
	params.PrimaryRequestedItem = PrimaryRequestedItem;
	params.Options = Options;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                          TargetZoomLevel                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::OnTargetZoomLevelSet(float TargetZoomLevel)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.OnTargetZoomLevelSet");

	AVaultRotator_C_OnTargetZoomLevelSet_Params params;
	params.TargetZoomLevel = TargetZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVaultRotator_C::ExecuteUbergraph_VaultRotator(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator");

	AVaultRotator_C_ExecuteUbergraph_VaultRotator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
