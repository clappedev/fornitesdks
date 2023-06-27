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

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
struct UVoiceChannelChangePopup_C_Construct_Params
{
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
struct UVoiceChannelChangePopup_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
struct UVoiceChannelChangePopup_C_Popup_Animation_Finished_Params
{
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
struct UVoiceChannelChangePopup_C_OnPlayOpenAnimation_Params
{
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
struct UVoiceChannelChangePopup_C_OnPlayCloseAnimation_Params
{
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged
struct UVoiceChannelChangePopup_C_OnInputModeChanged_Params
{
	ECommonInputType                                   NewInputType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
struct UVoiceChannelChangePopup_C_ExecuteUbergraph_VoiceChannelChangePopup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
