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

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned
// (Event, Public, BlueprintEvent)
// Parameters:
// EChannelSpeakerStyle           NewStyle                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortVoiceChannelSpeaker_C::OnStyleAssigned(EChannelSpeakerStyle NewStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned");

	UFortVoiceChannelSpeaker_C_OnStyleAssigned_Params params;
	params.NewStyle = NewStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortVoiceChannelSpeaker_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct");

	UFortVoiceChannelSpeaker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsNowTalking                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortVoiceChannelSpeaker_C::OnAnimateTalkingChanged(bool bIsNowTalking)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged");

	UFortVoiceChannelSpeaker_C_OnAnimateTalkingChanged_Params params;
	params.bIsNowTalking = bIsNowTalking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortVoiceChannelSpeaker_C::ExecuteUbergraph_FortVoiceChannelSpeaker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker");

	UFortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
