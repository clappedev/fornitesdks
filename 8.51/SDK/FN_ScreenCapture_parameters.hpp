#pragma once

// Fortnite (8.51) SDK
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

// Function ScreenCapture.ScreenCaptureContext.ToggleMicrophoneRecording
struct UScreenCaptureContext_ToggleMicrophoneRecording_Params
{
	bool                                               bEnableMicrophone;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.TakeScreenshot
struct UScreenCaptureContext_TakeScreenshot_Params
{
};

// Function ScreenCapture.ScreenCaptureContext.StopCapture
struct UScreenCaptureContext_StopCapture_Params
{
	bool                                               bIsCaptureInterrupted;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.StartCapture
struct UScreenCaptureContext_StartCapture_Params
{
	bool                                               bInRecordAppAudio;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bGeneratePreviewImage;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.SaveToAlbum
struct UScreenCaptureContext_SaveToAlbum_Params
{
	struct FString                                     LocalFilePath;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.RemoveFile
struct UScreenCaptureContext_RemoveFile_Params
{
	struct FString                                     LocalFilePath;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.IsRecording
struct UScreenCaptureContext_IsRecording_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ScreenCapture.ScreenCaptureContext.CreateScreenCaptureContext
struct UScreenCaptureContext_CreateScreenCaptureContext_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UScreenCaptureContext*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
