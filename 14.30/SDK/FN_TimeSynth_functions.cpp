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

// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (Parm, ZeroConstructor, IsPlainOldData)
// ETimeSynthEventClipQuantization EventQuantization              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimeSynthTimeDef       FadeTime                       (ConstParm, Parm, OutParm, ReferenceParm)

void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroupWithFadeOverride");

	UTimeSynthComponent_StopSoundsOnVolumeGroupWithFadeOverride_Params params;
	params.InVolumeGroup = InVolumeGroup;
	params.EventQuantization = EventQuantization;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (Parm, ZeroConstructor, IsPlainOldData)
// ETimeSynthEventClipQuantization EventQuantization              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::StopSoundsOnVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopSoundsOnVolumeGroup");

	UTimeSynthComponent_StopSoundsOnVolumeGroup_Params params;
	params.InVolumeGroup = InVolumeGroup;
	params.EventQuantization = EventQuantization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle    InClipHandle                   (Parm)
// ETimeSynthEventClipQuantization EventQuantization              (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimeSynthTimeDef       FadeTime                       (ConstParm, Parm, OutParm, ReferenceParm)

void UTimeSynthComponent::StopClipWithFadeOverride(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const struct FTimeSynthTimeDef& FadeTime)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopClipWithFadeOverride");

	UTimeSynthComponent_StopClipWithFadeOverride_Params params;
	params.InClipHandle = InClipHandle;
	params.EventQuantization = EventQuantization;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.StopClip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTimeSynthClipHandle    InClipHandle                   (Parm)
// ETimeSynthEventClipQuantization EventQuantization              (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::StopClip(const struct FTimeSynthClipHandle& InClipHandle, ETimeSynthEventClipQuantization EventQuantization)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.StopClip");

	UTimeSynthComponent_StopClip_Params params;
	params.InClipHandle = InClipHandle;
	params.EventQuantization = EventQuantization;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetVolumeGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          VolumeDb                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          FadeTimeSec                    (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetVolumeGroup(class UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetVolumeGroup");

	UTimeSynthComponent_SetVolumeGroup_Params params;
	params.InVolumeGroup = InVolumeGroup;
	params.VolumeDb = VolumeDb;
	params.FadeTimeSec = FadeTimeSec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetSeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InSeed                         (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetSeed(int InSeed)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetSeed");

	UTimeSynthComponent_SetSeed_Params params;
	params.InSeed = InSeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetQuantizationSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimeSynthQuantizationSettings InQuantizationSettings         (ConstParm, Parm, OutParm, ReferenceParm)

void UTimeSynthComponent::SetQuantizationSettings(const struct FTimeSynthQuantizationSettings& InQuantizationSettings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetQuantizationSettings");

	UTimeSynthComponent_SetQuantizationSettings_Params params;
	params.InQuantizationSettings = InQuantizationSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetFilterSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ETimeSynthFilter               Filter                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimeSynthFilterSettings InSettings                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTimeSynthComponent::SetFilterSettings(ETimeSynthFilter Filter, const struct FTimeSynthFilterSettings& InSettings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFilterSettings");

	UTimeSynthComponent_SetFilterSettings_Params params;
	params.Filter = Filter;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetFilterEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETimeSynthFilter               Filter                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsEnabled                     (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFilterEnabled");

	UTimeSynthComponent_SetFilterEnabled_Params params;
	params.Filter = Filter;
	params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetFFTSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ETimeSynthFFTSize              InFFTSize                      (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetFFTSize(ETimeSynthFFTSize InFFTSize)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetFFTSize");

	UTimeSynthComponent_SetFFTSize_Params params;
	params.InFFTSize = InFFTSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FTimeSynthEnvelopeFollowerSettings InSettings                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UTimeSynthComponent::SetEnvelopeFollowerSettings(const struct FTimeSynthEnvelopeFollowerSettings& InSettings)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerSettings");

	UTimeSynthComponent_SetEnvelopeFollowerSettings_Params params;
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetEnvelopeFollowerEnabled");

	UTimeSynthComponent_SetEnvelopeFollowerEnabled_Params params;
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.SetBPM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BeatsPerMinute                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UTimeSynthComponent::SetBPM(float BeatsPerMinute)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.SetBPM");

	UTimeSynthComponent_SetBPM_Params params;
	params.BeatsPerMinute = BeatsPerMinute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.ResetSeed
// (Final, Native, Public, BlueprintCallable)

void UTimeSynthComponent::ResetSeed()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.ResetSeed");

	UTimeSynthComponent_ResetSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimeSynth.TimeSynthComponent.PlayClip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTimeSynthClip*          InClip                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTimeSynthVolumeGroup*   InVolumeGroup                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FTimeSynthClipHandle    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FTimeSynthClipHandle UTimeSynthComponent::PlayClip(class UTimeSynthClip* InClip, class UTimeSynthVolumeGroup* InVolumeGroup)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.PlayClip");

	UTimeSynthComponent_PlayClip_Params params;
	params.InClip = InClip;
	params.InVolumeGroup = InVolumeGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.HasActiveClips
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTimeSynthComponent::HasActiveClips()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.HasActiveClips");

	UTimeSynthComponent_HasActiveClips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetSpectralData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FTimeSynthSpectralData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetSpectralData");

	UTimeSynthComponent_GetSpectralData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTimeSynthComponent::GetMaxActiveClipLimit()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetMaxActiveClipLimit");

	UTimeSynthComponent_GetMaxActiveClipLimit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UTimeSynthComponent::GetEnvelopeFollowerValue()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetEnvelopeFollowerValue");

	UTimeSynthComponent_GetEnvelopeFollowerValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.GetBPM
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTimeSynthComponent::GetBPM()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.GetBPM");

	UTimeSynthComponent_GetBPM_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ETimeSynthEventQuantization    QuantizationType               (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         OnQuantizationEvent            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTimeSynthComponent::AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const struct FScriptDelegate& OnQuantizationEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function TimeSynth.TimeSynthComponent.AddQuantizationEventDelegate");

	UTimeSynthComponent_AddQuantizationEventDelegate_Params params;
	params.QuantizationType = QuantizationType;
	params.OnQuantizationEvent = OnQuantizationEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
