#pragma once

// Name: Fortnite, Version: 1.9.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureProtocolSettings
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureProtocolSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCapture
// 0x0218 (0x0240 - 0x0028)
class UMovieSceneCapture : public UObject
{
public:
	unsigned char                                      UnknownData00[0x218];                                     // 0x0028(0x0218) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.AutomatedLevelSequenceCapture
// 0x0000 (0x0240 - 0x0240)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.AutomatedLevelSequenceCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.LevelCapture
// 0x0020 (0x0260 - 0x0240)
class ULevelCapture : public UMovieSceneCapture
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0240(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}

};


// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneCaptureEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}


	void STATIC_GetCaptureFrameNumber();
	void STATIC_GetCaptureElapsedTime();
};


// Class MovieSceneCapture.FrameGrabberProtocolSettings
// 0x0008 (0x0030 - 0x0028)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocolSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.BmpImageCaptureSettings
// 0x0000 (0x0028 - 0x0028)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.BmpImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.ImageCaptureSettings
// 0x0008 (0x0038 - 0x0030)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.CompositionGraphCaptureSettings
// 0x0030 (0x0058 - 0x0028)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureSettings");
		return ptr;
	}

};


// Class MovieSceneCapture.VideoCaptureSettings
// 0x0018 (0x0048 - 0x0030)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
