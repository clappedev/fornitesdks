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

// Function Frontend.Frontend_C.PlaySpeech
struct AFrontend_C_PlaySpeech_Params
{
	struct FString                                     Filename;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SampleRate;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USoundWave*                                  AssetFile;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Frontend.Frontend_C.OnMatchStarted
struct AFrontend_C_OnMatchStarted_Params
{
};

// Function Frontend.Frontend_C.EnableTutorial
struct AFrontend_C_EnableTutorial_Params
{
};

// Function Frontend.Frontend_C.ExecuteUbergraph_Frontend
struct AFrontend_C_ExecuteUbergraph_Frontend_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
