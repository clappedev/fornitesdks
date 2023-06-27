#pragma once

// Name: Fortnite, Version: 1.8.2

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{

};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneCapture.CaptureResolution
// 0x0008
struct FCaptureResolution
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CaptureProtocolID
// 0x0008
struct FCaptureProtocolID
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// 0x0010
struct FCompositionGraphCapturePasses
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// 0x0050
struct FMovieSceneCaptureSettings
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
