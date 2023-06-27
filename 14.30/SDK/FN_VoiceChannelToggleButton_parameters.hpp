#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnHovered
struct UVoiceChannelToggleButton_C_BP_OnHovered_Params
{
};

// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.BP_OnUnhovered
struct UVoiceChannelToggleButton_C_BP_OnUnhovered_Params
{
};

// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.OnVoiceChannelSelected
struct UVoiceChannelToggleButton_C_OnVoiceChannelSelected_Params
{
	bool                                               bIsPartyChat;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceChannelToggleButton.VoiceChannelToggleButton_C.ExecuteUbergraph_VoiceChannelToggleButton
struct UVoiceChannelToggleButton_C_ExecuteUbergraph_VoiceChannelToggleButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
