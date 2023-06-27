#pragma once

// Fortnite (9.1) SDK
// Dumped with <3 by android#1337

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned
struct UFortVoiceChannelSpeaker_C_OnStyleAssigned_Params
{
	EChannelSpeakerStyle                               NewStyle;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct
struct UFortVoiceChannelSpeaker_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged
struct UFortVoiceChannelSpeaker_C_OnAnimateTalkingChanged_Params
{
	bool                                               bIsNowTalking;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker
struct UFortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
