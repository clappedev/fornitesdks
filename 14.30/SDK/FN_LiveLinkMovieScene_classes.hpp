#pragma once

// Fortnite (14.30) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// 0x0140 (0x0228 - 0x00E8)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                      SubjectPreset;                                            // 0x00E8(0x0038)
	TArray<bool>                                       ChannelMask;                                              // 0x0120(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneLiveLinkSubSection*>       SubSections;                                              // 0x0130(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0140(0x0010) MISSED OFFSET
	struct FName                                       SubjectName;                                              // 0x0150(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FLiveLinkFrameData                          TemplateToPush;                                           // 0x0158(0x0090) (Deprecated)
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x01E8(0x0020) (Deprecated)
	TArray<struct FName>                               CurveNames;                                               // 0x0208(0x0010) (ZeroConstructor, Deprecated)
	TArray<struct FMovieSceneFloatChannel>             PropertyFloatChannels;                                    // 0x0218(0x0010) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSection");
		
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// 0x0028 (0x0050 - 0x0028)
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData                     SubSectionData;                                           // 0x0028(0x0010)
	class ULiveLinkRole*                               SubjectRole;                                              // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0040(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection");
		
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation");
		
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole");
		
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// 0x0010 (0x0060 - 0x0050)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties");
		
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// 0x0010 (0x00B8 - 0x00A8)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00A8(0x0008) MISSED OFFSET
	class ULiveLinkRole*                               TrackRole;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr;
		if(!ptr)
			ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkTrack");
		
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
