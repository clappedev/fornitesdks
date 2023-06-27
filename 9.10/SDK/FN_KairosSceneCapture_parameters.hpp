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

// Function KairosSceneCapture.KairosCaptureStatics.ToggleAutoRotate
struct UKairosCaptureStatics_ToggleAutoRotate_Params
{
	bool                                               bIsAutoRotateAllowed;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KairosSceneCapture.KairosCaptureStatics.PauseOrResumeSnippet
struct UKairosCaptureStatics_PauseOrResumeSnippet_Params
{
	struct FKairosSnippetParams                        Params;                                                   // (Parm)
	struct FWebJSResponse                              Response;                                                 // (Parm)
};

// Function KairosSceneCapture.KairosCaptureStatics.GetSceneManager
struct UKairosCaptureStatics_GetSceneManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AKairosSceneManagerActor*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KairosSceneCapture.KairosGameModeBase.GetDefaultConfig
struct AKairosGameModeBase_GetDefaultConfig_Params
{
	class UKairosConfig*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KairosSceneCapture.KairosHeroBase.EndCapture
struct AKairosHeroBase_EndCapture_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KairosSceneCapture.KairosHeroBase.BeginCapture
struct AKairosHeroBase_BeginCapture_Params
{
	struct FKairosAnimationFramingInfo                 FramingInfo;                                              // (Parm)
	struct FKairosCaptureParams                        CaptureParams;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function KairosSceneCapture.KairosSceneManagerActor.StopAR
struct AKairosSceneManagerActor_StopAR_Params
{
};

// Function KairosSceneCapture.KairosSceneManagerActor.PauseOrResumeSnippet
struct AKairosSceneManagerActor_PauseOrResumeSnippet_Params
{
	struct FString                                     PlayerID;                                                 // (Parm, ZeroConstructor)
	bool                                               bShouldPase;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function KairosSceneCapture.KairosSceneManagerActor.OLD_OnSceneSetupComplete
struct AKairosSceneManagerActor_OLD_OnSceneSetupComplete_Params
{
	struct FKairosSceneInfo                            CompleteSceneInfoCopy;                                    // (Parm)
};

// Function KairosSceneCapture.KairosSceneManagerActor.LoadWorldARMode
struct AKairosSceneManagerActor_LoadWorldARMode_Params
{
};

// Function KairosSceneCapture.KairosSceneManagerActor.GetSceneInfo
struct AKairosSceneManagerActor_GetSceneInfo_Params
{
	struct FKairosSceneInfo                            ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function KairosSceneCapture.KairosSceneManagerActor.BeginEmotePlaybackForPlayer
struct AKairosSceneManagerActor_BeginEmotePlaybackForPlayer_Params
{
	struct FString                                     PlayerID;                                                 // (Parm, ZeroConstructor)
	struct FString                                     EmoteID;                                                  // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
