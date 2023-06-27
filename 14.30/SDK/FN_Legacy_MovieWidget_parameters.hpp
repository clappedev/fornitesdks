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

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues
struct ULegacy_MovieWidget_C_SetDelayedContentValues_Params
{
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play
struct ULegacy_MovieWidget_C_Play_Params
{
	bool                                               ShouldRewind;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying
struct ULegacy_MovieWidget_C_StopPlaying_Params
{
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init
struct ULegacy_MovieWidget_C_Init_Params
{
	class UMediaPlayer*                                InMediaPlayer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMediaSource*                                InMediaSource;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     InMediaSoundWave;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                AudioTrack;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct
struct ULegacy_MovieWidget_C_Destruct_Params
{
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated
struct ULegacy_MovieWidget_C_MediaDimensionsUpdated_Params
{
	float                                              NewWidth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewHeight;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded
struct ULegacy_MovieWidget_C_OnMediaLoaded_Params
{
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget
struct ULegacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
struct ULegacy_MovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params
{
};

// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
struct ULegacy_MovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
