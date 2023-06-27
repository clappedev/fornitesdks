// Fortnite (1.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cinematic.Cinematic_C.GetAudioTrackIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AudioTrack                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::GetAudioTrackIndex(int* AudioTrack)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.GetAudioTrackIndex");

	UCinematic_C_GetAudioTrackIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AudioTrack != nullptr)
		*AudioTrack = params.AudioTrack;
}


// Function Cinematic.Cinematic_C.StopAndClearSubtitles
// (Public, BlueprintCallable, BlueprintEvent)

void UCinematic_C::StopAndClearSubtitles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.StopAndClearSubtitles");

	UCinematic_C_StopAndClearSubtitles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewSubtitlesExist              (Parm, ZeroConstructor, IsPlainOldData)
// class UFortMediaSubtitlesPlayer* NewSubtitles                   (Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, class UFortMediaSubtitlesPlayer* NewSubtitles)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary");

	UCinematic_C_ClearOldSubtitlesIfNecessary_Params params;
	params.NewSubtitlesExist = NewSubtitlesExist;
	params.NewSubtitles = NewSubtitles;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.SetMoviePlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MoviePlaying                   (Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::SetMoviePlaying(bool MoviePlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.SetMoviePlaying");

	UCinematic_C_SetMoviePlaying_Params params;
	params.MoviePlaying = MoviePlaying;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearMovieWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMovieWidget*        MovieWidgetToClear             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCinematic_C::ClearMovieWidget(class UFortMovieWidget** MovieWidgetToClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovieWidget");

	UCinematic_C_ClearMovieWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieWidgetToClear != nullptr)
		*MovieWidgetToClear = params.MovieWidgetToClear;
}


// Function Cinematic.Cinematic_C.ClearMovieSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*            MovieSlotToClear               (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCinematic_C::ClearMovieSlot(class UPanelWidget** MovieSlotToClear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovieSlot");

	UCinematic_C_ClearMovieSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieSlotToClear != nullptr)
		*MovieSlotToClear = params.MovieSlotToClear;
}


// Function Cinematic.Cinematic_C.PopContentWidgetInternal
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContentPushState*      State                          (Parm)
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UCinematic_C::PopContentWidgetInternal(struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.PopContentWidgetInternal");

	UCinematic_C_PopContentWidgetInternal_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Cinematic.Cinematic_C.SkipMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UCinematic_C::SkipMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.SkipMovie");

	UCinematic_C_SkipMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ClearMovie
// (Public, BlueprintCallable, BlueprintEvent)

void UCinematic_C::ClearMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ClearMovie");

	UCinematic_C_ClearMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ShowMovie
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*            MediaSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UMediaSoundWave*         MediaSoundWave                 (Parm, ZeroConstructor, IsPlainOldData)
// class UNamedSlot*              MovieSlot                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class UMovieWidget_C*          MovieWidget                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UCinematic_C::ShowMovie(class UMediaSource* MediaSource, class UMediaSoundWave* MediaSoundWave, class UNamedSlot** MovieSlot, class UMovieWidget_C** MovieWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ShowMovie");

	UCinematic_C_ShowMovie_Params params;
	params.MediaSource = MediaSource;
	params.MediaSoundWave = MediaSoundWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieSlot != nullptr)
		*MovieSlot = params.MovieSlot;
	if (MovieWidget != nullptr)
		*MovieWidget = params.MovieWidget;
}


// Function Cinematic.Cinematic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCinematic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.Construct");

	UCinematic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void UCinematic_C::HandleClientEvent_QueueCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic");

	UCinematic_C_HandleClientEvent_QueueCinematic_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCinematic_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.Destruct");

	UCinematic_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleEndReached
// (BlueprintCallable, BlueprintEvent)

void UCinematic_C::HandleEndReached()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleEndReached");

	UCinematic_C_HandleEndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, Parm, OutParm, ReferenceParm)

void UCinematic_C::HandleClientEvent_SkipCinematic(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic");

	UCinematic_C_HandleClientEvent_SkipCinematic_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.PushContentWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FContentPushState*      State                          (Parm)

void UCinematic_C::PushContentWidgetInternal(class UWidget** Widget, struct FContentPushState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.PushContentWidgetInternal");

	UCinematic_C_PushContentWidgetInternal_Params params;
	params.Widget = Widget;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  PreviousUIState                (Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::OnEnterState(EFortUIState* PreviousUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnEnterState");

	UCinematic_C_OnEnterState_Params params;
	params.PreviousUIState = PreviousUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnExitState
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortUIState*                  NextUIState                    (Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::OnExitState(EFortUIState* NextUIState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnExitState");

	UCinematic_C_OnExitState_Params params;
	params.NextUIState = NextUIState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.OnMediaEvent
// (BlueprintCallable, BlueprintEvent)

void UCinematic_C::OnMediaEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.OnMediaEvent");

	UCinematic_C_OnMediaEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCinematic_C::ExecuteUbergraph_Cinematic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic");

	UCinematic_C_ExecuteUbergraph_Cinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
