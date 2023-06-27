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

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacy_MovieWidget_C::SetDelayedContentValues()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues");

	ULegacy_MovieWidget_C_SetDelayedContentValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldRewind                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULegacy_MovieWidget_C::Play(bool ShouldRewind)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play");

	ULegacy_MovieWidget_C_Play_Params params;
	params.ShouldRewind = ShouldRewind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)

void ULegacy_MovieWidget_C::StopPlaying()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying");

	ULegacy_MovieWidget_C_StopPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaPlayer*            InMediaPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSource*            InMediaSource                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InMediaSoundWave               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            AudioTrack                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULegacy_MovieWidget_C::Init(class UMediaPlayer* InMediaPlayer, class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int AudioTrack)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init");

	ULegacy_MovieWidget_C_Init_Params params;
	params.InMediaPlayer = InMediaPlayer;
	params.InMediaSource = InMediaSource;
	params.InMediaSoundWave = InMediaSoundWave;
	params.AudioTrack = AudioTrack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULegacy_MovieWidget_C::Destruct()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct");

	ULegacy_MovieWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          NewWidth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewHeight                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULegacy_MovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated");

	ULegacy_MovieWidget_C_MediaDimensionsUpdated_Params params;
	params.NewWidth = NewWidth;
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)

void ULegacy_MovieWidget_C::OnMediaLoaded()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded");

	ULegacy_MovieWidget_C_OnMediaLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULegacy_MovieWidget_C::ExecuteUbergraph_Legacy_MovieWidget(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget");

	ULegacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULegacy_MovieWidget_C::OnMediaFailedToOpen__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature");

	ULegacy_MovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULegacy_MovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature");

	ULegacy_MovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
