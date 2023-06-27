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

// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AAnnounce_EventCine_C::OnClientAnnouncementStop()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop");

	AAnnounce_EventCine_C_OnClientAnnouncementStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AAnnounce_EventCine_C::OnPlayerSkippedCutscene()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene");

	AAnnounce_EventCine_C_OnPlayerSkippedCutscene_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 EventSource                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 EventFocus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FFortClientEvent        ClientEvent                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AAnnounce_EventCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying");

	AAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params params;
	params.EventSource = EventSource;
	params.EventFocus = EventFocus;
	params.ClientEvent = ClientEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)

void AAnnounce_EventCine_C::HandleAllowSkip()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip");

	AAnnounce_EventCine_C_HandleAllowSkip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
// (Event, Protected, BlueprintEvent)

void AAnnounce_EventCine_C::OnEnteredCinematicState()
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState");

	AAnnounce_EventCine_C_OnEnteredCinematicState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAnnounce_EventCine_C::ExecuteUbergraph_Announce_EventCine(int EntryPoint)
{
	static UFunction* fn = NULL;
	if(!fn)
		fn = UObject::FindObject<UFunction>("Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine");

	AAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
