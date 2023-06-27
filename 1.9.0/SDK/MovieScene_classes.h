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

// Class MovieScene.MovieSceneSignedObject
// 0x0088 (0x00B0 - 0x0028)
class UMovieSceneSignedObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}

};


// Class MovieScene.MovieScene
// 0x0080 (0x0130 - 0x00B0)
class UMovieScene : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x00B0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (0x0098 - 0x0028)
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0028(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}

};


// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}

};


// Class MovieScene.MovieSceneFolder
// 0x0048 (0x0070 - 0x0028)
class UMovieSceneFolder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequencePlayer
// 0x0668 (0x0690 - 0x0028)
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x668];                                     // 0x0028(0x0668) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSection
// 0x0020 (0x00D0 - 0x00B0)
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00B0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}

};


// Class MovieScene.MovieSceneTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}

};


// Class MovieScene.MovieSceneSequence
// 0x0230 (0x02E0 - 0x00B0)
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	unsigned char                                      UnknownData00[0x230];                                     // 0x00B0(0x0230) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}

};


// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
