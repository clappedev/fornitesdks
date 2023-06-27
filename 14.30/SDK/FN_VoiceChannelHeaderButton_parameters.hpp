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

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals
struct UVoiceChannelHeaderButton_C_OnUpdateVisuals_Params
{
	bool                                               bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRepresentingPlatformChat;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bChannelAvailable;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered
struct UVoiceChannelHeaderButton_C_BP_OnHovered_Params
{
};

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered
struct UVoiceChannelHeaderButton_C_BP_OnUnhovered_Params
{
};

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled
struct UVoiceChannelHeaderButton_C_BP_OnDisabled_Params
{
};

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled
struct UVoiceChannelHeaderButton_C_BP_OnEnabled_Params
{
};

// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton
struct UVoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
